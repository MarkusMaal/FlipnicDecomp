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

// Function: entry_0013e9f0
// Address: 0x13e9f0 - 0x13ea00
void entry_0013e9f0_0x13e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e9f0_0x13e9f0");
#endif

    ctx->pc = 0x13e9f0u;

    // 0x13e9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9F0u;
        // 0x13e9f4: 0x24820128  addiu       $v0, $a0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E9F8u;
    // 0x13e9f8: 0x0  nop
    ctx->pc = 0x13e9f8u;
    // NOP
    // 0x13e9fc: 0x0  nop
    ctx->pc = 0x13e9fcu;
    // NOP
    ctx->pc = 0x13ea00u;
}
