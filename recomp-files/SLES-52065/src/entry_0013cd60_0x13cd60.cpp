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

// Function: entry_0013cd60
// Address: 0x13cd60 - 0x13cd70
void entry_0013cd60_0x13cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cd60_0x13cd60");
#endif

    ctx->pc = 0x13cd60u;

    // 0x13cd60: 0x3e00008  jr          $ra
    ctx->pc = 0x13CD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD60u;
        // 0x13cd64: 0x8c820108  lw          $v0, 0x108($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CD68u;
    // 0x13cd68: 0x0  nop
    ctx->pc = 0x13cd68u;
    // NOP
    // 0x13cd6c: 0x0  nop
    ctx->pc = 0x13cd6cu;
    // NOP
    ctx->pc = 0x13cd70u;
}
