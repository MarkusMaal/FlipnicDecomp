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

// Function: entry_0015bb80
// Address: 0x15bb80 - 0x15bb90
void entry_0015bb80_0x15bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb80_0x15bb80");
#endif

    ctx->pc = 0x15bb80u;

    // 0x15bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BB88u;
    // 0x15bb88: 0x0  nop
    ctx->pc = 0x15bb88u;
    // NOP
    // 0x15bb8c: 0x0  nop
    ctx->pc = 0x15bb8cu;
    // NOP
    ctx->pc = 0x15bb90u;
}
