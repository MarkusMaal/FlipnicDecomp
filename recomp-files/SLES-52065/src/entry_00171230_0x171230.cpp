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

// Function: entry_00171230
// Address: 0x171230 - 0x171240
void entry_00171230_0x171230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171230_0x171230");
#endif

    ctx->pc = 0x171230u;

    // 0x171230: 0x3e00008  jr          $ra
    ctx->pc = 0x171230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171230u;
        // 0x171234: 0xac800254  sw          $zero, 0x254($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171238u;
    // 0x171238: 0x0  nop
    ctx->pc = 0x171238u;
    // NOP
    // 0x17123c: 0x0  nop
    ctx->pc = 0x17123cu;
    // NOP
    ctx->pc = 0x171240u;
}
