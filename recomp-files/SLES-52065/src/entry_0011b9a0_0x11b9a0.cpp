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

// Function: entry_0011b9a0
// Address: 0x11b9a0 - 0x11b9bc
void entry_0011b9a0_0x11b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9a0_0x11b9a0");
#endif

    switch (ctx->pc) {
        case 0x11b9b0u: goto label_11b9b0;
        default: break;
    }

    ctx->pc = 0x11b9a0u;

    // 0x11b9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9a8: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11B9A8u;
    SET_GPR_U32(ctx, 31, 0x11B9B0u);
    ctx->pc = 0x11B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9A8u;
    // 0x11b9ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11B9A8u, 0x11B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9B0u;
label_11b9b0:
    // 0x11b9b0: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x11b9b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b9b4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x11B9B4u;
    {
        const bool branch_taken_0x11b9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b9b4) {
            ctx->pc = 0x11B990u;
            return;
        }
    }
    ctx->pc = 0x11B9BCu;
}
