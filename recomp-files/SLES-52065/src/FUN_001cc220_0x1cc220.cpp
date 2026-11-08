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

// Function: FUN_001cc220
// Address: 0x1cc220 - 0x1cc22c
void FUN_001cc220_0x1cc220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc220_0x1cc220");
#endif

    ctx->pc = 0x1cc220u;

    // 0x1cc220: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc224: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC224u;
        // 0x1cc228: 0xa024f960  sb          $a0, -0x6A0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965600), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC22Cu;
}
