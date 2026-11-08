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

// Function: FUN_00111a00
// Address: 0x111a00 - 0x111b40
void FUN_00111a00_0x111a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111a00_0x111a00");
#endif

    switch (ctx->pc) {
        case 0x111a00u: goto label_111a00;
        case 0x111a04u: goto label_111a04;
        case 0x111a08u: goto label_111a08;
        case 0x111a0cu: goto label_111a0c;
        case 0x111a10u: goto label_111a10;
        case 0x111a14u: goto label_111a14;
        case 0x111a18u: goto label_111a18;
        case 0x111a1cu: goto label_111a1c;
        case 0x111a20u: goto label_111a20;
        case 0x111a24u: goto label_111a24;
        case 0x111a28u: goto label_111a28;
        case 0x111a2cu: goto label_111a2c;
        case 0x111a30u: goto label_111a30;
        case 0x111a34u: goto label_111a34;
        case 0x111a38u: goto label_111a38;
        case 0x111a3cu: goto label_111a3c;
        case 0x111a40u: goto label_111a40;
        case 0x111a44u: goto label_111a44;
        case 0x111a48u: goto label_111a48;
        case 0x111a4cu: goto label_111a4c;
        case 0x111a50u: goto label_111a50;
        case 0x111a54u: goto label_111a54;
        case 0x111a58u: goto label_111a58;
        case 0x111a5cu: goto label_111a5c;
        case 0x111a60u: goto label_111a60;
        case 0x111a64u: goto label_111a64;
        case 0x111a68u: goto label_111a68;
        case 0x111a6cu: goto label_111a6c;
        case 0x111a70u: goto label_111a70;
        case 0x111a74u: goto label_111a74;
        case 0x111a78u: goto label_111a78;
        case 0x111a7cu: goto label_111a7c;
        case 0x111a80u: goto label_111a80;
        case 0x111a84u: goto label_111a84;
        case 0x111a88u: goto label_111a88;
        case 0x111a8cu: goto label_111a8c;
        case 0x111a90u: goto label_111a90;
        case 0x111a94u: goto label_111a94;
        case 0x111a98u: goto label_111a98;
        case 0x111a9cu: goto label_111a9c;
        case 0x111aa0u: goto label_111aa0;
        case 0x111aa4u: goto label_111aa4;
        case 0x111aa8u: goto label_111aa8;
        case 0x111aacu: goto label_111aac;
        case 0x111ab0u: goto label_111ab0;
        case 0x111ab4u: goto label_111ab4;
        case 0x111ab8u: goto label_111ab8;
        case 0x111abcu: goto label_111abc;
        case 0x111ac0u: goto label_111ac0;
        case 0x111ac4u: goto label_111ac4;
        case 0x111ac8u: goto label_111ac8;
        case 0x111accu: goto label_111acc;
        case 0x111ad0u: goto label_111ad0;
        case 0x111ad4u: goto label_111ad4;
        case 0x111ad8u: goto label_111ad8;
        case 0x111adcu: goto label_111adc;
        case 0x111ae0u: goto label_111ae0;
        case 0x111ae4u: goto label_111ae4;
        case 0x111ae8u: goto label_111ae8;
        case 0x111aecu: goto label_111aec;
        case 0x111af0u: goto label_111af0;
        case 0x111af4u: goto label_111af4;
        case 0x111af8u: goto label_111af8;
        case 0x111afcu: goto label_111afc;
        case 0x111b00u: goto label_111b00;
        case 0x111b04u: goto label_111b04;
        case 0x111b08u: goto label_111b08;
        case 0x111b0cu: goto label_111b0c;
        case 0x111b10u: goto label_111b10;
        case 0x111b14u: goto label_111b14;
        case 0x111b18u: goto label_111b18;
        case 0x111b1cu: goto label_111b1c;
        case 0x111b20u: goto label_111b20;
        case 0x111b24u: goto label_111b24;
        case 0x111b28u: goto label_111b28;
        case 0x111b2cu: goto label_111b2c;
        case 0x111b30u: goto label_111b30;
        case 0x111b34u: goto label_111b34;
        case 0x111b38u: goto label_111b38;
        case 0x111b3cu: goto label_111b3c;
        default: break;
    }

    ctx->pc = 0x111a00u;

label_111a00:
    // 0x111a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_111a04:
    // 0x111a04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x111a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_111a08:
    // 0x111a08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x111a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_111a0c:
    // 0x111a0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x111a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_111a10:
    // 0x111a10: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x111a10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_111a14:
    // 0x111a14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_111a18:
    // 0x111a18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111a1c:
    // 0x111a1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_111a20:
    // 0x111a20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_111a24:
    // 0x111a24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x111a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_111a28:
    // 0x111a28: 0x1000000e  b           . + 4 + (0xE << 2)
label_111a2c:
    if (ctx->pc == 0x111A2Cu) {
        ctx->pc = 0x111A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A28u;
        // 0x111a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A30u;
        goto label_111a30;
    }
    ctx->pc = 0x111A28u;
    {
        const bool branch_taken_0x111a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A28u;
        // 0x111a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a28) {
            ctx->pc = 0x111A64u;
            goto label_111a64;
        }
    }
    ctx->pc = 0x111A30u;
label_111a30:
    // 0x111a30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x111a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111a34:
    // 0x111a34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_111a38:
    // 0x111a38: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x111a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111a3c:
    // 0x111a3c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x111a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_111a40:
    // 0x111a40: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x111a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_111a44:
    // 0x111a44: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x111a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_111a48:
    // 0x111a48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x111a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_111a4c:
    // 0x111a4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x111a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_111a50:
    // 0x111a50: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x111a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_111a54:
    // 0x111a54: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x111a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
label_111a58:
    // 0x111a58: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x111a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_111a5c:
    // 0x111a5c: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x111a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
label_111a60:
    // 0x111a60: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x111a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_111a64:
    // 0x111a64: 0x0  nop
    ctx->pc = 0x111a64u;
    // NOP
label_111a68:
    // 0x111a68: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_111a6c:
    // 0x111a6c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x111a6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_111a70:
    // 0x111a70: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_111a74:
    if (ctx->pc == 0x111A74u) {
        ctx->pc = 0x111A78u;
        goto label_111a78;
    }
    ctx->pc = 0x111A70u;
    {
        const bool branch_taken_0x111a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111a70) {
            ctx->pc = 0x111A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111a30;
        }
    }
    ctx->pc = 0x111A78u;
label_111a78:
    // 0x111a78: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_111a7c:
    // 0x111a7c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x111a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_111a80:
    // 0x111a80: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_111a84:
    if (ctx->pc == 0x111A84u) {
        ctx->pc = 0x111A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A80u;
        // 0x111a84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A88u;
        goto label_111a88;
    }
    ctx->pc = 0x111A80u;
    {
        const bool branch_taken_0x111a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A80u;
        // 0x111a84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a80) {
            ctx->pc = 0x111AD0u;
            goto label_111ad0;
        }
    }
    ctx->pc = 0x111A88u;
label_111a88:
    // 0x111a88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x111a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111a8c:
    // 0x111a8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x111a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111a90:
    // 0x111a90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_111a94:
    // 0x111a94: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111a98:
    // 0x111a98: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x111a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_111a9c:
    // 0x111a9c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_111aa0:
    // 0x111aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_111aa4:
    // 0x111aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111aa8:
    // 0x111aa8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_111aac:
    // 0x111aac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x111aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_111ab0:
    // 0x111ab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x111ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_111ab4:
    // 0x111ab4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x111ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_111ab8:
    // 0x111ab8: 0x320f809  jalr        $t9
label_111abc:
    if (ctx->pc == 0x111ABCu) {
        ctx->pc = 0x111ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB8u;
        // 0x111abc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AC0u;
        goto label_111ac0;
    }
    ctx->pc = 0x111AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x111AC0u);
        ctx->pc = 0x111ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB8u;
        // 0x111abc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111AB8u, 0x111AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111AC0u;
label_111ac0:
    // 0x111ac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111ac4:
    // 0x111ac4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x111ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_111ac8:
    // 0x111ac8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_111acc:
    if (ctx->pc == 0x111ACCu) {
        ctx->pc = 0x111ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AC8u;
        // 0x111acc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AD0u;
        goto label_111ad0;
    }
    ctx->pc = 0x111AC8u;
    {
        const bool branch_taken_0x111ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AC8u;
        // 0x111acc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ac8) {
            ctx->pc = 0x111A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111a8c;
        }
    }
    ctx->pc = 0x111AD0u;
label_111ad0:
    // 0x111ad0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x111ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111ad4:
    // 0x111ad4: 0x1000000d  b           . + 4 + (0xD << 2)
label_111ad8:
    if (ctx->pc == 0x111AD8u) {
        ctx->pc = 0x111AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD4u;
        // 0x111ad8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111ADCu;
        goto label_111adc;
    }
    ctx->pc = 0x111AD4u;
    {
        const bool branch_taken_0x111ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD4u;
        // 0x111ad8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ad4) {
            ctx->pc = 0x111B0Cu;
            goto label_111b0c;
        }
    }
    ctx->pc = 0x111ADCu;
label_111adc:
    // 0x111adc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x111adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111ae0:
    // 0x111ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111ae4:
    // 0x111ae4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111ae8:
    // 0x111ae8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x111ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_111aec:
    // 0x111aec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111aecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_111af0:
    // 0x111af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_111af4:
    // 0x111af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111af8:
    // 0x111af8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_111afc:
    // 0x111afc: 0xc043da0  jal         func_10F680
label_111b00:
    if (ctx->pc == 0x111B00u) {
        ctx->pc = 0x111B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AFCu;
        // 0x111b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B04u;
        goto label_111b04;
    }
    ctx->pc = 0x111AFCu;
    SET_GPR_U32(ctx, 31, 0x111B04u);
    ctx->pc = 0x111B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AFCu;
    // 0x111b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x111AFCu, 0x111B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B04u;
label_111b04:
    // 0x111b04: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x111b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_111b08:
    // 0x111b08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111b0c:
    // 0x111b0c: 0x0  nop
    ctx->pc = 0x111b0cu;
    // NOP
label_111b10:
    // 0x111b10: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_111b14:
    // 0x111b14: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x111b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_111b18:
    // 0x111b18: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_111b1c:
    if (ctx->pc == 0x111B1Cu) {
        ctx->pc = 0x111B20u;
        goto label_111b20;
    }
    ctx->pc = 0x111B18u;
    {
        const bool branch_taken_0x111b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111b18) {
            ctx->pc = 0x111ADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111adc;
        }
    }
    ctx->pc = 0x111B20u;
label_111b20:
    // 0x111b20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_111b24:
    // 0x111b24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x111b24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_111b28:
    // 0x111b28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_111b2c:
    // 0x111b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111b30:
    // 0x111b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111b34:
    // 0x111b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_111b38:
    // 0x111b38: 0x3e00008  jr          $ra
label_111b3c:
    if (ctx->pc == 0x111B3Cu) {
        ctx->pc = 0x111B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B38u;
        // 0x111b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B40u;
        goto label_fallthrough_0x111b38;
    }
    ctx->pc = 0x111B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B38u;
        // 0x111b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x111b38:
    ctx->pc = 0x111B40u;
}
