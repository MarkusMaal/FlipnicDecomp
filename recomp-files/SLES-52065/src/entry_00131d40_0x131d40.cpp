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

// Function: entry_00131d40
// Address: 0x131d40 - 0x131d50
void entry_00131d40_0x131d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131d40_0x131d40");
#endif

    ctx->pc = 0x131d40u;

    // 0x131d40: 0x3e00008  jr          $ra
    ctx->pc = 0x131D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131D48u;
    // 0x131d48: 0x0  nop
    ctx->pc = 0x131d48u;
    // NOP
    // 0x131d4c: 0x0  nop
    ctx->pc = 0x131d4cu;
    // NOP
    ctx->pc = 0x131d50u;
}
