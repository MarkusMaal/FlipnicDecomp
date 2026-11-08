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

// Function: entry_0016ac3c
// Address: 0x16ac3c - 0x16ac84
void entry_0016ac3c_0x16ac3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac3c_0x16ac3c");
#endif

    ctx->pc = 0x16ac3cu;

    // 0x16ac3c: 0x1420009e  bnez        $at, . + 4 + (0x9E << 2)
    ctx->pc = 0x16AC3Cu;
    {
        const bool branch_taken_0x16ac3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC3Cu;
        // 0x16ac40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac3c) {
            ctx->pc = 0x16AEB8u;
            return;
        }
    }
    ctx->pc = 0x16AC44u;
    // 0x16ac44: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x16ac48: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16ac4c: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x16ac4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ac50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16ac50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ac54: 0x0  nop
    ctx->pc = 0x16ac54u;
    // NOP
    // 0x16ac58: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16ac58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ac5c: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16ac5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ac60: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16ac60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ac64: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ac68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16ac68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ac6c: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x16ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ac70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ac70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ac74: 0x0  nop
    ctx->pc = 0x16ac74u;
    // NOP
    // 0x16ac78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16AC78u;
    {
        const bool branch_taken_0x16ac78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC78u;
        // 0x16ac7c: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac78) {
            ctx->pc = 0x16AC84u;
            return;
        }
    }
    ctx->pc = 0x16AC80u;
    // 0x16ac80: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    ctx->pc = 0x16ac84u;
}
