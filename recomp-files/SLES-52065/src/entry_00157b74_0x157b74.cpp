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

// Function: entry_00157b74
// Address: 0x157b74 - 0x157b94
void entry_00157b74_0x157b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157b74_0x157b74");
#endif

    ctx->pc = 0x157b74u;

    // 0x157b74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x157b78: 0x24450270  addiu       $a1, $v0, 0x270
    ctx->pc = 0x157b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x157b7c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x157b7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157b80: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157b80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157b84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x157b88: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x157b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x157b8c: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x157b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x157b90: 0xac430288  sw          $v1, 0x288($v0)
    ctx->pc = 0x157b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 3));
    ctx->pc = 0x157b94u;
}
