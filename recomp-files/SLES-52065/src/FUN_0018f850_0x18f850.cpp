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

// Function: FUN_0018f850
// Address: 0x18f850 - 0x18f880
void FUN_0018f850_0x18f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f850_0x18f850");
#endif

    ctx->pc = 0x18f850u;

    // 0x18f850: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f854: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x18f854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f858: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18f85c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18f860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f864: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x18f864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18f868: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18f868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18f86c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f870: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18f874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18f874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18f878: 0x3e00008  jr          $ra
    ctx->pc = 0x18F878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F878u;
        // 0x18f87c: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F880u;
}
