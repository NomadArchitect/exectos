/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            xtldr/modules/framebuf/framebuf.c
 * DESCRIPTION:     Boot loader framebuffer support
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#include <framebuf.h>


/* PE/COFF_O module information */
XTBL_MODINFO = L"EFI FB (FrameBuffer) support";

/* EFI XT Loader Protocol */
PXTBL_LOADER_PROTOCOL XtLdrProtocol;

/* XT FrameBuffer Information */
XT_FRAMEBUFFER_INFORMATION FrameBufferInfo;

/* XT FrameBuffer Protocol */
XT_FRAMEBUFFER_PROTOCOL XtFramebufferProtocol;

/**
 * Provides a current FrameBuffer driver name.
 *
 * @param DriverName
 *        Supplies a pointer to the memory area where FB driver name will be stored.
 *
 * @return This routine does not return any value.
 *
 * @since XT 1.0
 */
XTCDECL
VOID
FbGetDisplayDriver(OUT PWCHAR DriverName)
{
    switch(FrameBufferInfo.Protocol)
    {
        case GOP:
            DriverName = L"GOP";
            break;
        case UGA:
            DriverName = L"UGA";
            break;
        default:
            DriverName = L"NONE";
            break;
    }
}

/**
 * Returns information about frame buffer in XTOS compatible format.
 *
 * @param InformationBlock
 *        A pointer to memory area containing XT structure where all the information will be stored.
 *
 * @return This routine does not return any value.
 *
 * @since XT 1.0
 */
XTCDECL
VOID
FbGetDisplayInformation(OUT PLOADER_GRAPHICS_INFORMATION_BLOCK InformationBlock)
{
    InformationBlock->Initialized = FrameBufferInfo.Initialized;
    InformationBlock->Protocol = FrameBufferInfo.Protocol;
    InformationBlock->Address = (PVOID)(ULONG_PTR)FrameBufferInfo.FrameBufferBase;
    InformationBlock->BufferSize = FrameBufferInfo.FrameBufferSize;
    InformationBlock->Width = FrameBufferInfo.HorizontalResolution;
    InformationBlock->Height = FrameBufferInfo.VerticalResolution;
    InformationBlock->BitsPerPixel = FrameBufferInfo.BitsPerPixel;
    InformationBlock->PixelsPerScanLine = FrameBufferInfo.PixelsPerScanLine;
    InformationBlock->Pitch = FrameBufferInfo.Pitch;
}

/**
 * Initializes FrameBuffer device on GOP and UGA compatible adapters.
 *
 * @return This routine returns a status code.
 *
 * @since XT 1.0
 */
XTCDECL
EFI_STATUS
FbInitializeDisplay()
{
    EFI_GUID GopGuid = EFI_GRAPHICS_OUTPUT_PROTOCOL_GUID;
    EFI_GUID UgaGuid = EFI_UNIVERSAL_GRAPHICS_ADAPTER_PROTOCOL_GUID;
    UINT32 Parameter1, Parameter2;
    EFI_HANDLE Handle;
    EFI_STATUS Status;

    /* Check if framebuffer already initialized */
    if(!FrameBufferInfo.Initialized)
    {
        /* Initialize framebuffer */
        XtLdrProtocol->Debug.Print(L"Initializing framebuffer device\n");
        FrameBufferInfo.Protocol = NONE;
        FrameBufferInfo.Initialized = FALSE;

        /* Attempt to open GOP protocol */
        Status = XtLdrProtocol->Protocol.Open(&Handle, (PVOID*)&FrameBufferInfo.Adapter.GOP, &GopGuid);

        /* Check if Graphics Output Protocol is available */
        if(Status == STATUS_EFI_SUCCESS)
        {
            /* Found GOP */
            XtLdrProtocol->Debug.Print(L"Found GOP compatible display adapter\n");

            /* Set framebuffer parameters */
            FrameBufferInfo.HorizontalResolution = FrameBufferInfo.Adapter.GOP->Mode->Info->HorizontalResolution;
            FrameBufferInfo.VerticalResolution = FrameBufferInfo.Adapter.GOP->Mode->Info->VerticalResolution;
            FrameBufferInfo.BitsPerPixel = GoppGetBitsPerPixel();
            FrameBufferInfo.BytesPerPixel = FrameBufferInfo.BitsPerPixel >> 3;
            FrameBufferInfo.PixelsPerScanLine = FrameBufferInfo.Adapter.GOP->Mode->Info->PixelsPerScanLine;
            FrameBufferInfo.PixelFormat = FrameBufferInfo.Adapter.GOP->Mode->Info->PixelFormat;
            FrameBufferInfo.Pitch = FrameBufferInfo.PixelsPerScanLine * (FrameBufferInfo.BitsPerPixel / 8);
            FrameBufferInfo.FrameBufferBase = FrameBufferInfo.Adapter.GOP->Mode->FrameBufferBase;
            FrameBufferInfo.FrameBufferSize = FrameBufferInfo.Adapter.GOP->Mode->FrameBufferSize;
            FrameBufferInfo.Protocol = GOP;
            FrameBufferInfo.Initialized = TRUE;

            /* Close GOP protocol */
            Status = XtLdrProtocol->Protocol.Close(Handle, &GopGuid);
        }
        else
        {
            /* GOP is unavailable */
            FrameBufferInfo.Adapter.GOP = NULL;

            /* Attempt to open UGA protocol */
            Status = XtLdrProtocol->Protocol.Open(&Handle, (PVOID*)&FrameBufferInfo.Adapter.UGA, &UgaGuid);

            /* Check if Universal Graphics Adapter is available */
            if(Status == STATUS_EFI_SUCCESS)
            {
                /* Found UGA */
                XtLdrProtocol->Debug.Print(L"Found UGA compatible display adapter\n");

                /* Get current mode */
                Status = FrameBufferInfo.Adapter.UGA->GetMode(FrameBufferInfo.Adapter.UGA,
                                                              &FrameBufferInfo.HorizontalResolution,
                                                              &FrameBufferInfo.VerticalResolution,
                                                              &Parameter1, &Parameter2);
                if(Status != STATUS_EFI_SUCCESS)
                {
                    /* Unable to get current UGA mode */
                    XtLdrProtocol->Debug.Print(L"Failed to get current UGA mode (Status code: %lx)\n", Status);
                    FrameBufferInfo.Adapter.UGA = NULL;
                }
                else
                {
                    /* Set framebuffer parameters */
                    FrameBufferInfo.BitsPerPixel = 32;
                    FrameBufferInfo.BytesPerPixel = 4;
                    FrameBufferInfo.PixelsPerScanLine = FrameBufferInfo.HorizontalResolution;
                    FrameBufferInfo.PixelFormat = PixelBlueGreenRedReserved8BitPerColor;
                    FrameBufferInfo.Pitch = FrameBufferInfo.PixelsPerScanLine * (FrameBufferInfo.BitsPerPixel / 8);
                    FrameBufferInfo.FrameBufferBase = 0;
                    FrameBufferInfo.FrameBufferSize = FrameBufferInfo.HorizontalResolution * 
                                                      FrameBufferInfo.VerticalResolution *
                                                      FrameBufferInfo.BytesPerPixel + 1024;
                    FrameBufferInfo.Protocol = UGA;

                    /* Temporarily set this to FALSE, as we don't set FB base and we cannot use it anyway */
                    FrameBufferInfo.Initialized = FALSE;
                }

                /* Close UGA protocol */
                XtLdrProtocol->Protocol.Close(Handle, &UgaGuid);
            }
        }

        /* Make sure framebuffer initialized properly */
        if(!FrameBufferInfo.Initialized)
        {
            /* GOP and UGA unavailable */
            XtLdrProtocol->Debug.Print(L"No display adapter found\n");
            return STATUS_EFI_NOT_FOUND;
        }
    }

    /* Return success */
    return STATUS_SUCCESS;
}

/**
 * Prints important information about framebuffer.
 *
 * @return This routine does not return any value.
 *
 * @since XT 1.0
 */
XTCDECL
VOID
FbPrintDisplayInformation()
{
    PWCHAR DriverName = NULL;
    PULONG Address;

    /* Make sure frame buffer is initialized */
    if(!FrameBufferInfo.Initialized)
    {
        /* No FrameBuffer */
        XtLdrProtocol->Debug.Print(L"No display adapters initialized, unable to print video information\n");
        return;
    }

    /* Get display driver name */
    FbGetDisplayDriver(DriverName);
    XtLdrTestGetFramebufferAddress(&Address);

    /* Print video information */
    XtLdrProtocol->Debug.Print(L"XTLDR Framebuffer information:\n"
                               L"   FrameBuffer Address: 0x%lx\n"
                               L"   FrameBuffer Size: %lu\n"
                               L"   FrameBuffer Driver: %S\n",
                               FrameBufferInfo.FrameBufferBase, FrameBufferInfo.FrameBufferSize, DriverName);
    XtLdrProtocol->Debug.Print(L"   Current Resolution: %dx%dx%d\n"
                               L"   Pixel Format: %u\n"
                               L"   Pixels Per ScanLine: %u\n",
                               FrameBufferInfo.HorizontalResolution, FrameBufferInfo.VerticalResolution,
                               FrameBufferInfo.BitsPerPixel, FrameBufferInfo.PixelFormat,
                               FrameBufferInfo.PixelsPerScanLine);
    XtLdrProtocol->Debug.Print(L"   Hardware FB Address: 0x%lx\n", Address);
}

/**
 * This routine is the entry point of the XT EFI boot loader module.
 *
 * @param ImageHandle
 *        Firmware-allocated handle that identifies the image.
 *
 * @param SystemTable
 *        Provides the EFI system table.
 *
 * @return This routine returns status code.
 *
 * @since XT 1.0
 */
XTCDECL
EFI_STATUS
XtLdrModuleMain(IN EFI_HANDLE ImageHandle,
                IN PEFI_SYSTEM_TABLE SystemTable)
{
    EFI_GUID Guid = XT_FRAMEBUFFER_PROTOCOL_GUID;
    EFI_STATUS Status;

    /* Open the XTLDR protocol */
    Status = BlGetXtLdrProtocol(SystemTable, ImageHandle, &XtLdrProtocol);
    if(Status != STATUS_EFI_SUCCESS)
    {
        /* Failed to open loader protocol */
        return STATUS_EFI_PROTOCOL_ERROR;
    }

    XtFramebufferProtocol.GetDisplayDriver = FbGetDisplayDriver;
    XtFramebufferProtocol.GetDisplayInformation = FbGetDisplayInformation;
    XtFramebufferProtocol.Initialize = FbInitializeDisplay;
    XtFramebufferProtocol.PrintDisplayInformation = FbPrintDisplayInformation;

    /* Register XTOS boot protocol */
    return XtLdrProtocol->Protocol.Install(&XtFramebufferProtocol, &Guid);
}

XTCDECL
EFI_STATUS
XtLdrTestGetFramebufferAddress(OUT PULONG *Address)
{
    EFI_GUID PciIoGuid = EFI_PCI_IO_PROTOCOL_GUID;
    PEFI_PCI_IO_PROTOCOL Io;
    UINT_PTR HandlesCount;
    EFI_HANDLE *Handles;
    EFI_STATUS Status;
    UINT Index;
    Handles = NULL;
    PEFI_ACPI_ADDRESS_SPACE_DESCRIPTOR BarInfo;
    PVOID Addr;
    UINT64 Size = 0;
    PCI_TYPE0_DEVICE Pci;

    Status = XtLdrProtocol->Protocol.LocateHandles(&Handles, &HandlesCount, &PciIoGuid);
    if(Status != STATUS_EFI_SUCCESS)
    {
        XtLdrProtocol->Debug.Print(L"ERROR: Failed to get handles (Status Code: 0x%lx)\n", Status);
        return Status;
    }

    for(Index = 0; Index < HandlesCount; Index++)
    {
        Status = XtLdrProtocol->Protocol.OpenHandle(Handles[Index], (PVOID *)&Io, &PciIoGuid);

        if(Status != STATUS_EFI_SUCCESS)
        {
            XtLdrProtocol->Debug.Print(L"ERROR: Failed to open protocol (Status Code: 0x%lx)\n", Status);
            continue;
        }

        Status = Io->Pci.Read(Io, EfiPciIoWidthUint32, 0, sizeof(Pci) / sizeof(UINT32), &Pci);
        if(Status != STATUS_EFI_SUCCESS)
        {
            XtLdrProtocol->Debug.Print(L"ERROR: Failed to read class (Status Code: 0x%lx)\n", Status);
        }

        XtLdrProtocol->Debug.Print(L"Found device class: %u:%u.%u\n", Pci.Hdr.ClassCode[0], Pci.Hdr.ClassCode[1], Pci.Hdr.ClassCode[2]);

        if(Pci.Hdr.ClassCode[2] != 0x03)
        {
            XtLdrProtocol->Protocol.Close(Handles[Index], &PciIoGuid);
            continue;
        }

        for(UINT Bars = 0; Bars < 6; Bars++)
        {
            Status = Io->GetBarAttributes(Io, Bars, NULL, (VOID **)&BarInfo);
            if(Status != STATUS_EFI_SUCCESS)
            {
                continue;
            }

            if(BarInfo->SpaceDescriptor == EFI_ACPI_ADDRESS64_SPACE_DESCRIPTOR &&
               BarInfo->ResourceType == EFI_ACPI_ADDRESS_SPACE_TYPE_MEMORY)
            {
                if(BarInfo->AddressLength > Size)
                {
                    Addr = (PVOID)(ULONG_PTR)(BarInfo->AddressRangeMin << 16);
                    Size = BarInfo->AddressLength;
                }
            }
        }
    }

    *Address = (PULONG)Addr;

    return STATUS_EFI_SUCCESS;
}