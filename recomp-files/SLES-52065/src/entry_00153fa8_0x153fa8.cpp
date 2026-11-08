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

// Function: entry_00153fa8
// Address: 0x153fa8 - 0x154040
void entry_00153fa8_0x153fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153fa8_0x153fa8");
#endif

    ctx->pc = 0x153fa8u;

    // 0x153fa8: 0xda670000  lqc2        $vf7, 0x0($s3)
    ctx->pc = 0x153fa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x153fac: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x153facu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x153fb0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x153fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x153fb4: 0x0  nop
    ctx->pc = 0x153fb4u;
    // NOP
    // 0x153fb8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x153fb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x153fbc: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x153fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153fc0: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x153fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fc4: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x153fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153fc8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x153fcc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x153fccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x153fd0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x153fd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153fd4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x153fd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153fd8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x153fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x153fdc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x153fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153fe0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x153fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fe4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x153fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fe8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x153fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153fec: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x153fecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x153ff0: 0x4a0003bf  vwaitq
    ctx->pc = 0x153ff0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x153ff4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x153ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153ff8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x153ff8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x153ffc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x153ffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154000: 0x4a0003bf  vwaitq
    ctx->pc = 0x154000u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x154004: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x154008: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x154008u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15400c: 0x4615b000  add.s       $f0, $f22, $f21
    ctx->pc = 0x15400cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x154010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x154010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154014: 0x0  nop
    ctx->pc = 0x154014u;
    // NOP
    // 0x154018: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x154018u;
    {
        const bool branch_taken_0x154018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154018) {
            ctx->pc = 0x154040u;
            return;
        }
    }
    ctx->pc = 0x154020u;
    // 0x154020: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x154024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154028: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154028u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15402c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x15402cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x154030: 0x0  nop
    ctx->pc = 0x154030u;
    // NOP
    // 0x154034: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x154034u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x154038: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x154038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15403c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x15403cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->pc = 0x154040u;
}
