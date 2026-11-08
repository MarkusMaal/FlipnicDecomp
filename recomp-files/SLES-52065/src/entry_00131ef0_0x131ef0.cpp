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

// Function: entry_00131ef0
// Address: 0x131ef0 - 0x131f00
void entry_00131ef0_0x131ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ef0_0x131ef0");
#endif

    ctx->pc = 0x131ef0u;

    // 0x131ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x131EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131EF8u;
    // 0x131ef8: 0x0  nop
    ctx->pc = 0x131ef8u;
    // NOP
    // 0x131efc: 0x0  nop
    ctx->pc = 0x131efcu;
    // NOP
    ctx->pc = 0x131f00u;
}
