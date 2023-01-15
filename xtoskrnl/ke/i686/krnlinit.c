/**
 * PROJECT:         ExectOS
 * COPYRIGHT:       See COPYING.md in the top level directory
 * FILE:            xtoskrnl/ke/i686/krnlinit.c
 * DESCRIPTION:     CPU architecture specific kernel initialization
 * DEVELOPERS:      Rafal Kupiec <belliash@codingworkshop.eu.org>
 */

#include <xtos.h>


/**
 * This routine starts up the XT kernel. It is called after switching boot stack.
 *
 * @return This routine does not return any value.
 *
 * @since XT 1.0
 */
XTAPI
VOID
KepStartKernel(VOID)
{
    LdrPrint(L"Hello from new kernel stack!\n");
    for(;;);
}

/**
 * Switches to a new kernel boot stack.
 *
 * @return This routine does not return any value
 *
 * @since XT 1.0
 */
XTAPI
VOID
KepSwitchBootStack(IN ULONG_PTR Stack)
{
    /* Discard old stack frame, switch stack, make space for NPX and jump to KepStartKernel() */
    asm volatile("mov %0, %%edx\n"
                 "xor %%ebp, %%ebp\n"
                 "mov %%edx, %%esp\n"
                 "sub %1, %%esp\n"
                 "push %2\n"
                 "jmp _KepStartKernel@0\n"
                 :
                 : "m" (Stack),
                   "i" (KTRAP_FRAME_ALIGN | KTRAP_FRAME_SIZE | NPX_FRAME_SIZE),
                   "i" (CR0_EM | CR0_MP | CR0_TS),
                   "p" (KepStartKernel));
}