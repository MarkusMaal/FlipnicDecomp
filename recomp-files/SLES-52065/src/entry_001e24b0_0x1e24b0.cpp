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

// Function: entry_001e24b0
// Address: 0x1e24b0 - 0x1e24c0
void entry_001e24b0_0x1e24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e24b0_0x1e24b0");
#endif

    ctx->pc = 0x1e24b0u;

    // 0x1e24b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E24B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24B0u;
        // 0x1e24b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E24B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E24B8u;
    // 0x1e24b8: 0x0  nop
    ctx->pc = 0x1e24b8u;
    // NOP
    // 0x1e24bc: 0x0  nop
    ctx->pc = 0x1e24bcu;
    // NOP
    ctx->pc = 0x1e24c0u;
}
