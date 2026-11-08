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

// Function: entry_001d0278
// Address: 0x1d0278 - 0x1d029c
void entry_001d0278_0x1d0278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0278_0x1d0278");
#endif

    switch (ctx->pc) {
        case 0x1d0284u: goto label_1d0284;
        case 0x1d0290u: goto label_1d0290;
        default: break;
    }

    ctx->pc = 0x1d0278u;

    // 0x1d0278: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1d0278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1d027c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1D027Cu;
    SET_GPR_U32(ctx, 31, 0x1D0284u);
    ctx->pc = 0x1D0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D027Cu;
    // 0x1d0280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1D027Cu, 0x1D0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0284u;
label_1d0284:
    // 0x1d0284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0288: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1D0288u;
    SET_GPR_U32(ctx, 31, 0x1D0290u);
    ctx->pc = 0x1D028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0288u;
    // 0x1d028c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1D0288u, 0x1D0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0290u;
label_1d0290:
    // 0x1d0290: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d0290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d0294: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0294u;
    {
        const bool branch_taken_0x1d0294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0294) {
            ctx->pc = 0x1D0258u;
            return;
        }
    }
    ctx->pc = 0x1D029Cu;
}
