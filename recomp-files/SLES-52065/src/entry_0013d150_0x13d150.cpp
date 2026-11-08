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

// Function: entry_0013d150
// Address: 0x13d150 - 0x13d160
void entry_0013d150_0x13d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d150_0x13d150");
#endif

    ctx->pc = 0x13d150u;

    // 0x13d150: 0x3e00008  jr          $ra
    ctx->pc = 0x13D150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D158u;
    // 0x13d158: 0x0  nop
    ctx->pc = 0x13d158u;
    // NOP
    // 0x13d15c: 0x0  nop
    ctx->pc = 0x13d15cu;
    // NOP
    ctx->pc = 0x13d160u;
}
