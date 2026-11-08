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

// Function: FUN_0011b750
// Address: 0x11b750 - 0x11b85c
void FUN_0011b750_0x11b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b750_0x11b750");
#endif

    switch (ctx->pc) {
        case 0x11b780u: goto label_11b780;
        case 0x11b78cu: goto label_11b78c;
        case 0x11b79cu: goto label_11b79c;
        case 0x11b7bcu: goto label_11b7bc;
        case 0x11b7d4u: goto label_11b7d4;
        case 0x11b7e0u: goto label_11b7e0;
        case 0x11b838u: goto label_11b838;
        default: break;
    }

    ctx->pc = 0x11b750u;

    // 0x11b750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11b754: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11b758: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11b75c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11b760: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11b760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b764: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11b768: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11b768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b76c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11b76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11b770: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11b770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b778: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11B778u;
    SET_GPR_U32(ctx, 31, 0x11B780u);
    ctx->pc = 0x11B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B778u;
    // 0x11b77c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11B778u, 0x11B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B780u;
label_11b780:
    // 0x11b780: 0x8eb100fc  lw          $s1, 0xFC($s5)
    ctx->pc = 0x11b780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 252)));
    // 0x11b784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b788: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11b788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b78c:
    // 0x11b78c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11B78Cu;
    {
        const bool branch_taken_0x11b78c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B78Cu;
        // 0x11b790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b78c) {
            ctx->pc = 0x11B824u;
            goto label_11b824;
        }
    }
    ctx->pc = 0x11B794u;
    // 0x11b794: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B794u;
    SET_GPR_U32(ctx, 31, 0x11B79Cu);
    ctx->pc = 0x11B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B794u;
    // 0x11b798: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B794u, 0x11B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B79Cu;
label_11b79c:
    // 0x11b79c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11B79Cu;
    {
        const bool branch_taken_0x11b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b79c) {
            ctx->pc = 0x11B818u;
            goto label_11b818;
        }
    }
    ctx->pc = 0x11B7A4u;
    // 0x11b7a4: 0x8f8383c4  lw          $v1, -0x7C3C($gp)
    ctx->pc = 0x11b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935492)));
    // 0x11b7a8: 0x14750013  bne         $v1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B7A8u;
    {
        const bool branch_taken_0x11b7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x11B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7A8u;
        // 0x11b7ac: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7a8) {
            ctx->pc = 0x11B7F8u;
            goto label_11b7f8;
        }
    }
    ctx->pc = 0x11B7B0u;
    // 0x11b7b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11b7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7b4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B7B4u;
    SET_GPR_U32(ctx, 31, 0x11B7BCu);
    ctx->pc = 0x11B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7B4u;
    // 0x11b7b8: 0x2484dae0  addiu       $a0, $a0, -0x2520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B7B4u, 0x11B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7BCu;
label_11b7bc:
    // 0x11b7bc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11B7BCu;
    {
        const bool branch_taken_0x11b7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b7bc) {
            ctx->pc = 0x11B7F8u;
            goto label_11b7f8;
        }
    }
    ctx->pc = 0x11B7C4u;
    // 0x11b7c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7C4u;
    {
        const bool branch_taken_0x11b7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7C4u;
        // 0x11b7c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c4) {
            ctx->pc = 0x11B7D8u;
            goto label_11b7d8;
        }
    }
    ctx->pc = 0x11B7CCu;
    // 0x11b7cc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11B7CCu;
    SET_GPR_U32(ctx, 31, 0x11B7D4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11B7CCu, 0x11B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7D4u;
label_11b7d4:
    // 0x11b7d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11b7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11b7d8:
    // 0x11b7d8: 0xc046c90  jal         func_11B240
    ctx->pc = 0x11B7D8u;
    SET_GPR_U32(ctx, 31, 0x11B7E0u);
    ctx->pc = 0x11B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7D8u;
    // 0x11b7dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B240u, 0x11B7D8u, 0x11B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7E0u;
label_11b7e0:
    // 0x11b7e0: 0x0  nop
    ctx->pc = 0x11b7e0u;
    // NOP
    // 0x11b7e4: 0x0  nop
    ctx->pc = 0x11b7e4u;
    // NOP
    // 0x11b7e8: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B7E8u;
    {
        const bool branch_taken_0x11b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b7e8) {
            ctx->pc = 0x11B7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b7d4;
        }
    }
    ctx->pc = 0x11B7F0u;
    // 0x11b7f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11B7F0u;
    {
        const bool branch_taken_0x11b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b7f0) {
            ctx->pc = 0x11B824u;
            goto label_11b824;
        }
    }
    ctx->pc = 0x11B7F8u;
label_11b7f8:
    // 0x11b7f8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7F8u;
    {
        const bool branch_taken_0x11b7f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b7f8) {
            ctx->pc = 0x11B80Cu;
            goto label_11b80c;
        }
    }
    ctx->pc = 0x11B800u;
    // 0x11b800: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x11b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11b804: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B804u;
    {
        const bool branch_taken_0x11b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B804u;
        // 0x11b808: 0xaea300fc  sw          $v1, 0xFC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b804) {
            ctx->pc = 0x11B824u;
            goto label_11b824;
        }
    }
    ctx->pc = 0x11B80Cu;
label_11b80c:
    // 0x11b80c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x11b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11b810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B810u;
    {
        const bool branch_taken_0x11b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B810u;
        // 0x11b814: 0xae430038  sw          $v1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b810) {
            ctx->pc = 0x11B824u;
            goto label_11b824;
        }
    }
    ctx->pc = 0x11B818u;
label_11b818:
    // 0x11b818: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x11b818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b81c: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x11B81Cu;
    {
        const bool branch_taken_0x11b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B81Cu;
        // 0x11b820: 0x8e310038  lw          $s1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b81c) {
            ctx->pc = 0x11B78Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b78c;
        }
    }
    ctx->pc = 0x11B824u;
label_11b824:
    // 0x11b824: 0x0  nop
    ctx->pc = 0x11b824u;
    // NOP
    // 0x11b828: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B828u;
    {
        const bool branch_taken_0x11b828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b828) {
            ctx->pc = 0x11B838u;
            goto label_11b838;
        }
    }
    ctx->pc = 0x11B830u;
    // 0x11b830: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11B830u;
    SET_GPR_U32(ctx, 31, 0x11B838u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11B830u, 0x11B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B838u;
label_11b838:
    // 0x11b838: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11b83c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11b83cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11b840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11b844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11b848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b84c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11b850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b854: 0x3e00008  jr          $ra
    ctx->pc = 0x11B854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B854u;
        // 0x11b858: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B85Cu;
}
