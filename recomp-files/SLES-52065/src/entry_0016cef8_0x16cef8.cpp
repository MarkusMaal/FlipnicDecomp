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

// Function: entry_0016cef8
// Address: 0x16cef8 - 0x16cfec
void entry_0016cef8_0x16cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cef8_0x16cef8");
#endif

    switch (ctx->pc) {
        case 0x16cf0cu: goto label_16cf0c;
        case 0x16cf18u: goto label_16cf18;
        case 0x16cf2cu: goto label_16cf2c;
        case 0x16cf3cu: goto label_16cf3c;
        case 0x16cf54u: goto label_16cf54;
        case 0x16cf60u: goto label_16cf60;
        case 0x16cf7cu: goto label_16cf7c;
        case 0x16cfa8u: goto label_16cfa8;
        default: break;
    }

    ctx->pc = 0x16cef8u;

label_16cef8:
    // 0x16cef8: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cefc:
    // 0x16cefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf00:
    // 0x16cf00: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cf04:
    // 0x16cf04: 0x320f809  jalr        $t9
label_16cf08:
    if (ctx->pc == 0x16CF08u) {
        ctx->pc = 0x16CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF04u;
        // 0x16cf08: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF0Cu;
        goto label_16cf0c;
    }
    ctx->pc = 0x16CF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CF0Cu);
        ctx->pc = 0x16CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF04u;
        // 0x16cf08: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CF04u, 0x16CF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CF0Cu;
label_16cf0c:
    // 0x16cf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf10:
    // 0x16cf10: 0xc042118  jal         func_108460
label_16cf14:
    if (ctx->pc == 0x16CF14u) {
        ctx->pc = 0x16CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF10u;
        // 0x16cf14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF18u;
        goto label_16cf18;
    }
    ctx->pc = 0x16CF10u;
    SET_GPR_U32(ctx, 31, 0x16CF18u);
    ctx->pc = 0x16CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF10u;
    // 0x16cf14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16CF10u, 0x16CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF18u;
label_16cf18:
    // 0x16cf18: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cf18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cf1c:
    // 0x16cf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf20:
    // 0x16cf20: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16cf24:
    // 0x16cf24: 0x320f809  jalr        $t9
label_16cf28:
    if (ctx->pc == 0x16CF28u) {
        ctx->pc = 0x16CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF24u;
        // 0x16cf28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF2Cu;
        goto label_16cf2c;
    }
    ctx->pc = 0x16CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CF2Cu);
        ctx->pc = 0x16CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF24u;
        // 0x16cf28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CF24u, 0x16CF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CF2Cu;
label_16cf2c:
    // 0x16cf2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16cf30:
    // 0x16cf30: 0xc4550054  lwc1        $f21, 0x54($v0)
    ctx->pc = 0x16cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16cf34:
    // 0x16cf34: 0xc055c40  jal         func_157100
label_16cf38:
    if (ctx->pc == 0x16CF38u) {
        ctx->pc = 0x16CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF34u;
        // 0x16cf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF3Cu;
        goto label_16cf3c;
    }
    ctx->pc = 0x16CF34u;
    SET_GPR_U32(ctx, 31, 0x16CF3Cu);
    ctx->pc = 0x16CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF34u;
    // 0x16cf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16CF34u, 0x16CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF3Cu;
label_16cf3c:
    // 0x16cf3c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x16cf3cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cf40:
    // 0x16cf40: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cf44:
    // 0x16cf44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16cf44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16cf48:
    // 0x16cf48: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16cf48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16cf4c:
    // 0x16cf4c: 0xc0548a8  jal         func_1522A0
label_16cf50:
    if (ctx->pc == 0x16CF50u) {
        ctx->pc = 0x16CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF4Cu;
        // 0x16cf50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF54u;
        goto label_16cf54;
    }
    ctx->pc = 0x16CF4Cu;
    SET_GPR_U32(ctx, 31, 0x16CF54u);
    ctx->pc = 0x16CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF4Cu;
    // 0x16cf50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16CF4Cu, 0x16CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF54u;
label_16cf54:
    // 0x16cf54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16cf54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16cf58:
    // 0x16cf58: 0xc07edc4  jal         func_1FB710
label_16cf5c:
    if (ctx->pc == 0x16CF5Cu) {
        ctx->pc = 0x16CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF58u;
        // 0x16cf5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF60u;
        goto label_16cf60;
    }
    ctx->pc = 0x16CF58u;
    SET_GPR_U32(ctx, 31, 0x16CF60u);
    ctx->pc = 0x16CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF58u;
    // 0x16cf5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16CF58u, 0x16CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF60u;
label_16cf60:
    // 0x16cf60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cf64:
    // 0x16cf64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cf64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cf68:
    // 0x16cf68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16cf68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16cf6c:
    // 0x16cf6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16cf6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16cf70:
    // 0x16cf70: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x16cf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_16cf74:
    // 0x16cf74: 0xc07eea2  jal         func_1FBA88
label_16cf78:
    if (ctx->pc == 0x16CF78u) {
        ctx->pc = 0x16CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF74u;
        // 0x16cf78: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF7Cu;
        goto label_16cf7c;
    }
    ctx->pc = 0x16CF74u;
    SET_GPR_U32(ctx, 31, 0x16CF7Cu);
    ctx->pc = 0x16CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF74u;
    // 0x16cf78: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16CF74u, 0x16CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF7Cu;
label_16cf7c:
    // 0x16cf7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cf80:
    // 0x16cf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf84:
    // 0x16cf84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cf88:
    // 0x16cf88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16cf8c:
    // 0x16cf8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16cf8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16cf90:
    // 0x16cf90: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x16cf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
label_16cf94:
    // 0x16cf94: 0xe61502a0  swc1        $f21, 0x2A0($s0)
    ctx->pc = 0x16cf94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
label_16cf98:
    // 0x16cf98: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cf9c:
    // 0x16cf9c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16cf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16cfa0:
    // 0x16cfa0: 0x320f809  jalr        $t9
label_16cfa4:
    if (ctx->pc == 0x16CFA4u) {
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFA0u;
        // 0x16cfa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFA8u;
        goto label_16cfa8;
    }
    ctx->pc = 0x16CFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CFA8u);
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFA0u;
        // 0x16cfa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CFA0u, 0x16CFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CFA8u;
label_16cfa8:
    // 0x16cfa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16cfac:
    // 0x16cfac: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x16cfacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_16cfb0:
    // 0x16cfb0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_16cfb4:
    if (ctx->pc == 0x16CFB4u) {
        ctx->pc = 0x16CFB8u;
        goto label_16cfb8;
    }
    ctx->pc = 0x16CFB0u;
    {
        const bool branch_taken_0x16cfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cfb0) {
            ctx->pc = 0x16D020u;
            return;
        }
    }
    ctx->pc = 0x16CFB8u;
label_16cfb8:
    // 0x16cfb8: 0xc621022c  lwc1        $f1, 0x22C($s1)
    ctx->pc = 0x16cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cfbc:
    // 0x16cfbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cfbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfc0:
    // 0x16cfc0: 0x0  nop
    ctx->pc = 0x16cfc0u;
    // NOP
label_16cfc4:
    // 0x16cfc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16cfc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16cfc8:
    // 0x16cfc8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16cfc8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16cfcc:
    // 0x16cfcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cfd0:
    // 0x16cfd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfd4:
    // 0x16cfd4: 0x0  nop
    ctx->pc = 0x16cfd4u;
    // NOP
label_16cfd8:
    // 0x16cfd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16cfd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cfdc:
    // 0x16cfdc: 0x0  nop
    ctx->pc = 0x16cfdcu;
    // NOP
label_16cfe0:
    // 0x16cfe0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cfe4:
    if (ctx->pc == 0x16CFE4u) {
        ctx->pc = 0x16CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE0u;
        // 0x16cfe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFE8u;
        goto label_16cfe8;
    }
    ctx->pc = 0x16CFE0u;
    {
        const bool branch_taken_0x16cfe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE0u;
        // 0x16cfe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfe0) {
            ctx->pc = 0x16CFECu;
            return;
        }
    }
    ctx->pc = 0x16CFE8u;
label_16cfe8:
    // 0x16cfe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16cfecu;
}
