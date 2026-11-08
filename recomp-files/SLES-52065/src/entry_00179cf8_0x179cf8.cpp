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

// Function: entry_00179cf8
// Address: 0x179cf8 - 0x179d50
void entry_00179cf8_0x179cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179cf8_0x179cf8");
#endif

    ctx->pc = 0x179cf8u;

    // 0x179cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x179cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x179cfc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x179cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x179d00: 0xc4414070  lwc1        $f1, 0x4070($v0)
    ctx->pc = 0x179d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179d04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x179d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179d08: 0x0  nop
    ctx->pc = 0x179d08u;
    // NOP
    // 0x179d0c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x179D0Cu;
    {
        const bool branch_taken_0x179d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179d0c) {
            ctx->pc = 0x179D50u;
            return;
        }
    }
    ctx->pc = 0x179D14u;
    // 0x179d14: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x179d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x179d18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x179d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x179d1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179d20: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179d24: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x179d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x179d28: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x179d28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x179d2c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x179d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179d30: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x179d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179d34: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x179d34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179d38: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x179d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179d3c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x179d3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x179d40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179d44: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179d48: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x179d48u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179d4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x179d50u;
}
