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

// Function: FUN_0012a8e0
// Address: 0x12a8e0 - 0x12a8f8
void FUN_0012a8e0_0x12a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a8e0_0x12a8e0");
#endif

    ctx->pc = 0x12a8e0u;

    // 0x12a8e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12a8e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12A8E4u;
    {
        const bool branch_taken_0x12a8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8E4u;
        // 0x12a8e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8e4) {
            ctx->pc = 0x12A8F0u;
            goto label_12a8f0;
        }
    }
    ctx->pc = 0x12A8ECu;
    // 0x12a8ec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x12a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_12a8f0:
    // 0x12a8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x12A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A8F8u;
}
