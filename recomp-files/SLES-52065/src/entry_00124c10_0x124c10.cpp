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

// Function: entry_00124c10
// Address: 0x124c10 - 0x124c20
void entry_00124c10_0x124c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124c10_0x124c10");
#endif

    ctx->pc = 0x124c10u;

    // 0x124c10: 0x3e00008  jr          $ra
    ctx->pc = 0x124C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124C18u;
    // 0x124c18: 0x0  nop
    ctx->pc = 0x124c18u;
    // NOP
    // 0x124c1c: 0x0  nop
    ctx->pc = 0x124c1cu;
    // NOP
    ctx->pc = 0x124c20u;
}
