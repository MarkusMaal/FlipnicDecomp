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

// Function: FUN_0013ea00
// Address: 0x13ea00 - 0x13eaf4
void FUN_0013ea00_0x13ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ea00_0x13ea00");
#endif

    switch (ctx->pc) {
        case 0x13ea00u: goto label_13ea00;
        case 0x13ea04u: goto label_13ea04;
        case 0x13ea08u: goto label_13ea08;
        case 0x13ea0cu: goto label_13ea0c;
        case 0x13ea10u: goto label_13ea10;
        case 0x13ea14u: goto label_13ea14;
        case 0x13ea18u: goto label_13ea18;
        case 0x13ea1cu: goto label_13ea1c;
        case 0x13ea20u: goto label_13ea20;
        case 0x13ea24u: goto label_13ea24;
        case 0x13ea28u: goto label_13ea28;
        case 0x13ea2cu: goto label_13ea2c;
        case 0x13ea30u: goto label_13ea30;
        case 0x13ea34u: goto label_13ea34;
        case 0x13ea38u: goto label_13ea38;
        case 0x13ea3cu: goto label_13ea3c;
        case 0x13ea40u: goto label_13ea40;
        case 0x13ea44u: goto label_13ea44;
        case 0x13ea48u: goto label_13ea48;
        case 0x13ea4cu: goto label_13ea4c;
        case 0x13ea50u: goto label_13ea50;
        case 0x13ea54u: goto label_13ea54;
        case 0x13ea58u: goto label_13ea58;
        case 0x13ea5cu: goto label_13ea5c;
        case 0x13ea60u: goto label_13ea60;
        case 0x13ea64u: goto label_13ea64;
        case 0x13ea68u: goto label_13ea68;
        case 0x13ea6cu: goto label_13ea6c;
        case 0x13ea70u: goto label_13ea70;
        case 0x13ea74u: goto label_13ea74;
        case 0x13ea78u: goto label_13ea78;
        case 0x13ea7cu: goto label_13ea7c;
        case 0x13ea80u: goto label_13ea80;
        case 0x13ea84u: goto label_13ea84;
        case 0x13ea88u: goto label_13ea88;
        case 0x13ea8cu: goto label_13ea8c;
        case 0x13ea90u: goto label_13ea90;
        case 0x13ea94u: goto label_13ea94;
        case 0x13ea98u: goto label_13ea98;
        case 0x13ea9cu: goto label_13ea9c;
        case 0x13eaa0u: goto label_13eaa0;
        case 0x13eaa4u: goto label_13eaa4;
        case 0x13eaa8u: goto label_13eaa8;
        case 0x13eaacu: goto label_13eaac;
        case 0x13eab0u: goto label_13eab0;
        case 0x13eab4u: goto label_13eab4;
        case 0x13eab8u: goto label_13eab8;
        case 0x13eabcu: goto label_13eabc;
        case 0x13eac0u: goto label_13eac0;
        case 0x13eac4u: goto label_13eac4;
        case 0x13eac8u: goto label_13eac8;
        case 0x13eaccu: goto label_13eacc;
        case 0x13ead0u: goto label_13ead0;
        case 0x13ead4u: goto label_13ead4;
        case 0x13ead8u: goto label_13ead8;
        case 0x13eadcu: goto label_13eadc;
        case 0x13eae0u: goto label_13eae0;
        case 0x13eae4u: goto label_13eae4;
        case 0x13eae8u: goto label_13eae8;
        case 0x13eaecu: goto label_13eaec;
        case 0x13eaf0u: goto label_13eaf0;
        default: break;
    }

    ctx->pc = 0x13ea00u;

label_13ea00:
    // 0x13ea00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13ea04:
    // 0x13ea04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_13ea08:
    // 0x13ea08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13ea0c:
    // 0x13ea0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13ea10:
    // 0x13ea10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13ea14:
    // 0x13ea14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ea14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ea18:
    // 0x13ea18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ea18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13ea1c:
    // 0x13ea1c: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x13ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_13ea20:
    // 0x13ea20: 0xc04c554  jal         func_131550
label_13ea24:
    if (ctx->pc == 0x13EA24u) {
        ctx->pc = 0x13EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA20u;
        // 0x13ea24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EA28u;
        goto label_13ea28;
    }
    ctx->pc = 0x13EA20u;
    SET_GPR_U32(ctx, 31, 0x13EA28u);
    ctx->pc = 0x13EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA20u;
    // 0x13ea24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13EA20u, 0x13EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA28u;
label_13ea28:
    // 0x13ea28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13ea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ea2c:
    // 0x13ea2c: 0xc04c550  jal         func_131540
label_13ea30:
    if (ctx->pc == 0x13EA30u) {
        ctx->pc = 0x13EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA2Cu;
        // 0x13ea30: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EA34u;
        goto label_13ea34;
    }
    ctx->pc = 0x13EA2Cu;
    SET_GPR_U32(ctx, 31, 0x13EA34u);
    ctx->pc = 0x13EA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA2Cu;
    // 0x13ea30: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13EA2Cu, 0x13EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA34u;
label_13ea34:
    // 0x13ea34: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x13ea34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_13ea38:
    // 0x13ea38: 0xc04c554  jal         func_131550
label_13ea3c:
    if (ctx->pc == 0x13EA3Cu) {
        ctx->pc = 0x13EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA38u;
        // 0x13ea3c: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EA40u;
        goto label_13ea40;
    }
    ctx->pc = 0x13EA38u;
    SET_GPR_U32(ctx, 31, 0x13EA40u);
    ctx->pc = 0x13EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA38u;
    // 0x13ea3c: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13EA38u, 0x13EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA40u;
label_13ea40:
    // 0x13ea40: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13ea44:
    // 0x13ea44: 0xc04c54c  jal         func_131530
label_13ea48:
    if (ctx->pc == 0x13EA48u) {
        ctx->pc = 0x13EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA44u;
        // 0x13ea48: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EA4Cu;
        goto label_13ea4c;
    }
    ctx->pc = 0x13EA44u;
    SET_GPR_U32(ctx, 31, 0x13EA4Cu);
    ctx->pc = 0x13EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA44u;
    // 0x13ea48: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13EA44u, 0x13EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA4Cu;
label_13ea4c:
    // 0x13ea4c: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x13ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_13ea50:
    // 0x13ea50: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x13ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_13ea54:
    // 0x13ea54: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x13ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13ea58:
    // 0x13ea58: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x13ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_13ea5c:
    // 0x13ea5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13ea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ea60:
    // 0x13ea60: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13ea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_13ea64:
    // 0x13ea64: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13ea68:
    // 0x13ea68: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_13ea6c:
    if (ctx->pc == 0x13EA6Cu) {
        ctx->pc = 0x13EA70u;
        goto label_13ea70;
    }
    ctx->pc = 0x13EA68u;
    {
        const bool branch_taken_0x13ea68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x13ea68) {
            ctx->pc = 0x13EAA0u;
            goto label_13eaa0;
        }
    }
    ctx->pc = 0x13EA70u;
label_13ea70:
    // 0x13ea70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13ea74:
    // 0x13ea74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ea78:
    // 0x13ea78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ea78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ea7c:
    // 0x13ea7c: 0x8f3900fc  lw          $t9, 0xFC($t9)
    ctx->pc = 0x13ea7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 252)));
label_13ea80:
    // 0x13ea80: 0x320f809  jalr        $t9
label_13ea84:
    if (ctx->pc == 0x13EA84u) {
        ctx->pc = 0x13EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA80u;
        // 0x13ea84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EA88u;
        goto label_13ea88;
    }
    ctx->pc = 0x13EA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13EA88u);
        ctx->pc = 0x13EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA80u;
        // 0x13ea84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EA80u, 0x13EA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EA88u;
label_13ea88:
    // 0x13ea88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13ea8c:
    // 0x13ea8c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x13ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13ea90:
    // 0x13ea90: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x13ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_13ea94:
    // 0x13ea94: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13ea98:
    // 0x13ea98: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_13ea9c:
    if (ctx->pc == 0x13EA9Cu) {
        ctx->pc = 0x13EAA0u;
        goto label_13eaa0;
    }
    ctx->pc = 0x13EA98u;
    {
        const bool branch_taken_0x13ea98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ea98) {
            ctx->pc = 0x13EA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ea70;
        }
    }
    ctx->pc = 0x13EAA0u;
label_13eaa0:
    // 0x13eaa0: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x13eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_13eaa4:
    // 0x13eaa4: 0x8e530118  lw          $s3, 0x118($s2)
    ctx->pc = 0x13eaa4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_13eaa8:
    // 0x13eaa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13eaac:
    // 0x13eaac: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x13eaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_13eab0:
    // 0x13eab0: 0x12700009  beq         $s3, $s0, . + 4 + (0x9 << 2)
label_13eab4:
    if (ctx->pc == 0x13EAB4u) {
        ctx->pc = 0x13EAB8u;
        goto label_13eab8;
    }
    ctx->pc = 0x13EAB0u;
    {
        const bool branch_taken_0x13eab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x13eab0) {
            ctx->pc = 0x13EAD8u;
            goto label_13ead8;
        }
    }
    ctx->pc = 0x13EAB8u;
label_13eab8:
    // 0x13eab8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x13eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13eabc:
    // 0x13eabc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13eabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13eac0:
    // 0x13eac0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_13eac4:
    // 0x13eac4: 0x320f809  jalr        $t9
label_13eac8:
    if (ctx->pc == 0x13EAC8u) {
        ctx->pc = 0x13EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAC4u;
        // 0x13eac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EACCu;
        goto label_13eacc;
    }
    ctx->pc = 0x13EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13EACCu);
        ctx->pc = 0x13EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAC4u;
        // 0x13eac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EAC4u, 0x13EACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EACCu;
label_13eacc:
    // 0x13eacc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x13eaccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_13ead0:
    // 0x13ead0: 0x1670fff9  bne         $s3, $s0, . + 4 + (-0x7 << 2)
label_13ead4:
    if (ctx->pc == 0x13EAD4u) {
        ctx->pc = 0x13EAD8u;
        goto label_13ead8;
    }
    ctx->pc = 0x13EAD0u;
    {
        const bool branch_taken_0x13ead0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ead0) {
            ctx->pc = 0x13EAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13EAD8u;
label_13ead8:
    // 0x13ead8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13ead8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13eadc:
    // 0x13eadc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13eadcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13eae0:
    // 0x13eae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13eae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13eae4:
    // 0x13eae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13eae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13eae8:
    // 0x13eae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13eaec:
    // 0x13eaec: 0x3e00008  jr          $ra
label_13eaf0:
    if (ctx->pc == 0x13EAF0u) {
        ctx->pc = 0x13EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAECu;
        // 0x13eaf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EAF4u;
        goto label_fallthrough_0x13eaec;
    }
    ctx->pc = 0x13EAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAECu;
        // 0x13eaf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13eaec:
    ctx->pc = 0x13EAF4u;
}
