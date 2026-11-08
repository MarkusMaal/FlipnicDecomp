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

// Function: entry_001791bc
// Address: 0x1791bc - 0x179220
void entry_001791bc_0x1791bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001791bc_0x1791bc");
#endif

    ctx->pc = 0x1791bcu;

    // 0x1791bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1791bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1791c0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1791c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1791c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1791c8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1791c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1791cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1791ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791d0: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x1791d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791d4: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x1791d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791d8: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x1791d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791dc: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1791dcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1791e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1791e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1791e4: 0x0  nop
    ctx->pc = 0x1791e4u;
    // NOP
    // 0x1791e8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1791e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1791ec: 0x0  nop
    ctx->pc = 0x1791ecu;
    // NOP
    // 0x1791f0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1791F0u;
    {
        const bool branch_taken_0x1791f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1791f0) {
            ctx->pc = 0x179220u;
            return;
        }
    }
    ctx->pc = 0x1791F8u;
    // 0x1791f8: 0x0  nop
    ctx->pc = 0x1791f8u;
    // NOP
    // 0x1791fc: 0x0  nop
    ctx->pc = 0x1791fcu;
    // NOP
    // 0x179200: 0x46000004  c1          0x4
    ctx->pc = 0x179200u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x179204: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x179204u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x179208: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x179208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17920c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x17920cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x179210: 0x0  nop
    ctx->pc = 0x179210u;
    // NOP
    // 0x179214: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x179214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x179218: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x179218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17921c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x17921cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x179220u;
}
