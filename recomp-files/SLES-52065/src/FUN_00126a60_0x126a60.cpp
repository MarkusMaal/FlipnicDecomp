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

// Function: FUN_00126a60
// Address: 0x126a60 - 0x126adc
void FUN_00126a60_0x126a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126a60_0x126a60");
#endif

    switch (ctx->pc) {
        case 0x126a88u: goto label_126a88;
        case 0x126a98u: goto label_126a98;
        case 0x126aa8u: goto label_126aa8;
        default: break;
    }

    ctx->pc = 0x126a60u;

    // 0x126a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x126a64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x126a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x126a68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x126a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x126a6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x126a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x126a7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a80: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x126A80u;
    SET_GPR_U32(ctx, 31, 0x126A88u);
    ctx->pc = 0x126A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A80u;
    // 0x126a84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x126A80u, 0x126A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A88u;
label_126a88:
    // 0x126a88: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x126a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x126a8c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x126a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x126a90: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x126A90u;
    SET_GPR_U32(ctx, 31, 0x126A98u);
    ctx->pc = 0x126A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A90u;
    // 0x126a94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x126A90u, 0x126A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A98u;
label_126a98:
    // 0x126a98: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x126a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x126a9c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x126a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x126aa0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x126AA0u;
    SET_GPR_U32(ctx, 31, 0x126AA8u);
    ctx->pc = 0x126AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126AA0u;
    // 0x126aa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x126AA0u, 0x126AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AA8u;
label_126aa8:
    // 0x126aa8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x126aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x126aac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x126aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x126ab0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x126ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x126ab4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x126ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x126ab8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x126ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x126abc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x126abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126ac0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x126ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x126ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x126AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AD4u;
        // 0x126ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126ADCu;
}
