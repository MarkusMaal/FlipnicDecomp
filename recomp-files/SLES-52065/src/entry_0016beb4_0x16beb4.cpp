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

// Function: entry_0016beb4
// Address: 0x16beb4 - 0x16c000
void entry_0016beb4_0x16beb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016beb4_0x16beb4");
#endif

    switch (ctx->pc) {
        case 0x16bf1cu: goto label_16bf1c;
        case 0x16bf30u: goto label_16bf30;
        case 0x16bf44u: goto label_16bf44;
        case 0x16bf4cu: goto label_16bf4c;
        case 0x16bf60u: goto label_16bf60;
        case 0x16bf6cu: goto label_16bf6c;
        case 0x16bf88u: goto label_16bf88;
        case 0x16bfacu: goto label_16bfac;
        case 0x16bfbcu: goto label_16bfbc;
        case 0x16bfd4u: goto label_16bfd4;
        case 0x16bfe0u: goto label_16bfe0;
        default: break;
    }

    ctx->pc = 0x16beb4u;

label_16beb4:
    // 0x16beb4: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16beb8:
    // 0x16beb8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16bebc:
    // 0x16bebc: 0x14830050  bne         $a0, $v1, . + 4 + (0x50 << 2)
label_16bec0:
    if (ctx->pc == 0x16BEC0u) {
        ctx->pc = 0x16BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEBCu;
        // 0x16bec0: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BEC4u;
        goto label_16bec4;
    }
    ctx->pc = 0x16BEBCu;
    {
        const bool branch_taken_0x16bebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEBCu;
        // 0x16bec0: 0x8e300230  lw          $s0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bebc) {
            ctx->pc = 0x16C000u;
            return;
        }
    }
    ctx->pc = 0x16BEC4u;
label_16bec4:
    // 0x16bec4: 0xc6230228  lwc1        $f3, 0x228($s1)
    ctx->pc = 0x16bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16bec8:
    // 0x16bec8: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_16becc:
    // 0x16becc: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16bed0:
    // 0x16bed0: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_16bed4:
    // 0x16bed4: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x16bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16bed8:
    // 0x16bed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16bed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bedc:
    // 0x16bedc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x16bedcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_16bee0:
    // 0x16bee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16bee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16bee4:
    // 0x16bee4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16bee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16bee8:
    // 0x16bee8: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x16bee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_16beec:
    // 0x16beec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16beecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16bef0:
    // 0x16bef0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16bef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_16bef4:
    // 0x16bef4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16bef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_16bef8:
    // 0x16bef8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16bef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16befc:
    // 0x16befc: 0x0  nop
    ctx->pc = 0x16befcu;
    // NOP
label_16bf00:
    // 0x16bf00: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_16bf04:
    if (ctx->pc == 0x16BF04u) {
        ctx->pc = 0x16BF08u;
        goto label_16bf08;
    }
    ctx->pc = 0x16BF00u;
    {
        const bool branch_taken_0x16bf00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16bf00) {
            ctx->pc = 0x16C000u;
            return;
        }
    }
    ctx->pc = 0x16BF08u;
label_16bf08:
    // 0x16bf08: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bf08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bf0c:
    // 0x16bf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bf10:
    // 0x16bf10: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16bf10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16bf14:
    // 0x16bf14: 0x320f809  jalr        $t9
label_16bf18:
    if (ctx->pc == 0x16BF18u) {
        ctx->pc = 0x16BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF14u;
        // 0x16bf18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF1Cu;
        goto label_16bf1c;
    }
    ctx->pc = 0x16BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BF1Cu);
        ctx->pc = 0x16BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF14u;
        // 0x16bf18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF14u, 0x16BF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BF1Cu;
label_16bf1c:
    // 0x16bf1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16bf20:
    // 0x16bf20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bf24:
    // 0x16bf24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16bf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16bf28:
    // 0x16bf28: 0xc0425a4  jal         func_109690
label_16bf2c:
    if (ctx->pc == 0x16BF2Cu) {
        ctx->pc = 0x16BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF28u;
        // 0x16bf2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF30u;
        goto label_16bf30;
    }
    ctx->pc = 0x16BF28u;
    SET_GPR_U32(ctx, 31, 0x16BF30u);
    ctx->pc = 0x16BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF28u;
    // 0x16bf2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16BF28u, 0x16BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF30u;
label_16bf30:
    // 0x16bf30: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bf30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bf34:
    // 0x16bf34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bf38:
    // 0x16bf38: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16bf38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16bf3c:
    // 0x16bf3c: 0x320f809  jalr        $t9
label_16bf40:
    if (ctx->pc == 0x16BF40u) {
        ctx->pc = 0x16BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF3Cu;
        // 0x16bf40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF44u;
        goto label_16bf44;
    }
    ctx->pc = 0x16BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BF44u);
        ctx->pc = 0x16BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF3Cu;
        // 0x16bf40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF3Cu, 0x16BF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BF44u;
label_16bf44:
    // 0x16bf44: 0xc055c40  jal         func_157100
label_16bf48:
    if (ctx->pc == 0x16BF48u) {
        ctx->pc = 0x16BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF44u;
        // 0x16bf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF4Cu;
        goto label_16bf4c;
    }
    ctx->pc = 0x16BF44u;
    SET_GPR_U32(ctx, 31, 0x16BF4Cu);
    ctx->pc = 0x16BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF44u;
    // 0x16bf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16BF44u, 0x16BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF4Cu;
label_16bf4c:
    // 0x16bf4c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x16bf4cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bf50:
    // 0x16bf50: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16bf54:
    // 0x16bf54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16bf54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16bf58:
    // 0x16bf58: 0xc0548a8  jal         func_1522A0
label_16bf5c:
    if (ctx->pc == 0x16BF5Cu) {
        ctx->pc = 0x16BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF58u;
        // 0x16bf5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF60u;
        goto label_16bf60;
    }
    ctx->pc = 0x16BF58u;
    SET_GPR_U32(ctx, 31, 0x16BF60u);
    ctx->pc = 0x16BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF58u;
    // 0x16bf5c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16BF58u, 0x16BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF60u;
label_16bf60:
    // 0x16bf60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16bf60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16bf64:
    // 0x16bf64: 0xc07edc4  jal         func_1FB710
label_16bf68:
    if (ctx->pc == 0x16BF68u) {
        ctx->pc = 0x16BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF64u;
        // 0x16bf68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF6Cu;
        goto label_16bf6c;
    }
    ctx->pc = 0x16BF64u;
    SET_GPR_U32(ctx, 31, 0x16BF6Cu);
    ctx->pc = 0x16BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF64u;
    // 0x16bf68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16BF64u, 0x16BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF6Cu;
label_16bf6c:
    // 0x16bf6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16bf70:
    // 0x16bf70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bf74:
    // 0x16bf74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16bf74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16bf78:
    // 0x16bf78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16bf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16bf7c:
    // 0x16bf7c: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x16bf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_16bf80:
    // 0x16bf80: 0xc07eea2  jal         func_1FBA88
label_16bf84:
    if (ctx->pc == 0x16BF84u) {
        ctx->pc = 0x16BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF80u;
        // 0x16bf84: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BF88u;
        goto label_16bf88;
    }
    ctx->pc = 0x16BF80u;
    SET_GPR_U32(ctx, 31, 0x16BF88u);
    ctx->pc = 0x16BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF80u;
    // 0x16bf84: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16BF80u, 0x16BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF88u;
label_16bf88:
    // 0x16bf88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16bf8c:
    // 0x16bf8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16bf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16bf90:
    // 0x16bf90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16bf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16bf94:
    // 0x16bf94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16bf94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16bf98:
    // 0x16bf98: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x16bf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
label_16bf9c:
    // 0x16bf9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16bfa0:
    // 0x16bfa0: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x16bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16bfa4:
    // 0x16bfa4: 0xc056194  jal         func_158650
label_16bfa8:
    if (ctx->pc == 0x16BFA8u) {
        ctx->pc = 0x16BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFA4u;
        // 0x16bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFACu;
        goto label_16bfac;
    }
    ctx->pc = 0x16BFA4u;
    SET_GPR_U32(ctx, 31, 0x16BFACu);
    ctx->pc = 0x16BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFA4u;
    // 0x16bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16BFA4u, 0x16BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFACu;
label_16bfac:
    // 0x16bfac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16bfb0:
    // 0x16bfb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16bfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16bfb4:
    // 0x16bfb4: 0xc055dac  jal         func_1576B0
label_16bfb8:
    if (ctx->pc == 0x16BFB8u) {
        ctx->pc = 0x16BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFB4u;
        // 0x16bfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFBCu;
        goto label_16bfbc;
    }
    ctx->pc = 0x16BFB4u;
    SET_GPR_U32(ctx, 31, 0x16BFBCu);
    ctx->pc = 0x16BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFB4u;
    // 0x16bfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16BFB4u, 0x16BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFBCu;
label_16bfbc:
    // 0x16bfbc: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bfbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bfc0:
    // 0x16bfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bfc4:
    // 0x16bfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16bfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bfc8:
    // 0x16bfc8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16bfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16bfcc:
    // 0x16bfcc: 0x320f809  jalr        $t9
label_16bfd0:
    if (ctx->pc == 0x16BFD0u) {
        ctx->pc = 0x16BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFCCu;
        // 0x16bfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFD4u;
        goto label_16bfd4;
    }
    ctx->pc = 0x16BFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BFD4u);
        ctx->pc = 0x16BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFCCu;
        // 0x16bfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFCCu, 0x16BFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BFD4u;
label_16bfd4:
    // 0x16bfd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bfd8:
    // 0x16bfd8: 0xc042118  jal         func_108460
label_16bfdc:
    if (ctx->pc == 0x16BFDCu) {
        ctx->pc = 0x16BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFD8u;
        // 0x16bfdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFE0u;
        goto label_16bfe0;
    }
    ctx->pc = 0x16BFD8u;
    SET_GPR_U32(ctx, 31, 0x16BFE0u);
    ctx->pc = 0x16BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFD8u;
    // 0x16bfdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16BFD8u, 0x16BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFE0u;
label_16bfe0:
    // 0x16bfe0: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16bfe4:
    // 0x16bfe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16bfe8:
    // 0x16bfe8: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x16bfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
label_16bfec:
    // 0x16bfec: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x16bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
label_16bff0:
    // 0x16bff0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16bff4:
    // 0x16bff4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16bff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16bff8:
    // 0x16bff8: 0x320f809  jalr        $t9
label_16bffc:
    if (ctx->pc == 0x16BFFCu) {
        ctx->pc = 0x16BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFF8u;
        // 0x16bffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C000u;
        goto label_fallthrough_0x16bff8;
    }
    ctx->pc = 0x16BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C000u);
        ctx->pc = 0x16BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFF8u;
        // 0x16bffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFF8u, 0x16C000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16bff8:
    ctx->pc = 0x16C000u;
}
