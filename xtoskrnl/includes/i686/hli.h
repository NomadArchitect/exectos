/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            xtoskrnl/includes/i686/hli.h
 * DESCRIPTION:     XT hardware abstraction layer routines specific to i686 architecture
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#ifndef __XTOSKRNL_I686_HLI_H
#define __XTOSKRNL_I686_HLI_H

#include <xtos.h>


/* HAL library routines forward references */
XTAPI
VOID
HlClearApicErrors(VOID);

XTFASTCALL
ULONGLONG
HlReadApicRegister(IN APIC_REGISTER Register);

XTAPI
VOID
HlSendEoi(VOID);

XTFASTCALL
VOID
HlWriteApicRegister(IN APIC_REGISTER Register,
                    IN ULONGLONG Value);

XTAPI
BOOLEAN
HlpCheckX2ApicSupport(VOID);

XTCDECL
VOID
HlpHandleApicSpuriousService(VOID);

XTCDECL
VOID
HlpHandlePicSpuriousService(VOID);

XTAPI
VOID
HlpInitializeApic(VOID);

XTAPI
VOID
HlpInitializeLegacyPic(VOID);

XTAPI
VOID
HlpInitializePic(VOID);

XTFASTCALL
KRUNLEVEL
HlpTransformApicTprToRunLevel(IN UCHAR Tpr);

XTFASTCALL
UCHAR
HlpTransformRunLevelToApicTpr(IN KRUNLEVEL RunLevel);

#endif /* __XTOSKRNL_I686_HLI_H */
