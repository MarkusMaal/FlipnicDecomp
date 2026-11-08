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

// Function: FUN_0018f8d0
// Address: 0x18f8d0 - 0x18f8f4
void FUN_0018f8d0_0x18f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f8d0_0x18f8d0");
#endif

    ctx->pc = 0x18f8d0u;

    // 0x18f8d0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f8d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18f8d8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x18f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x18f8dc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f8e0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F8E0u;
    {
        const bool branch_taken_0x18f8e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8E0u;
        // 0x18f8e4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8e0) {
            ctx->pc = 0x18F8ECu;
            goto label_18f8ec;
        }
    }
    ctx->pc = 0x18F8E8u;
    // 0x18f8e8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x18f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_18f8ec:
    // 0x18f8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F8F4u;
}
