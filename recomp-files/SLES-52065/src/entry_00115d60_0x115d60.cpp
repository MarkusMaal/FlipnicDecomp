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

// Function: entry_00115d60
// Address: 0x115d60 - 0x115d70
void entry_00115d60_0x115d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115d60_0x115d60");
#endif

    ctx->pc = 0x115d60u;

    // 0x115d60: 0x3e00008  jr          $ra
    ctx->pc = 0x115D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D68u;
    // 0x115d68: 0x0  nop
    ctx->pc = 0x115d68u;
    // NOP
    // 0x115d6c: 0x0  nop
    ctx->pc = 0x115d6cu;
    // NOP
    ctx->pc = 0x115d70u;
}
