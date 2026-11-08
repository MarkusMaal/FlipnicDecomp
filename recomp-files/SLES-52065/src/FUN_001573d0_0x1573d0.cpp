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

// Function: FUN_001573d0
// Address: 0x1573d0 - 0x15743c
void FUN_001573d0_0x1573d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001573d0_0x1573d0");
#endif

    ctx->pc = 0x1573d0u;

    // 0x1573d0: 0xc48001d0  lwc1        $f0, 0x1D0($a0)
    ctx->pc = 0x1573d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573d4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1573d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1573d8: 0x0  nop
    ctx->pc = 0x1573d8u;
    // NOP
    // 0x1573dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1573DCu;
    {
        const bool branch_taken_0x1573dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1573dc) {
            ctx->pc = 0x1573ECu;
            goto label_1573ec;
        }
    }
    ctx->pc = 0x1573E4u;
    // 0x1573e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1573E4u;
    {
        const bool branch_taken_0x1573e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1573e4) {
            ctx->pc = 0x157414u;
            goto label_157414;
        }
    }
    ctx->pc = 0x1573ECu;
label_1573ec:
    // 0x1573ec: 0xc48001d4  lwc1        $f0, 0x1D4($a0)
    ctx->pc = 0x1573ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1573f0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1573f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1573f4: 0x0  nop
    ctx->pc = 0x1573f4u;
    // NOP
    // 0x1573f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1573F8u;
    {
        const bool branch_taken_0x1573f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1573f8) {
            ctx->pc = 0x157408u;
            goto label_157408;
        }
    }
    ctx->pc = 0x157400u;
    // 0x157400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157400u;
    {
        const bool branch_taken_0x157400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157400) {
            ctx->pc = 0x157410u;
            goto label_157410;
        }
    }
    ctx->pc = 0x157408u;
label_157408:
    // 0x157408: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x157408u;
    {
        const bool branch_taken_0x157408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157408u;
        // 0x15740c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157408) {
            ctx->pc = 0x157434u;
            goto label_157434;
        }
    }
    ctx->pc = 0x157410u;
label_157410:
    // 0x157410: 0x0  nop
    ctx->pc = 0x157410u;
    // NOP
label_157414:
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
label_157434:
    // 0x157434: 0x3e00008  jr          $ra
    ctx->pc = 0x157434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15743Cu;
}
