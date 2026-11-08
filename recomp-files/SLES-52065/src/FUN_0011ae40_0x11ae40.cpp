#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011ae40
// Address: 0x11ae40 - 0x11ae4c
void FUN_0011ae40_0x11ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ae40_0x11ae40");
#endif

    ctx->pc = 0x11ae40u;

    // 0x11ae40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ae40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae44: 0x8046b94  j           func_11AE50
    ctx->pc = 0x11AE44u;
    ctx->pc = 0x11AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE44u;
    // 0x11ae48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE50u;
    FUN_0011ae50_0x11ae50(rdram, ctx, runtime); return;
    ctx->pc = 0x11AE4Cu;
}
