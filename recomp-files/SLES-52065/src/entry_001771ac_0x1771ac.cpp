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

// Function: entry_001771ac
// Address: 0x1771ac - 0x1771d8
void entry_001771ac_0x1771ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001771ac_0x1771ac");
#endif

    ctx->pc = 0x1771acu;

    // 0x1771ac: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1771b0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1771b4: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x1771b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1771b8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1771bc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1771bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1771c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1771c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1771c4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1771c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1771c8: 0x4bc1106c  vsub.xyz    $vf1, $vf2, $vf1
    ctx->pc = 0x1771c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1771cc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1771ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1771d0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1771d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1771d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1771d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1771d8u;
}
