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

// Function: entry_001686b0
// Address: 0x1686b0 - 0x1686c0
void entry_001686b0_0x1686b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001686b0_0x1686b0");
#endif

    ctx->pc = 0x1686b0u;

    // 0x1686b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1686B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1686B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686B4u;
        // 0x1686b8: 0xac8301d4  sw          $v1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1686B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1686BCu;
    // 0x1686bc: 0x0  nop
    ctx->pc = 0x1686bcu;
    // NOP
    ctx->pc = 0x1686c0u;
}
