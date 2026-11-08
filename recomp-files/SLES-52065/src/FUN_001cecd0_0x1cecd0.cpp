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

// Function: FUN_001cecd0
// Address: 0x1cecd0 - 0x1cecdc
void FUN_001cecd0_0x1cecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cecd0_0x1cecd0");
#endif

    ctx->pc = 0x1cecd0u;

    // 0x1cecd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECD4u;
        // 0x1cecd8: 0xac24fb40  sw          $a0, -0x4C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966080), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CECDCu;
}
