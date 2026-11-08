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

// Function: entry_00161900
// Address: 0x161900 - 0x16193c
void entry_00161900_0x161900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161900_0x161900");
#endif

    ctx->pc = 0x161900u;

    // 0x161900: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x161900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x161904: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x161904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161908: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x161908u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16190c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16190cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161910: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x161910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161914: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x161914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x161918: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x161918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16191c: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x16191cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x161920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161924: 0x0  nop
    ctx->pc = 0x161924u;
    // NOP
    // 0x161928: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x161928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16192c: 0x0  nop
    ctx->pc = 0x16192cu;
    // NOP
    // 0x161930: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x161930u;
    {
        const bool branch_taken_0x161930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161930) {
            ctx->pc = 0x16193Cu;
            return;
        }
    }
    ctx->pc = 0x161938u;
    // 0x161938: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x161938u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x16193cu;
}
