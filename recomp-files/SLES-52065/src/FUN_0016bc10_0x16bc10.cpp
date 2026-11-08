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

// Function: FUN_0016bc10
// Address: 0x16bc10 - 0x16bcf0
void FUN_0016bc10_0x16bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bc10_0x16bc10");
#endif

    switch (ctx->pc) {
        case 0x16bc44u: goto label_16bc44;
        case 0x16bc6cu: goto label_16bc6c;
        case 0x16bca4u: goto label_16bca4;
        case 0x16bcb4u: goto label_16bcb4;
        case 0x16bcccu: goto label_16bccc;
        case 0x16bcd8u: goto label_16bcd8;
        default: break;
    }

    ctx->pc = 0x16bc10u;

    // 0x16bc10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bc14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16bc18: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bc1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bc20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bc24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc2c: 0x26260310  addiu       $a2, $s1, 0x310
    ctx->pc = 0x16bc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x16bc30: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x16bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16bc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc38: 0xc60d0200  lwc1        $f13, 0x200($s0)
    ctx->pc = 0x16bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16bc3c: 0xc055038  jal         func_1540E0
    ctx->pc = 0x16BC3Cu;
    SET_GPR_U32(ctx, 31, 0x16BC44u);
    ctx->pc = 0x16BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC3Cu;
    // 0x16bc40: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x16BC3Cu, 0x16BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC44u;
label_16bc44:
    // 0x16bc44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16bc44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16bc48: 0x0  nop
    ctx->pc = 0x16bc48u;
    // NOP
    // 0x16bc4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16bc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16bc50: 0x0  nop
    ctx->pc = 0x16bc50u;
    // NOP
    // 0x16bc54: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x16BC54u;
    {
        const bool branch_taken_0x16bc54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC54u;
        // 0x16bc58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc54) {
            ctx->pc = 0x16BCDCu;
            goto label_16bcdc;
        }
    }
    ctx->pc = 0x16BC5Cu;
    // 0x16bc5c: 0xe6210284  swc1        $f1, 0x284($s1)
    ctx->pc = 0x16bc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    // 0x16bc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc64: 0xc055c40  jal         func_157100
    ctx->pc = 0x16BC64u;
    SET_GPR_U32(ctx, 31, 0x16BC6Cu);
    ctx->pc = 0x16BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC64u;
    // 0x16bc68: 0xe6210280  swc1        $f1, 0x280($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16BC64u, 0x16BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC6Cu;
label_16bc6c:
    // 0x16bc6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16bc70: 0x26230290  addiu       $v1, $s1, 0x290
    ctx->pc = 0x16bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16bc74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bc78: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16bc78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bc7c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16bc7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16bc80: 0x0  nop
    ctx->pc = 0x16bc80u;
    // NOP
    // 0x16bc84: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16bc84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16bc88: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16bc88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16bc8c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16bc90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16bc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16bc94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bc98: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x16bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16bc9c: 0xc056194  jal         func_158650
    ctx->pc = 0x16BC9Cu;
    SET_GPR_U32(ctx, 31, 0x16BCA4u);
    ctx->pc = 0x16BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC9Cu;
    // 0x16bca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16BC9Cu, 0x16BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCA4u;
label_16bca4:
    // 0x16bca4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16bca8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16bca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16bcac: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x16BCACu;
    SET_GPR_U32(ctx, 31, 0x16BCB4u);
    ctx->pc = 0x16BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCACu;
    // 0x16bcb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16BCACu, 0x16BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCB4u;
label_16bcb4:
    // 0x16bcb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bcb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16bcbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16bcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16bcc0: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x16bcc4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16BCC4u;
    SET_GPR_U32(ctx, 31, 0x16BCCCu);
    ctx->pc = 0x16BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCC4u;
    // 0x16bcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16BCC4u, 0x16BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCCCu;
label_16bccc:
    // 0x16bccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcd0: 0xc042118  jal         func_108460
    ctx->pc = 0x16BCD0u;
    SET_GPR_U32(ctx, 31, 0x16BCD8u);
    ctx->pc = 0x16BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCD0u;
    // 0x16bcd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16BCD0u, 0x16BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCD8u;
label_16bcd8:
    // 0x16bcd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16bcdc:
    // 0x16bcdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16bcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCE8u;
        // 0x16bcec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCF0u;
}
