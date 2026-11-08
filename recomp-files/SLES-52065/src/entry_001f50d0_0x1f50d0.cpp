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

// Function: entry_001f50d0
// Address: 0x1f50d0 - 0x1f5118
void entry_001f50d0_0x1f50d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f50d0_0x1f50d0");
#endif

    switch (ctx->pc) {
        case 0x1f50e4u: goto label_1f50e4;
        default: break;
    }

    ctx->pc = 0x1f50d0u;

    // 0x1f50d0: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1f50d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f50d4: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1f50d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f50d8: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x1f50d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50dc: 0xc07d3b6  jal         func_1F4ED8
    ctx->pc = 0x1F50DCu;
    SET_GPR_U32(ctx, 31, 0x1F50E4u);
    ctx->pc = 0x1F4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4ED8u, 0x1F50DCu, 0x1F50E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F50E4u;
label_1f50e4:
    // 0x1f50e4: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x1f50e4u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50e8: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x1f50e8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f50ec: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x1f50ecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f50f0: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x1f50f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f50f4: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x1f50f4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1f50f8: 0x4a8029c3  vaddw.y     $vf7, $vf5, $vf0w
    ctx->pc = 0x1f50f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f50fc: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x1f50fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1f5100: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x1f5100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f5104: 0x4a442984  vsubx.z     $vf6, $vf5, $vf4x
    ctx->pc = 0x1f5104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f5108: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x1f5108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f510c: 0x4b042a00  vaddx.x     $vf8, $vf5, $vf4x
    ctx->pc = 0x1f510cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f5110: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x1f5110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f5114: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f5114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1f5118u;
}
