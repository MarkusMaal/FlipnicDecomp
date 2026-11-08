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

// Function: entry_0017dd98
// Address: 0x17dd98 - 0x17dda0
void entry_0017dd98_0x17dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dd98_0x17dd98");
#endif

    ctx->pc = 0x17dd98u;

    // 0x17dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD98u;
        // 0x17dd9c: 0xac871024  sw          $a3, 0x1024($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DDA0u;
}
