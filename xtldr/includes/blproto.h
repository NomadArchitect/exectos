/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            xtldr/includes/blproto.h
 * DESCRIPTION:     XTLDR boot loader protocol support
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#ifndef __XTLDR_BLPROTO_H
#define __XTLDR_BLPROTO_H

#include <xtkmapi.h>
#include <bldefs.h>


/* Loader protocol routine pointers */
typedef VOID (*PBL_DBG_PRINT)(IN PUINT16 Format, IN ...);
typedef VOID (*PBL_EFI_PRINT)(IN PUINT16 Format, IN ...);
typedef EFI_STATUS (*PBL_CLOSE_VOLUME)(IN PEFI_HANDLE VolumeHandle);
typedef EFI_STATUS (*PBL_OPEN_VOLUME)(IN PEFI_DEVICE_PATH_PROTOCOL DevicePath, OUT PEFI_HANDLE DiskHandle, OUT PEFI_FILE_HANDLE *FsHandle);

/* EFI XT Boot Loader Protocol */
typedef struct _XT_BOOT_LOADER_PROTOCOL
{
    PBL_DBG_PRINT DbgPrint;
    PBL_EFI_PRINT EfiPrint;
    PBL_CLOSE_VOLUME CloseVolume;
    PBL_OPEN_VOLUME OpenVolume;
} XT_BOOT_LOADER_PROTOCOL, *PXT_BOOT_LOADER_PROTOCOL;

/* Loader protocol related routines forward references */
EFI_STATUS
BlGetXtLoaderProtocol(OUT PXT_BOOT_LOADER_PROTOCOL *LdrProtocol);

EFI_STATUS
BlLoadXtProtocol(OUT PVOID *ProtocolHandler,
                 IN PEFI_GUID ProtocolGuid);

#endif /* __XTLDR_BLPROTO_H */