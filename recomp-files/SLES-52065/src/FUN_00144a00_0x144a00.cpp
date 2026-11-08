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

// Function: FUN_00144a00
// Address: 0x144a00 - 0x144b04
void FUN_00144a00_0x144a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144a00_0x144a00");
#endif

    switch (ctx->pc) {
        case 0x144a00u: goto label_144a00;
        case 0x144a04u: goto label_144a04;
        case 0x144a08u: goto label_144a08;
        case 0x144a0cu: goto label_144a0c;
        case 0x144a10u: goto label_144a10;
        case 0x144a14u: goto label_144a14;
        case 0x144a18u: goto label_144a18;
        case 0x144a1cu: goto label_144a1c;
        case 0x144a20u: goto label_144a20;
        case 0x144a24u: goto label_144a24;
        case 0x144a28u: goto label_144a28;
        case 0x144a2cu: goto label_144a2c;
        case 0x144a30u: goto label_144a30;
        case 0x144a34u: goto label_144a34;
        case 0x144a38u: goto label_144a38;
        case 0x144a3cu: goto label_144a3c;
        case 0x144a40u: goto label_144a40;
        case 0x144a44u: goto label_144a44;
        case 0x144a48u: goto label_144a48;
        case 0x144a4cu: goto label_144a4c;
        case 0x144a50u: goto label_144a50;
        case 0x144a54u: goto label_144a54;
        case 0x144a58u: goto label_144a58;
        case 0x144a5cu: goto label_144a5c;
        case 0x144a60u: goto label_144a60;
        case 0x144a64u: goto label_144a64;
        case 0x144a68u: goto label_144a68;
        case 0x144a6cu: goto label_144a6c;
        case 0x144a70u: goto label_144a70;
        case 0x144a74u: goto label_144a74;
        case 0x144a78u: goto label_144a78;
        case 0x144a7cu: goto label_144a7c;
        case 0x144a80u: goto label_144a80;
        case 0x144a84u: goto label_144a84;
        case 0x144a88u: goto label_144a88;
        case 0x144a8cu: goto label_144a8c;
        case 0x144a90u: goto label_144a90;
        case 0x144a94u: goto label_144a94;
        case 0x144a98u: goto label_144a98;
        case 0x144a9cu: goto label_144a9c;
        case 0x144aa0u: goto label_144aa0;
        case 0x144aa4u: goto label_144aa4;
        case 0x144aa8u: goto label_144aa8;
        case 0x144aacu: goto label_144aac;
        case 0x144ab0u: goto label_144ab0;
        case 0x144ab4u: goto label_144ab4;
        case 0x144ab8u: goto label_144ab8;
        case 0x144abcu: goto label_144abc;
        case 0x144ac0u: goto label_144ac0;
        case 0x144ac4u: goto label_144ac4;
        case 0x144ac8u: goto label_144ac8;
        case 0x144accu: goto label_144acc;
        case 0x144ad0u: goto label_144ad0;
        case 0x144ad4u: goto label_144ad4;
        case 0x144ad8u: goto label_144ad8;
        case 0x144adcu: goto label_144adc;
        case 0x144ae0u: goto label_144ae0;
        case 0x144ae4u: goto label_144ae4;
        case 0x144ae8u: goto label_144ae8;
        case 0x144aecu: goto label_144aec;
        case 0x144af0u: goto label_144af0;
        case 0x144af4u: goto label_144af4;
        case 0x144af8u: goto label_144af8;
        case 0x144afcu: goto label_144afc;
        case 0x144b00u: goto label_144b00;
        default: break;
    }

    ctx->pc = 0x144a00u;

label_144a00:
    // 0x144a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x144a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_144a04:
    // 0x144a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_144a08:
    // 0x144a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_144a0c:
    // 0x144a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_144a10:
    // 0x144a10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_144a14:
    // 0x144a14: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x144a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_144a18:
    // 0x144a18: 0xc04c554  jal         func_131550
label_144a1c:
    if (ctx->pc == 0x144A1Cu) {
        ctx->pc = 0x144A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A18u;
        // 0x144a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A20u;
        goto label_144a20;
    }
    ctx->pc = 0x144A18u;
    SET_GPR_U32(ctx, 31, 0x144A20u);
    ctx->pc = 0x144A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A18u;
    // 0x144a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x144A18u, 0x144A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A20u;
label_144a20:
    // 0x144a20: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x144a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_144a24:
    // 0x144a24: 0xc04c54c  jal         func_131530
label_144a28:
    if (ctx->pc == 0x144A28u) {
        ctx->pc = 0x144A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A24u;
        // 0x144a28: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A2Cu;
        goto label_144a2c;
    }
    ctx->pc = 0x144A24u;
    SET_GPR_U32(ctx, 31, 0x144A2Cu);
    ctx->pc = 0x144A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A24u;
    // 0x144a28: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x144A24u, 0x144A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A2Cu;
label_144a2c:
    // 0x144a2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x144a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_144a30:
    // 0x144a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144a34:
    // 0x144a34: 0xc04c554  jal         func_131550
label_144a38:
    if (ctx->pc == 0x144A38u) {
        ctx->pc = 0x144A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A34u;
        // 0x144a38: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A3Cu;
        goto label_144a3c;
    }
    ctx->pc = 0x144A34u;
    SET_GPR_U32(ctx, 31, 0x144A3Cu);
    ctx->pc = 0x144A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A34u;
    // 0x144a38: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x144A34u, 0x144A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A3Cu;
label_144a3c:
    // 0x144a3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a40:
    // 0x144a40: 0xc04c550  jal         func_131540
label_144a44:
    if (ctx->pc == 0x144A44u) {
        ctx->pc = 0x144A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A40u;
        // 0x144a44: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A48u;
        goto label_144a48;
    }
    ctx->pc = 0x144A40u;
    SET_GPR_U32(ctx, 31, 0x144A48u);
    ctx->pc = 0x144A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A40u;
    // 0x144a44: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x144A40u, 0x144A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A48u;
label_144a48:
    // 0x144a48: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x144a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_144a4c:
    // 0x144a4c: 0x8fb0005c  lw          $s0, 0x5C($sp)
    ctx->pc = 0x144a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_144a50:
    // 0x144a50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x144a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_144a54:
    // 0x144a54: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x144a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_144a58:
    // 0x144a58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x144a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_144a5c:
    // 0x144a5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_144a60:
    // 0x144a60: 0x1050000f  beq         $v0, $s0, . + 4 + (0xF << 2)
label_144a64:
    if (ctx->pc == 0x144A64u) {
        ctx->pc = 0x144A68u;
        goto label_144a68;
    }
    ctx->pc = 0x144A60u;
    {
        const bool branch_taken_0x144a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x144a60) {
            ctx->pc = 0x144AA0u;
            goto label_144aa0;
        }
    }
    ctx->pc = 0x144A68u;
label_144a68:
    // 0x144a68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_144a6c:
    // 0x144a6c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x144a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_144a70:
    // 0x144a70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_144a74:
    if (ctx->pc == 0x144A74u) {
        ctx->pc = 0x144A78u;
        goto label_144a78;
    }
    ctx->pc = 0x144A70u;
    {
        const bool branch_taken_0x144a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a70) {
            ctx->pc = 0x144A88u;
            goto label_144a88;
        }
    }
    ctx->pc = 0x144A78u;
label_144a78:
    // 0x144a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x144a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_144a7c:
    // 0x144a7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x144a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_144a80:
    // 0x144a80: 0x320f809  jalr        $t9
label_144a84:
    if (ctx->pc == 0x144A84u) {
        ctx->pc = 0x144A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A80u;
        // 0x144a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A88u;
        goto label_144a88;
    }
    ctx->pc = 0x144A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x144A88u);
        ctx->pc = 0x144A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A80u;
        // 0x144a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144A80u, 0x144A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144A88u;
label_144a88:
    // 0x144a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_144a8c:
    // 0x144a8c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x144a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_144a90:
    // 0x144a90: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x144a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_144a94:
    // 0x144a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_144a98:
    // 0x144a98: 0x1450fff3  bne         $v0, $s0, . + 4 + (-0xD << 2)
label_144a9c:
    if (ctx->pc == 0x144A9Cu) {
        ctx->pc = 0x144AA0u;
        goto label_144aa0;
    }
    ctx->pc = 0x144A98u;
    {
        const bool branch_taken_0x144a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x144a98) {
            ctx->pc = 0x144A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144a68;
        }
    }
    ctx->pc = 0x144AA0u;
label_144aa0:
    // 0x144aa0: 0x8e2501a0  lw          $a1, 0x1A0($s1)
    ctx->pc = 0x144aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_144aa4:
    // 0x144aa4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x144aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_144aa8:
    // 0x144aa8: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_144aac:
    // 0x144aac: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x144aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_144ab0:
    // 0x144ab0: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x144ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_144ab4:
    // 0x144ab4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x144ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_144ab8:
    // 0x144ab8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x144ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_144abc:
    // 0x144abc: 0xc0514b8  jal         func_1452E0
label_144ac0:
    if (ctx->pc == 0x144AC0u) {
        ctx->pc = 0x144AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144ABCu;
        // 0x144ac0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AC4u;
        goto label_144ac4;
    }
    ctx->pc = 0x144ABCu;
    SET_GPR_U32(ctx, 31, 0x144AC4u);
    ctx->pc = 0x144AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144ABCu;
    // 0x144ac0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452E0u, 0x144ABCu, 0x144AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AC4u;
label_144ac4:
    // 0x144ac4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x144ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_144ac8:
    // 0x144ac8: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x144ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_144acc:
    // 0x144acc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x144accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_144ad0:
    // 0x144ad0: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x144ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_144ad4:
    // 0x144ad4: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x144ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_144ad8:
    // 0x144ad8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x144ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_144adc:
    // 0x144adc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x144adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_144ae0:
    // 0x144ae0: 0xc04c8f0  jal         func_1323C0
label_144ae4:
    if (ctx->pc == 0x144AE4u) {
        ctx->pc = 0x144AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AE0u;
        // 0x144ae4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AE8u;
        goto label_144ae8;
    }
    ctx->pc = 0x144AE0u;
    SET_GPR_U32(ctx, 31, 0x144AE8u);
    ctx->pc = 0x144AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AE0u;
    // 0x144ae4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323C0u, 0x144AE0u, 0x144AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AE8u;
label_144ae8:
    // 0x144ae8: 0xc04d0d8  jal         func_134360
label_144aec:
    if (ctx->pc == 0x144AECu) {
        ctx->pc = 0x144AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AE8u;
        // 0x144aec: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AF0u;
        goto label_144af0;
    }
    ctx->pc = 0x144AE8u;
    SET_GPR_U32(ctx, 31, 0x144AF0u);
    ctx->pc = 0x144AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AE8u;
    // 0x144aec: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134360u, 0x144AE8u, 0x144AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AF0u;
label_144af0:
    // 0x144af0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144af4:
    // 0x144af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_144af8:
    // 0x144af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_144afc:
    // 0x144afc: 0x3e00008  jr          $ra
label_144b00:
    if (ctx->pc == 0x144B00u) {
        ctx->pc = 0x144B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AFCu;
        // 0x144b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B04u;
        goto label_fallthrough_0x144afc;
    }
    ctx->pc = 0x144AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AFCu;
        // 0x144b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144afc:
    ctx->pc = 0x144B04u;
}
