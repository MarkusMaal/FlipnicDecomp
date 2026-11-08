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

// Function: FUN_00135ac0
// Address: 0x135ac0 - 0x135b74
void FUN_00135ac0_0x135ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135ac0_0x135ac0");
#endif

    switch (ctx->pc) {
        case 0x135ac0u: goto label_135ac0;
        case 0x135ac4u: goto label_135ac4;
        case 0x135ac8u: goto label_135ac8;
        case 0x135accu: goto label_135acc;
        case 0x135ad0u: goto label_135ad0;
        case 0x135ad4u: goto label_135ad4;
        case 0x135ad8u: goto label_135ad8;
        case 0x135adcu: goto label_135adc;
        case 0x135ae0u: goto label_135ae0;
        case 0x135ae4u: goto label_135ae4;
        case 0x135ae8u: goto label_135ae8;
        case 0x135aecu: goto label_135aec;
        case 0x135af0u: goto label_135af0;
        case 0x135af4u: goto label_135af4;
        case 0x135af8u: goto label_135af8;
        case 0x135afcu: goto label_135afc;
        case 0x135b00u: goto label_135b00;
        case 0x135b04u: goto label_135b04;
        case 0x135b08u: goto label_135b08;
        case 0x135b0cu: goto label_135b0c;
        case 0x135b10u: goto label_135b10;
        case 0x135b14u: goto label_135b14;
        case 0x135b18u: goto label_135b18;
        case 0x135b1cu: goto label_135b1c;
        case 0x135b20u: goto label_135b20;
        case 0x135b24u: goto label_135b24;
        case 0x135b28u: goto label_135b28;
        case 0x135b2cu: goto label_135b2c;
        case 0x135b30u: goto label_135b30;
        case 0x135b34u: goto label_135b34;
        case 0x135b38u: goto label_135b38;
        case 0x135b3cu: goto label_135b3c;
        case 0x135b40u: goto label_135b40;
        case 0x135b44u: goto label_135b44;
        case 0x135b48u: goto label_135b48;
        case 0x135b4cu: goto label_135b4c;
        case 0x135b50u: goto label_135b50;
        case 0x135b54u: goto label_135b54;
        case 0x135b58u: goto label_135b58;
        case 0x135b5cu: goto label_135b5c;
        case 0x135b60u: goto label_135b60;
        case 0x135b64u: goto label_135b64;
        case 0x135b68u: goto label_135b68;
        case 0x135b6cu: goto label_135b6c;
        case 0x135b70u: goto label_135b70;
        default: break;
    }

    ctx->pc = 0x135ac0u;

label_135ac0:
    // 0x135ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_135ac4:
    // 0x135ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_135ac8:
    // 0x135ac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x135ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_135acc:
    // 0x135acc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x135accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_135ad0:
    // 0x135ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135ad4:
    // 0x135ad4: 0xe48c009c  swc1        $f12, 0x9C($a0)
    ctx->pc = 0x135ad4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
label_135ad8:
    // 0x135ad8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x135ad8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_135adc:
    // 0x135adc: 0xc04c554  jal         func_131550
label_135ae0:
    if (ctx->pc == 0x135AE0u) {
        ctx->pc = 0x135AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135ADCu;
        // 0x135ae0: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135AE4u;
        goto label_135ae4;
    }
    ctx->pc = 0x135ADCu;
    SET_GPR_U32(ctx, 31, 0x135AE4u);
    ctx->pc = 0x135AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135ADCu;
    // 0x135ae0: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135ADCu, 0x135AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AE4u;
label_135ae4:
    // 0x135ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135ae8:
    // 0x135ae8: 0xc04c550  jal         func_131540
label_135aec:
    if (ctx->pc == 0x135AECu) {
        ctx->pc = 0x135AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AE8u;
        // 0x135aec: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135AF0u;
        goto label_135af0;
    }
    ctx->pc = 0x135AE8u;
    SET_GPR_U32(ctx, 31, 0x135AF0u);
    ctx->pc = 0x135AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AE8u;
    // 0x135aec: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135AE8u, 0x135AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AF0u;
label_135af0:
    // 0x135af0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x135af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_135af4:
    // 0x135af4: 0xc04c554  jal         func_131550
label_135af8:
    if (ctx->pc == 0x135AF8u) {
        ctx->pc = 0x135AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AF4u;
        // 0x135af8: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135AFCu;
        goto label_135afc;
    }
    ctx->pc = 0x135AF4u;
    SET_GPR_U32(ctx, 31, 0x135AFCu);
    ctx->pc = 0x135AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AF4u;
    // 0x135af8: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135AF4u, 0x135AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AFCu;
label_135afc:
    // 0x135afc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135b00:
    // 0x135b00: 0xc04c54c  jal         func_131530
label_135b04:
    if (ctx->pc == 0x135B04u) {
        ctx->pc = 0x135B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B00u;
        // 0x135b04: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B08u;
        goto label_135b08;
    }
    ctx->pc = 0x135B00u;
    SET_GPR_U32(ctx, 31, 0x135B08u);
    ctx->pc = 0x135B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B00u;
    // 0x135b04: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135B00u, 0x135B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B08u;
label_135b08:
    // 0x135b08: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x135b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_135b0c:
    // 0x135b0c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x135b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_135b10:
    // 0x135b10: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x135b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_135b14:
    // 0x135b14: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x135b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_135b18:
    // 0x135b18: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135b1c:
    // 0x135b1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x135b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_135b20:
    // 0x135b20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135b24:
    // 0x135b24: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_135b28:
    if (ctx->pc == 0x135B28u) {
        ctx->pc = 0x135B2Cu;
        goto label_135b2c;
    }
    ctx->pc = 0x135B24u;
    {
        const bool branch_taken_0x135b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x135b24) {
            ctx->pc = 0x135B5Cu;
            goto label_135b5c;
        }
    }
    ctx->pc = 0x135B2Cu;
label_135b2c:
    // 0x135b2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135b30:
    // 0x135b30: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135b34:
    // 0x135b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135b38:
    // 0x135b38: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x135b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_135b3c:
    // 0x135b3c: 0x320f809  jalr        $t9
label_135b40:
    if (ctx->pc == 0x135B40u) {
        ctx->pc = 0x135B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B3Cu;
        // 0x135b40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B44u;
        goto label_135b44;
    }
    ctx->pc = 0x135B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135B44u);
        ctx->pc = 0x135B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B3Cu;
        // 0x135b40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135B3Cu, 0x135B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135B44u;
label_135b44:
    // 0x135b44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135b48:
    // 0x135b48: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135b4c:
    // 0x135b4c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135b50:
    // 0x135b50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135b54:
    // 0x135b54: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135b58:
    if (ctx->pc == 0x135B58u) {
        ctx->pc = 0x135B5Cu;
        goto label_135b5c;
    }
    ctx->pc = 0x135B54u;
    {
        const bool branch_taken_0x135b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135b54) {
            ctx->pc = 0x135B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135b2c;
        }
    }
    ctx->pc = 0x135B5Cu;
label_135b5c:
    // 0x135b5c: 0x0  nop
    ctx->pc = 0x135b5cu;
    // NOP
label_135b60:
    // 0x135b60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_135b64:
    // 0x135b64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x135b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_135b68:
    // 0x135b68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x135b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_135b6c:
    // 0x135b6c: 0x3e00008  jr          $ra
label_135b70:
    if (ctx->pc == 0x135B70u) {
        ctx->pc = 0x135B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B6Cu;
        // 0x135b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B74u;
        goto label_fallthrough_0x135b6c;
    }
    ctx->pc = 0x135B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B6Cu;
        // 0x135b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135b6c:
    ctx->pc = 0x135B74u;
}
