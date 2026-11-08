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

// Function: FUN_0010ad80
// Address: 0x10ad80 - 0x10af14
void FUN_0010ad80_0x10ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ad80_0x10ad80");
#endif

    switch (ctx->pc) {
        case 0x10ad80u: goto label_10ad80;
        case 0x10ad84u: goto label_10ad84;
        case 0x10ad88u: goto label_10ad88;
        case 0x10ad8cu: goto label_10ad8c;
        case 0x10ad90u: goto label_10ad90;
        case 0x10ad94u: goto label_10ad94;
        case 0x10ad98u: goto label_10ad98;
        case 0x10ad9cu: goto label_10ad9c;
        case 0x10ada0u: goto label_10ada0;
        case 0x10ada4u: goto label_10ada4;
        case 0x10ada8u: goto label_10ada8;
        case 0x10adacu: goto label_10adac;
        case 0x10adb0u: goto label_10adb0;
        case 0x10adb4u: goto label_10adb4;
        case 0x10adb8u: goto label_10adb8;
        case 0x10adbcu: goto label_10adbc;
        case 0x10adc0u: goto label_10adc0;
        case 0x10adc4u: goto label_10adc4;
        case 0x10adc8u: goto label_10adc8;
        case 0x10adccu: goto label_10adcc;
        case 0x10add0u: goto label_10add0;
        case 0x10add4u: goto label_10add4;
        case 0x10add8u: goto label_10add8;
        case 0x10addcu: goto label_10addc;
        case 0x10ade0u: goto label_10ade0;
        case 0x10ade4u: goto label_10ade4;
        case 0x10ade8u: goto label_10ade8;
        case 0x10adecu: goto label_10adec;
        case 0x10adf0u: goto label_10adf0;
        case 0x10adf4u: goto label_10adf4;
        case 0x10adf8u: goto label_10adf8;
        case 0x10adfcu: goto label_10adfc;
        case 0x10ae00u: goto label_10ae00;
        case 0x10ae04u: goto label_10ae04;
        case 0x10ae08u: goto label_10ae08;
        case 0x10ae0cu: goto label_10ae0c;
        case 0x10ae10u: goto label_10ae10;
        case 0x10ae14u: goto label_10ae14;
        case 0x10ae18u: goto label_10ae18;
        case 0x10ae1cu: goto label_10ae1c;
        case 0x10ae20u: goto label_10ae20;
        case 0x10ae24u: goto label_10ae24;
        case 0x10ae28u: goto label_10ae28;
        case 0x10ae2cu: goto label_10ae2c;
        case 0x10ae30u: goto label_10ae30;
        case 0x10ae34u: goto label_10ae34;
        case 0x10ae38u: goto label_10ae38;
        case 0x10ae3cu: goto label_10ae3c;
        case 0x10ae40u: goto label_10ae40;
        case 0x10ae44u: goto label_10ae44;
        case 0x10ae48u: goto label_10ae48;
        case 0x10ae4cu: goto label_10ae4c;
        case 0x10ae50u: goto label_10ae50;
        case 0x10ae54u: goto label_10ae54;
        case 0x10ae58u: goto label_10ae58;
        case 0x10ae5cu: goto label_10ae5c;
        case 0x10ae60u: goto label_10ae60;
        case 0x10ae64u: goto label_10ae64;
        case 0x10ae68u: goto label_10ae68;
        case 0x10ae6cu: goto label_10ae6c;
        case 0x10ae70u: goto label_10ae70;
        case 0x10ae74u: goto label_10ae74;
        case 0x10ae78u: goto label_10ae78;
        case 0x10ae7cu: goto label_10ae7c;
        case 0x10ae80u: goto label_10ae80;
        case 0x10ae84u: goto label_10ae84;
        case 0x10ae88u: goto label_10ae88;
        case 0x10ae8cu: goto label_10ae8c;
        case 0x10ae90u: goto label_10ae90;
        case 0x10ae94u: goto label_10ae94;
        case 0x10ae98u: goto label_10ae98;
        case 0x10ae9cu: goto label_10ae9c;
        case 0x10aea0u: goto label_10aea0;
        case 0x10aea4u: goto label_10aea4;
        case 0x10aea8u: goto label_10aea8;
        case 0x10aeacu: goto label_10aeac;
        case 0x10aeb0u: goto label_10aeb0;
        case 0x10aeb4u: goto label_10aeb4;
        case 0x10aeb8u: goto label_10aeb8;
        case 0x10aebcu: goto label_10aebc;
        case 0x10aec0u: goto label_10aec0;
        case 0x10aec4u: goto label_10aec4;
        case 0x10aec8u: goto label_10aec8;
        case 0x10aeccu: goto label_10aecc;
        case 0x10aed0u: goto label_10aed0;
        case 0x10aed4u: goto label_10aed4;
        case 0x10aed8u: goto label_10aed8;
        case 0x10aedcu: goto label_10aedc;
        case 0x10aee0u: goto label_10aee0;
        case 0x10aee4u: goto label_10aee4;
        case 0x10aee8u: goto label_10aee8;
        case 0x10aeecu: goto label_10aeec;
        case 0x10aef0u: goto label_10aef0;
        case 0x10aef4u: goto label_10aef4;
        case 0x10aef8u: goto label_10aef8;
        case 0x10aefcu: goto label_10aefc;
        case 0x10af00u: goto label_10af00;
        case 0x10af04u: goto label_10af04;
        case 0x10af08u: goto label_10af08;
        case 0x10af0cu: goto label_10af0c;
        case 0x10af10u: goto label_10af10;
        default: break;
    }

    ctx->pc = 0x10ad80u;

label_10ad80:
    // 0x10ad80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10ad84:
    // 0x10ad84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10ad88:
    // 0x10ad88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10ad8c:
    // 0x10ad8c: 0xc0430c4  jal         func_10C310
label_10ad90:
    if (ctx->pc == 0x10AD90u) {
        ctx->pc = 0x10AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD8Cu;
        // 0x10ad90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD94u;
        goto label_10ad94;
    }
    ctx->pc = 0x10AD8Cu;
    SET_GPR_U32(ctx, 31, 0x10AD94u);
    ctx->pc = 0x10AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD8Cu;
    // 0x10ad90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C310u, 0x10AD8Cu, 0x10AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD94u;
label_10ad94:
    // 0x10ad94: 0xc042bf0  jal         func_10AFC0
label_10ad98:
    if (ctx->pc == 0x10AD98u) {
        ctx->pc = 0x10AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD94u;
        // 0x10ad98: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD9Cu;
        goto label_10ad9c;
    }
    ctx->pc = 0x10AD94u;
    SET_GPR_U32(ctx, 31, 0x10AD9Cu);
    ctx->pc = 0x10AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD94u;
    // 0x10ad98: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AFC0u, 0x10AD94u, 0x10AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD9Cu;
label_10ad9c:
    // 0x10ad9c: 0xae002320  sw          $zero, 0x2320($s0)
    ctx->pc = 0x10ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8992), GPR_U32(ctx, 0));
label_10ada0:
    // 0x10ada0: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x10ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_10ada4:
    // 0x10ada4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x10ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ada8:
    // 0x10ada8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10ada8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10adac:
    // 0x10adac: 0x0  nop
    ctx->pc = 0x10adacu;
    // NOP
label_10adb0:
    // 0x10adb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10adb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10adb4:
    // 0x10adb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10adb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_10adb8:
    // 0x10adb8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10adb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_10adbc:
    // 0x10adbc: 0x0  nop
    ctx->pc = 0x10adbcu;
    // NOP
label_10adc0:
    // 0x10adc0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_10adc4:
    if (ctx->pc == 0x10ADC4u) {
        ctx->pc = 0x10ADC8u;
        goto label_10adc8;
    }
    ctx->pc = 0x10ADC0u;
    {
        const bool branch_taken_0x10adc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10adc0) {
            ctx->pc = 0x10ADCCu;
            goto label_10adcc;
        }
    }
    ctx->pc = 0x10ADC8u;
label_10adc8:
    // 0x10adc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10adcc:
    // 0x10adcc: 0xae022324  sw          $v0, 0x2324($s0)
    ctx->pc = 0x10adccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8996), GPR_U32(ctx, 2));
label_10add0:
    // 0x10add0: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x10add0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_10add4:
    // 0x10add4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x10add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_10add8:
    // 0x10add8: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x10add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10addc:
    // 0x10addc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10addcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10ade0:
    // 0x10ade0: 0x0  nop
    ctx->pc = 0x10ade0u;
    // NOP
label_10ade4:
    // 0x10ade4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10ade4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10ade8:
    // 0x10ade8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ade8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_10adec:
    // 0x10adec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10adecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_10adf0:
    // 0x10adf0: 0x0  nop
    ctx->pc = 0x10adf0u;
    // NOP
label_10adf4:
    // 0x10adf4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_10adf8:
    if (ctx->pc == 0x10ADF8u) {
        ctx->pc = 0x10ADFCu;
        goto label_10adfc;
    }
    ctx->pc = 0x10ADF4u;
    {
        const bool branch_taken_0x10adf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10adf4) {
            ctx->pc = 0x10AE00u;
            goto label_10ae00;
        }
    }
    ctx->pc = 0x10ADFCu;
label_10adfc:
    // 0x10adfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10ae00:
    // 0x10ae00: 0xae022318  sw          $v0, 0x2318($s0)
    ctx->pc = 0x10ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8984), GPR_U32(ctx, 2));
label_10ae04:
    // 0x10ae04: 0x8e022318  lw          $v0, 0x2318($s0)
    ctx->pc = 0x10ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8984)));
label_10ae08:
    // 0x10ae08: 0xae022314  sw          $v0, 0x2314($s0)
    ctx->pc = 0x10ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
label_10ae0c:
    // 0x10ae0c: 0xae00231c  sw          $zero, 0x231C($s0)
    ctx->pc = 0x10ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8988), GPR_U32(ctx, 0));
label_10ae10:
    // 0x10ae10: 0xae0043e0  sw          $zero, 0x43E0($s0)
    ctx->pc = 0x10ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17376), GPR_U32(ctx, 0));
label_10ae14:
    // 0x10ae14: 0x8e0543d8  lw          $a1, 0x43D8($s0)
    ctx->pc = 0x10ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17368)));
label_10ae18:
    // 0x10ae18: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_10ae1c:
    if (ctx->pc == 0x10AE1Cu) {
        ctx->pc = 0x10AE20u;
        goto label_10ae20;
    }
    ctx->pc = 0x10AE18u;
    {
        const bool branch_taken_0x10ae18 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10ae18) {
            ctx->pc = 0x10AE34u;
            goto label_10ae34;
        }
    }
    ctx->pc = 0x10AE20u;
label_10ae20:
    // 0x10ae20: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10ae24:
    // 0x10ae24: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10ae28:
    // 0x10ae28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10ae2c:
    // 0x10ae2c: 0xc046744  jal         func_119D10
label_10ae30:
    if (ctx->pc == 0x10AE30u) {
        ctx->pc = 0x10AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE2Cu;
        // 0x10ae30: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE34u;
        goto label_10ae34;
    }
    ctx->pc = 0x10AE2Cu;
    SET_GPR_U32(ctx, 31, 0x10AE34u);
    ctx->pc = 0x10AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE2Cu;
    // 0x10ae30: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10AE2Cu, 0x10AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE34u;
label_10ae34:
    // 0x10ae34: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
label_10ae38:
    // 0x10ae38: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_10ae3c:
    if (ctx->pc == 0x10AE3Cu) {
        ctx->pc = 0x10AE40u;
        goto label_10ae40;
    }
    ctx->pc = 0x10AE38u;
    {
        const bool branch_taken_0x10ae38 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10ae38) {
            ctx->pc = 0x10AE60u;
            goto label_10ae60;
        }
    }
    ctx->pc = 0x10AE40u;
label_10ae40:
    // 0x10ae40: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10ae44:
    // 0x10ae44: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10ae48:
    // 0x10ae48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10ae4c:
    // 0x10ae4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10ae50:
    // 0x10ae50: 0xc046744  jal         func_119D10
label_10ae54:
    if (ctx->pc == 0x10AE54u) {
        ctx->pc = 0x10AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE50u;
        // 0x10ae54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE58u;
        goto label_10ae58;
    }
    ctx->pc = 0x10AE50u;
    SET_GPR_U32(ctx, 31, 0x10AE58u);
    ctx->pc = 0x10AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE50u;
    // 0x10ae54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10AE50u, 0x10AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE58u;
label_10ae58:
    // 0x10ae58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ae5c:
    // 0x10ae5c: 0xae0243dc  sw          $v0, 0x43DC($s0)
    ctx->pc = 0x10ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
label_10ae60:
    // 0x10ae60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10ae64:
    // 0x10ae64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10ae68:
    // 0x10ae68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10ae68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10ae6c:
    // 0x10ae6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10ae6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10ae70:
    // 0x10ae70: 0x320f809  jalr        $t9
label_10ae74:
    if (ctx->pc == 0x10AE74u) {
        ctx->pc = 0x10AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE70u;
        // 0x10ae74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE78u;
        goto label_10ae78;
    }
    ctx->pc = 0x10AE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10AE78u);
        ctx->pc = 0x10AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE70u;
        // 0x10ae74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AE70u, 0x10AE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AE78u;
label_10ae78:
    // 0x10ae78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10ae7c:
    // 0x10ae7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ae80:
    // 0x10ae80: 0xc0430e8  jal         func_10C3A0
label_10ae84:
    if (ctx->pc == 0x10AE84u) {
        ctx->pc = 0x10AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE80u;
        // 0x10ae84: 0xa60243f0  sh          $v0, 0x43F0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 17392), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE88u;
        goto label_10ae88;
    }
    ctx->pc = 0x10AE80u;
    SET_GPR_U32(ctx, 31, 0x10AE88u);
    ctx->pc = 0x10AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE80u;
    // 0x10ae84: 0xa60243f0  sh          $v0, 0x43F0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 17392), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3A0u, 0x10AE80u, 0x10AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE88u;
label_10ae88:
    // 0x10ae88: 0xc043114  jal         func_10C450
label_10ae8c:
    if (ctx->pc == 0x10AE8Cu) {
        ctx->pc = 0x10AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE88u;
        // 0x10ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AE90u;
        goto label_10ae90;
    }
    ctx->pc = 0x10AE88u;
    SET_GPR_U32(ctx, 31, 0x10AE90u);
    ctx->pc = 0x10AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE88u;
    // 0x10ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x10AE88u, 0x10AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE90u;
label_10ae90:
    // 0x10ae90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10ae94:
    // 0x10ae94: 0xa20043f2  sb          $zero, 0x43F2($s0)
    ctx->pc = 0x10ae94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17394), (uint8_t)GPR_U32(ctx, 0));
label_10ae98:
    // 0x10ae98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10ae98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10ae9c:
    // 0x10ae9c: 0x8e0343e4  lw          $v1, 0x43E4($s0)
    ctx->pc = 0x10ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17380)));
label_10aea0:
    // 0x10aea0: 0x8e0243d0  lw          $v0, 0x43D0($s0)
    ctx->pc = 0x10aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17360)));
label_10aea4:
    // 0x10aea4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10aea8:
    // 0x10aea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10aeac:
    // 0x10aeac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x10aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10aeb0:
    // 0x10aeb0: 0xe6000258  swc1        $f0, 0x258($s0)
    ctx->pc = 0x10aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_10aeb4:
    // 0x10aeb4: 0x8603230c  lh          $v1, 0x230C($s0)
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8972)));
label_10aeb8:
    // 0x10aeb8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aebc:
    // 0x10aebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10aec0:
    // 0x10aec0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aec4:
    // 0x10aec4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10aec8:
    // 0x10aec8: 0xe4400258  swc1        $f0, 0x258($v0)
    ctx->pc = 0x10aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 600), bits); }
label_10aecc:
    // 0x10aecc: 0x8603230e  lh          $v1, 0x230E($s0)
    ctx->pc = 0x10aeccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8974)));
label_10aed0:
    // 0x10aed0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aed4:
    // 0x10aed4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10aed8:
    // 0x10aed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aedc:
    // 0x10aedc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10aee0:
    // 0x10aee0: 0xe4400258  swc1        $f0, 0x258($v0)
    ctx->pc = 0x10aee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 600), bits); }
label_10aee4:
    // 0x10aee4: 0x86032310  lh          $v1, 0x2310($s0)
    ctx->pc = 0x10aee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8976)));
label_10aee8:
    // 0x10aee8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aeec:
    // 0x10aeec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10aef0:
    // 0x10aef0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aef4:
    // 0x10aef4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10aef8:
    // 0x10aef8: 0xe4400258  swc1        $f0, 0x258($v0)
    ctx->pc = 0x10aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 600), bits); }
label_10aefc:
    // 0x10aefc: 0xc04c72c  jal         func_131CB0
label_10af00:
    if (ctx->pc == 0x10AF00u) {
        ctx->pc = 0x10AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEFCu;
        // 0x10af00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AF04u;
        goto label_10af04;
    }
    ctx->pc = 0x10AEFCu;
    SET_GPR_U32(ctx, 31, 0x10AF04u);
    ctx->pc = 0x10AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEFCu;
    // 0x10af00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10AEFCu, 0x10AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF04u;
label_10af04:
    // 0x10af04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10af08:
    // 0x10af08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10af08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10af0c:
    // 0x10af0c: 0x3e00008  jr          $ra
label_10af10:
    if (ctx->pc == 0x10AF10u) {
        ctx->pc = 0x10AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF0Cu;
        // 0x10af10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AF14u;
        goto label_fallthrough_0x10af0c;
    }
    ctx->pc = 0x10AF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF0Cu;
        // 0x10af10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10af0c:
    ctx->pc = 0x10AF14u;
}
