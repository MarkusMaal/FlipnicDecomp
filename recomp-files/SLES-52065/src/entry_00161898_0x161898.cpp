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

// Function: entry_00161898
// Address: 0x161898 - 0x1618d4
void entry_00161898_0x161898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161898_0x161898");
#endif

    ctx->pc = 0x161898u;

    // 0x161898: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x161898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16189c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16189cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1618a0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1618a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1618a4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1618a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1618a8: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x1618a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1618ac: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1618acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1618b0: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1618b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1618b4: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1618b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1618b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1618b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1618bc: 0x0  nop
    ctx->pc = 0x1618bcu;
    // NOP
    // 0x1618c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1618c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1618c4: 0x0  nop
    ctx->pc = 0x1618c4u;
    // NOP
    // 0x1618c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1618C8u;
    {
        const bool branch_taken_0x1618c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1618c8) {
            ctx->pc = 0x1618D4u;
            return;
        }
    }
    ctx->pc = 0x1618D0u;
    // 0x1618d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1618d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1618d4u;
}
