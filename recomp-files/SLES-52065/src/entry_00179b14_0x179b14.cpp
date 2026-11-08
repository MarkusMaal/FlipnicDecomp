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

// Function: entry_00179b14
// Address: 0x179b14 - 0x179b4c
void entry_00179b14_0x179b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b14_0x179b14");
#endif

    ctx->pc = 0x179b14u;

    // 0x179b14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x179b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x179b18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x179b1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x179b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x179b20: 0x24660060  addiu       $a2, $v1, 0x60
    ctx->pc = 0x179b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x179b24: 0x24670070  addiu       $a3, $v1, 0x70
    ctx->pc = 0x179b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x179b28: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x179b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x179b2c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x179b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179b30: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x179b30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179b34: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x179b34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x179b38: 0x4bc2109b  vmulw.xyz   $vf2, $vf2, $vf2w
    ctx->pc = 0x179b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x179b3c: 0x4bc31098  vmulx.xyz   $vf2, $vf2, $vf3x
    ctx->pc = 0x179b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x179b40: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179b44: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x179b44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179b48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x179b4cu;
}
