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

// Function: entry_00159170
// Address: 0x159170 - 0x1591a8
void entry_00159170_0x159170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159170_0x159170");
#endif

    ctx->pc = 0x159170u;

    // 0x159170: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x159170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x159174: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x159174u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x159178: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x159178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15917c: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x15917cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159180: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x159180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159184: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x159184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x159188: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x159188u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15918c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15918cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159190: 0x0  nop
    ctx->pc = 0x159190u;
    // NOP
    // 0x159194: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x159194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159198: 0x0  nop
    ctx->pc = 0x159198u;
    // NOP
    // 0x15919c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15919Cu;
    {
        const bool branch_taken_0x15919c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15919c) {
            ctx->pc = 0x1591A8u;
            return;
        }
    }
    ctx->pc = 0x1591A4u;
    // 0x1591a4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1591a4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1591a8u;
}
