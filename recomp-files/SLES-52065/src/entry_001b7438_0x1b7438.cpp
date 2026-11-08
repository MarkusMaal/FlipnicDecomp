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

// Function: entry_001b7438
// Address: 0x1b7438 - 0x1b745c
void entry_001b7438_0x1b7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7438_0x1b7438");
#endif

    switch (ctx->pc) {
        case 0x1b7444u: goto label_1b7444;
        case 0x1b7450u: goto label_1b7450;
        default: break;
    }

    ctx->pc = 0x1b7438u;

    // 0x1b7438: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1b7438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1b743c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1B743Cu;
    SET_GPR_U32(ctx, 31, 0x1B7444u);
    ctx->pc = 0x1B7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B743Cu;
    // 0x1b7440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1B743Cu, 0x1B7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7444u;
label_1b7444:
    // 0x1b7444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7448: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7448u;
    SET_GPR_U32(ctx, 31, 0x1B7450u);
    ctx->pc = 0x1B744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7448u;
    // 0x1b744c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7448u, 0x1B7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7450u;
label_1b7450:
    // 0x1b7450: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b7454: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B7454u;
    {
        const bool branch_taken_0x1b7454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7454) {
            ctx->pc = 0x1B7414u;
            return;
        }
    }
    ctx->pc = 0x1B745Cu;
}
