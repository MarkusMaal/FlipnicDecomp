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

// Function: entry_001542dc
// Address: 0x1542dc - 0x1543d0
void entry_001542dc_0x1542dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001542dc_0x1542dc");
#endif

    ctx->pc = 0x1542dcu;

    // 0x1542dc: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1542dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1542e0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1542e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1542e4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1542e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1542e8: 0x0  nop
    ctx->pc = 0x1542e8u;
    // NOP
    // 0x1542ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1542ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1542f0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1542f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1542f4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1542f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1542f8: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1542f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1542fc: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x1542fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154300: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x154300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154304: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x154304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154308: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x154308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15430c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15430cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154310: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x154310u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154314: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154318: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x154318u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15431c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x15431cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x154320: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x154320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x154324: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x154324u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154328: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x154328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15432c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15432cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154330: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154334: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154334u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154338: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x154338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15433c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x154340: 0x460c6900  add.s       $f4, $f13, $f12
    ctx->pc = 0x154340u;
    ctx->f[4] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x154344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x154348: 0x460429c3  div.s       $f7, $f5, $f4
    ctx->pc = 0x154348u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x15434c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x15434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154350: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x154350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x154354: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x154354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154358: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x154358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15435c: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x15435cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x154360: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154364: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x154364u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x154368: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x154368u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x15436c: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x15436cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[4]));
    // 0x154370: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x154370u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x154374: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x154374u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x154378: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x154378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x15437c: 0xe4e60004  swc1        $f6, 0x4($a3)
    ctx->pc = 0x15437cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x154380: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x154380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154384: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x154384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154388: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x154388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15438c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15438cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x154390: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x154390u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x154394: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x154394u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[3]));
    // 0x154398: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x154398u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x15439c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x15439cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1543a0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1543a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1543a4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1543a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543a8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1543a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543ac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1543acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543b0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1543b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1543b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1543b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1543b8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1543b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1543bc: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1543bcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1543c0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1543c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1543c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1543c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1543c8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1543c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1543cc: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1543ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->pc = 0x1543d0u;
}
