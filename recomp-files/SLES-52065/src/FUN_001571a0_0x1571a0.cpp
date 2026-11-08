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

// Function: FUN_001571a0
// Address: 0x1571a0 - 0x1571b4
void FUN_001571a0_0x1571a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001571a0_0x1571a0");
#endif

    ctx->pc = 0x1571a0u;

    // 0x1571a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1571a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1571a4: 0xac830288  sw          $v1, 0x288($a0)
    ctx->pc = 0x1571a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 3));
    // 0x1571a8: 0xac8302a8  sw          $v1, 0x2A8($a0)
    ctx->pc = 0x1571a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 680), GPR_U32(ctx, 3));
    // 0x1571ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1571ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1571B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571ACu;
        // 0x1571b0: 0xac8302c8  sw          $v1, 0x2C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1571ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1571B4u;
}
