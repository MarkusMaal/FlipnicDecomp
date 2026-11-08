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

// Function: FUN_001c87b0
// Address: 0x1c87b0 - 0x1c87c4
void FUN_001c87b0_0x1c87b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c87b0_0x1c87b0");
#endif

    ctx->pc = 0x1c87b0u;

    // 0x1c87b0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c87b4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c87b8: 0x8c422830  lw          $v0, 0x2830($v0)
    ctx->pc = 0x1c87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
    // 0x1c87bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C87BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87BCu;
        // 0x1c87c0: 0x2442001e  addiu       $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C87BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C87C4u;
}
