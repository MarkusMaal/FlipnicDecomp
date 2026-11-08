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

// Function: entry_00179240
// Address: 0x179240 - 0x17926c
void entry_00179240_0x179240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179240_0x179240");
#endif

    ctx->pc = 0x179240u;

    // 0x179240: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x179240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x179244: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x179244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179248: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x179248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17924c: 0x24450820  addiu       $a1, $v0, 0x820
    ctx->pc = 0x17924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
    // 0x179250: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x179254: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x179254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x179258: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x179258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17925c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17925cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179260: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179260u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179264: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x179264u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x179268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x17926cu;
}
