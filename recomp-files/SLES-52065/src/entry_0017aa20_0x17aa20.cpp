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

// Function: entry_0017aa20
// Address: 0x17aa20 - 0x17aa30
void entry_0017aa20_0x17aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa20_0x17aa20");
#endif

    ctx->pc = 0x17aa20u;

    // 0x17aa20: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA20u;
        // 0x17aa24: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA28u;
    // 0x17aa28: 0x0  nop
    ctx->pc = 0x17aa28u;
    // NOP
    // 0x17aa2c: 0x0  nop
    ctx->pc = 0x17aa2cu;
    // NOP
    ctx->pc = 0x17aa30u;
}
