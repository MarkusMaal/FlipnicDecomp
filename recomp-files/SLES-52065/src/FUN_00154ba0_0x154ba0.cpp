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

// Function: FUN_00154ba0
// Address: 0x154ba0 - 0x154cc4
void FUN_00154ba0_0x154ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154ba0_0x154ba0");
#endif

    switch (ctx->pc) {
        case 0x154be0u: goto label_154be0;
        default: break;
    }

    ctx->pc = 0x154ba0u;

    // 0x154ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x154ba4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x154ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x154ba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154bac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154bb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x154bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154bb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x154bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154bc0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x154bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bc4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x154bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bc8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x154bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bcc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x154bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x154bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x154bd4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x154bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bd8: 0xc05536c  jal         func_154DB0
    ctx->pc = 0x154BD8u;
    SET_GPR_U32(ctx, 31, 0x154BE0u);
    ctx->pc = 0x154BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BD8u;
    // 0x154bdc: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DB0u, 0x154BD8u, 0x154BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BE0u;
label_154be0:
    // 0x154be0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x154be4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154be8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x154be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x154bec: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x154becu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x154bf0: 0x0  nop
    ctx->pc = 0x154bf0u;
    // NOP
    // 0x154bf4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x154bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154bf8: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154bfc: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x154bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154c00: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x154c04: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x154c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x154c08: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x154c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154c0c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x154c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154c10: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x154c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154c14: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x154c14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x154c18: 0x4601205d  msub.s      $f1, $f4, $f1
    ctx->pc = 0x154c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x154c1c: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x154c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x154c20: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x154c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154c24: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x154c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154c28: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x154c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154c2c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x154c2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x154c30: 0x4601205d  msub.s      $f1, $f4, $f1
    ctx->pc = 0x154c30u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x154c34: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x154c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x154c38: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x154c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154c3c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x154c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154c40: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x154c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154c44: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x154c44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x154c48: 0x4601205d  msub.s      $f1, $f4, $f1
    ctx->pc = 0x154c48u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x154c4c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x154c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x154c50: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x154c50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154c54: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154c58: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154c5c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154c60: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154c60u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x154c64: 0x4a0003bf  vwaitq
    ctx->pc = 0x154c64u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154c68: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x154c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154c6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154c6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154c70: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x154c70u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x154c74: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154c78: 0x4a0003bf  vwaitq
    ctx->pc = 0x154c78u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154c7c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154c80: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x154c80u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154c84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154c88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154c8c: 0x0  nop
    ctx->pc = 0x154c8cu;
    // NOP
    // 0x154c90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x154c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154c94: 0x0  nop
    ctx->pc = 0x154c94u;
    // NOP
    // 0x154c98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x154C98u;
    {
        const bool branch_taken_0x154c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154c98) {
            ctx->pc = 0x154CA4u;
            goto label_154ca4;
        }
    }
    ctx->pc = 0x154CA0u;
    // 0x154ca0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x154ca0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_154ca4:
    // 0x154ca4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x154ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154ca8: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x154ca8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x154cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x154CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CBCu;
        // 0x154cc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154CC4u;
}
