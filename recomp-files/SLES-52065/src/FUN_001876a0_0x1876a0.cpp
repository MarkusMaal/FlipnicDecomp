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

// Function: FUN_001876a0
// Address: 0x1876a0 - 0x1876a8
void FUN_001876a0_0x1876a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001876a0_0x1876a0");
#endif

    ctx->pc = 0x1876a0u;

    // 0x1876a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1876A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1876A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A0u;
        // 0x1876a4: 0x4a000070  viadd       $vi1, $vi0, $vi0 (Delay Slot)
        ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1876A8u;
}
