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

// Function: entry_001b7520
// Address: 0x1b7520 - 0x1b7530
void entry_001b7520_0x1b7520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7520_0x1b7520");
#endif

    ctx->pc = 0x1b7520u;

    // 0x1b7520: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7528u;
    // 0x1b7528: 0x0  nop
    ctx->pc = 0x1b7528u;
    // NOP
    // 0x1b752c: 0x0  nop
    ctx->pc = 0x1b752cu;
    // NOP
    ctx->pc = 0x1b7530u;
}
