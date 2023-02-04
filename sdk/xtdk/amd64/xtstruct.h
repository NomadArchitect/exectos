/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            sdk/xtdk/amd64/xtstruct.h
 * DESCRIPTION:     XT structures forward references specific to AMD64 architecture
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#ifndef __XTDK_AMD64_XTSTRUCT_H
#define __XTDK_AMD64_XTSTRUCT_H

#include <xtdefs.h>


/* Architecture-specific enumeration lists forward references */
typedef enum _CPUID_FEATURES CPUID_FEATURES, *PCPUID_FEATURES;
typedef enum _CPUID_REQUESTS CPUID_REQUESTS, *PCPUID_REQUESTS;

/* Architecture-specific structures forward references */
typedef struct _CONTEXT CONTEXT, *PCONTEXT;
typedef struct _CPUID_REGISTERS CPUID_REGISTERS, *PCPUID_REGISTERS;
typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA;
typedef struct _HARDWARE_PTE HARDWARE_PTE, *PHARDWARE_PTE;
typedef struct _KDESCRIPTOR KDESCRIPTOR, *PKDESCRIPTOR;
typedef struct _KEXCEPTION_FRAME KEXCEPTION_FRAME, *PKEXCEPTION_FRAME;
typedef struct _KGDTENTRY KGDTENTRY, *PKGDTENTRY;
typedef struct _KIDTENTRY KIDTENTRY, *PKIDTENTRY;
typedef struct _KPROCESSOR_BLOCK KPROCESSOR_BLOCK, *PKPROCESSOR_BLOCK;
typedef struct _KPROCESSOR_CONTROL_BLOCK KPROCESSOR_CONTROL_BLOCK, *PKPROCESSOR_CONTROL_BLOCK;
typedef struct _KPROCESSOR_STATE KPROCESSOR_STATE, *PKPROCESSOR_STATE;
typedef struct _KSPECIAL_REGISTERS KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS;
typedef struct _KSWITCH_FRAME KSWITCH_FRAME, *PKSWITCH_FRAME;
typedef struct _KTRAP_FRAME KTRAP_FRAME, *PKTRAP_FRAME;
typedef struct _KTSS KTSS, *PKTSS;

#endif /* __XTDK_AMD64_XTSTRUCT_H */
