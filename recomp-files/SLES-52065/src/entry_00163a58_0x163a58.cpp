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

// Function: entry_00163a58
// Address: 0x163a58 - 0x163af8
void entry_00163a58_0x163a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163a58_0x163a58");
#endif

    ctx->pc = 0x163a58u;

label_163a58:
    // 0x163a58: 0x8e620340  lw          $v0, 0x340($s3)
    ctx->pc = 0x163a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163a5c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x163a5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163a60: 0x0  nop
    ctx->pc = 0x163a60u;
    // NOP
    // 0x163a64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x163a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x163a68: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163a70: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x163a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x163a74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x163a78: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x163a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163a7c: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x163a7cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163a80: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163a80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163a84: 0x4be439ac  vsub.xyzw   $vf6, $vf7, $vf4
    ctx->pc = 0x163a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163a88: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x163a88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x163a8c: 0x0  nop
    ctx->pc = 0x163a8cu;
    // NOP
    // 0x163a90: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x163a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x163a94: 0x4be53118  vmulx.xyzw  $vf4, $vf6, $vf5x
    ctx->pc = 0x163a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x163a98: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x163a98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x163a9c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x163a9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163aa0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x163aa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163aa4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163aa8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163aac: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163ab0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163ab0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163ab4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x163ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x163ab8: 0x8e630340  lw          $v1, 0x340($s3)
    ctx->pc = 0x163ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163abc: 0xc66202f0  lwc1        $f2, 0x2F0($s3)
    ctx->pc = 0x163abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163ac0: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x163ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
    // 0x163ac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163acc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x163accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ad0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x163ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x163ad4: 0x46012303  div.s       $f12, $f4, $f1
    ctx->pc = 0x163ad4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x163ad8: 0x0  nop
    ctx->pc = 0x163ad8u;
    // NOP
    // 0x163adc: 0x0  nop
    ctx->pc = 0x163adcu;
    // NOP
    // 0x163ae0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x163ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ae4: 0x0  nop
    ctx->pc = 0x163ae4u;
    // NOP
    // 0x163ae8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x163AE8u;
    {
        const bool branch_taken_0x163ae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163ae8) {
            ctx->pc = 0x163AF8u;
            return;
        }
    }
    ctx->pc = 0x163AF0u;
    // 0x163af0: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x163AF0u;
    {
        const bool branch_taken_0x163af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AF0u;
        // 0x163af4: 0x129023  negu        $s2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163af0) {
            ctx->pc = 0x163A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163a58;
        }
    }
    ctx->pc = 0x163AF8u;
}
