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

// Function: entry_001c1a58
// Address: 0x1c1a58 - 0x1c1a78
void entry_001c1a58_0x1c1a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a58_0x1c1a58");
#endif

    switch (ctx->pc) {
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a74u: goto label_1c1a74;
        default: break;
    }

    ctx->pc = 0x1c1a58u;

    // 0x1c1a58: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C1A58u;
    SET_GPR_U32(ctx, 31, 0x1C1A60u);
    ctx->pc = 0x1C1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A58u;
    // 0x1c1a5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C1A58u, 0x1C1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A60u;
label_1c1a60:
    // 0x1c1a60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A60u;
        // 0x1c1a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1A78u;
            return;
        }
    }
    ctx->pc = 0x1C1A68u;
    // 0x1c1a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a6c: 0xc0707b4  jal         func_1C1ED0
    ctx->pc = 0x1C1A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A74u);
    ctx->pc = 0x1C1A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A6Cu;
    // 0x1c1a70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1ED0u, 0x1C1A6Cu, 0x1C1A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A74u;
label_1c1a74:
    // 0x1c1a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1a78u;
}
