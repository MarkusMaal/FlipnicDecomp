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

// Function: FUN_001cc5c0
// Address: 0x1cc5c0 - 0x1cc5cc
void FUN_001cc5c0_0x1cc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc5c0_0x1cc5c0");
#endif

    ctx->pc = 0x1cc5c0u;

    // 0x1cc5c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5C4u;
        // 0x1cc5c8: 0xac24f968  sw          $a0, -0x698($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC5CCu;
}
