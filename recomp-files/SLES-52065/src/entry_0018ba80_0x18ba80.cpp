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

// Function: entry_0018ba80
// Address: 0x18ba80 - 0x18ba90
void entry_0018ba80_0x18ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ba80_0x18ba80");
#endif

    ctx->pc = 0x18ba80u;

    // 0x18ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x18BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BA88u;
    // 0x18ba88: 0x0  nop
    ctx->pc = 0x18ba88u;
    // NOP
    // 0x18ba8c: 0x0  nop
    ctx->pc = 0x18ba8cu;
    // NOP
    ctx->pc = 0x18ba90u;
}
