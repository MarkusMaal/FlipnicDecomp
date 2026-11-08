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

// Function: FUN_001d4600
// Address: 0x1d4600 - 0x1d460c
void FUN_001d4600_0x1d4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4600_0x1d4600");
#endif

    ctx->pc = 0x1d4600u;

    // 0x1d4600: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d4600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d4604: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4604u;
        // 0x1d4608: 0xac440540  sw          $a0, 0x540($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D460Cu;
}
