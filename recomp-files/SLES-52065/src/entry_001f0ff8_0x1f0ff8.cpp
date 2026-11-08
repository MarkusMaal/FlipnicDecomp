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

// Function: entry_001f0ff8
// Address: 0x1f0ff8 - 0x1f101c
void entry_001f0ff8_0x1f0ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0ff8_0x1f0ff8");
#endif

    switch (ctx->pc) {
        case 0x1f1000u: goto label_1f1000;
        case 0x1f1008u: goto label_1f1008;
        default: break;
    }

    ctx->pc = 0x1f0ff8u;

    // 0x1f0ff8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0FF8u;
    SET_GPR_U32(ctx, 31, 0x1F1000u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0FF8u, 0x1F1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1000u;
label_1f1000:
    // 0x1f1000: 0xc07bbbe  jal         func_1EEEF8
    ctx->pc = 0x1F1000u;
    SET_GPR_U32(ctx, 31, 0x1F1008u);
    ctx->pc = 0x1EEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEEF8u, 0x1F1000u, 0x1F1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1008u;
label_1f1008:
    // 0x1f1008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f100c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F100Cu;
    {
        const bool branch_taken_0x1f100c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F100Cu;
        // 0x1f1010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f100c) {
            ctx->pc = 0x1F101Cu;
            return;
        }
    }
    ctx->pc = 0x1F1014u;
    // 0x1f1014: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F1014u;
    {
        const bool branch_taken_0x1f1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1014u;
        // 0x1f1018: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1014) {
            ctx->pc = 0x1F1070u;
            return;
        }
    }
    ctx->pc = 0x1F101Cu;
}
