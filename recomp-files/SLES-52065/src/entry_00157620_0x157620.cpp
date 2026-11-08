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

// Function: entry_00157620
// Address: 0x157620 - 0x15765c
void entry_00157620_0x157620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157620_0x157620");
#endif

    ctx->pc = 0x157620u;

    // 0x157620: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x157620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x157624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157628: 0x24860290  addiu       $a2, $a0, 0x290
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x15762c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15762cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157630: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157634: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x157634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157638: 0x0  nop
    ctx->pc = 0x157638u;
    // NOP
    // 0x15763c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15763cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x157640: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x157640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157644: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x157644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157648: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x157648u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15764c: 0xe48102a0  swc1        $f1, 0x2A0($a0)
    ctx->pc = 0x15764cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x157650: 0xac800280  sw          $zero, 0x280($a0)
    ctx->pc = 0x157650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 0));
    // 0x157654: 0x3e00008  jr          $ra
    ctx->pc = 0x157654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157654u;
        // 0x157658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15765Cu;
}
