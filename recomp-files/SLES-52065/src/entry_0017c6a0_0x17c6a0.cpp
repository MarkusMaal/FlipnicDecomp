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

// Function: entry_0017c6a0
// Address: 0x17c6a0 - 0x17c6d4
void entry_0017c6a0_0x17c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c6a0_0x17c6a0");
#endif

    ctx->pc = 0x17c6a0u;

    // 0x17c6a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c6a8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x17c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c6ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c6b0: 0x0  nop
    ctx->pc = 0x17c6b0u;
    // NOP
    // 0x17c6b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17C6B4u;
    {
        const bool branch_taken_0x17c6b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6B4u;
        // 0x17c6b8: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6b4) {
            ctx->pc = 0x17C6D4u;
            return;
        }
    }
    ctx->pc = 0x17C6BCu;
    // 0x17c6bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x17c6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c6c0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17c6c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c6c4: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x17c6c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17c6c8: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x17c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17c6cc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x17C6CCu;
    {
        const bool branch_taken_0x17c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6CCu;
        // 0x17c6d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6cc) {
            ctx->pc = 0x17C83Cu;
            return;
        }
    }
    ctx->pc = 0x17C6D4u;
}
