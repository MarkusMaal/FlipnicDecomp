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

// Function: FUN_0010eb70
// Address: 0x10eb70 - 0x10ed14
void FUN_0010eb70_0x10eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010eb70_0x10eb70");
#endif

    switch (ctx->pc) {
        case 0x10eb70u: goto label_10eb70;
        case 0x10eb74u: goto label_10eb74;
        case 0x10eb78u: goto label_10eb78;
        case 0x10eb7cu: goto label_10eb7c;
        case 0x10eb80u: goto label_10eb80;
        case 0x10eb84u: goto label_10eb84;
        case 0x10eb88u: goto label_10eb88;
        case 0x10eb8cu: goto label_10eb8c;
        case 0x10eb90u: goto label_10eb90;
        case 0x10eb94u: goto label_10eb94;
        case 0x10eb98u: goto label_10eb98;
        case 0x10eb9cu: goto label_10eb9c;
        case 0x10eba0u: goto label_10eba0;
        case 0x10eba4u: goto label_10eba4;
        case 0x10eba8u: goto label_10eba8;
        case 0x10ebacu: goto label_10ebac;
        case 0x10ebb0u: goto label_10ebb0;
        case 0x10ebb4u: goto label_10ebb4;
        case 0x10ebb8u: goto label_10ebb8;
        case 0x10ebbcu: goto label_10ebbc;
        case 0x10ebc0u: goto label_10ebc0;
        case 0x10ebc4u: goto label_10ebc4;
        case 0x10ebc8u: goto label_10ebc8;
        case 0x10ebccu: goto label_10ebcc;
        case 0x10ebd0u: goto label_10ebd0;
        case 0x10ebd4u: goto label_10ebd4;
        case 0x10ebd8u: goto label_10ebd8;
        case 0x10ebdcu: goto label_10ebdc;
        case 0x10ebe0u: goto label_10ebe0;
        case 0x10ebe4u: goto label_10ebe4;
        case 0x10ebe8u: goto label_10ebe8;
        case 0x10ebecu: goto label_10ebec;
        case 0x10ebf0u: goto label_10ebf0;
        case 0x10ebf4u: goto label_10ebf4;
        case 0x10ebf8u: goto label_10ebf8;
        case 0x10ebfcu: goto label_10ebfc;
        case 0x10ec00u: goto label_10ec00;
        case 0x10ec04u: goto label_10ec04;
        case 0x10ec08u: goto label_10ec08;
        case 0x10ec0cu: goto label_10ec0c;
        case 0x10ec10u: goto label_10ec10;
        case 0x10ec14u: goto label_10ec14;
        case 0x10ec18u: goto label_10ec18;
        case 0x10ec1cu: goto label_10ec1c;
        case 0x10ec20u: goto label_10ec20;
        case 0x10ec24u: goto label_10ec24;
        case 0x10ec28u: goto label_10ec28;
        case 0x10ec2cu: goto label_10ec2c;
        case 0x10ec30u: goto label_10ec30;
        case 0x10ec34u: goto label_10ec34;
        case 0x10ec38u: goto label_10ec38;
        case 0x10ec3cu: goto label_10ec3c;
        case 0x10ec40u: goto label_10ec40;
        case 0x10ec44u: goto label_10ec44;
        case 0x10ec48u: goto label_10ec48;
        case 0x10ec4cu: goto label_10ec4c;
        case 0x10ec50u: goto label_10ec50;
        case 0x10ec54u: goto label_10ec54;
        case 0x10ec58u: goto label_10ec58;
        case 0x10ec5cu: goto label_10ec5c;
        case 0x10ec60u: goto label_10ec60;
        case 0x10ec64u: goto label_10ec64;
        case 0x10ec68u: goto label_10ec68;
        case 0x10ec6cu: goto label_10ec6c;
        case 0x10ec70u: goto label_10ec70;
        case 0x10ec74u: goto label_10ec74;
        case 0x10ec78u: goto label_10ec78;
        case 0x10ec7cu: goto label_10ec7c;
        case 0x10ec80u: goto label_10ec80;
        case 0x10ec84u: goto label_10ec84;
        case 0x10ec88u: goto label_10ec88;
        case 0x10ec8cu: goto label_10ec8c;
        case 0x10ec90u: goto label_10ec90;
        case 0x10ec94u: goto label_10ec94;
        case 0x10ec98u: goto label_10ec98;
        case 0x10ec9cu: goto label_10ec9c;
        case 0x10eca0u: goto label_10eca0;
        case 0x10eca4u: goto label_10eca4;
        case 0x10eca8u: goto label_10eca8;
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecb0u: goto label_10ecb0;
        case 0x10ecb4u: goto label_10ecb4;
        case 0x10ecb8u: goto label_10ecb8;
        case 0x10ecbcu: goto label_10ecbc;
        case 0x10ecc0u: goto label_10ecc0;
        case 0x10ecc4u: goto label_10ecc4;
        case 0x10ecc8u: goto label_10ecc8;
        case 0x10ecccu: goto label_10eccc;
        case 0x10ecd0u: goto label_10ecd0;
        case 0x10ecd4u: goto label_10ecd4;
        case 0x10ecd8u: goto label_10ecd8;
        case 0x10ecdcu: goto label_10ecdc;
        case 0x10ece0u: goto label_10ece0;
        case 0x10ece4u: goto label_10ece4;
        case 0x10ece8u: goto label_10ece8;
        case 0x10ececu: goto label_10ecec;
        case 0x10ecf0u: goto label_10ecf0;
        case 0x10ecf4u: goto label_10ecf4;
        case 0x10ecf8u: goto label_10ecf8;
        case 0x10ecfcu: goto label_10ecfc;
        case 0x10ed00u: goto label_10ed00;
        case 0x10ed04u: goto label_10ed04;
        case 0x10ed08u: goto label_10ed08;
        case 0x10ed0cu: goto label_10ed0c;
        case 0x10ed10u: goto label_10ed10;
        default: break;
    }

    ctx->pc = 0x10eb70u;

label_10eb70:
    // 0x10eb70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10eb74:
    // 0x10eb74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10eb78:
    // 0x10eb78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10eb7c:
    // 0x10eb7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10eb80:
    // 0x10eb80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10eb80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10eb84:
    // 0x10eb84: 0xc043774  jal         func_10DDD0
label_10eb88:
    if (ctx->pc == 0x10EB88u) {
        ctx->pc = 0x10EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB84u;
        // 0x10eb88: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB8Cu;
        goto label_10eb8c;
    }
    ctx->pc = 0x10EB84u;
    SET_GPR_U32(ctx, 31, 0x10EB8Cu);
    ctx->pc = 0x10EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB84u;
    // 0x10eb88: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDD0u, 0x10EB84u, 0x10EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB8Cu;
label_10eb8c:
    // 0x10eb8c: 0x10000010  b           . + 4 + (0x10 << 2)
label_10eb90:
    if (ctx->pc == 0x10EB90u) {
        ctx->pc = 0x10EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB8Cu;
        // 0x10eb90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB94u;
        goto label_10eb94;
    }
    ctx->pc = 0x10EB8Cu;
    {
        const bool branch_taken_0x10eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB8Cu;
        // 0x10eb90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb8c) {
            ctx->pc = 0x10EBD0u;
            goto label_10ebd0;
        }
    }
    ctx->pc = 0x10EB94u;
label_10eb94:
    // 0x10eb94: 0x8e440220  lw          $a0, 0x220($s2)
    ctx->pc = 0x10eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10eb98:
    // 0x10eb98: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10eb9c:
    // 0x10eb9c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10eba0:
    // 0x10eba0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x10eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_10eba4:
    // 0x10eba4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10eba8:
    // 0x10eba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ebac:
    // 0x10ebac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ebacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ebb0:
    // 0x10ebb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ebb4:
    // 0x10ebb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ebb8:
    // 0x10ebb8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ebbc:
    // 0x10ebbc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10ebbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10ebc0:
    // 0x10ebc0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ebc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ebc4:
    // 0x10ebc4: 0x320f809  jalr        $t9
label_10ebc8:
    if (ctx->pc == 0x10EBC8u) {
        ctx->pc = 0x10EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBC4u;
        // 0x10ebc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBCCu;
        goto label_10ebcc;
    }
    ctx->pc = 0x10EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EBCCu);
        ctx->pc = 0x10EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBC4u;
        // 0x10ebc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EBC4u, 0x10EBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EBCCu;
label_10ebcc:
    // 0x10ebcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ebccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10ebd0:
    // 0x10ebd0: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x10ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_10ebd4:
    // 0x10ebd4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10ebd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10ebd8:
    // 0x10ebd8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_10ebdc:
    if (ctx->pc == 0x10EBDCu) {
        ctx->pc = 0x10EBE0u;
        goto label_10ebe0;
    }
    ctx->pc = 0x10EBD8u;
    {
        const bool branch_taken_0x10ebd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ebd8) {
            ctx->pc = 0x10EB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eb94;
        }
    }
    ctx->pc = 0x10EBE0u;
label_10ebe0:
    // 0x10ebe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10ebe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ebe4:
    // 0x10ebe4: 0x1000000e  b           . + 4 + (0xE << 2)
label_10ebe8:
    if (ctx->pc == 0x10EBE8u) {
        ctx->pc = 0x10EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBE4u;
        // 0x10ebe8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBECu;
        goto label_10ebec;
    }
    ctx->pc = 0x10EBE4u;
    {
        const bool branch_taken_0x10ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBE4u;
        // 0x10ebe8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebe4) {
            ctx->pc = 0x10EC20u;
            goto label_10ec20;
        }
    }
    ctx->pc = 0x10EBECu;
label_10ebec:
    // 0x10ebec: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10ebf0:
    // 0x10ebf0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ebf4:
    // 0x10ebf4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10ebf8:
    // 0x10ebf8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ebf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ebfc:
    // 0x10ebfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ec00:
    // 0x10ec00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ec04:
    // 0x10ec04: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ec08:
    // 0x10ec08: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10ec0c:
    // 0x10ec0c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ec0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ec10:
    // 0x10ec10: 0x320f809  jalr        $t9
label_10ec14:
    if (ctx->pc == 0x10EC14u) {
        ctx->pc = 0x10EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC10u;
        // 0x10ec14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC18u;
        goto label_10ec18;
    }
    ctx->pc = 0x10EC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EC18u);
        ctx->pc = 0x10EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC10u;
        // 0x10ec14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC10u, 0x10EC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EC18u;
label_10ec18:
    // 0x10ec18: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x10ec18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_10ec1c:
    // 0x10ec1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ec1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10ec20:
    // 0x10ec20: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x10ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10ec24:
    // 0x10ec24: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10ec24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10ec28:
    // 0x10ec28: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_10ec2c:
    if (ctx->pc == 0x10EC2Cu) {
        ctx->pc = 0x10EC30u;
        goto label_10ec30;
    }
    ctx->pc = 0x10EC28u;
    {
        const bool branch_taken_0x10ec28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ec28) {
            ctx->pc = 0x10EBECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ebec;
        }
    }
    ctx->pc = 0x10EC30u;
label_10ec30:
    // 0x10ec30: 0x1000002a  b           . + 4 + (0x2A << 2)
label_10ec34:
    if (ctx->pc == 0x10EC34u) {
        ctx->pc = 0x10EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC30u;
        // 0x10ec34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC38u;
        goto label_10ec38;
    }
    ctx->pc = 0x10EC30u;
    {
        const bool branch_taken_0x10ec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC30u;
        // 0x10ec34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec30) {
            ctx->pc = 0x10ECDCu;
            goto label_10ecdc;
        }
    }
    ctx->pc = 0x10EC38u;
label_10ec38:
    // 0x10ec38: 0x8e460220  lw          $a2, 0x220($s2)
    ctx->pc = 0x10ec38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10ec3c:
    // 0x10ec3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ec40:
    // 0x10ec40: 0x8e440224  lw          $a0, 0x224($s2)
    ctx->pc = 0x10ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_10ec44:
    // 0x10ec44: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10ec48:
    // 0x10ec48: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ec4c:
    // 0x10ec4c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x10ec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_10ec50:
    // 0x10ec50: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x10ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10ec54:
    // 0x10ec54: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10ec58:
    // 0x10ec58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ec5c:
    // 0x10ec5c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ec5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ec60:
    // 0x10ec60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ec64:
    // 0x10ec64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ec68:
    // 0x10ec68: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10ec68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ec6c:
    // 0x10ec6c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10ec6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10ec70:
    // 0x10ec70: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ec70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ec74:
    // 0x10ec74: 0x320f809  jalr        $t9
label_10ec78:
    if (ctx->pc == 0x10EC78u) {
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC7Cu;
        goto label_10ec7c;
    }
    ctx->pc = 0x10EC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EC7Cu);
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC74u, 0x10EC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EC7Cu;
label_10ec7c:
    // 0x10ec7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ec80:
    // 0x10ec80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ec80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ec84:
    // 0x10ec84: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x10ec84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
label_10ec88:
    // 0x10ec88: 0x8e470220  lw          $a3, 0x220($s2)
    ctx->pc = 0x10ec88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10ec8c:
    // 0x10ec8c: 0x8e460224  lw          $a2, 0x224($s2)
    ctx->pc = 0x10ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_10ec90:
    // 0x10ec90: 0x8e440228  lw          $a0, 0x228($s2)
    ctx->pc = 0x10ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_10ec94:
    // 0x10ec94: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10ec98:
    // 0x10ec98: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ec9c:
    // 0x10ec9c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x10ec9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_10eca0:
    // 0x10eca0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x10eca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_10eca4:
    // 0x10eca4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x10eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10eca8:
    // 0x10eca8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10ecac:
    // 0x10ecac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ecb0:
    // 0x10ecb0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ecb4:
    // 0x10ecb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ecb8:
    // 0x10ecb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ecbc:
    // 0x10ecbc: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10ecbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ecc0:
    // 0x10ecc0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10ecc4:
    // 0x10ecc4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ecc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ecc8:
    // 0x10ecc8: 0x320f809  jalr        $t9
label_10eccc:
    if (ctx->pc == 0x10ECCCu) {
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ECD0u;
        goto label_10ecd0;
    }
    ctx->pc = 0x10ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10ECD0u);
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECC8u, 0x10ECD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10ECD0u;
label_10ecd0:
    // 0x10ecd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ecd4:
    // 0x10ecd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10ecd8:
    // 0x10ecd8: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x10ecd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
label_10ecdc:
    // 0x10ecdc: 0x0  nop
    ctx->pc = 0x10ecdcu;
    // NOP
label_10ece0:
    // 0x10ece0: 0x8e430228  lw          $v1, 0x228($s2)
    ctx->pc = 0x10ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_10ece4:
    // 0x10ece4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10ece4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10ece8:
    // 0x10ece8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_10ecec:
    if (ctx->pc == 0x10ECECu) {
        ctx->pc = 0x10ECF0u;
        goto label_10ecf0;
    }
    ctx->pc = 0x10ECE8u;
    {
        const bool branch_taken_0x10ece8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ece8) {
            ctx->pc = 0x10EC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ec38;
        }
    }
    ctx->pc = 0x10ECF0u;
label_10ecf0:
    // 0x10ecf0: 0xae400230  sw          $zero, 0x230($s2)
    ctx->pc = 0x10ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 0));
label_10ecf4:
    // 0x10ecf4: 0xae400234  sw          $zero, 0x234($s2)
    ctx->pc = 0x10ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 0));
label_10ecf8:
    // 0x10ecf8: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x10ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
label_10ecfc:
    // 0x10ecfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10ecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10ed00:
    // 0x10ed00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ed00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10ed04:
    // 0x10ed04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ed04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ed08:
    // 0x10ed08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ed08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10ed0c:
    // 0x10ed0c: 0x3e00008  jr          $ra
label_10ed10:
    if (ctx->pc == 0x10ED10u) {
        ctx->pc = 0x10ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED0Cu;
        // 0x10ed10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED14u;
        goto label_fallthrough_0x10ed0c;
    }
    ctx->pc = 0x10ED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED0Cu;
        // 0x10ed10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ed0c:
    ctx->pc = 0x10ED14u;
}
