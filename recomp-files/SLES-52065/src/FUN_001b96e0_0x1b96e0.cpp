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

// Function: FUN_001b96e0
// Address: 0x1b96e0 - 0x1b9734
void FUN_001b96e0_0x1b96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b96e0_0x1b96e0");
#endif

    switch (ctx->pc) {
        case 0x1b96f4u: goto label_1b96f4;
        case 0x1b9700u: goto label_1b9700;
        case 0x1b9708u: goto label_1b9708;
        case 0x1b9710u: goto label_1b9710;
        case 0x1b9718u: goto label_1b9718;
        default: break;
    }

    ctx->pc = 0x1b96e0u;

    // 0x1b96e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b96e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b96e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b96ec: 0xc06e0fc  jal         func_1B83F0
    ctx->pc = 0x1B96ECu;
    SET_GPR_U32(ctx, 31, 0x1B96F4u);
    ctx->pc = 0x1B96F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96ECu;
    // 0x1b96f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83F0u, 0x1B96ECu, 0x1B96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96F4u;
label_1b96f4:
    // 0x1b96f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b96f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B96F8u;
    {
        const bool branch_taken_0x1b96f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96F8u;
        // 0x1b96fc: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96f8) {
            ctx->pc = 0x1B9710u;
            goto label_1b9710;
        }
    }
    ctx->pc = 0x1B9700u;
label_1b9700:
    // 0x1b9700: 0xc06e5d0  jal         func_1B9740
    ctx->pc = 0x1B9700u;
    SET_GPR_U32(ctx, 31, 0x1B9708u);
    ctx->pc = 0x1B9704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9700u;
    // 0x1b9704: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9740u, 0x1B9700u, 0x1B9708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9708u;
label_1b9708:
    // 0x1b9708: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B9708u;
    SET_GPR_U32(ctx, 31, 0x1B9710u);
    ctx->pc = 0x1B970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9708u;
    // 0x1b970c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B9708u, 0x1B9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9710u;
label_1b9710:
    // 0x1b9710: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1B9710u;
    SET_GPR_U32(ctx, 31, 0x1B9718u);
    ctx->pc = 0x1B9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9710u;
    // 0x1b9714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1B9710u, 0x1B9718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9718u;
label_1b9718:
    // 0x1b9718: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b9718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b971c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B971Cu;
    {
        const bool branch_taken_0x1b971c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b971c) {
            ctx->pc = 0x1B9700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9700;
        }
    }
    ctx->pc = 0x1B9724u;
    // 0x1b9724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b972c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B972Cu;
        // 0x1b9730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B972Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9734u;
}
