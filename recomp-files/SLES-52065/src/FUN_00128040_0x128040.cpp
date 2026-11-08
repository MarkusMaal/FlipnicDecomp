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

// Function: FUN_00128040
// Address: 0x128040 - 0x12804c
void FUN_00128040_0x128040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128040_0x128040");
#endif

    ctx->pc = 0x128040u;

    // 0x128040: 0xac850074  sw          $a1, 0x74($a0)
    ctx->pc = 0x128040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
    // 0x128044: 0x3e00008  jr          $ra
    ctx->pc = 0x128044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128044u;
        // 0x128048: 0xac860078  sw          $a2, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12804Cu;
}
