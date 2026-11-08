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

// Function: FUN_001ebaa0
// Address: 0x1ebaa0 - 0x1ebaac
void FUN_001ebaa0_0x1ebaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebaa0_0x1ebaa0");
#endif

    ctx->pc = 0x1ebaa0u;

    // 0x1ebaa0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ebaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ebaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAA4u;
        // 0x1ebaa8: 0xac40a3b0  sw          $zero, -0x5C50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBAACu;
}
