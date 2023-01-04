/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            sdk/xtdk/xtstruct.h
 * DESCRIPTION:     XT structures forward references
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#ifndef __XTDK_XTSTRUCT_H
#define __XTDK_XTSTRUCT_H

#include "xtdefs.h"


/* Structures forward references */
typedef struct _CPPORT CPPORT, *PCPPORT;
typedef struct _EFI_1394_DEVICE_PATH EFI_1394_DEVICE_PATH, *PEFI_1394_DEVICE_PATH;
typedef struct _EFI_ACPI_ADR_DEVICE_PATH EFI_ACPI_ADR_DEVICE_PATH, *PEFI_ACPI_ADR_DEVICE_PATH;
typedef struct _EFI_ACPI_HID_DEVICE_PATH EFI_ACPI_HID_DEVICE_PATH, *PEFI_ACPI_HID_DEVICE_PATH;
typedef struct _EFI_ATAPI_DEVICE_PATH EFI_ATAPI_DEVICE_PATH, *PEFI_ATAPI_DEVICE_PATH;
typedef struct _EFI_BBS_BBS_DEVICE_PATH EFI_BBS_BBS_DEVICE_PATH, *PEFI_BBS_BBS_DEVICE_PATH;
typedef struct _EFI_BLOCK_DEVICE EFI_BLOCK_DEVICE, *PEFI_BLOCK_DEVICE;
typedef struct _EFI_BLOCK_DEVICE_DATA EFI_BLOCK_DEVICE_DATA, *PEFI_BLOCK_DEVICE_DATA;
typedef struct _EFI_BLOCK_IO_MEDIA EFI_BLOCK_IO_MEDIA, *PEFI_BLOCK_IO_MEDIA;
typedef struct _EFI_BLOCK_IO_PROTOCOL EFI_BLOCK_IO_PROTOCOL, *PEFI_BLOCK_IO_PROTOCOL;
typedef struct _EFI_BLOCK_IO2_PROTOCOL EFI_BLOCK_IO2_PROTOCOL, *PEFI_BLOCK_IO2_PROTOCOL;
typedef struct _EFI_BLOCK_IO2_TOKEN EFI_BLOCK_IO2_TOKEN, *PEFI_BLOCK_IO2_TOKEN;
typedef struct _EFI_BOOT_SERVICES EFI_BOOT_SERVICES, *PEFI_BOOT_SERVICES;
typedef struct _EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL EFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL, *PEFI_BUS_SPECIFIC_DRIVER_OVERRIDE_PROTOCOL;
typedef struct _EFI_CAPSULE_BLOCK_DESCRIPTOR EFI_CAPSULE_BLOCK_DESCRIPTOR, *PEFI_CAPSULE_BLOCK_DESCRIPTOR;
typedef struct _EFI_CAPSULE_HEADER EFI_CAPSULE_HEADER, *PEFI_CAPSULE_HEADER;
typedef struct _EFI_CDROM_DEVICE_PATH EFI_CDROM_DEVICE_PATH, *PEFI_CDROM_DEVICE_PATH;
typedef struct _EFI_COMPONENT_NAME_PROTOCOL EFI_COMPONENT_NAME_PROTOCOL, *PEFI_COMPONENT_NAME_PROTOCOL;
typedef struct _EFI_COMPONENT_NAME2_PROTOCOL EFI_COMPONENT_NAME2_PROTOCOL, *PEFI_COMPONENT_NAME2_PROTOCOL;
typedef struct _EFI_CONFIGURATION_TABLE EFI_CONFIGURATION_TABLE, *PEFI_CONFIGURATION_TABLE;
typedef struct _EFI_CONTROLLER_DEVICE_PATH EFI_CONTROLLER_DEVICE_PATH, *PEFI_CONTROLLER_DEVICE_PATH;
typedef struct _EFI_DEVICE_IO_PROTOCOL EFI_DEVICE_IO_PROTOCOL, *PEFI_DEVICE_IO_PROTOCOL;
typedef struct _EFI_DEVICE_LOGICAL_UNIT_DEVICE_PATH EFI_DEVICE_LOGICAL_UNIT_DEVICE_PATH, *PEFI_DEVICE_LOGICAL_UNIT_DEVICE_PATH;
typedef struct _EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL EFI_DEVICE_PATH_FROM_TEXT_PROTOCOL, *PEFI_DEVICE_PATH_FROM_TEXT_PROTOCOL;
typedef struct _EFI_DEVICE_PATH_PROTOCOL EFI_DEVICE_PATH_PROTOCOL, *PEFI_DEVICE_PATH_PROTOCOL;
typedef struct _EFI_DEVICE_PATH_TO_TEXT_PROTOCOL EFI_DEVICE_PATH_TO_TEXT_PROTOCOL, *PEFI_DEVICE_PATH_TO_TEXT_PROTOCOL;
typedef struct _EFI_DEVICE_PATH_UTILITIES_PROTOCOL EFI_DEVICE_PATH_UTILITIES_PROTOCOL, *PEFI_DEVICE_PATH_UTILITIES_PROTOCOL;
typedef struct _EFI_DISK_IO_PROTOCOL EFI_DISK_IO_PROTOCOL, *PEFI_DISK_IO_PROTOCOL;
typedef struct _EFI_DISK_IO2_PROTOCOL EFI_DISK_IO2_PROTOCOL, *PEFI_DISK_IO2_PROTOCOL;
typedef struct _EFI_DISK_IO2_TOKEN EFI_DISK_IO2_TOKEN, *PEFI_DISK_IO2_TOKEN;
typedef struct _EFI_DRIVER_BINDING_PROTOCOL EFI_DRIVER_BINDING_PROTOCOL, *PEFI_DRIVER_BINDING_PROTOCOL;
typedef struct _EFI_DRIVER_FAMILY_OVERRIDE_PROTOCOL EFI_DRIVER_FAMILY_OVERRIDE_PROTOCOL, *PEFI_DRIVER_FAMILY_OVERRIDE_PROTOCOL;
typedef struct _EFI_EBC_PROTOCOL EFI_EBC_PROTOCOL, *PEFI_EBC_PROTOCOL;
typedef struct _EFI_EDID_ACTIVE_PROTOCOL EFI_EDID_ACTIVE_PROTOCOL, *PEFI_EDID_ACTIVE_PROTOCOL;
typedef struct _EFI_EDID_DISCOVERED_PROTOCOL EFI_EDID_DISCOVERED_PROTOCOL, *PEFI_EDID_DISCOVERED_PROTOCOL;
typedef struct _EFI_EDID_OVERRIDE_PROTOCOL EFI_EDID_OVERRIDE_PROTOCOL, *PEFI_EDID_OVERRIDE_PROTOCOL;
typedef struct _EFI_EXPANDED_ACPI_HID_DEVICE_PATH EFI_EXPANDED_ACPI_HID_DEVICE_PATH, *PEFI_EXPANDED_ACPI_HID_DEVICE_PATH;
typedef struct _EFI_FIBRECHANNEL_DEVICE_PATH EFI_FIBRECHANNEL_DEVICE_PATH, *PEFI_FIBRECHANNEL_DEVICE_PATH;
typedef struct _EFI_FIBRECHANNELEX_DEVICE_PATH EFI_FIBRECHANNELEX_DEVICE_PATH, *PEFI_FIBRECHANNELEX_DEVICE_PATH;
typedef struct _EFI_FILE_HANDLE EFI_FILE_HANDLE, *PEFI_FILE_HANDLE;
typedef struct _EFI_FILE_HEADER EFI_FILE_HEADER, *PEFI_FILE_HEADER;
typedef struct _EFI_FILE_INFO EFI_FILE_INFO, *PEFI_FILE_INFO;
typedef struct _EFI_FILE_IO_TOKEN EFI_FILE_IO_TOKEN, *PEFI_FILE_IO_TOKEN;
typedef struct _EFI_FILE_SYSTEM_INFO EFI_FILE_SYSTEM_INFO, *PEFI_FILE_SYSTEM_INFO;
typedef struct _EFI_FILE_SYSTEM_VOLUME_LABEL EFI_FILE_SYSTEM_VOLUME_LABEL, *PEFI_FILE_SYSTEM_VOLUME_LABEL;
typedef struct _EFI_FILEPATH_DEVICE_PATH EFI_FILEPATH_DEVICE_PATH, *PEFI_FILEPATH_DEVICE_PATH;
typedef struct _EFI_GPT_PARTITION_TABLE_HEADER EFI_GPT_PARTITION_TABLE_HEADER, *PEFI_GPT_PARTITION_TABLE_HEADER;
typedef struct _EFI_GPT_PARTITION_ENTRY EFI_GPT_PARTITION_ENTRY, *PEFI_GPT_PARTITION_ENTRY;
typedef struct _EFI_GRAPHICS_OUTPUT_BLT_PIXEL EFI_GRAPHICS_OUTPUT_BLT_PIXEL, *PEFI_GRAPHICS_OUTPUT_BLT_PIXEL;
typedef struct _EFI_GRAPHICS_OUTPUT_MODE_INFORMATION EFI_GRAPHICS_OUTPUT_MODE_INFORMATION, *PEFI_GRAPHICS_OUTPUT_MODE_INFORMATION;
typedef struct _EFI_GRAPHICS_OUTPUT_PROTOCOL EFI_GRAPHICS_OUTPUT_PROTOCOL, *PEFI_GRAPHICS_OUTPUT_PROTOCOL;
typedef struct _EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE, *PEFI_GRAPHICS_OUTPUT_PROTOCOL_MODE;
typedef struct _EFI_GUID EFI_GUID, *PEFI_GUID;
typedef struct _EFI_HARDDRIVE_DEVICE_PATH EFI_HARDDRIVE_DEVICE_PATH, *PEFI_HARDDRIVE_DEVICE_PATH;
typedef struct _EFI_HASH_PROTOCOL EFI_HASH_PROTOCOL, *PEFI_HASH_PROTOCOL;
typedef struct _EFI_I2O_DEVICE_PATH EFI_I2O_DEVICE_PATH, *PEFI_I2O_DEVICE_PATH;
typedef struct _EFI_INFINIBAND_DEVICE_PATH EFI_INFINIBAND_DEVICE_PATH, *PEFI_INFINIBAND_DEVICE_PATH;
typedef struct _EFI_INPUT_KEY EFI_INPUT_KEY, *PEFI_INPUT_KEY;
typedef struct _EFI_IO_ACCESS EFI_IO_ACCESS, *PEFI_IO_ACCESS;
typedef struct _EFI_IPv4_ADDRESS EFI_IPv4_ADDRESS, *PEFI_IPv4_ADDRESS;
typedef struct _EFI_IPv4_DEVICE_PATH EFI_IPv4_DEVICE_PATH, *PEFI_IPv4_DEVICE_PATH;
typedef struct _EFI_IPv6_ADDRESS EFI_IPv6_ADDRESS, *PEFI_IPv6_ADDRESS;
typedef struct _EFI_IPv6_DEVICE_PATH EFI_IPv6_DEVICE_PATH, *PEFI_IPv6_DEVICE_PATH;
typedef struct _EFI_KEY_DATA EFI_KEY_DATA, *PEFI_KEY_DATA;
typedef struct _EFI_KEY_STATE EFI_KEY_STATE, *PEFI_KEY_STATE;
typedef struct _EFI_LBAL EFI_LBAL, *PEFI_LBAL;
typedef struct _EFI_LOAD_FILE_PROTOCOL EFI_LOAD_FILE_PROTOCOL, *PEFI_LOAD_FILE_PROTOCOL;
typedef struct _EFI_LOADED_IMAGE_PROTOCOL EFI_LOADED_IMAGE_PROTOCOL, *PEFI_LOADED_IMAGE_PROTOCOL;
typedef struct _EFI_MAC_ADDR_DEVICE_PATH EFI_MAC_ADDR_DEVICE_PATH, *PEFI_MAC_ADDR_DEVICE_PATH;
typedef struct _EFI_MAC_ADDRESS EFI_MAC_ADDRESS, *PEFI_MAC_ADDRESS;
typedef struct _EFI_MANAGED_NETWORK_CONFIG_DATA EFI_MANAGED_NETWORK_CONFIG_DATA, *PEFI_MANAGED_NETWORK_CONFIG_DATA;
typedef struct _EFI_MASTER_BOOT_RECORD EFI_MASTER_BOOT_RECORD, *PEFI_MASTER_BOOT_RECORD;
typedef struct _EFI_MBR_PARTITION_RECORD EFI_MBR_PARTITION_RECORD, *PEFI_MBR_PARTITION_RECORD;
typedef struct _EFI_MEDIA_FW_VOL_DEVICE_PATH EFI_MEDIA_FW_VOL_DEVICE_PATH, *PEFI_MEDIA_FW_VOL_DEVICE_PATH;
typedef struct _EFI_MEDIA_FW_VOL_FILEPATH_DEVICE_PATH EFI_MEDIA_FW_VOL_FILEPATH_DEVICE_PATH, *PEFI_MEDIA_FW_VOL_FILEPATH_DEVICE_PATH;
typedef struct _EFI_MEDIA_PROTOCOL_DEVICE_PATH EFI_MEDIA_PROTOCOL_DEVICE_PATH, *PEFI_MEDIA_PROTOCOL_DEVICE_PATH;
typedef struct _EFI_MEDIA_RELATIVE_OFFSET_RANGE_DEVICE_PATH EFI_MEDIA_RELATIVE_OFFSET_RANGE_DEVICE_PATH, *PEFI_MEDIA_RELATIVE_OFFSET_RANGE_DEVICE_PATH;
typedef struct _EFI_MEMMAP_DEVICE_PATH EFI_MEMMAP_DEVICE_PATH, *PEFI_MEMMAP_DEVICE_PATH;
typedef struct _EFI_MEMORY_DESCRIPTOR EFI_MEMORY_DESCRIPTOR, *PEFI_MEMORY_DESCRIPTOR;
typedef struct _EFI_MEMORY_MAP EFI_MEMORY_MAP, *PEFI_MEMORY_MAP;
typedef struct _EFI_NETWORK_INTERFACE_IDENTIFIER_PROTOCOL EFI_NETWORK_INTERFACE_IDENTIFIER_PROTOCOL, *PEFI_NETWORK_INTERFACE_IDENTIFIER_INTERFACE;
typedef struct _EFI_NETWORK_STATISTICS EFI_NETWORK_STATISTICS, *PEFI_NETWORK_STATISTICS;
typedef struct _EFI_OPEN_PROTOCOL_INFORMATION_ENTRY EFI_OPEN_PROTOCOL_INFORMATION_ENTRY, *PEFI_OPEN_PROTOCOL_INFORMATION_ENTRY;
typedef struct _EFI_PARTITION_HEADER EFI_PARTITION_HEADER, *PEFI_PARTITION_HEADER;
typedef struct _EFI_PCCARD_DEVICE_PATH EFI_PCCARD_DEVICE_PATH, *PEFI_PCCARD_DEVICE_PATH;
typedef struct _EFI_PCI_DEVICE_PATH EFI_PCI_DEVICE_PATH, *PEFI_PCI_DEVICE_PATH;
typedef struct _EFI_PCI_IO_PROTOCOL EFI_PCI_IO_PROTOCOL, *PEFI_PCI_IO_PROTOCOL;
typedef struct _EFI_PCI_IO_PROTOCOL_ACCESS EFI_PCI_IO_PROTOCOL_ACCESS, *PEFI_PCI_IO_PROTOCOL_ACCESS;
typedef struct _EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS EFI_PCI_IO_PROTOCOL_CONFIG_ACCESS, *PEFI_PCI_IO_PROTOCOL_CONFIG_ACCESS;
typedef struct _EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL, *PEFI_PCI_ROOT_BRIDGE_IO_PROTOCOL;
typedef struct _EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS, *PEFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_ACCESS;
typedef struct _EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS, *PEFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_PCI_ADDRESS;
typedef struct _EFI_PIXEL_BITMASK EFI_PIXEL_BITMASK, *PEFI_PIXEL_BITMASK;
typedef struct _EFI_PLATFORM_DRIVER_OVERRIDE_PROTOCOL EFI_PLATFORM_DRIVER_OVERRIDE_PROTOCOL, *PEFI_PLATFORM_DRIVER_OVERRIDE_PROTOCOL;
typedef struct _EFI_PXE_BASE_CODE_ARP_ENTRY EFI_PXE_BASE_CODE_ARP_ENTRY, *PEFI_PXE_BASE_CODE_ARP_ENTRY;
typedef struct _EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL EFI_PXE_BASE_CODE_CALLBACK_PROTOCOL, *PEFI_PXE_BASE_CODE_CALLBACK_PROTOCOL;
typedef struct _EFI_PXE_BASE_CODE_DHCPV4_PACKET EFI_PXE_BASE_CODE_DHCPV4_PACKET, *PEFI_PXE_BASE_CODE_DHCPV4_PACKET;
typedef struct _EFI_PXE_BASE_CODE_DHCPV6_PACKET EFI_PXE_BASE_CODE_DHCPV6_PACKET, *PEFI_PXE_BASE_CODE_DHCPV6_PACKET;
typedef struct _EFI_PXE_BASE_CODE_DISCOVER_INFO EFI_PXE_BASE_CODE_DISCOVER_INFO, *PEFI_PXE_BASE_CODE_DISCOVER_INFO;
typedef struct _EFI_PXE_BASE_CODE_ICMP_ERROR EFI_PXE_BASE_CODE_ICMP_ERROR, *PEFI_PXE_BASE_CODE_ICMP_ERROR;
typedef struct _EFI_PXE_BASE_CODE_IP_FILTER EFI_PXE_BASE_CODE_IP_FILTER, *PEFI_PXE_BASE_CODE_IP_FILTER;
typedef struct _EFI_PXE_BASE_CODE_MODE EFI_PXE_BASE_CODE_MODE, *PEFI_PXE_BASE_CODE_MODE;
typedef struct _EFI_PXE_BASE_CODE_MTFTP_INFO EFI_PXE_BASE_CODE_MTFTP_INFO, *PEFI_PXE_BASE_CODE_MTFTP_INFO;
typedef struct _EFI_PXE_BASE_CODE_PROTOCOL EFI_PXE_BASE_CODE_PROTOCOL, *PEFI_PXE_BASE_CODE_PROTOCOL;
typedef struct _EFI_PXE_BASE_CODE_ROUTE_ENTRY EFI_PXE_BASE_CODE_ROUTE_ENTRY, *PEFI_PXE_BASE_CODE_ROUTE_ENTRY;
typedef struct _EFI_PXE_BASE_CODE_SRVLIST EFI_PXE_BASE_CODE_SRVLIST, *PEFI_PXE_BASE_CODE_SRVLIST;
typedef struct _EFI_PXE_BASE_CODE_TFTP_ERROR EFI_PXE_BASE_CODE_TFTP_ERROR, *PEFI_PXE_BASE_CODE_TFTP_ERROR;
typedef struct _EFI_RL EFI_RL, *PEFI_RL;
typedef struct _EFI_RNG_PROTOCOL EFI_RNG_PROTOCOL, *PEFI_RNG_PROTOCOL;
typedef struct _EFI_RUNTIME_SERVICES EFI_RUNTIME_SERVICES, *PEFI_RUNTIME_SERVICES;
typedef struct _EFI_SATA_DEVICE_PATH EFI_SATA_DEVICE_PATH, *PEFI_SATA_DEVICE_PATH;
typedef struct _EFI_SCSI_DEVICE_PATH EFI_SCSI_DEVICE_PATH, *PEFI_SCSI_DEVICE_PATH;
typedef struct _EFI_SERVICE_BINDING EFI_SERVICE_BINDING, *PEFI_SERVICE_BINDING;
typedef struct _EFI_SIMPLE_FILE_SYSTEM_PROTOCOL EFI_SIMPLE_FILE_SYSTEM_PROTOCOL, *PEFI_SIMPLE_FILE_SYSTEM_PROTOCOL;
typedef struct _EFI_SIMPLE_NETWORK_MODE EFI_SIMPLE_NETWORK_MODE, *PEFI_SIMPLE_NETWORK_MODE;
typedef struct _EFI_SIMPLE_NETWORK_PROTOCOL EFI_SIMPLE_NETWORK_PROTOCOL, *PEFI_SIMPLE_NETWORK_PROTOCOL;
typedef struct _EFI_SIMPLE_TEXT_INPUT_PROTOCOL EFI_SIMPLE_TEXT_INPUT_PROTOCOL, *PEFI_SIMPLE_TEXT_INPUT_PROTOCOL;
typedef struct _EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL, *PEFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL;
typedef struct _EFI_SIMPLE_TEXT_OUTPUT_MODE EFI_SIMPLE_TEXT_OUTPUT_MODE, *PEFI_SIMPLE_TEXT_OUTPUT_MODE;
typedef struct _EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL, *PEFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;
typedef struct _EFI_SYSTEM_TABLE EFI_SYSTEM_TABLE, *PEFI_SYSTEM_TABLE;
typedef struct _EFI_TABLE_HEADER EFI_TABLE_HEADER, *PEFI_TABLE_HEADER;
typedef struct _EFI_TIME EFI_TIME, *PEFI_TIME;
typedef struct _EFI_TIME_CAPABILITIES EFI_TIME_CAPABILITIES, *PEFI_TIME_CAPABILITIES;
typedef struct _EFI_UART_DEVICE_PATH EFI_UART_DEVICE_PATH, *PEFI_UART_DEVICE_PATH;
typedef struct _EFI_UART_IO_MODE EFI_UART_IO_MODE, *PEFI_UART_IO_MODE;
typedef struct _EFI_UART_IO_PROTOCOL EFI_UART_IO_PROTOCOL, *PEFI_UART_IO_PROTOCOL;
typedef struct _EFI_UKNOWN_DEVICE_VENDOR_DEVICE_PATH EFI_UNKNOWN_DEVICE_VENDOR_DEVICE_PATH, *PEFI_UNKNOWN_DEVICE_VENDOR_DEVICE_PATH;
typedef struct _EFI_UNICODE_COLLATION_PROTOCOL EFI_UNICODE_COLLATION_PROTOCOL, *PEFI_UNICODE_COLLATION_PROTOCOL;
typedef struct _EFI_URI_DEVICE_PATH EFI_URI_DEVICE_PATH, *PEFI_URI_DEVICE_PATH;
typedef struct _EFI_USB_CLASS_DEVICE_PATH EFI_USB_CLASS_DEVICE_PATH, *PEFI_USB_CLASS_DEVICE_PATH;
typedef struct _EFI_USB_DEVICE_PATH EFI_USB_DEVICE_PATH, *PEFI_USB_DEVICE_PATH;
typedef struct _EFI_USB_WWID_DEVICE_PATH EFI_USB_WWID_DEVICE_PATH, *PEFI_USB_WWID_DEVICE_PATH;
typedef struct _EFI_VENDOR_DEVICE_PATH EFI_VENDOR_DEVICE_PATH, *PEFI_VENDOR_DEVICE_PATH;
typedef struct _EFI_VLAN_DEVICE_PATH EFI_VLAN_DEVICE_PATH, *PEFI_VLAN_DEVICE_PATH;
typedef struct _FIRMWARE_INFORMATION_BLOCK FIRMWARE_INFORMATION_BLOCK, *PFIRMWARE_INFORMATION_BLOCK;
typedef struct _GUID GUID, *PGUID;
typedef struct _KERNEL_INITIALIZATION_BLOCK KERNEL_INITIALIZATION_BLOCK, *PKERNEL_INITIALIZATION_BLOCK;
typedef struct _LDR_DATA_TABLE_ENTRY LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;
typedef struct _LIST_ENTRY LIST_ENTRY, *PLIST_ENTRY;
typedef struct _LIST_ENTRY32 LIST_ENTRY32, *PLIST_ENTRY32;
typedef struct _LIST_ENTRY64 LIST_ENTRY64, *PLIST_ENTRY64;
typedef struct _LOADER_INFORMATION_BLOCK LOADER_INFORMATION_BLOCK, *PLOADER_INFORMATION_BLOCK;
typedef struct _LOADER_MEMORY_MAPPING LOADER_MEMORY_MAPPING, *PLOADER_MEMORY_MAPPING;
typedef struct ALIGN(16) _M128 M128, *PM128;
typedef struct _PCAT_FIRMWARE_INFORMATION PCAT_FIRMWARE_INFORMATION, *PPCAT_FIRMWARE_INFORMATION;
typedef struct _PCI_COMMON_CONFIG PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;
typedef struct _PCI_COMMON_HEADER PCI_COMMON_HEADER, *PPCI_COMMON_HEADER;
typedef struct _PECOFF_IMAGE_BASE_RELOCATION PECOFF_IMAGE_BASE_RELOCATION, *PPECOFF_IMAGE_BASE_RELOCATION;
typedef struct _PECOFF_IMAGE_DATA PECOFF_IMAGE_DATA, *PPECOFF_IMAGE_DATA;
typedef struct _PECOFF_IMAGE_DATA_DIRECTORY PECOFF_IMAGE_DATA_DIRECTORY, *PPECOFF_IMAGE_DATA_DIRECTORY;
typedef struct _PECOFF_IMAGE_DOS_HEADER PECOFF_IMAGE_DOS_HEADER, *PPECOFF_IMAGE_DOS_HEADER;
typedef struct _PECOFF_IMAGE_EXPORT_DIRECTORY PECOFF_IMAGE_EXPORT_DIRECTORY, *PPECOFF_IMAGE_EXPORT_DIRECTORY;
typedef struct _PECOFF_IMAGE_FILE_HEADER PECOFF_IMAGE_FILE_HEADER, *PPECOFF_IMAGE_FILE_HEADER;
typedef struct _PECOFF_IMAGE_IMPORT_DESCRIPTOR PECOFF_IMAGE_IMPORT_DESCRIPTOR, *PPECOFF_IMAGE_IMPORT_DESCRIPTOR;
typedef struct _PECOFF_IMAGE_LOAD_CONFIG_CODE_INTEGRITY PECOFF_IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PPECOFF_IMAGE_LOAD_CONFIG_CODE_INTEGRITY;
typedef struct _PECOFF_IMAGE_LOAD_CONFIG_DIRECTORY32 PECOFF_IMAGE_LOAD_CONFIG_DIRECTORY32, *PPECOFF_IMAGE_LOAD_CONFIG_DIRECTORY32;
typedef struct _PECOFF_IMAGE_LOAD_CONFIG_DIRECTORY64 PECOFF_IMAGE_LOAD_CONFIG_DIRECTORY64, *PPECOFF_IMAGE_LOAD_CONFIG_DIRECTORY64;
typedef struct _PECOFF_IMAGE_OPTIONAL_HEADER PECOFF_IMAGE_OPTIONAL_HEADER, *PPECOFF_IMAGE_OPTIONAL_HEADER;
typedef struct _PECOFF_IMAGE_OS2_HEADER PECOFF_IMAGE_OS2_HEADER, *PPECOFF_IMAGE_OS2_HEADER;
typedef struct _PECOFF_IMAGE_PE_HEADER PECOFF_IMAGE_PE_HEADER, *PPECOFF_IMAGE_PE_HEADER;
typedef struct _PECOFF_IMAGE_RESOURCE_DATA_ENTRY PECOFF_IMAGE_RESOURCE_DATA_ENTRY, *PPECOFF_IMAGE_RESOURCE_DATA_ENTRY;
typedef struct _PECOFF_IMAGE_RESOURCE_DIRECTORY PECOFF_IMAGE_RESOURCE_DIRECTORY, *PPECOFF_IMAGE_RESOURCE_DIRECTORY;
typedef struct _PECOFF_IMAGE_RESOURCE_DIRECTORY_ENTRY PECOFF_IMAGE_RESOURCE_DIRECTORY_ENTRY, *PPECOFF_IMAGE_RESOURCE_DIRECTORY_ENTRY;
typedef struct _PECOFF_IMAGE_ROM_HEADER PECOFF_IMAGE_ROM_HEADER, *PPECOFF_IMAGE_ROM_HEADER;
typedef struct _PECOFF_IMAGE_ROM_OPTIONAL_HEADER PECOFF_IMAGE_ROM_OPTIONAL_HEADER, *PPECOFF_IMAGE_ROM_OPTIONAL_HEADER;
typedef struct _PECOFF_IMAGE_SECTION_HEADER PECOFF_IMAGE_SECTION_HEADER, *PPECOFF_IMAGE_SECTION_HEADER;
typedef struct _PECOFF_IMAGE_VXD_HEADER PECOFF_IMAGE_VXD_HEADER, *PPECOFF_IMAGE_VXD_HEADER;
typedef struct _UEFI_FIRMWARE_INFORMATION UEFI_FIRMWARE_INFORMATION, *PUEFI_FIRMWARE_INFORMATION;

/* Unions forward references */
typedef union _EFI_DEV_PATH EFI_DEV_PATH, *PEFI_DEV_PATH;
typedef union _EFI_DEV_PATH_PTR EFI_DEV_PATH_PTR, *PEFI_DEV_PATH_PTR;
typedef union _EFI_GRAPHICS_OUTPUT_BLT_PIXEL_UNION EFI_GRAPHICS_OUTPUT_BLT_PIXEL_UNION, *PEFI_GRAPHICS_OUTPUT_BLT_PIXEL_UNION;
typedef union _EFI_HASH_OUTPUT EFI_HASH_OUTPUT, *PEFI_HASH_OUTPUT;
typedef union _EFI_IP_ADDRESS EFI_IP_ADDRESS, *PEFI_IP_ADDRESS;
typedef union _EFI_PXE_BASE_CODE_PACKET EFI_PXE_BASE_CODE_PACKET, *PEFI_PXE_BASE_CODE_PACKET;

#endif /* __XTDK_XTSTRUCT_H */
