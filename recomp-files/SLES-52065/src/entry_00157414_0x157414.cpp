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

// Function: entry_00157414
// Address: 0x157414 - 0x157434
void entry_00157414_0x157414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157414_0x157414");
#endif

    ctx->pc = 0x157414u;

    // 0x157414: 0x0  nop
    ctx->pc = 0x157414u;
    // NOP
    // 0x157418: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x157418u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x15741c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15741cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157420: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x157420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157424: 0x0  nop
    ctx->pc = 0x157424u;
    // NOP
    // 0x157428: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x157428u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15742c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x15742cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157430: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x157430u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    ctx->pc = 0x157434u;
}
