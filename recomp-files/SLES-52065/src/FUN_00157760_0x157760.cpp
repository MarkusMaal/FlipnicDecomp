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

// Function: FUN_00157760
// Address: 0x157760 - 0x1577ac
void FUN_00157760_0x157760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157760_0x157760");
#endif

    ctx->pc = 0x157760u;

    // 0x157760: 0xc4810334  lwc1        $f1, 0x334($a0)
    ctx->pc = 0x157760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157764: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x157764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x157768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15776c: 0x0  nop
    ctx->pc = 0x15776cu;
    // NOP
    // 0x157770: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157774: 0x0  nop
    ctx->pc = 0x157774u;
    // NOP
    // 0x157778: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x157778u;
    {
        const bool branch_taken_0x157778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157778u;
        // 0x15777c: 0x24830300  addiu       $v1, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157778) {
            ctx->pc = 0x1577A4u;
            goto label_1577a4;
        }
    }
    ctx->pc = 0x157780u;
    // 0x157780: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157784: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x157784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157788: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x157788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15778c: 0x4bc521a8  vadd.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x15778cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157790: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x157790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157794: 0xc48102f0  lwc1        $f1, 0x2F0($a0)
    ctx->pc = 0x157794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157798: 0xc4800330  lwc1        $f0, 0x330($a0)
    ctx->pc = 0x157798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15779c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15779cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1577a0: 0xe4800330  swc1        $f0, 0x330($a0)
    ctx->pc = 0x1577a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 816), bits); }
label_1577a4:
    // 0x1577a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1577A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1577A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1577ACu;
}
