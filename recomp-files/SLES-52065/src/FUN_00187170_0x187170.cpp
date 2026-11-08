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

// Function: FUN_00187170
// Address: 0x187170 - 0x187188
void FUN_00187170_0x187170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187170_0x187170");
#endif

    ctx->pc = 0x187170u;

    // 0x187170: 0xd89c0000  lqc2        $vf28, 0x0($a0)
    ctx->pc = 0x187170u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187174: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x187174u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x187178: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x187178u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18717c: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x18717cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x187180: 0x3e00008  jr          $ra
    ctx->pc = 0x187180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187180u;
        // 0x187184: 0x4a000070  viadd       $vi1, $vi0, $vi0 (Delay Slot)
        ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187188u;
}
