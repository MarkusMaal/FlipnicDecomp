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

// Function: entry_001064f0
// Address: 0x1064f0 - 0x106500
void entry_001064f0_0x1064f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001064f0_0x1064f0");
#endif

    ctx->pc = 0x1064f0u;

    // 0x1064f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1064F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064F0u;
        // 0x1064f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1064F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1064F8u;
    // 0x1064f8: 0x0  nop
    ctx->pc = 0x1064f8u;
    // NOP
    // 0x1064fc: 0x0  nop
    ctx->pc = 0x1064fcu;
    // NOP
    ctx->pc = 0x106500u;
}
