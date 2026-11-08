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

// Function: entry_0016b4d0
// Address: 0x16b4d0 - 0x16b51c
void entry_0016b4d0_0x16b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b4d0_0x16b4d0");
#endif

    ctx->pc = 0x16b4d0u;

    // 0x16b4d0: 0x142000d6  bnez        $at, . + 4 + (0xD6 << 2)
    ctx->pc = 0x16B4D0u;
    {
        const bool branch_taken_0x16b4d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b4d0) {
            ctx->pc = 0x16B82Cu;
            return;
        }
    }
    ctx->pc = 0x16B4D8u;
    // 0x16b4d8: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x16b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x16b4dc: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x16b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x16b4e0: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x16b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16b4e4: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x16b4e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16b4e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b4e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b4ec: 0x0  nop
    ctx->pc = 0x16b4ecu;
    // NOP
    // 0x16b4f0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16b4f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16b4f4: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16b4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b4f8: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16b4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b4fc: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b504: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x16b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b50c: 0x0  nop
    ctx->pc = 0x16b50cu;
    // NOP
    // 0x16b510: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B510u;
    {
        const bool branch_taken_0x16b510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b510) {
            ctx->pc = 0x16B51Cu;
            return;
        }
    }
    ctx->pc = 0x16B518u;
    // 0x16b518: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16b518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    ctx->pc = 0x16b51cu;
}
