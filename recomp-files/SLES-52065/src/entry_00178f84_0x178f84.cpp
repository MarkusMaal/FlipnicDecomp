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

// Function: entry_00178f84
// Address: 0x178f84 - 0x178fdc
void entry_00178f84_0x178f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178f84_0x178f84");
#endif

    ctx->pc = 0x178f84u;

    // 0x178f84: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x178f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x178f88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x178f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x178f8c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x178f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x178f90: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x178f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x178f94: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x178f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x178f98: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x178f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178f9c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x178f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178fa0: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x178fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178fa4: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x178fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x178fa8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x178fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178fac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178fb0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x178fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x178fb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178fb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178fbc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x178fbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x178fc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x178fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x178fc4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x178fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x178fc8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x178fc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178fcc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x178fccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178fd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x178fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x178fd4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x178fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178fd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x178fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x178fdcu;
}
