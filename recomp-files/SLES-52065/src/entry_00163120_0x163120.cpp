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

// Function: entry_00163120
// Address: 0x163120 - 0x163194
void entry_00163120_0x163120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163120_0x163120");
#endif

    ctx->pc = 0x163120u;

    // 0x163120: 0x8e230240  lw          $v1, 0x240($s1)
    ctx->pc = 0x163120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x163124: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x163124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163128: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x163128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16312c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x16312cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x163130: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x163130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163134: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x163134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163138: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x163138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16313c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x16313cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163140: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x163140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163144: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x163144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163148: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16314c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16314cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163150: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163150u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163154: 0x4a0003bf  vwaitq
    ctx->pc = 0x163154u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163158: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16315c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16315cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163164: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x163168: 0x8e230244  lw          $v1, 0x244($s1)
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x16316c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163170: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x163170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163174: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x163174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x163178: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x163178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x16317c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x163180: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x163180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x163184: 0x8e230244  lw          $v1, 0x244($s1)
    ctx->pc = 0x163184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x163188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x163188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16318c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163190: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x163190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x163194u;
}
