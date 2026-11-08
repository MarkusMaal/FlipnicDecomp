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

// Function: FUN_001b91c0
// Address: 0x1b91c0 - 0x1b91d0
void FUN_001b91c0_0x1b91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b91c0_0x1b91c0");
#endif

    ctx->pc = 0x1b91c0u;

    // 0x1b91c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b91c4: 0xa08300c2  sb          $v1, 0xC2($a0)
    ctx->pc = 0x1b91c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 194), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b91c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B91C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91C8u;
        // 0x1b91cc: 0xac8000e0  sw          $zero, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B91C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B91D0u;
}
