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

// Function: entry_001620f8
// Address: 0x1620f8 - 0x16212c
void entry_001620f8_0x1620f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620f8_0x1620f8");
#endif

    ctx->pc = 0x1620f8u;

    // 0x1620f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1620f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1620fc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1620fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x162100: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x162104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x162108: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x162108u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16210c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16210cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x162110: 0x0  nop
    ctx->pc = 0x162110u;
    // NOP
    // 0x162114: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x162114u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x162118: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x162118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16211c: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16211cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162120: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x162120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162124: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x162124u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162128: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x16212cu;
}
