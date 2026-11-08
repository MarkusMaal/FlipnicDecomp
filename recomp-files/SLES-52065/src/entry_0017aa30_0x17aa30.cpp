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

// Function: entry_0017aa30
// Address: 0x17aa30 - 0x17aa40
void entry_0017aa30_0x17aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa30_0x17aa30");
#endif

    ctx->pc = 0x17aa30u;

    // 0x17aa30: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA30u;
        // 0x17aa34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA38u;
    // 0x17aa38: 0x0  nop
    ctx->pc = 0x17aa38u;
    // NOP
    // 0x17aa3c: 0x0  nop
    ctx->pc = 0x17aa3cu;
    // NOP
    ctx->pc = 0x17aa40u;
}
