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

// Function: entry_00144690
// Address: 0x144690 - 0x1446a0
void entry_00144690_0x144690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144690_0x144690");
#endif

    ctx->pc = 0x144690u;

    // 0x144690: 0x3e00008  jr          $ra
    ctx->pc = 0x144690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144690u;
        // 0x144694: 0xac8500f8  sw          $a1, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144698u;
    // 0x144698: 0x0  nop
    ctx->pc = 0x144698u;
    // NOP
    // 0x14469c: 0x0  nop
    ctx->pc = 0x14469cu;
    // NOP
    ctx->pc = 0x1446a0u;
}
