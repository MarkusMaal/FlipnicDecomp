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

// Function: entry_00153e08
// Address: 0x153e08 - 0x153e5c
void entry_00153e08_0x153e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153e08_0x153e08");
#endif

    ctx->pc = 0x153e08u;

    // 0x153e08: 0x0  nop
    ctx->pc = 0x153e08u;
    // NOP
    // 0x153e0c: 0x0  nop
    ctx->pc = 0x153e0cu;
    // NOP
    // 0x153e10: 0x0  nop
    ctx->pc = 0x153e10u;
    // NOP
    // 0x153e14: 0x46020044  c1          0x20044
    ctx->pc = 0x153e14u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x153e18: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x153e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x153e1c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x153e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x153e20: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x153e24: 0x460d6000  add.s       $f0, $f12, $f13
    ctx->pc = 0x153e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x153e28: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x153e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x153e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e30: 0x0  nop
    ctx->pc = 0x153e30u;
    // NOP
    // 0x153e34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153e38: 0xd8a70000  lqc2        $vf7, 0x0($a1)
    ctx->pc = 0x153e38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153e3c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x153e3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153e40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x153e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x153e44: 0x0  nop
    ctx->pc = 0x153e44u;
    // NOP
    // 0x153e48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x153e48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x153e4c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x153e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x153e50: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x153e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153e54: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x153e54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x153e5cu;
}
