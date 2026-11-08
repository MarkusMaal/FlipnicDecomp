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

// Function: entry_00176fe4
// Address: 0x176fe4 - 0x177000
void entry_00176fe4_0x176fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176fe4_0x176fe4");
#endif

    ctx->pc = 0x176fe4u;

    // 0x176fe4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x176fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x176fe8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x176fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x176fec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x176fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176ff0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x176ff0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176ff4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x176ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x176ff8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x176ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x176ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x177000u;
}
