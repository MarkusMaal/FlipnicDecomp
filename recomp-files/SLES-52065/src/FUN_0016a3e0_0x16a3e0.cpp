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

// Function: FUN_0016a3e0
// Address: 0x16a3e0 - 0x16a490
void FUN_0016a3e0_0x16a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016a3e0_0x16a3e0");
#endif

    switch (ctx->pc) {
        case 0x16a454u: goto label_16a454;
        default: break;
    }

    ctx->pc = 0x16a3e0u;

    // 0x16a3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a3e4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x16a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x16a3e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16a3ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a3f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16a3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16a3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3f8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x16a3f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x16a3fc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16a3fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a400: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16a400u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a404: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16a404u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16a408: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x16a408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a40c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16a40cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a410: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16a410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a414: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16a414u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16a418: 0x4a0003bf  vwaitq
    ctx->pc = 0x16a418u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16a41c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16a41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a420: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16a420u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16a424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a428: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16a42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a430: 0x0  nop
    ctx->pc = 0x16a430u;
    // NOP
    // 0x16a434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16a434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16a438: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x16a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a43c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x16a43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x16a440: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16a440u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a444: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16a444u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a448: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16a448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16a44c: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x16A44Cu;
    SET_GPR_U32(ctx, 31, 0x16A454u);
    ctx->pc = 0x16A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A44Cu;
    // 0x16a450: 0xf8460000  sqc2        $vf6, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16A44Cu, 0x16A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A454u;
label_16a454:
    // 0x16a454: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16a454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16a458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a45c: 0x0  nop
    ctx->pc = 0x16a45cu;
    // NOP
    // 0x16a460: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16a460u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a464: 0x0  nop
    ctx->pc = 0x16a464u;
    // NOP
    // 0x16a468: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A468u;
    {
        const bool branch_taken_0x16a468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A468u;
        // 0x16a46c: 0x3c033fb3  lui         $v1, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a468) {
            ctx->pc = 0x16A478u;
            goto label_16a478;
        }
    }
    ctx->pc = 0x16A470u;
    // 0x16a470: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x16a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x16a474: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x16a474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16a478:
    // 0x16a478: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x16a478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16a47c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a480: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16a484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a488: 0x3e00008  jr          $ra
    ctx->pc = 0x16A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A488u;
        // 0x16a48c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A490u;
}
