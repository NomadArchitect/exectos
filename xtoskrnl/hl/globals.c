/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            xtoskrnl/hl/globals.c
 * DESCRIPTION:     Architecture independent global variables related to HL subsystem
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#include <xtos.h>


/* ACPI tables cache list */
LIST_ENTRY HlpAcpiCacheList;

/* ACPI Root System Description Pointer (RSDP) */
PACPI_RSDP HlpAcpiRsdp;

/* ACPI timer information */
ACPI_TIMER_INFO HlpAcpiTimerInfo;

/* Active processors count */
KAFFINITY HlpActiveProcessors;

/* APIC mode */
APIC_MODE HlpApicMode;

/* FrameBuffer information */
HAL_FRAMEBUFFER_DATA HlpFrameBufferData;

/* System information */
ACPI_SYSTEM_INFO HlpSystemInfo;
