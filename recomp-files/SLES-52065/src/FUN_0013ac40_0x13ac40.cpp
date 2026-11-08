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

// Function: FUN_0013ac40
// Address: 0x13ac40 - 0x13aca4
void FUN_0013ac40_0x13ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ac40_0x13ac40");
#endif

    switch (ctx->pc) {
        case 0x13ac60u: goto label_13ac60;
        case 0x13ac70u: goto label_13ac70;
        case 0x13ac90u: goto label_13ac90;
        default: break;
    }

    ctx->pc = 0x13ac40u;

    // 0x13ac40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ac44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13ac44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ac4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ac50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ac50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac54: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x13ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13ac58: 0xc04ee14  jal         func_13B850
    ctx->pc = 0x13AC58u;
    SET_GPR_U32(ctx, 31, 0x13AC60u);
    ctx->pc = 0x13AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC58u;
    // 0x13ac5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B850u, 0x13AC58u, 0x13AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC60u;
label_13ac60:
    // 0x13ac60: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13ac64: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x13ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13ac68: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x13AC68u;
    SET_GPR_U32(ctx, 31, 0x13AC70u);
    ctx->pc = 0x13AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC68u;
    // 0x13ac6c: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x13AC68u, 0x13AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC70u;
label_13ac70:
    // 0x13ac70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ac74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AC74u;
    {
        const bool branch_taken_0x13ac74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ac74) {
            ctx->pc = 0x13AC84u;
            goto label_13ac84;
        }
    }
    ctx->pc = 0x13AC7Cu;
    // 0x13ac7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AC7Cu;
    {
        const bool branch_taken_0x13ac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC7Cu;
        // 0x13ac80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac7c) {
            ctx->pc = 0x13AC94u;
            goto label_13ac94;
        }
    }
    ctx->pc = 0x13AC84u;
label_13ac84:
    // 0x13ac84: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x13ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ac88: 0xc04ef2c  jal         func_13BCB0
    ctx->pc = 0x13AC88u;
    SET_GPR_U32(ctx, 31, 0x13AC90u);
    ctx->pc = 0x13AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC88u;
    // 0x13ac8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BCB0u, 0x13AC88u, 0x13AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC90u;
label_13ac90:
    // 0x13ac90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ac94:
    // 0x13ac94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ac94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ac98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ac98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x13AC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC9Cu;
        // 0x13aca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ACA4u;
}
