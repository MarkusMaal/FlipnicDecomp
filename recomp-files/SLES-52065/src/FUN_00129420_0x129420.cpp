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

// Function: FUN_00129420
// Address: 0x129420 - 0x129434
void FUN_00129420_0x129420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129420_0x129420");
#endif

    ctx->pc = 0x129420u;

    // 0x129420: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x129420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x129424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129428: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x129428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x12942c: 0x3e00008  jr          $ra
    ctx->pc = 0x12942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12942Cu;
        // 0x129430: 0xac830138  sw          $v1, 0x138($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129434u;
}
