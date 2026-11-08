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

// Function: entry_001ecff8
// Address: 0x1ecff8 - 0x1ed00c
void entry_001ecff8_0x1ecff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecff8_0x1ecff8");
#endif

    switch (ctx->pc) {
        case 0x1ed008u: goto label_1ed008;
        default: break;
    }

    ctx->pc = 0x1ecff8u;

    // 0x1ecff8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1ecff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1ecffc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1ecffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1ed000: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1ED000u;
    SET_GPR_U32(ctx, 31, 0x1ED008u);
    ctx->pc = 0x1ED004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED000u;
    // 0x1ed004: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1ED000u, 0x1ED008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED008u;
label_1ed008:
    // 0x1ed008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ed00cu;
}
