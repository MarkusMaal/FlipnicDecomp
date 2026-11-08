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

// Function: entry_00141a84
// Address: 0x141a84 - 0x141b04
void entry_00141a84_0x141a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141a84_0x141a84");
#endif

    switch (ctx->pc) {
        case 0x141ae4u: goto label_141ae4;
        case 0x141afcu: goto label_141afc;
        default: break;
    }

    ctx->pc = 0x141a84u;

label_141a84:
    // 0x141a84: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x141a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141a88:
    // 0x141a88: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x141a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141a8c:
    // 0x141a8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x141a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_141a90:
    // 0x141a90: 0x45010052  bc1t        . + 4 + (0x52 << 2)
label_141a94:
    if (ctx->pc == 0x141A94u) {
        ctx->pc = 0x141A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A90u;
        // 0x141a94: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A98u;
        goto label_141a98;
    }
    ctx->pc = 0x141A90u;
    {
        const bool branch_taken_0x141a90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x141A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A90u;
        // 0x141a94: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a90) {
            ctx->pc = 0x141BDCu;
            return;
        }
    }
    ctx->pc = 0x141A98u;
label_141a98:
    // 0x141a98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x141a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_141a9c:
    // 0x141a9c: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x141a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
label_141aa0:
    // 0x141aa0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x141aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_141aa4:
    // 0x141aa4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x141aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141aa8:
    // 0x141aa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x141aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_141aac:
    // 0x141aac: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x141aacu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141ab0:
    // 0x141ab0: 0x0  nop
    ctx->pc = 0x141ab0u;
    // NOP
label_141ab4:
    // 0x141ab4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x141ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_141ab8:
    // 0x141ab8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x141ab8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_141abc:
    // 0x141abc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x141abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141ac0:
    // 0x141ac0: 0x0  nop
    ctx->pc = 0x141ac0u;
    // NOP
label_141ac4:
    // 0x141ac4: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_141ac8:
    if (ctx->pc == 0x141AC8u) {
        ctx->pc = 0x141ACCu;
        goto label_141acc;
    }
    ctx->pc = 0x141AC4u;
    {
        const bool branch_taken_0x141ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141ac4) {
            ctx->pc = 0x141BD4u;
            return;
        }
    }
    ctx->pc = 0x141ACCu;
label_141acc:
    // 0x141acc: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x141accu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_141ad0:
    // 0x141ad0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x141ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141ad4:
    // 0x141ad4: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
label_141ad8:
    if (ctx->pc == 0x141AD8u) {
        ctx->pc = 0x141AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD4u;
        // 0x141ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141ADCu;
        goto label_141adc;
    }
    ctx->pc = 0x141AD4u;
    {
        const bool branch_taken_0x141ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x141AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD4u;
        // 0x141ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ad4) {
            ctx->pc = 0x141B04u;
            return;
        }
    }
    ctx->pc = 0x141ADCu;
label_141adc:
    // 0x141adc: 0xc050d08  jal         func_143420
label_141ae0:
    if (ctx->pc == 0x141AE0u) {
        ctx->pc = 0x141AE4u;
        goto label_141ae4;
    }
    ctx->pc = 0x141ADCu;
    SET_GPR_U32(ctx, 31, 0x141AE4u);
    ctx->pc = 0x143420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143420u, 0x141ADCu, 0x141AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AE4u;
label_141ae4:
    // 0x141ae4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x141ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_141ae8:
    // 0x141ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x141ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141aec:
    // 0x141aec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141af0:
    // 0x141af0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x141af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_141af4:
    // 0x141af4: 0x320f809  jalr        $t9
label_141af8:
    if (ctx->pc == 0x141AF8u) {
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF4u;
        // 0x141af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141AFCu;
        goto label_141afc;
    }
    ctx->pc = 0x141AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141AFCu);
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF4u;
        // 0x141af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141AF4u, 0x141AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141AFCu;
label_141afc:
    // 0x141afc: 0x10000033  b           . + 4 + (0x33 << 2)
label_141b00:
    if (ctx->pc == 0x141B00u) {
        ctx->pc = 0x141B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AFCu;
        // 0x141b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B04u;
        goto label_fallthrough_0x141afc;
    }
    ctx->pc = 0x141AFCu;
    {
        const bool branch_taken_0x141afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AFCu;
        // 0x141b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141afc) {
            ctx->pc = 0x141BCCu;
            return;
        }
    }
label_fallthrough_0x141afc:
    ctx->pc = 0x141B04u;
}
