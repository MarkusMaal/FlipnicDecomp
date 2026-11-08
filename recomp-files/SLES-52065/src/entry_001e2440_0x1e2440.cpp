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

// Function: entry_001e2440
// Address: 0x1e2440 - 0x1e2450
void entry_001e2440_0x1e2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2440_0x1e2440");
#endif

    ctx->pc = 0x1e2440u;

    // 0x1e2440: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2440u;
        // 0x1e2444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2448u;
    // 0x1e2448: 0x0  nop
    ctx->pc = 0x1e2448u;
    // NOP
    // 0x1e244c: 0x0  nop
    ctx->pc = 0x1e244cu;
    // NOP
    ctx->pc = 0x1e2450u;
}
