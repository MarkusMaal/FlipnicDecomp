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

// Function: entry_0017cb30
// Address: 0x17cb30 - 0x17cb40
void entry_0017cb30_0x17cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cb30_0x17cb30");
#endif

    ctx->pc = 0x17cb30u;

    // 0x17cb30: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB38u;
    // 0x17cb38: 0x0  nop
    ctx->pc = 0x17cb38u;
    // NOP
    // 0x17cb3c: 0x0  nop
    ctx->pc = 0x17cb3cu;
    // NOP
    ctx->pc = 0x17cb40u;
}
