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

// Function: FUN_00158870
// Address: 0x158870 - 0x1588a8
void FUN_00158870_0x158870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158870_0x158870");
#endif

    ctx->pc = 0x158870u;

    // 0x158870: 0x9083006b  lbu         $v1, 0x6B($a0)
    ctx->pc = 0x158870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
    // 0x158874: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x158874u;
    {
        const bool branch_taken_0x158874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158874u;
        // 0x158878: 0x248301b0  addiu       $v1, $a0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158874) {
            ctx->pc = 0x158898u;
            goto label_158898;
        }
    }
    ctx->pc = 0x15887Cu;
    // 0x15887c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x158880: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158884: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x158884u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158888: 0x4a200180  vaddx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x158888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15888c: 0x4bc521a8  vadd.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x15888cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158890u;
    {
        const bool branch_taken_0x158890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158890u;
        // 0x158894: 0xf8a60000  sqc2        $vf6, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158890) {
            ctx->pc = 0x1588A0u;
            goto label_1588a0;
        }
    }
    ctx->pc = 0x158898u;
label_158898:
    // 0x158898: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x158898u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15889c: 0x7ca60030  sq          $a2, 0x30($a1)
    ctx->pc = 0x15889cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 6));
label_1588a0:
    // 0x1588a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1588A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1588A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1588A8u;
}
