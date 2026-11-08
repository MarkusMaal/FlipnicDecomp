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

// Function: entry_001322c0
// Address: 0x1322c0 - 0x1322d0
void entry_001322c0_0x1322c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001322c0_0x1322c0");
#endif

    ctx->pc = 0x1322c0u;

    // 0x1322c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1322C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1322C8u;
    // 0x1322c8: 0x0  nop
    ctx->pc = 0x1322c8u;
    // NOP
    // 0x1322cc: 0x0  nop
    ctx->pc = 0x1322ccu;
    // NOP
    ctx->pc = 0x1322d0u;
}
