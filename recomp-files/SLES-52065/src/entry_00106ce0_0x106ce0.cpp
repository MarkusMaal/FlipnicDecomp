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

// Function: entry_00106ce0
// Address: 0x106ce0 - 0x106cf0
void entry_00106ce0_0x106ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ce0_0x106ce0");
#endif

    ctx->pc = 0x106ce0u;

    // 0x106ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x106CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CE0u;
        // 0x106ce4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CE8u;
    // 0x106ce8: 0x0  nop
    ctx->pc = 0x106ce8u;
    // NOP
    // 0x106cec: 0x0  nop
    ctx->pc = 0x106cecu;
    // NOP
    ctx->pc = 0x106cf0u;
}
