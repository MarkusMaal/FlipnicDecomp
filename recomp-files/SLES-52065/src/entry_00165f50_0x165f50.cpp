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

// Function: entry_00165f50
// Address: 0x165f50 - 0x165f60
void entry_00165f50_0x165f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165f50_0x165f50");
#endif

    ctx->pc = 0x165f50u;

    // 0x165f50: 0x3e00008  jr          $ra
    ctx->pc = 0x165F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F58u;
    // 0x165f58: 0x0  nop
    ctx->pc = 0x165f58u;
    // NOP
    // 0x165f5c: 0x0  nop
    ctx->pc = 0x165f5cu;
    // NOP
    ctx->pc = 0x165f60u;
}
