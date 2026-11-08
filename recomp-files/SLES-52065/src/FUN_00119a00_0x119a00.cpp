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

// Function: FUN_00119a00
// Address: 0x119a00 - 0x119b10
void FUN_00119a00_0x119a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119a00_0x119a00");
#endif

    switch (ctx->pc) {
        case 0x119a00u: goto label_119a00;
        case 0x119a04u: goto label_119a04;
        case 0x119a08u: goto label_119a08;
        case 0x119a0cu: goto label_119a0c;
        case 0x119a10u: goto label_119a10;
        case 0x119a14u: goto label_119a14;
        case 0x119a18u: goto label_119a18;
        case 0x119a1cu: goto label_119a1c;
        case 0x119a20u: goto label_119a20;
        case 0x119a24u: goto label_119a24;
        case 0x119a28u: goto label_119a28;
        case 0x119a2cu: goto label_119a2c;
        case 0x119a30u: goto label_119a30;
        case 0x119a34u: goto label_119a34;
        case 0x119a38u: goto label_119a38;
        case 0x119a3cu: goto label_119a3c;
        case 0x119a40u: goto label_119a40;
        case 0x119a44u: goto label_119a44;
        case 0x119a48u: goto label_119a48;
        case 0x119a4cu: goto label_119a4c;
        case 0x119a50u: goto label_119a50;
        case 0x119a54u: goto label_119a54;
        case 0x119a58u: goto label_119a58;
        case 0x119a5cu: goto label_119a5c;
        case 0x119a60u: goto label_119a60;
        case 0x119a64u: goto label_119a64;
        case 0x119a68u: goto label_119a68;
        case 0x119a6cu: goto label_119a6c;
        case 0x119a70u: goto label_119a70;
        case 0x119a74u: goto label_119a74;
        case 0x119a78u: goto label_119a78;
        case 0x119a7cu: goto label_119a7c;
        case 0x119a80u: goto label_119a80;
        case 0x119a84u: goto label_119a84;
        case 0x119a88u: goto label_119a88;
        case 0x119a8cu: goto label_119a8c;
        case 0x119a90u: goto label_119a90;
        case 0x119a94u: goto label_119a94;
        case 0x119a98u: goto label_119a98;
        case 0x119a9cu: goto label_119a9c;
        case 0x119aa0u: goto label_119aa0;
        case 0x119aa4u: goto label_119aa4;
        case 0x119aa8u: goto label_119aa8;
        case 0x119aacu: goto label_119aac;
        case 0x119ab0u: goto label_119ab0;
        case 0x119ab4u: goto label_119ab4;
        case 0x119ab8u: goto label_119ab8;
        case 0x119abcu: goto label_119abc;
        case 0x119ac0u: goto label_119ac0;
        case 0x119ac4u: goto label_119ac4;
        case 0x119ac8u: goto label_119ac8;
        case 0x119accu: goto label_119acc;
        case 0x119ad0u: goto label_119ad0;
        case 0x119ad4u: goto label_119ad4;
        case 0x119ad8u: goto label_119ad8;
        case 0x119adcu: goto label_119adc;
        case 0x119ae0u: goto label_119ae0;
        case 0x119ae4u: goto label_119ae4;
        case 0x119ae8u: goto label_119ae8;
        case 0x119aecu: goto label_119aec;
        case 0x119af0u: goto label_119af0;
        case 0x119af4u: goto label_119af4;
        case 0x119af8u: goto label_119af8;
        case 0x119afcu: goto label_119afc;
        case 0x119b00u: goto label_119b00;
        case 0x119b04u: goto label_119b04;
        case 0x119b08u: goto label_119b08;
        case 0x119b0cu: goto label_119b0c;
        default: break;
    }

    ctx->pc = 0x119a00u;

label_119a00:
    // 0x119a00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_119a04:
    // 0x119a04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x119a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_119a08:
    // 0x119a08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x119a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_119a0c:
    // 0x119a0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x119a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_119a10:
    // 0x119a10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x119a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119a14:
    // 0x119a14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x119a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_119a18:
    // 0x119a18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x119a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_119a1c:
    // 0x119a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x119a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_119a20:
    // 0x119a20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_119a24:
    // 0x119a24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x119a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_119a28:
    // 0x119a28: 0xc0548c8  jal         func_152320
label_119a2c:
    if (ctx->pc == 0x119A2Cu) {
        ctx->pc = 0x119A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A28u;
        // 0x119a2c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A30u;
        goto label_119a30;
    }
    ctx->pc = 0x119A28u;
    SET_GPR_U32(ctx, 31, 0x119A30u);
    ctx->pc = 0x119A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A28u;
    // 0x119a2c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x152320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152320u, 0x119A28u, 0x119A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A30u;
label_119a30:
    // 0x119a30: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x119a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_119a34:
    // 0x119a34: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x119a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_119a38:
    // 0x119a38: 0x90630022  lbu         $v1, 0x22($v1)
    ctx->pc = 0x119a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_119a3c:
    // 0x119a3c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x119a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_119a40:
    // 0x119a40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_119a44:
    if (ctx->pc == 0x119A44u) {
        ctx->pc = 0x119A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A40u;
        // 0x119a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A48u;
        goto label_119a48;
    }
    ctx->pc = 0x119A40u;
    {
        const bool branch_taken_0x119a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A40u;
        // 0x119a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a40) {
            ctx->pc = 0x119A50u;
            goto label_119a50;
        }
    }
    ctx->pc = 0x119A48u;
label_119a48:
    // 0x119a48: 0x1000001e  b           . + 4 + (0x1E << 2)
label_119a4c:
    if (ctx->pc == 0x119A4Cu) {
        ctx->pc = 0x119A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A48u;
        // 0x119a4c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A50u;
        goto label_119a50;
    }
    ctx->pc = 0x119A48u;
    {
        const bool branch_taken_0x119a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A48u;
        // 0x119a4c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a48) {
            ctx->pc = 0x119AC4u;
            goto label_119ac4;
        }
    }
    ctx->pc = 0x119A50u;
label_119a50:
    // 0x119a50: 0xc046594  jal         func_119650
label_119a54:
    if (ctx->pc == 0x119A54u) {
        ctx->pc = 0x119A58u;
        goto label_119a58;
    }
    ctx->pc = 0x119A50u;
    SET_GPR_U32(ctx, 31, 0x119A58u);
    ctx->pc = 0x119650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119650u, 0x119A50u, 0x119A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A58u;
label_119a58:
    // 0x119a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119a5c:
    // 0x119a5c: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_119a60:
    // 0x119a60: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119a64:
    // 0x119a64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119a68:
    // 0x119a68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119a6c:
    // 0x119a6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119a70:
    // 0x119a70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x119a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119a74:
    // 0x119a74: 0x320f809  jalr        $t9
label_119a78:
    if (ctx->pc == 0x119A78u) {
        ctx->pc = 0x119A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A74u;
        // 0x119a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A7Cu;
        goto label_119a7c;
    }
    ctx->pc = 0x119A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119A7Cu);
        ctx->pc = 0x119A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A74u;
        // 0x119a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A74u, 0x119A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119A7Cu;
label_119a7c:
    // 0x119a7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119a80:
    // 0x119a80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119a84:
    // 0x119a84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119a88:
    // 0x119a88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119a8c:
    // 0x119a8c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_119a90:
    // 0x119a90: 0x320f809  jalr        $t9
label_119a94:
    if (ctx->pc == 0x119A94u) {
        ctx->pc = 0x119A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A90u;
        // 0x119a94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A98u;
        goto label_119a98;
    }
    ctx->pc = 0x119A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119A98u);
        ctx->pc = 0x119A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A90u;
        // 0x119a94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A90u, 0x119A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119A98u;
label_119a98:
    // 0x119a98: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_119a9c:
    if (ctx->pc == 0x119A9Cu) {
        ctx->pc = 0x119AA0u;
        goto label_119aa0;
    }
    ctx->pc = 0x119A98u;
    {
        const bool branch_taken_0x119a98 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x119a98) {
            ctx->pc = 0x119AC0u;
            goto label_119ac0;
        }
    }
    ctx->pc = 0x119AA0u;
label_119aa0:
    // 0x119aa0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119aa4:
    // 0x119aa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_119aa8:
    // 0x119aa8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119aac:
    // 0x119aac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119ab0:
    // 0x119ab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119ab4:
    // 0x119ab4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_119ab8:
    // 0x119ab8: 0x320f809  jalr        $t9
label_119abc:
    if (ctx->pc == 0x119ABCu) {
        ctx->pc = 0x119ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AB8u;
        // 0x119abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119AC0u;
        goto label_119ac0;
    }
    ctx->pc = 0x119AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119AC0u);
        ctx->pc = 0x119ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AB8u;
        // 0x119abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119AB8u, 0x119AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119AC0u;
label_119ac0:
    // 0x119ac0: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x119ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
label_119ac4:
    // 0x119ac4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x119ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_119ac8:
    // 0x119ac8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119acc:
    // 0x119acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x119accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_119ad0:
    // 0x119ad0: 0x0  nop
    ctx->pc = 0x119ad0u;
    // NOP
label_119ad4:
    // 0x119ad4: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x119ad4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_119ad8:
    // 0x119ad8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x119ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_119adc:
    // 0x119adc: 0x0  nop
    ctx->pc = 0x119adcu;
    // NOP
label_119ae0:
    // 0x119ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119ae4:
    // 0x119ae4: 0xc04c730  jal         func_131CC0
label_119ae8:
    if (ctx->pc == 0x119AE8u) {
        ctx->pc = 0x119AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AE4u;
        // 0x119ae8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119AECu;
        goto label_119aec;
    }
    ctx->pc = 0x119AE4u;
    SET_GPR_U32(ctx, 31, 0x119AECu);
    ctx->pc = 0x119AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AE4u;
    // 0x119ae8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x119AE4u, 0x119AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AECu;
label_119aec:
    // 0x119aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119af0:
    // 0x119af0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x119af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_119af4:
    // 0x119af4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x119af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_119af8:
    // 0x119af8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x119af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_119afc:
    // 0x119afc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x119afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_119b00:
    // 0x119b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x119b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119b04:
    // 0x119b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x119b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119b08:
    // 0x119b08: 0x3e00008  jr          $ra
label_119b0c:
    if (ctx->pc == 0x119B0Cu) {
        ctx->pc = 0x119B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B08u;
        // 0x119b0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119B10u;
        goto label_fallthrough_0x119b08;
    }
    ctx->pc = 0x119B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B08u;
        // 0x119b0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119b08:
    ctx->pc = 0x119B10u;
}
