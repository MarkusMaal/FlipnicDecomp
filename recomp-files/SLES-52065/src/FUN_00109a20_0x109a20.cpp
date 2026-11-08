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

// Function: FUN_00109a20
// Address: 0x109a20 - 0x109aec
void FUN_00109a20_0x109a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109a20_0x109a20");
#endif

    switch (ctx->pc) {
        case 0x109a20u: goto label_109a20;
        case 0x109a24u: goto label_109a24;
        case 0x109a28u: goto label_109a28;
        case 0x109a2cu: goto label_109a2c;
        case 0x109a30u: goto label_109a30;
        case 0x109a34u: goto label_109a34;
        case 0x109a38u: goto label_109a38;
        case 0x109a3cu: goto label_109a3c;
        case 0x109a40u: goto label_109a40;
        case 0x109a44u: goto label_109a44;
        case 0x109a48u: goto label_109a48;
        case 0x109a4cu: goto label_109a4c;
        case 0x109a50u: goto label_109a50;
        case 0x109a54u: goto label_109a54;
        case 0x109a58u: goto label_109a58;
        case 0x109a5cu: goto label_109a5c;
        case 0x109a60u: goto label_109a60;
        case 0x109a64u: goto label_109a64;
        case 0x109a68u: goto label_109a68;
        case 0x109a6cu: goto label_109a6c;
        case 0x109a70u: goto label_109a70;
        case 0x109a74u: goto label_109a74;
        case 0x109a78u: goto label_109a78;
        case 0x109a7cu: goto label_109a7c;
        case 0x109a80u: goto label_109a80;
        case 0x109a84u: goto label_109a84;
        case 0x109a88u: goto label_109a88;
        case 0x109a8cu: goto label_109a8c;
        case 0x109a90u: goto label_109a90;
        case 0x109a94u: goto label_109a94;
        case 0x109a98u: goto label_109a98;
        case 0x109a9cu: goto label_109a9c;
        case 0x109aa0u: goto label_109aa0;
        case 0x109aa4u: goto label_109aa4;
        case 0x109aa8u: goto label_109aa8;
        case 0x109aacu: goto label_109aac;
        case 0x109ab0u: goto label_109ab0;
        case 0x109ab4u: goto label_109ab4;
        case 0x109ab8u: goto label_109ab8;
        case 0x109abcu: goto label_109abc;
        case 0x109ac0u: goto label_109ac0;
        case 0x109ac4u: goto label_109ac4;
        case 0x109ac8u: goto label_109ac8;
        case 0x109accu: goto label_109acc;
        case 0x109ad0u: goto label_109ad0;
        case 0x109ad4u: goto label_109ad4;
        case 0x109ad8u: goto label_109ad8;
        case 0x109adcu: goto label_109adc;
        case 0x109ae0u: goto label_109ae0;
        case 0x109ae4u: goto label_109ae4;
        case 0x109ae8u: goto label_109ae8;
        default: break;
    }

    ctx->pc = 0x109a20u;

label_109a20:
    // 0x109a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_109a24:
    // 0x109a24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x109a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_109a28:
    // 0x109a28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x109a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_109a2c:
    // 0x109a2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x109a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_109a30:
    // 0x109a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_109a34:
    // 0x109a34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x109a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a38:
    // 0x109a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_109a3c:
    // 0x109a3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x109a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a40:
    // 0x109a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109a44:
    // 0x109a44: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x109a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_109a48:
    // 0x109a48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x109a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109a4c:
    // 0x109a4c: 0x84830228  lh          $v1, 0x228($a0)
    ctx->pc = 0x109a4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_109a50:
    // 0x109a50: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_109a54:
    if (ctx->pc == 0x109A54u) {
        ctx->pc = 0x109A58u;
        goto label_109a58;
    }
    ctx->pc = 0x109A50u;
    {
        const bool branch_taken_0x109a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a50) {
            ctx->pc = 0x109A78u;
            goto label_109a78;
        }
    }
    ctx->pc = 0x109A58u;
label_109a58:
    // 0x109a58: 0x8c84023c  lw          $a0, 0x23C($a0)
    ctx->pc = 0x109a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
label_109a5c:
    // 0x109a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a60:
    // 0x109a60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109a64:
    // 0x109a64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109a68:
    // 0x109a68: 0x320f809  jalr        $t9
label_109a6c:
    if (ctx->pc == 0x109A6Cu) {
        ctx->pc = 0x109A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A68u;
        // 0x109a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A70u;
        goto label_109a70;
    }
    ctx->pc = 0x109A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109A70u);
        ctx->pc = 0x109A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A68u;
        // 0x109a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A68u, 0x109A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109A70u;
label_109a70:
    // 0x109a70: 0x10000012  b           . + 4 + (0x12 << 2)
label_109a74:
    if (ctx->pc == 0x109A74u) {
        ctx->pc = 0x109A78u;
        goto label_109a78;
    }
    ctx->pc = 0x109A70u;
    {
        const bool branch_taken_0x109a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a70) {
            ctx->pc = 0x109ABCu;
            goto label_109abc;
        }
    }
    ctx->pc = 0x109A78u;
label_109a78:
    // 0x109a78: 0x2493023c  addiu       $s3, $a0, 0x23C
    ctx->pc = 0x109a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
label_109a7c:
    // 0x109a7c: 0x8c84023c  lw          $a0, 0x23C($a0)
    ctx->pc = 0x109a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
label_109a80:
    // 0x109a80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109a84:
    // 0x109a84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x109a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_109a88:
    // 0x109a88: 0x320f809  jalr        $t9
label_109a8c:
    if (ctx->pc == 0x109A8Cu) {
        ctx->pc = 0x109A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A88u;
        // 0x109a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A90u;
        goto label_109a90;
    }
    ctx->pc = 0x109A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109A90u);
        ctx->pc = 0x109A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A88u;
        // 0x109a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A88u, 0x109A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109A90u;
label_109a90:
    // 0x109a90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x109a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_109a94:
    // 0x109a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a98:
    // 0x109a98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109a9c:
    // 0x109a9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109aa0:
    // 0x109aa0: 0x320f809  jalr        $t9
label_109aa4:
    if (ctx->pc == 0x109AA4u) {
        ctx->pc = 0x109AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AA0u;
        // 0x109aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AA8u;
        goto label_109aa8;
    }
    ctx->pc = 0x109AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109AA8u);
        ctx->pc = 0x109AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AA0u;
        // 0x109aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AA0u, 0x109AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109AA8u;
label_109aa8:
    // 0x109aa8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x109aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_109aac:
    // 0x109aac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109ab0:
    // 0x109ab0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x109ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_109ab4:
    // 0x109ab4: 0x320f809  jalr        $t9
label_109ab8:
    if (ctx->pc == 0x109AB8u) {
        ctx->pc = 0x109AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AB4u;
        // 0x109ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109ABCu;
        goto label_109abc;
    }
    ctx->pc = 0x109AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109ABCu);
        ctx->pc = 0x109AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AB4u;
        // 0x109ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AB4u, 0x109ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109ABCu;
label_109abc:
    // 0x109abc: 0x0  nop
    ctx->pc = 0x109abcu;
    // NOP
label_109ac0:
    // 0x109ac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_109ac4:
    // 0x109ac4: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x109ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_109ac8:
    // 0x109ac8: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_109acc:
    if (ctx->pc == 0x109ACCu) {
        ctx->pc = 0x109ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AC8u;
        // 0x109acc: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AD0u;
        goto label_109ad0;
    }
    ctx->pc = 0x109AC8u;
    {
        const bool branch_taken_0x109ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AC8u;
        // 0x109acc: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ac8) {
            ctx->pc = 0x109A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a44;
        }
    }
    ctx->pc = 0x109AD0u;
label_109ad0:
    // 0x109ad0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_109ad4:
    // 0x109ad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x109ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_109ad8:
    // 0x109ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x109ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_109adc:
    // 0x109adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_109ae0:
    // 0x109ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_109ae4:
    // 0x109ae4: 0x3e00008  jr          $ra
label_109ae8:
    if (ctx->pc == 0x109AE8u) {
        ctx->pc = 0x109AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE4u;
        // 0x109ae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AECu;
        goto label_fallthrough_0x109ae4;
    }
    ctx->pc = 0x109AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE4u;
        // 0x109ae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x109ae4:
    ctx->pc = 0x109AECu;
}
