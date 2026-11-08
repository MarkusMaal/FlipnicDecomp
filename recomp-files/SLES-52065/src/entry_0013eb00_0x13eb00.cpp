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

// Function: entry_0013eb00
// Address: 0x13eb00 - 0x13eb10
void entry_0013eb00_0x13eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb00_0x13eb00");
#endif

    ctx->pc = 0x13eb00u;

    // 0x13eb00: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EB08u;
    // 0x13eb08: 0x0  nop
    ctx->pc = 0x13eb08u;
    // NOP
    // 0x13eb0c: 0x0  nop
    ctx->pc = 0x13eb0cu;
    // NOP
    ctx->pc = 0x13eb10u;
}
