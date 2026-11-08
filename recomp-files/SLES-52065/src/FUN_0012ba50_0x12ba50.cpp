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

// Function: FUN_0012ba50
// Address: 0x12ba50 - 0x12bb38
void FUN_0012ba50_0x12ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ba50_0x12ba50");
#endif

    switch (ctx->pc) {
        case 0x12ba50u: goto label_12ba50;
        case 0x12ba54u: goto label_12ba54;
        case 0x12ba58u: goto label_12ba58;
        case 0x12ba5cu: goto label_12ba5c;
        case 0x12ba60u: goto label_12ba60;
        case 0x12ba64u: goto label_12ba64;
        case 0x12ba68u: goto label_12ba68;
        case 0x12ba6cu: goto label_12ba6c;
        case 0x12ba70u: goto label_12ba70;
        case 0x12ba74u: goto label_12ba74;
        case 0x12ba78u: goto label_12ba78;
        case 0x12ba7cu: goto label_12ba7c;
        case 0x12ba80u: goto label_12ba80;
        case 0x12ba84u: goto label_12ba84;
        case 0x12ba88u: goto label_12ba88;
        case 0x12ba8cu: goto label_12ba8c;
        case 0x12ba90u: goto label_12ba90;
        case 0x12ba94u: goto label_12ba94;
        case 0x12ba98u: goto label_12ba98;
        case 0x12ba9cu: goto label_12ba9c;
        case 0x12baa0u: goto label_12baa0;
        case 0x12baa4u: goto label_12baa4;
        case 0x12baa8u: goto label_12baa8;
        case 0x12baacu: goto label_12baac;
        case 0x12bab0u: goto label_12bab0;
        case 0x12bab4u: goto label_12bab4;
        case 0x12bab8u: goto label_12bab8;
        case 0x12babcu: goto label_12babc;
        case 0x12bac0u: goto label_12bac0;
        case 0x12bac4u: goto label_12bac4;
        case 0x12bac8u: goto label_12bac8;
        case 0x12baccu: goto label_12bacc;
        case 0x12bad0u: goto label_12bad0;
        case 0x12bad4u: goto label_12bad4;
        case 0x12bad8u: goto label_12bad8;
        case 0x12badcu: goto label_12badc;
        case 0x12bae0u: goto label_12bae0;
        case 0x12bae4u: goto label_12bae4;
        case 0x12bae8u: goto label_12bae8;
        case 0x12baecu: goto label_12baec;
        case 0x12baf0u: goto label_12baf0;
        case 0x12baf4u: goto label_12baf4;
        case 0x12baf8u: goto label_12baf8;
        case 0x12bafcu: goto label_12bafc;
        case 0x12bb00u: goto label_12bb00;
        case 0x12bb04u: goto label_12bb04;
        case 0x12bb08u: goto label_12bb08;
        case 0x12bb0cu: goto label_12bb0c;
        case 0x12bb10u: goto label_12bb10;
        case 0x12bb14u: goto label_12bb14;
        case 0x12bb18u: goto label_12bb18;
        case 0x12bb1cu: goto label_12bb1c;
        case 0x12bb20u: goto label_12bb20;
        case 0x12bb24u: goto label_12bb24;
        case 0x12bb28u: goto label_12bb28;
        case 0x12bb2cu: goto label_12bb2c;
        case 0x12bb30u: goto label_12bb30;
        case 0x12bb34u: goto label_12bb34;
        default: break;
    }

    ctx->pc = 0x12ba50u;

label_12ba50:
    // 0x12ba50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_12ba54:
    // 0x12ba54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_12ba58:
    // 0x12ba58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12ba5c:
    // 0x12ba5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12ba60:
    // 0x12ba60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12ba64:
    // 0x12ba64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12ba68:
    // 0x12ba68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12ba68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ba6c:
    // 0x12ba6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12ba70:
    // 0x12ba70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12ba70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12ba74:
    // 0x12ba74: 0xc04a85c  jal         func_12A170
label_12ba78:
    if (ctx->pc == 0x12BA78u) {
        ctx->pc = 0x12BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA74u;
        // 0x12ba78: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA7Cu;
        goto label_12ba7c;
    }
    ctx->pc = 0x12BA74u;
    SET_GPR_U32(ctx, 31, 0x12BA7Cu);
    ctx->pc = 0x12BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA74u;
    // 0x12ba78: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A170u, 0x12BA74u, 0x12BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA7Cu;
label_12ba7c:
    // 0x12ba7c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x12ba7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_12ba80:
    // 0x12ba80: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_12ba84:
    if (ctx->pc == 0x12BA84u) {
        ctx->pc = 0x12BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA80u;
        // 0x12ba84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA88u;
        goto label_12ba88;
    }
    ctx->pc = 0x12BA80u;
    {
        const bool branch_taken_0x12ba80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA80u;
        // 0x12ba84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba80) {
            ctx->pc = 0x12BAD4u;
            goto label_12bad4;
        }
    }
    ctx->pc = 0x12BA88u;
label_12ba88:
    // 0x12ba88: 0xc04c25c  jal         func_130970
label_12ba8c:
    if (ctx->pc == 0x12BA8Cu) {
        ctx->pc = 0x12BA90u;
        goto label_12ba90;
    }
    ctx->pc = 0x12BA88u;
    SET_GPR_U32(ctx, 31, 0x12BA90u);
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x12BA88u, 0x12BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA90u;
label_12ba90:
    // 0x12ba90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ba94:
    // 0x12ba94: 0xc080702  jal         func_201C08
label_12ba98:
    if (ctx->pc == 0x12BA98u) {
        ctx->pc = 0x12BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA94u;
        // 0x12ba98: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BA9Cu;
        goto label_12ba9c;
    }
    ctx->pc = 0x12BA94u;
    SET_GPR_U32(ctx, 31, 0x12BA9Cu);
    ctx->pc = 0x12BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA94u;
    // 0x12ba98: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12BA94u, 0x12BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA9Cu;
label_12ba9c:
    // 0x12ba9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12baa0:
    // 0x12baa0: 0xc04a860  jal         func_12A180
label_12baa4:
    if (ctx->pc == 0x12BAA4u) {
        ctx->pc = 0x12BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAA0u;
        // 0x12baa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAA8u;
        goto label_12baa8;
    }
    ctx->pc = 0x12BAA0u;
    SET_GPR_U32(ctx, 31, 0x12BAA8u);
    ctx->pc = 0x12BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAA0u;
    // 0x12baa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A180u, 0x12BAA0u, 0x12BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAA8u;
label_12baa8:
    // 0x12baa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12baa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12baac:
    // 0x12baac: 0xc080664  jal         func_201990
label_12bab0:
    if (ctx->pc == 0x12BAB0u) {
        ctx->pc = 0x12BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAACu;
        // 0x12bab0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAB4u;
        goto label_12bab4;
    }
    ctx->pc = 0x12BAACu;
    SET_GPR_U32(ctx, 31, 0x12BAB4u);
    ctx->pc = 0x12BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAACu;
    // 0x12bab0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x12BAACu, 0x12BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAB4u;
label_12bab4:
    // 0x12bab4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12bab8:
    // 0x12bab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12bab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12babc:
    // 0x12babc: 0xc0485b4  jal         func_1216D0
label_12bac0:
    if (ctx->pc == 0x12BAC0u) {
        ctx->pc = 0x12BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BABCu;
        // 0x12bac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BAC4u;
        goto label_12bac4;
    }
    ctx->pc = 0x12BABCu;
    SET_GPR_U32(ctx, 31, 0x12BAC4u);
    ctx->pc = 0x12BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BABCu;
    // 0x12bac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x12BABCu, 0x12BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAC4u;
label_12bac4:
    // 0x12bac4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12bac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12bac8:
    // 0x12bac8: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x12bac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_12bacc:
    // 0x12bacc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_12bad0:
    if (ctx->pc == 0x12BAD0u) {
        ctx->pc = 0x12BAD4u;
        goto label_12bad4;
    }
    ctx->pc = 0x12BACCu;
    {
        const bool branch_taken_0x12bacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bacc) {
            ctx->pc = 0x12BA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ba88;
        }
    }
    ctx->pc = 0x12BAD4u;
label_12bad4:
    // 0x12bad4: 0x0  nop
    ctx->pc = 0x12bad4u;
    // NOP
label_12bad8:
    // 0x12bad8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12bad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12badc:
    // 0x12badc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12badcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12bae0:
    // 0x12bae0: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x12bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_12bae4:
    // 0x12bae4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x12bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12bae8:
    // 0x12bae8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_12baec:
    if (ctx->pc == 0x12BAECu) {
        ctx->pc = 0x12BAF0u;
        goto label_12baf0;
    }
    ctx->pc = 0x12BAE8u;
    {
        const bool branch_taken_0x12bae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bae8) {
            ctx->pc = 0x12BB04u;
            goto label_12bb04;
        }
    }
    ctx->pc = 0x12BAF0u;
label_12baf0:
    // 0x12baf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12baf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12baf4:
    // 0x12baf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12baf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12baf8:
    // 0x12baf8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_12bafc:
    // 0x12bafc: 0x320f809  jalr        $t9
label_12bb00:
    if (ctx->pc == 0x12BB00u) {
        ctx->pc = 0x12BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAFCu;
        // 0x12bb00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB04u;
        goto label_12bb04;
    }
    ctx->pc = 0x12BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12BB04u);
        ctx->pc = 0x12BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAFCu;
        // 0x12bb00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BAFCu, 0x12BB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12BB04u;
label_12bb04:
    // 0x12bb04: 0x0  nop
    ctx->pc = 0x12bb04u;
    // NOP
label_12bb08:
    // 0x12bb08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12bb08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12bb0c:
    // 0x12bb0c: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_12bb10:
    // 0x12bb10: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_12bb14:
    if (ctx->pc == 0x12BB14u) {
        ctx->pc = 0x12BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB10u;
        // 0x12bb14: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB18u;
        goto label_12bb18;
    }
    ctx->pc = 0x12BB10u;
    {
        const bool branch_taken_0x12bb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB10u;
        // 0x12bb14: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb10) {
            ctx->pc = 0x12BAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bae0;
        }
    }
    ctx->pc = 0x12BB18u;
label_12bb18:
    // 0x12bb18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12bb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12bb1c:
    // 0x12bb1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12bb1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12bb20:
    // 0x12bb20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12bb20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12bb24:
    // 0x12bb24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12bb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12bb28:
    // 0x12bb28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12bb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12bb2c:
    // 0x12bb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12bb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12bb30:
    // 0x12bb30: 0x3e00008  jr          $ra
label_12bb34:
    if (ctx->pc == 0x12BB34u) {
        ctx->pc = 0x12BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB30u;
        // 0x12bb34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12BB38u;
        goto label_fallthrough_0x12bb30;
    }
    ctx->pc = 0x12BB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB30u;
        // 0x12bb34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12bb30:
    ctx->pc = 0x12BB38u;
}
