/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            sdk/xtdk/amd64/artypes.h
 * DESCRIPTION:     AMD64 architecture library structure definitions
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#ifndef __XTDK_AMD64_ARTYPES_H
#define __XTDK_AMD64_ARTYPES_H

#include <xtdefs.h>
#include <xtstruct.h>
#include <xttypes.h>


/* Control Register 0 constants */
#define CR0_PE                                          0x00000001
#define CR0_MP                                          0x00000002
#define CR0_EM                                          0x00000004
#define CR0_TS                                          0x00000008
#define CR0_ET                                          0x00000010
#define CR0_NE                                          0x00000020
#define CR0_WP                                          0x00010000
#define CR0_AM                                          0x00040000
#define CR0_NW                                          0x20000000
#define CR0_CD                                          0x40000000
#define CR0_PG                                          0x80000000

/* Control Register 4 constants */
#define CR4_VME                                         0x00000001
#define CR4_PVI                                         0x00000002
#define CR4_TSD                                         0x00000004
#define CR4_DE                                          0x00000008
#define CR4_PSE                                         0x00000010
#define CR4_PAE                                         0x00000020
#define CR4_MCE                                         0x00000040
#define CR4_PGE                                         0x00000080
#define CR4_PCE                                         0x00000100
#define CR4_FXSR                                        0x00000200
#define CR4_XMMEXCPT                                    0x00000400
#define CR4_LA57                                        0x00001000
#define CR4_RESERVED1                                   0x00001800
#define CR4_VMXE                                        0x00002000
#define CR4_SMXE                                        0x00004000
#define CR4_RESERVED2                                   0x00018000
#define CR4_XSAVE                                       0x00020000
#define CR4_RESERVED3                                   0xFFFC0000

/* Descriptors size */
#define GDT_ENTRIES                                     128
#define IDT_ENTRIES                                     256

/* Initial MXCSR control */
#define INITIAL_MXCSR                                   0x1F80

/* Page Attributes Table types */
#define PAT_TYPE_STRONG_UC                              0ULL
#define PAT_TYPE_USWC                                   1ULL
#define PAT_TYPE_WT                                     4ULL
#define PAT_TYPE_WP                                     5ULL
#define PAT_TYPE_WB                                     6ULL
#define PAT_TYPE_WEAK_UC                                7ULL

/* Segment defintions */
#define SEGMENT_CS                                      0x2E
#define SEGMENT_DS                                      0x3E
#define SEGMENT_ES                                      0x26
#define SEGMENT_SS                                      0x36
#define SEGMENT_FS                                      0x64
#define SEGMENT_GS                                      0x65

/* MSR values */
#define X86_MSR_SYSENTER_CS                             0x00000174
#define X86_MSR_SYSENTER_ESP                            0x00000175
#define X86_MSR_SYSENTER_EIP                            0x00000176
#define X86_MSR_POWER_CONTROL                           0x000001FC
#define X86_MSR_PAT                                     0x00000277
#define X86_MSR_EFER                                    0xC0000080
#define X86_MSR_STAR                                    0xC0000081
#define X86_MSR_LSTAR                                   0xC0000082
#define X86_MSR_CSTAR                                   0xC0000083
#define X86_MSR_FMASK                                   0xC0000084
#define X86_MSR_FSBASE                                  0xC0000100
#define X86_MSR_GSBASE                                  0xC0000101
#define X86_MSR_KERNEL_GSBASE                           0xC0000102

/* Processor features in the EFER MSR */
#define X86_MSR_EFER_SCE                                (1 <<  0)
#define X86_MSR_EFER_LME                                (1 <<  8)
#define X86_MSR_EFER_LMA                                (1 << 10)
#define X86_MSR_EFER_NXE                                (1 << 11)
#define X86_MSR_EFER_SVME                               (1 << 12)

/* X86 EFLAG bit masks definitions */
#define X86_EFLAGS_NF_MASK                              0x00000000 /* None */
#define X86_EFLAGS_CF_MASK                              0x00000001 /* Carry */
#define X86_EFLAGS_PF_MASK                              0x00000004 /* Parity */
#define X86_EFALGS_AF_MASK                              0x00000010 /* Aux Carry */
#define X86_EFLAGS_ZF_MASK                              0x00000040 /* Zero */
#define X86_EFLAGS_SF_MASK                              0x00000080 /* Sign */
#define X86_EFLAGS_TF_MASK                              0x00000100 /* Trap */
#define X86_EFLAGS_IF_MASK                              0x00000200 /* Interrupt */
#define X86_EFLAGS_DF_MASK                              0x00000400 /* Direction */
#define X86_EFLAGS_OF_MASK                              0x00000800 /* Overflow */
#define X86_EFLAGS_IOPL_MASK                            0x00003000 /* I/O Privilege */
#define X86_EFLAGS_NT_MASK                              0x00004000 /* Nested Task */
#define X86_EFLAGS_SIGN_MASK                            0x00008000 /* Sign */
#define X86_EFLAGS_RF_MASK                              0x00010000 /* Resume */
#define X86_EFLAGS_V86_MASK                             0x00020000 /* Virtual 8086 */
#define X86_EFLAGS_AC_MASK                              0x00040000 /* Alignment Check */
#define X86_EFLAGS_VIF_MASK                             0x00080000 /* Virtual Interrupt */
#define X86_EFLAGS_VIP_MASK                             0x00100000 /* Virtual Interrupt Pending */
#define X86_EFLAGS_ID_MASK                              0x00200000 /* Identification */

/* CPU vendor enumeration list */
typedef enum _CPU_VENDOR
{
    CPU_VENDOR_AMD = 0x68747541,
    CPU_VENDOR_INTEL = 0x756E6547,
    CPU_VENDOR_UNKNOWN = 0xFFFFFFFF
} CPU_VENDOR, *PCPU_VENDOR;

/* CPUID features enumeration list */
typedef enum _CPUID_FEATURES
{
    CPUID_FEATURES_ECX_SSE3         = 1 << 0,
    CPUID_FEATURES_ECX_PCLMUL       = 1 << 1,
    CPUID_FEATURES_ECX_DTES64       = 1 << 2,
    CPUID_FEATURES_ECX_MONITOR      = 1 << 3,
    CPUID_FEATURES_ECX_DS_CPL       = 1 << 4,
    CPUID_FEATURES_ECX_VMX          = 1 << 5,
    CPUID_FEATURES_ECX_SMX          = 1 << 6,
    CPUID_FEATURES_ECX_EST          = 1 << 7,
    CPUID_FEATURES_ECX_TM2          = 1 << 8,
    CPUID_FEATURES_ECX_SSSE3        = 1 << 9,
    CPUID_FEATURES_ECX_CID          = 1 << 10,
    CPUID_FEATURES_ECX_SDBG         = 1 << 11,
    CPUID_FEATURES_ECX_FMA          = 1 << 12,
    CPUID_FEATURES_ECX_CX16         = 1 << 13,
    CPUID_FEATURES_ECX_XTPR         = 1 << 14,
    CPUID_FEATURES_ECX_PDCM         = 1 << 15,
    CPUID_FEATURES_ECX_PCID         = 1 << 17,
    CPUID_FEATURES_ECX_DCA          = 1 << 18,
    CPUID_FEATURES_ECX_SSE4_1       = 1 << 19,
    CPUID_FEATURES_ECX_SSE4_2       = 1 << 20,
    CPUID_FEATURES_ECX_X2APIC       = 1 << 21,
    CPUID_FEATURES_ECX_MOVBE        = 1 << 22,
    CPUID_FEATURES_ECX_POPCNT       = 1 << 23,
    CPUID_FEATURES_ECX_TSC          = 1 << 24,
    CPUID_FEATURES_ECX_AES          = 1 << 25,
    CPUID_FEATURES_ECX_XSAVE        = 1 << 26,
    CPUID_FEATURES_ECX_OSXSAVE      = 1 << 27,
    CPUID_FEATURES_ECX_AVX          = 1 << 28,
    CPUID_FEATURES_ECX_F16C         = 1 << 29,
    CPUID_FEATURES_ECX_RDRAND       = 1 << 30,
    CPUID_FEATURES_ECX_HYPERVISOR   = 1 << 31,
    CPUID_FEATURES_EDX_FPU          = 1 << 0,
    CPUID_FEATURES_EDX_VME          = 1 << 1,
    CPUID_FEATURES_EDX_DE           = 1 << 2,
    CPUID_FEATURES_EDX_PSE          = 1 << 3,
    CPUID_FEATURES_EDX_TSC          = 1 << 4,
    CPUID_FEATURES_EDX_MSR          = 1 << 5,
    CPUID_FEATURES_EDX_PAE          = 1 << 6,
    CPUID_FEATURES_EDX_MCE          = 1 << 7,
    CPUID_FEATURES_EDX_CX8          = 1 << 8,
    CPUID_FEATURES_EDX_APIC         = 1 << 9,
    CPUID_FEATURES_EDX_SEP          = 1 << 11,
    CPUID_FEATURES_EDX_MTRR         = 1 << 12,
    CPUID_FEATURES_EDX_PGE          = 1 << 13,
    CPUID_FEATURES_EDX_MCA          = 1 << 14,
    CPUID_FEATURES_EDX_CMOV         = 1 << 15,
    CPUID_FEATURES_EDX_PAT          = 1 << 16,
    CPUID_FEATURES_EDX_PSE36        = 1 << 17,
    CPUID_FEATURES_EDX_PSN          = 1 << 18,
    CPUID_FEATURES_EDX_CLFLUSH      = 1 << 19,
    CPUID_FEATURES_EDX_DS           = 1 << 21,
    CPUID_FEATURES_EDX_ACPI         = 1 << 22,
    CPUID_FEATURES_EDX_MMX          = 1 << 23,
    CPUID_FEATURES_EDX_FXSR         = 1 << 24,
    CPUID_FEATURES_EDX_SSE          = 1 << 25,
    CPUID_FEATURES_EDX_SSE2         = 1 << 26,
    CPUID_FEATURES_EDX_SS           = 1 << 27,
    CPUID_FEATURES_EDX_HTT          = 1 << 28,
    CPUID_FEATURES_EDX_TM           = 1 << 29,
    CPUID_FEATURES_EDX_IA64         = 1 << 30,
    CPUID_FEATURES_EDX_PBE          = 1 << 31
} CPUID_FEATURES, *PCPUID_FEATURES;

/* CPUID requests */
typedef enum _CPUID_REQUESTS
{
    CPUID_GET_VENDOR_STRING,
    CPUID_GET_CPU_FEATURES,
    CPUID_GET_TLB,
    CPUID_GET_SERIAL
} CPUID_REQUESTS, *PCPUID_REQUESTS;

/* Processor identification information */
typedef struct _CPU_IDENTIFICATION
{
    USHORT Family;
    USHORT Model;
    USHORT Stepping;
    CPU_VENDOR Vendor;
    UCHAR VendorName[13];
} CPU_IDENTIFICATION, *PCPU_IDENTIFICATION;

/* CPUID registers */
typedef struct _CPUID_REGISTERS
{
    UINT32 Leaf;
    UINT32 SubLeaf;
    UINT32 Eax;
    UINT32 Ebx;
    UINT32 Ecx;
    UINT32 Edx;
} CPUID_REGISTERS, *PCPUID_REGISTERS;

/* CPU signature read from CPUID structure definition */
typedef struct _CPUID_SIGNATURE
{
    ULONG Stepping:4;
    ULONG Model:4;
    ULONG Family:4;
    ULONG Unused1:4;
    ULONG ExtendedModel:4;
    ULONG ExtendedFamily:8;
    ULONG Unused2:4;
} CPU_SIGNATURE, *PCPU_SIGNATURE;

#endif /* __XTDK_AMD64_ARTYPES_H */
