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

// Function: entry_001b76b8
// Address: 0x1b76b8 - 0x1b76dc
void entry_001b76b8_0x1b76b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b76b8_0x1b76b8");
#endif

    switch (ctx->pc) {
        case 0x1b76c0u: goto label_1b76c0;
        default: break;
    }

    ctx->pc = 0x1b76b8u;

    // 0x1b76b8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B76B8u;
    SET_GPR_U32(ctx, 31, 0x1B76C0u);
    ctx->pc = 0x1B76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76B8u;
    // 0x1b76bc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B76B8u, 0x1B76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76C0u;
label_1b76c0:
    // 0x1b76c0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b76c4: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B76C4u;
    {
        const bool branch_taken_0x1b76c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b76c4) {
            ctx->pc = 0x1B76A0u;
            return;
        }
    }
    ctx->pc = 0x1B76CCu;
    // 0x1b76cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b76ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b76d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b76d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b76d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B76D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76D4u;
        // 0x1b76d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B76D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B76DCu;
}
