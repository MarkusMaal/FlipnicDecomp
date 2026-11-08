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

// Function: FUN_0016ede0
// Address: 0x16ede0 - 0x16f00c
void FUN_0016ede0_0x16ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016ede0_0x16ede0");
#endif

    ctx->pc = 0x16ede0u;

    // 0x16ede0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ede4: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x16ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x16ede8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16ede8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16edec: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16edecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16edf0: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x16edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x16edf4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16edf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16edf8: 0xc4850018  lwc1        $f5, 0x18($a0)
    ctx->pc = 0x16edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16edfc: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x16edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16ee00: 0xc7868020  lwc1        $f6, -0x7FE0($gp)
    ctx->pc = 0x16ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x16ee04: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x16ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ee08: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x16ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ee0c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x16ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ee10: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x16ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee14: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x16ee14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x16ee18: 0x460618dc  madd.s      $f3, $f3, $f6
    ctx->pc = 0x16ee18u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x16ee1c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16ee1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x16ee20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ee20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ee24: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x16ee24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16ee28: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x16ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16ee2c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x16ee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ee30: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x16ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ee34: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x16ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ee38: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x16ee38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x16ee3c: 0x460618dc  madd.s      $f3, $f3, $f6
    ctx->pc = 0x16ee3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x16ee40: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16ee40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x16ee44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16ee44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16ee48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x16ee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16ee4c: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x16ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16ee50: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x16ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ee54: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x16ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ee58: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x16ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee5c: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x16ee5cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x16ee60: 0x460618dc  madd.s      $f3, $f3, $f6
    ctx->pc = 0x16ee60u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x16ee64: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16ee64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x16ee68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ee68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16ee6c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x16ee6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16ee70: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x16ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ee74: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x16ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ee78: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x16ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ee7c: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x16ee7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x16ee80: 0x4606109c  madd.s      $f2, $f2, $f6
    ctx->pc = 0x16ee80u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x16ee84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ee84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16ee88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16ee88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16ee8c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x16ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16ee90: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x16ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ee94: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x16ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee98: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x16ee98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x16ee9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16ee9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16eea0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x16eea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x16eea4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16eea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16eea8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16eea8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eeac: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16eeacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16eeb0: 0xf8c60000  sqc2        $vf6, 0x0($a2)
    ctx->pc = 0x16eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16eeb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16eeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16eeb8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x16eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16eebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eec0: 0x0  nop
    ctx->pc = 0x16eec0u;
    // NOP
    // 0x16eec4: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x16EEC4u;
    {
        const bool branch_taken_0x16eec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eec4) {
            ctx->pc = 0x16EFF4u;
            goto label_16eff4;
        }
    }
    ctx->pc = 0x16EECCu;
    // 0x16eecc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16eeccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eed0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16eed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eed4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16eed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eed8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16eed8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eedc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16eedcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16eee0: 0x4a0003bf  vwaitq
    ctx->pc = 0x16eee0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16eee4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16eee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eee8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16eee8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16eeec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16eeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16eef0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x16eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16eef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eef8: 0x0  nop
    ctx->pc = 0x16eef8u;
    // NOP
    // 0x16eefc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EEFCu;
    {
        const bool branch_taken_0x16eefc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eefc) {
            ctx->pc = 0x16EF24u;
            goto label_16ef24;
        }
    }
    ctx->pc = 0x16EF04u;
    // 0x16ef04: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x16ef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ef08: 0x0  nop
    ctx->pc = 0x16ef08u;
    // NOP
    // 0x16ef0c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x16ef0cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x16ef10: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x16ef10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x16ef14: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x16ef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ef18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16ef18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16ef1c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x16ef1cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x16ef20: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x16ef20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_16ef24:
    // 0x16ef24: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x16ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ef28: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x16ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x16ef2c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x16ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x16ef30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ef30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ef34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16ef34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16ef38: 0x0  nop
    ctx->pc = 0x16ef38u;
    // NOP
    // 0x16ef3c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x16ef3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x16ef40: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x16ef40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x16ef44: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x16ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x16ef48: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x16ef4c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x16ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ef50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ef50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ef54: 0x0  nop
    ctx->pc = 0x16ef54u;
    // NOP
    // 0x16ef58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16EF58u;
    {
        const bool branch_taken_0x16ef58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF58u;
        // 0x16ef5c: 0x3c033db8  lui         $v1, 0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef58) {
            ctx->pc = 0x16EF70u;
            goto label_16ef70;
        }
    }
    ctx->pc = 0x16EF60u;
    // 0x16ef60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x16ef60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16ef64: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x16ef64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x16ef68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16EF68u;
    {
        const bool branch_taken_0x16ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF68u;
        // 0x16ef6c: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef68) {
            ctx->pc = 0x16EFF4u;
            goto label_16eff4;
        }
    }
    ctx->pc = 0x16EF70u;
label_16ef70:
    // 0x16ef70: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x16ef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x16ef74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ef74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ef78: 0x0  nop
    ctx->pc = 0x16ef78u;
    // NOP
    // 0x16ef7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ef7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ef80: 0x0  nop
    ctx->pc = 0x16ef80u;
    // NOP
    // 0x16ef84: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x16EF84u;
    {
        const bool branch_taken_0x16ef84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ef84) {
            ctx->pc = 0x16EFF4u;
            goto label_16eff4;
        }
    }
    ctx->pc = 0x16EF8Cu;
    // 0x16ef8c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x16ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ef90: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x16ef90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ef94: 0x0  nop
    ctx->pc = 0x16ef94u;
    // NOP
    // 0x16ef98: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EF98u;
    {
        const bool branch_taken_0x16ef98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF98u;
        // 0x16ef9c: 0x3c033ca3  lui         $v1, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef98) {
            ctx->pc = 0x16EFC0u;
            goto label_16efc0;
        }
    }
    ctx->pc = 0x16EFA0u;
    // 0x16efa0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x16efa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x16efa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16efa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16efa8: 0x0  nop
    ctx->pc = 0x16efa8u;
    // NOP
    // 0x16efac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16efacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16efb0: 0x0  nop
    ctx->pc = 0x16efb0u;
    // NOP
    // 0x16efb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16EFB4u;
    {
        const bool branch_taken_0x16efb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16efb4) {
            ctx->pc = 0x16EFC0u;
            goto label_16efc0;
        }
    }
    ctx->pc = 0x16EFBCu;
    // 0x16efbc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x16efbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_16efc0:
    // 0x16efc0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x16efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16efc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16efc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16efc8: 0x0  nop
    ctx->pc = 0x16efc8u;
    // NOP
    // 0x16efcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16efccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16efd0: 0x0  nop
    ctx->pc = 0x16efd0u;
    // NOP
    // 0x16efd4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16EFD4u;
    {
        const bool branch_taken_0x16efd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFD4u;
        // 0x16efd8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efd4) {
            ctx->pc = 0x16EFE8u;
            goto label_16efe8;
        }
    }
    ctx->pc = 0x16EFDCu;
    // 0x16efdc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x16efe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16EFE0u;
    {
        const bool branch_taken_0x16efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFE0u;
        // 0x16efe4: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efe0) {
            ctx->pc = 0x16EFECu;
            goto label_16efec;
        }
    }
    ctx->pc = 0x16EFE8u;
label_16efe8:
    // 0x16efe8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x16efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_16efec:
    // 0x16efec: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x16efecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x16eff0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x16eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_16eff4:
    // 0x16eff4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x16eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eff8: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16eff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x16effc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x16effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f000: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x16f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x16f004: 0x3e00008  jr          $ra
    ctx->pc = 0x16F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F004u;
        // 0x16f008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F00Cu;
}
