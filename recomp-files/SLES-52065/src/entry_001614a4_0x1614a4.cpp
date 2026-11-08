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

// Function: entry_001614a4
// Address: 0x1614a4 - 0x1614b0
void entry_001614a4_0x1614a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001614a4_0x1614a4");
#endif

    ctx->pc = 0x1614a4u;

    // 0x1614a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1614A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1614A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614A4u;
        // 0x1614a8: 0xa0a4006c  sb          $a0, 0x6C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 108), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1614A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1614ACu;
    // 0x1614ac: 0x0  nop
    ctx->pc = 0x1614acu;
    // NOP
    ctx->pc = 0x1614b0u;
}
