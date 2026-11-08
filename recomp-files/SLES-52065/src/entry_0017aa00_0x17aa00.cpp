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

// Function: entry_0017aa00
// Address: 0x17aa00 - 0x17aa10
void entry_0017aa00_0x17aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa00_0x17aa00");
#endif

    ctx->pc = 0x17aa00u;

    // 0x17aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA00u;
        // 0x17aa04: 0x8c820424  lw          $v0, 0x424($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1060)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA08u;
    // 0x17aa08: 0x0  nop
    ctx->pc = 0x17aa08u;
    // NOP
    // 0x17aa0c: 0x0  nop
    ctx->pc = 0x17aa0cu;
    // NOP
    ctx->pc = 0x17aa10u;
}
