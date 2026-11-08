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

// Function: entry_00163dd0
// Address: 0x163dd0 - 0x163e84
void entry_00163dd0_0x163dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163dd0_0x163dd0");
#endif

    ctx->pc = 0x163dd0u;

    // 0x163dd0: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163dd4: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x163DD4u;
    {
        const bool branch_taken_0x163dd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x163DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DD4u;
        // 0x163dd8: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dd4) {
            ctx->pc = 0x163E84u;
            return;
        }
    }
    ctx->pc = 0x163DDCu;
    // 0x163ddc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x163ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x163de0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163de4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x163de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x163de8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x163de8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163dec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163df0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x163df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x163df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163df8: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x163df8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163dfc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163dfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163e00: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x163e00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163e04: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x163e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x163e08: 0x0  nop
    ctx->pc = 0x163e08u;
    // NOP
    // 0x163e0c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x163e0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x163e10: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x163e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163e14: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163e14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163e18: 0x26650290  addiu       $a1, $s3, 0x290
    ctx->pc = 0x163e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x163e1c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x163e1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163e20: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x163e20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163e24: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e28: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e2c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e30: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163e30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163e34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163e38: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163e3c: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163e48: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x163e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e4c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x163e4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x163e50: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163e50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163e54: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x163e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e58: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e5c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e60: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163e60u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163e64: 0x4a0003bf  vwaitq
    ctx->pc = 0x163e64u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163e68: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163e6c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x163e6cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x163e70: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x163e70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163e74: 0x4a0003bf  vwaitq
    ctx->pc = 0x163e74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163e78: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x163e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163e7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x163E7Cu;
    {
        const bool branch_taken_0x163e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E7Cu;
        // 0x163e80: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e7c) {
            ctx->pc = 0x163E90u;
            return;
        }
    }
    ctx->pc = 0x163E84u;
}
