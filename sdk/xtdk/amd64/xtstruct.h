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
typedef enum _APIC_DSH APIC_DSH, *PAPIC_DSH;
typedef enum _APIC_MODE APIC_MODE, *PAPIC_MODE;
typedef enum _APIC_MT APIC_MT, *PAPIC_MT;
typedef enum _APIC_REGISTER APIC_REGISTER, *PAPIC_REGISTER;
typedef enum _CPU_VENDOR CPU_VENDOR, *PCPU_VENDOR;
typedef enum _CPUID_FEATURES CPUID_FEATURES, *PCPUID_FEATURES;
typedef enum _CPUID_REQUESTS CPUID_REQUESTS, *PCPUID_REQUESTS;
typedef enum _PAGE_SIZE PAGE_SIZE, *PPAGE_SIZE;
typedef enum _PIC_I8259_ICW1_INTERRUPT_MODE PIC_I8259_ICW1_INTERRUPT_MODE, *PPIC_I8259_ICW1_INTERRUPT_MODE;
typedef enum _PIC_I8259_ICW1_INTERVAL PIC_I8259_ICW1_INTERVAL, *PPIC_I8259_ICW1_INTERVAL;
typedef enum _PIC_I8259_ICW1_OPERATING_MODE PIC_I8259_ICW1_OPERATING_MODE, *PPIC_I8259_ICW1_OPERATING_MODE;
typedef enum _PIC_I8259_ICW4_BUFFERED_MODE PIC_I8259_ICW4_BUFFERED_MODE, *PPIC_I8259_ICW4_BUFFERED_MODE;
typedef enum _PIC_I8259_ICW4_EOI_MODE PIC_I8259_ICW4_EOI_MODE, *PPIC_I8259_ICW4_EOI_MODE;
typedef enum _PIC_I8259_ICW4_SYSTEM_MODE PIC_I8259_ICW4_SYSTEM_MODE, *PPIC_I8259_ICW4_SYSTEM_MODE;

/* Architecture-specific structures forward references */
typedef struct _CONTEXT CONTEXT, *PCONTEXT;
typedef struct _CPU_IDENTIFICATION CPU_IDENTIFICATION, *PCPU_IDENTIFICATION;
typedef struct _CPUID_REGISTERS CPUID_REGISTERS, *PCPUID_REGISTERS;
typedef struct _CPUID_SIGNATURE CPUID_SIGNATURE, *PCPUID_SIGNATURE;
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
typedef struct _KSTART_FRAME KSTART_FRAME, *PKSTART_FRAME;
typedef struct _KSWITCH_FRAME KSWITCH_FRAME, *PKSWITCH_FRAME;
typedef struct _KTHREAD_INIT_FRAME KTHREAD_INIT_FRAME, *PKTHREAD_INIT_FRAME;
typedef struct _KTRAP_FRAME KTRAP_FRAME, *PKTRAP_FRAME;
typedef struct _KTSS KTSS, *PKTSS;
typedef struct _MMPFN MMPFN, *PMMPFN;
typedef struct _MMPTE_HARDWARE MMPTE_HARDWARE, *PMMPTE_HARDWARE;
typedef struct _MMPTE_HARDWARE_LARGEPAGE MMPTE_HARDWARE_LARGEPAGE, *PMMPTE_HARDWARE_LARGEPAGE;
typedef struct _MMPTE_LIST MMPTE_LIST, *PMMPTE_LIST;
typedef struct _MMPTE_PROTOTYPE MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE;
typedef struct _MMPTE_SOFTWARE MMPTE_SOFTWARE, *PMMPTE_SOFTWARE;
typedef struct _MMPTE_SUBSECTION MMPTE_SUBSECTION, *PMMPTE_SUBSECTION;
typedef struct _MMPTE_TRANSITION MMPTE_TRANSITION, *PMMPTE_TRANSITION;
typedef struct _THREAD_ENVIRONMENT_BLOCK THREAD_ENVIRONMENT_BLOCK, *PTHREAD_ENVIRONMENT_BLOCK;

/* Unions forward references */
typedef union _APIC_BASE_REGISTER APIC_BASE_REGISTER, *PAPIC_BASE_REGISTER;
typedef union _APIC_COMMAND_REGISTER APIC_COMMAND_REGISTER, *PAPIC_COMMAND_REGISTER;
typedef union _APIC_LVT_REGISTER APIC_LVT_REGISTER, *PAPIC_LVT_REGISTER;
typedef union _APIC_SPURIOUS_REGISTER APIC_SPURIOUS_REGISTER, *PAPIC_SPURIOUS_REGISTER;
typedef union _MMPTE MMPDE, *PMMPDE;
typedef union _MMPTE MMPPE, *PMMPPE;
typedef union _MMPTE MMPTE, *PMMPTE;
typedef union _MMPTE MMPXE, *PMMPXE;
typedef union _PIC_I8259_ICW1 PIC_I8259_ICW1, *PPIC_I8259_ICW1;
typedef union _PIC_I8259_ICW2 PIC_I8259_ICW2, *PPIC_I8259_ICW2;
typedef union _PIC_I8259_ICW3 PIC_I8259_ICW3, *PPIC_I8259_ICW3;
typedef union _PIC_I8259_ICW4 PIC_I8259_ICW4, *PPIC_I8259_ICW4;

#endif /* __XTDK_AMD64_XTSTRUCT_H */
