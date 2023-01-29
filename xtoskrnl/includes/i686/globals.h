/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            xtoskrnl/includes/i686/globals.h
 * DESCRIPTION:     XT kernel global variables related to i686 architecture
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#ifndef __XTOSKRNL_I686_GLOBALS_H
#define __XTOSKRNL_I686_GLOBALS_H

#include <xtos.h>


/* Initial GDT */
EXTERN KGDTENTRY ArInitialGdt[GDT_ENTRIES];

/* Initial IDT */
EXTERN KIDTENTRY ArInitialIdt[IDT_ENTRIES];

/* Initial TSS */
EXTERN KTSS ArInitialTss;

#endif /* __XTOSKRNL_I686_GLOBALS_H */
