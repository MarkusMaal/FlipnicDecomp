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

// Function: entry_00156e7c
// Address: 0x156e7c - 0x156f10
void entry_00156e7c_0x156e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156e7c_0x156e7c");
#endif

    ctx->pc = 0x156e7cu;

    // 0x156e7c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x156e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156e80: 0x26230290  addiu       $v1, $s1, 0x290
    ctx->pc = 0x156e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x156e84: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x156e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156e88: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x156e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x156e8c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x156e8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x156e90: 0x460d001c  madd.s      $f0, $f0, $f13
    ctx->pc = 0x156e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x156e94: 0xe6200290  swc1        $f0, 0x290($s1)
    ctx->pc = 0x156e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 656), bits); }
    // 0x156e98: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x156e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156e9c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x156e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156ea0: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x156ea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x156ea4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x156ea4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x156ea8: 0x460d001c  madd.s      $f0, $f0, $f13
    ctx->pc = 0x156ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x156eac: 0xe6200294  swc1        $f0, 0x294($s1)
    ctx->pc = 0x156eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 660), bits); }
    // 0x156eb0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x156eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156eb4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x156eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156eb8: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x156eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x156ebc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x156ebcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x156ec0: 0x460d001c  madd.s      $f0, $f0, $f13
    ctx->pc = 0x156ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[13]));
    // 0x156ec4: 0xe6200298  swc1        $f0, 0x298($s1)
    ctx->pc = 0x156ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 664), bits); }
    // 0x156ec8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x156ec8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156ecc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x156eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ed0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x156ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ed4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x156ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ed8: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x156ed8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x156edc: 0x4a0003bf  vwaitq
    ctx->pc = 0x156edcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x156ee0: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x156ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x156ee4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x156ee4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x156ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156eec: 0xae2202a0  sw          $v0, 0x2A0($s1)
    ctx->pc = 0x156eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 2));
    // 0x156ef0: 0xc62002a0  lwc1        $f0, 0x2A0($s1)
    ctx->pc = 0x156ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156ef4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x156ef4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x156ef8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x156ef8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156efc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x156efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156f00: 0x0  nop
    ctx->pc = 0x156f00u;
    // NOP
    // 0x156f04: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x156f04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x156f08: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x156f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156f0c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x156f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->pc = 0x156f10u;
}
