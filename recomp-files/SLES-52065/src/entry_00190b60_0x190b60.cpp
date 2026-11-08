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

// Function: entry_00190b60
// Address: 0x190b60 - 0x190b70
void entry_00190b60_0x190b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190b60_0x190b60");
#endif

    ctx->pc = 0x190b60u;

    // 0x190b60: 0x3e00008  jr          $ra
    ctx->pc = 0x190B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190B68u;
    // 0x190b68: 0x0  nop
    ctx->pc = 0x190b68u;
    // NOP
    // 0x190b6c: 0x0  nop
    ctx->pc = 0x190b6cu;
    // NOP
    ctx->pc = 0x190b70u;
}
