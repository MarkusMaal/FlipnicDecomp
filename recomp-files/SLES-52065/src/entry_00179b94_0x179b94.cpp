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

// Function: entry_00179b94
// Address: 0x179b94 - 0x179be0
void entry_00179b94_0x179b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b94_0x179b94");
#endif

    ctx->pc = 0x179b94u;

    // 0x179b94: 0x0  nop
    ctx->pc = 0x179b94u;
    // NOP
    // 0x179b98: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x179b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x179b9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x179b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x179ba0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179ba4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x179ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x179ba8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x179ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179bac: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x179bacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x179bb0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179bb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179bb4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179bb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bb8: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x179bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bbc: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x179bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bc0: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x179bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179bc4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x179bc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179bcc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x179bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x179bd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x179bd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x179bd8: 0xac624070  sw          $v0, 0x4070($v1)
    ctx->pc = 0x179bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16496), GPR_U32(ctx, 2));
    // 0x179bdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x179bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x179be0u;
}
