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

// Function: FUN_001e9500
// Address: 0x1e9500 - 0x1e9524
void FUN_001e9500_0x1e9500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9500_0x1e9500");
#endif

    ctx->pc = 0x1e9500u;

    // 0x1e9500: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e9500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e9504: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e9504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9508: 0x8c23ba48  lw          $v1, -0x45B8($at)
    ctx->pc = 0x1e9508u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38BA48u));
    // 0x1e950c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1e950cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1e9510: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e9510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e9514: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1e9514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1e9518: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1e9518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1e951c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E951Cu;
        // 0x1e9520: 0xac26ba48  sw          $a2, -0x45B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949448), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9524u;
}
