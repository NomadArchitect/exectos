# XTOS kernel exports
@ fastcall ExAcquireRundownProtection(ptr)
@ fastcall ExCompleteRundownProtection(ptr)
@ fastcall ExInitializeRundownProtection(ptr)
@ fastcall ExReInitializeRundownProtection(ptr)
@ fastcall ExReleaseRundownProtection(ptr)
@ fastcall ExWaitForRundownProtectionRelease(ptr)
@ cdecl HlIoPortInByte(ptr)
@ cdecl HlIoPortInLong(ptr)
@ cdecl HlIoPortInShort(ptr)
@ cdecl HlIoPortOutByte(ptr long)
@ cdecl HlIoPortOutLong(ptr long)
@ cdecl HlIoPortOutShort(ptr long)
@ fastcall KeAcquireQueuedSpinLock(long)
@ fastcall KeAcquireSpinLock(ptr)
@ fastcall KeGetCurrentRunLevel()
@ stdcall KeInitializeApc(ptr ptr long ptr ptr ptr long ptr)
@ stdcall KeInitializeDpc(ptr ptr ptr)
@ stdcall KeInitializeSemaphore(ptr long long)
@ stdcall KeInitializeSpinLock(ptr)
@ stdcall KeInitializeThreadedDpc(ptr ptr ptr)
@ stdcall KeInitializeTimer(ptr)
@ stdcall KeInitializeTimerEx(ptr long)
@ fastcall KeLowerRunLevel(long)
@ fastcall KeRaiseRunLevel(long)
@ stdcall KeReadSemaphoreState(ptr)
@ stdcall KeReleaseSemaphore(ptr long long long)
@ fastcall KeReleaseQueuedSpinLock(long)
@ fastcall KeReleaseSpinLock(ptr)
@ stdcall KeSetTargetProcessorDpc(ptr long)
@ stdcall KeSignalCallDpcDone(ptr)
@ stdcall KeSignalCallDpcSynchronize(ptr)
@ stdcall RtlCompareGuids(ptr ptr)
@ stdcall RtlCompareMemory(ptr ptr long)
@ cdecl RtlCompareString(str str long)
@ cdecl RtlCompareStringInsensitive(str str long)
@ cdecl RtlCompareWideString(wstr wstr long)
@ cdecl RtlCompareWideStringInsensitive(wstr wstr long)
@ stdcall RtlConcatenateString(str str long)
@ cdecl RtlConcatenateWideString(wstr wstr long)
@ stdcall RtlConvertToLargeInteger32(long)
@ stdcall RtlConvertToLargeIntegerUnsigned32(long)
@ stdcall RtlCopyMemory(ptr ptr long)
@ stdcall RtlDivideLargeInteger(long long long ptr)
@ stdcall RtlFillMemory(ptr long long)
@ stdcall RtlMoveMemory(ptr ptr long)
@ stdcall RtlMultiplyLargeInteger(long long long)
@ stdcall RtlReadRegisterByte(ptr)
@ stdcall RtlReadRegisterLong(ptr)
@ stdcall RtlReadRegisterShort(ptr)
@ stdcall RtlReverseString(str long)
@ stdcall RtlSameMemory(ptr ptr long)
@ stdcall RtlSetMemory(ptr long long)
@ cdecl RtlStringLength(str long)
@ cdecl RtlStringToWideString(wstr str long)
@ stdcall RtlTokenizeString(str str str)
@ cdecl RtlTokenizeWideString(wstr wstr wstr)
@ cdecl RtlTrimLeftString(str)
@ cdecl RtlTrimRightString(str)
@ cdecl RtlTrimString(str)
@ cdecl RtlWideStringLength(wstr long)
@ stdcall RtlWriteRegisterByte(ptr long)
@ stdcall RtlWriteRegisterLong(ptr long)
@ stdcall RtlWriteRegisterShort(ptr long)
@ stdcall RtlZeroMemory(ptr long)
