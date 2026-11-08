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

// Function: entry_00167a70
// Address: 0x167a70 - 0x167a80
void entry_00167a70_0x167a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167a70_0x167a70");
#endif

    ctx->pc = 0x167a70u;

    // 0x167a70: 0x3e00008  jr          $ra
    ctx->pc = 0x167A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167A78u;
    // 0x167a78: 0x0  nop
    ctx->pc = 0x167a78u;
    // NOP
    // 0x167a7c: 0x0  nop
    ctx->pc = 0x167a7cu;
    // NOP
    ctx->pc = 0x167a80u;
}
