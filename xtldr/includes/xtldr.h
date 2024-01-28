/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            xtldr/includes/xtldr.h
 * DESCRIPTION:     Top level header for XTLDR
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#ifndef __XTLDR_XTLDR_H
#define __XTLDR_XTLDR_H

#include <xtblapi.h>
#include <xtver.h>

#include <globals.h>


/* XTLDR routine callbacks */
typedef VOID (BLPRINTCHAR)(IN USHORT Character);

/* XTLDR routines forward references */
XTCDECL
EFI_STATUS
BlAllocateMemoryPages(IN UINT64 Pages,
                      OUT PEFI_PHYSICAL_ADDRESS Memory);

XTCDECL
EFI_STATUS
BlAllocateMemoryPool(IN UINT_PTR Size,
                     OUT PVOID *Memory);

XTCDECL
EFI_STATUS
BlBuildPageMap(IN PXTBL_PAGE_MAPPING PageMap);

XTCDECL
VOID
BlClearConsoleLine(IN ULONGLONG LineNo);

XTCDECL
VOID
BlClearConsoleScreen();

XTCDECL
EFI_STATUS
BlCloseProtocol(IN PEFI_HANDLE Handle,
                IN PEFI_GUID ProtocolGuid);

XTCDECL
EFI_STATUS
BlCloseVolume(IN PEFI_HANDLE VolumeHandle);

XTCDECL
VOID
BlConsolePrint(IN PUINT16 Format,
               IN ...);

XTCDECL
VOID
BlConsoleWrite(IN PUSHORT String);

XTCDECL
VOID
BlDebugPrint(IN PUINT16 Format,
             IN ...);

XTCDECL
VOID
BlDisableConsoleCursor();

XTCDECL
VOID
BlDisplayBootMenu();

XTCDECL
VOID
BlDisplayErrorDialog(IN PWCHAR Caption,
                     IN PWCHAR Message);

XTCDECL
VOID
BlDisplayInfoDialog(IN PWCHAR Caption,
                    IN PWCHAR Message);

XTCDECL
VOID
BlDisplayInputDialog(IN PWCHAR Caption,
                     IN PWCHAR Message,
                     IN OUT PWCHAR *InputFieldText);

XTCDECL
XTBL_DIALOG_HANDLE
BlDisplayProgressDialog(IN PWCHAR Caption,
                        IN PWCHAR Message,
                        IN UCHAR Percentage);

XTCDECL
VOID
BlEnableConsoleCursor();

XTCDECL
EFI_STATUS
BlEnumerateBlockDevices();

XTCDECL
EFI_STATUS
BlExitBootServices();

XTCDECL
EFI_STATUS
BlFindBootProtocol(IN PWCHAR SystemType,
                   OUT PEFI_GUID BootProtocolGuid);

XTCDECL
EFI_STATUS
BlFindVolumeDevicePath(IN PEFI_DEVICE_PATH_PROTOCOL FsHandle,
                       IN CONST PWCHAR FileSystemPath,
                       OUT PEFI_DEVICE_PATH_PROTOCOL* DevicePath);

XTCDECL
EFI_STATUS
BlFreeMemoryPages(IN UINT64 Pages,
                  IN EFI_PHYSICAL_ADDRESS Memory);

XTCDECL
EFI_STATUS
BlFreeMemoryPool(IN PVOID Memory);

XTCDECL
PWCHAR
BlGetConfigValue(IN CONST PWCHAR ConfigName);

XTCDECL
EFI_STATUS
BlGetEfiPath(IN PWCHAR SystemPath,
             OUT PWCHAR *EfiPath);

XTCDECL
VOID
BlGetMappingsCount(IN PXTBL_PAGE_MAPPING PageMap,
                   OUT PULONG NumberOfMappings);

XTCDECL
EFI_STATUS
BlGetMemoryMap(OUT PEFI_MEMORY_MAP MemoryMap);

XTCDECL
PLIST_ENTRY
BlGetModulesList();

XTCDECL
INT_PTR
BlGetSecureBootStatus();

XTCDECL
EFI_STATUS
BlGetVolumeDevicePath(IN PWCHAR SystemPath,
                      OUT PEFI_DEVICE_PATH_PROTOCOL *DevicePath,
                      OUT PWCHAR *ArcName,
                      OUT PWCHAR *Path);

XTCDECL
VOID
BlInitializeBootLoader();

XTCDECL
VOID
BlInitializeBootMenuList(OUT PXTBL_BOOTMENU_ITEM MenuEntries,
                         OUT PULONG EntriesCount,
                         OUT PULONG DefaultId);

XTCDECL
VOID
BlInitializeConsole();

XTCDECL
VOID
BlInitializePageMap(OUT PXTBL_PAGE_MAPPING PageMap,
                    IN SHORT PageMapLevel,
                    IN PAGE_SIZE PageSize);

XTCDECL
EFI_STATUS
BlInstallProtocol(IN PVOID Interface,
                  IN PEFI_GUID Guid);

XTCDECL
EFI_STATUS
BlInvokeBootProtocol(IN PLIST_ENTRY OptionsList);

XTCDECL
EFI_STATUS
BlLoadEfiImage(IN PEFI_DEVICE_PATH_PROTOCOL DevicePath,
               IN PVOID ImageData,
               IN SIZE_T ImageSize,
               OUT PEFI_HANDLE ImageHandle);

XTCDECL
EFI_STATUS
BlLoadModule(IN PWCHAR ModuleName);

XTCDECL
EFI_STATUS
BlLoadModules(IN PWCHAR ModulesList);

XTCDECL
EFI_STATUS
BlLocateProtocolHandles(OUT PEFI_HANDLE *Handles,
                        OUT PUINT_PTR Count,
                        IN PEFI_GUID ProtocolGuid);

XTCDECL
EFI_STATUS
BlMapEfiMemory(IN OUT PXTBL_PAGE_MAPPING PageMap,
               IN OUT PVOID *DesiredVirtualAddress);

XTCDECL
EFI_STATUS
BlMapPage(IN PXTBL_PAGE_MAPPING PageMap,
          IN UINT_PTR VirtualAddress,
          IN UINT_PTR PhysicalAddress,
          IN UINT NumberOfPages);

XTCDECL
EFI_STATUS
BlMapVirtualMemory(IN OUT PXTBL_PAGE_MAPPING PageMap,
                   IN PVOID VirtualAddress,
                   IN PVOID PhysicalAddress,
                   IN UINT NumberOfPages,
                   IN LOADER_MEMORY_TYPE MemoryType);

XTCDECL
EFI_STATUS
BlOpenVolume(IN PEFI_DEVICE_PATH_PROTOCOL DevicePath,
             OUT PEFI_HANDLE DiskHandle,
             OUT PEFI_FILE_HANDLE *FsHandle);

XTCDECL
EFI_STATUS
BlOpenProtocol(OUT PEFI_HANDLE Handle,
               OUT PVOID *ProtocolHandler,
               IN PEFI_GUID ProtocolGuid);

XTCDECL
EFI_STATUS
BlOpenProtocolHandle(IN EFI_HANDLE Handle,
                     OUT PVOID *ProtocolHandler,
                     IN PEFI_GUID ProtocolGuid);

XTCDECL
PVOID
BlPhysicalAddressToVirtual(IN PVOID PhysicalAddress,
                           IN PVOID PhysicalBase,
                           IN PVOID VirtualBase);

XTCDECL
VOID
BlQueryConsoleMode(OUT PUINT_PTR ResX,
                   OUT PUINT_PTR ResY);

XTCDECL
EFI_STATUS
BlReadFile(IN PEFI_FILE_HANDLE DirHandle,
           IN CONST PWCHAR FileName,
           OUT PVOID *FileData,
           OUT PSIZE_T FileSize);

XTCDECL
VOID
BlReadKeyStroke(OUT PEFI_INPUT_KEY Key);

XTCDECL
EFI_STATUS
BlRebootSystem();

XTCDECL
VOID
BlRegisterBootMenu(PVOID BootMenuRoutine);

XTCDECL
EFI_STATUS
BlRegisterBootProtocol(IN PWCHAR SystemType,
                       IN PEFI_GUID BootProtocolGuid);

XTCDECL
VOID
BlResetConsoleInputBuffer();

XTCDECL
EFI_STATUS
BlSetConfigValue(IN CONST PWCHAR ConfigName,
                 IN CONST PWCHAR ConfigValue);

XTCDECL
VOID
BlSetConsoleAttributes(IN ULONGLONG Attributes);

XTCDECL
EFI_STATUS
BlSetConsoleMode(IN ULONGLONG Mode);

XTCDECL
VOID
BlSetCursorPosition(IN ULONGLONG PosX,
                    IN ULONGLONG PosY);

XTCDECL
EFI_STATUS
BlShutdownSystem();

XTCDECL
VOID
BlSleepExecution(IN ULONG_PTR Milliseconds);

XTCDECL
EFI_STATUS
BlStartEfiImage(IN EFI_HANDLE ImageHandle);

XTCDECL
VOID
BlStartLoaderShell();

XTCDECL
EFI_STATUS
BlStartXtLoader(IN EFI_HANDLE ImageHandle,
                IN PEFI_SYSTEM_TABLE SystemTable);

XTCDECL
VOID
BlUpdateProgressBar(IN PXTBL_DIALOG_HANDLE Handle,
                    IN PWCHAR Message,
                    IN UCHAR Percentage);

XTCDECL
EFI_STATUS
BlWaitForEfiEvent(IN UINT_PTR NumberOfEvents,
                  IN PEFI_EVENT Event,
                  OUT PUINT_PTR Index);

XTCDECL
EFI_STATUS
BlpActivateSerialIOController();

XTCDECL
VOID
BlpConsolePrintChar(IN USHORT Character);

XTCDECL
VOID
BlpDebugPutChar(IN USHORT Character);

XTCDECL
VOID
BlpDetermineDialogBoxSize(IN OUT PXTBL_DIALOG_HANDLE Handle,
                          IN PWCHAR Message);

XTCDECL
EFI_STATUS
BlpDiscoverEfiBlockDevices(OUT PLIST_ENTRY BlockDevices);

XTCDECL
EFI_STATUS
BlpDissectVolumeArcPath(IN PWCHAR SystemPath,
                        OUT PWCHAR *ArcName,
                        OUT PWCHAR *Path,
                        OUT PUSHORT DriveType,
                        OUT PULONG DriveNumber,
                        OUT PULONG PartNumber);

XTCDECL
VOID
BlpDrawBootMenu(OUT PXTBL_DIALOG_HANDLE Handle);

XTCDECL
VOID
BlpDrawBootMenuEntry(IN PXTBL_DIALOG_HANDLE Handle,
                     IN PWCHAR MenuEntry,
                     IN UINT Position,
                     IN BOOLEAN Highlighted);

XTCDECL
VOID
BlpDrawDialogBox(IN OUT PXTBL_DIALOG_HANDLE Handle,
                 IN PWCHAR Caption,
                 IN PWCHAR Message);

XTCDECL
VOID
BlpDrawDialogButton(IN PXTBL_DIALOG_HANDLE Handle);

XTCDECL
VOID
BlpDrawDialogInputField(IN PXTBL_DIALOG_HANDLE Handle,
                        IN PWCHAR InputFieldText);

XTCDECL
VOID
BlpDrawDialogMessage(IN PXTBL_DIALOG_HANDLE Handle,
                     IN PWCHAR Message);

XTCDECL
VOID
BlpDrawDialogProgressBar(IN PXTBL_DIALOG_HANDLE Handle,
                         IN UCHAR Percentage);

XTCDECL
PEFI_DEVICE_PATH_PROTOCOL
BlpDuplicateDevicePath(IN PEFI_DEVICE_PATH_PROTOCOL DevicePath);

XTCDECL
EFI_STATUS
BlpFindLastBlockDeviceNode(IN PEFI_DEVICE_PATH_PROTOCOL DevicePath,
                           OUT PEFI_DEVICE_PATH_PROTOCOL *LastNode);

XTCDECL
BOOLEAN
BlpFindParentBlockDevice(IN PLIST_ENTRY BlockDevices,
                         IN PEFI_BLOCK_DEVICE_DATA ChildNode,
                         OUT PEFI_BLOCK_DEVICE_DATA ParentNode);

XTCDECL
LOADER_MEMORY_TYPE
BlpGetLoaderMemoryType(IN EFI_MEMORY_TYPE EfiMemoryType);

XTCDECL
EFI_STATUS
BlpGetNextPageTable(IN PXTBL_PAGE_MAPPING PageMap,
                    IN PHARDWARE_PTE PageTable,
                    IN SIZE_T Entry,
                    OUT PHARDWARE_PTE *NextPageTable);

XTCDECL
EFI_STATUS
BlpInitializeDebugConsole();

XTCDECL
EFI_STATUS
BlpInitializeSerialPort(IN ULONG PortNumber,
                        IN ULONG PortAddress,
                        IN ULONG BaudRate);

XTCDECL
EFI_STATUS
BlpInstallXtLoaderProtocol();

XTCDECL
EFI_STATUS
BlpLoadConfiguration();

XTCDECL
EFI_STATUS
BlpParseCommandLine(VOID);

XTCDECL
EFI_STATUS
BlpParseConfigFile(IN CONST PCHAR RawConfig,
                   OUT PLIST_ENTRY Configuration);

XTCDECL
VOID
BlpPrintShellPrompt();

XTCDECL
EFI_STATUS
BlpReadConfigFile(IN CONST PWCHAR ConfigDirectory,
                  IN CONST PWCHAR ConfigFile,
                  OUT PCHAR *ConfigData);

XTCDECL
VOID
BlpStringFormat(IN BLPRINTCHAR PrintCharRoutine,
                IN PUINT16 Format,
                IN ...);

XTCDECL
VOID
BlpStringPrint(IN IN BLPRINTCHAR PrintCharRoutine,
               IN PUINT16 Format,
               IN VA_LIST Arguments);

XTCDECL
VOID
BlpStringPrintSigned32(IN BLPRINTCHAR PrintCharRoutine,
                       IN INT Number,
                       IN UINT Base);

XTCDECL
VOID
BlpStringPrintSigned64(IN BLPRINTCHAR PrintCharRoutine,
                       IN INT_PTR Number,
                       IN UINT_PTR Base);

XTCDECL
VOID
BlpStringPrintUnsigned32(IN BLPRINTCHAR PrintCharRoutine,
                         IN UINT Number,
                         IN UINT Base,
                         IN UINT Padding);

XTCDECL
VOID
BlpStringPrintUnsigned64(IN BLPRINTCHAR PrintCharRoutine,
                         IN UINT_PTR Number,
                         IN UINT_PTR Base,
                         IN UINT_PTR Padding);

XTCDECL
UINT64
BlpStringReadPadding(IN PUINT16 *Format);

XTCDECL
VOID
BlpUpdateConfiguration(IN PLIST_ENTRY NewConfig);

#endif /* __XTLDR_XTLDR_H */
