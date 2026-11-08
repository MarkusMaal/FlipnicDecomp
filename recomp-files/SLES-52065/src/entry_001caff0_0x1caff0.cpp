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

// Function: entry_001caff0
// Address: 0x1caff0 - 0x1cb008
void entry_001caff0_0x1caff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caff0_0x1caff0");
#endif

    switch (ctx->pc) {
        case 0x1caff8u: goto label_1caff8;
        default: break;
    }

    ctx->pc = 0x1caff0u;

    // 0x1caff0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CAFF0u;
    SET_GPR_U32(ctx, 31, 0x1CAFF8u);
    ctx->pc = 0x1CAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFF0u;
    // 0x1caff4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CAFF0u, 0x1CAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFF8u;
label_1caff8:
    // 0x1caff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAFF8u;
    {
        const bool branch_taken_0x1caff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFF8u;
        // 0x1caffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caff8) {
            ctx->pc = 0x1CB008u;
            return;
        }
    }
    ctx->pc = 0x1CB000u;
    // 0x1cb000: 0xc072d90  jal         func_1CB640
    ctx->pc = 0x1CB000u;
    SET_GPR_U32(ctx, 31, 0x1CB008u);
    ctx->pc = 0x1CB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB000u;
    // 0x1cb004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB640u, 0x1CB000u, 0x1CB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB008u;
}
