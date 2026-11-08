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

// Function: entry_0010f350
// Address: 0x10f350 - 0x10f360
void entry_0010f350_0x10f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f350_0x10f350");
#endif

    ctx->pc = 0x10f350u;

    // 0x10f350: 0x3e00008  jr          $ra
    ctx->pc = 0x10F350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F358u;
    // 0x10f358: 0x0  nop
    ctx->pc = 0x10f358u;
    // NOP
    // 0x10f35c: 0x0  nop
    ctx->pc = 0x10f35cu;
    // NOP
    ctx->pc = 0x10f360u;
}
