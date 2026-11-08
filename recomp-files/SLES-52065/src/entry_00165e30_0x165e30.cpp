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

// Function: entry_00165e30
// Address: 0x165e30 - 0x165e40
void entry_00165e30_0x165e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165e30_0x165e30");
#endif

    ctx->pc = 0x165e30u;

    // 0x165e30: 0x3e00008  jr          $ra
    ctx->pc = 0x165E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E38u;
    // 0x165e38: 0x0  nop
    ctx->pc = 0x165e38u;
    // NOP
    // 0x165e3c: 0x0  nop
    ctx->pc = 0x165e3cu;
    // NOP
    ctx->pc = 0x165e40u;
}
