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

// Function: FUN_0018ae70
// Address: 0x18ae70 - 0x18ae80
void FUN_0018ae70_0x18ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ae70_0x18ae70");
#endif

    ctx->pc = 0x18ae70u;

    // 0x18ae70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ae74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae78: 0x80765c4  j           func_1D9710
    ctx->pc = 0x18AE78u;
    ctx->pc = 0x18AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AE78u;
    // 0x18ae7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    FUN_001d9710_0x1d9710(rdram, ctx, runtime); return;
    ctx->pc = 0x18AE80u;
}
