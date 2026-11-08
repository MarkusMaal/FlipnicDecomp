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

// Function: entry_0017c990
// Address: 0x17c990 - 0x17c9a0
void entry_0017c990_0x17c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c990_0x17c990");
#endif

    ctx->pc = 0x17c990u;

    // 0x17c990: 0x3e00008  jr          $ra
    ctx->pc = 0x17C990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C990u;
        // 0x17c994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C998u;
    // 0x17c998: 0x0  nop
    ctx->pc = 0x17c998u;
    // NOP
    // 0x17c99c: 0x0  nop
    ctx->pc = 0x17c99cu;
    // NOP
    ctx->pc = 0x17c9a0u;
}
