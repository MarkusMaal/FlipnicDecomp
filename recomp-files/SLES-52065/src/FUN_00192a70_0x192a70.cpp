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

// Function: FUN_00192a70
// Address: 0x192a70 - 0x192ad8
void FUN_00192a70_0x192a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192a70_0x192a70");
#endif

    switch (ctx->pc) {
        case 0x192a90u: goto label_192a90;
        case 0x192a98u: goto label_192a98;
        case 0x192ab4u: goto label_192ab4;
        case 0x192ac4u: goto label_192ac4;
        default: break;
    }

    ctx->pc = 0x192a70u;

    // 0x192a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192a80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x192a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a84: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x192a88: 0xc058018  jal         func_160060
    ctx->pc = 0x192A88u;
    SET_GPR_U32(ctx, 31, 0x192A90u);
    ctx->pc = 0x192A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A88u;
    // 0x192a8c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x192A88u, 0x192A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A90u;
label_192a90:
    // 0x192a90: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x192A90u;
    SET_GPR_U32(ctx, 31, 0x192A98u);
    ctx->pc = 0x192A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A90u;
    // 0x192a94: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x192A90u, 0x192A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A98u;
label_192a98:
    // 0x192a98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x192a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192a9c: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x192A9Cu;
    {
        const bool branch_taken_0x192a9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x192a9c) {
            ctx->pc = 0x192AC4u;
            goto label_192ac4;
        }
    }
    ctx->pc = 0x192AA4u;
    // 0x192aa4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x192aa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192aac: 0xc057040  jal         func_15C100
    ctx->pc = 0x192AACu;
    SET_GPR_U32(ctx, 31, 0x192AB4u);
    ctx->pc = 0x192AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192AACu;
    // 0x192ab0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x192AACu, 0x192AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AB4u;
label_192ab4:
    // 0x192ab4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x192ab8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192abc: 0xc042360  jal         func_108D80
    ctx->pc = 0x192ABCu;
    SET_GPR_U32(ctx, 31, 0x192AC4u);
    ctx->pc = 0x192AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192ABCu;
    // 0x192ac0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D80u, 0x192ABCu, 0x192AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AC4u;
label_192ac4:
    // 0x192ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x192AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AD0u;
        // 0x192ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192AD8u;
}
