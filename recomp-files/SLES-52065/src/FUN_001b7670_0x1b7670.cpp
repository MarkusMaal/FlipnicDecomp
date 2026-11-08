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

// Function: FUN_001b7670
// Address: 0x1b7670 - 0x1b76dc
void FUN_001b7670_0x1b7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7670_0x1b7670");
#endif

    switch (ctx->pc) {
        case 0x1b7694u: goto label_1b7694;
        case 0x1b76a0u: goto label_1b76a0;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b76c0u: goto label_1b76c0;
        default: break;
    }

    ctx->pc = 0x1b7670u;

    // 0x1b7670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7674: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b7674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b7678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b767c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7680: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1b7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b7684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7688: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b7688u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b768c: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B768Cu;
    SET_GPR_U32(ctx, 31, 0x1B7694u);
    ctx->pc = 0x1B7690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B768Cu;
    // 0x1b7690: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B768Cu, 0x1B7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7694u;
label_1b7694:
    // 0x1b7694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7698u;
    {
        const bool branch_taken_0x1b7698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7698u;
        // 0x1b769c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7698) {
            ctx->pc = 0x1B76B8u;
            goto label_1b76b8;
        }
    }
    ctx->pc = 0x1B76A0u;
label_1b76a0:
    // 0x1b76a0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b76a4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b76a8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1B76A8u;
    SET_GPR_U32(ctx, 31, 0x1B76B0u);
    ctx->pc = 0x1B76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76A8u;
    // 0x1b76ac: 0x24a52ee0  addiu       $a1, $a1, 0x2EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1B76A8u, 0x1B76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76B0u;
label_1b76b0:
    // 0x1b76b0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B76B0u;
    SET_GPR_U32(ctx, 31, 0x1B76B8u);
    ctx->pc = 0x1B76B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76B0u;
    // 0x1b76b4: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B76B0u, 0x1B76B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76B8u;
label_1b76b8:
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
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b76a0;
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
