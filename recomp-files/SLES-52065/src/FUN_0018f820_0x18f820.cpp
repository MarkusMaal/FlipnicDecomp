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

// Function: FUN_0018f820
// Address: 0x18f820 - 0x18f848
void FUN_0018f820_0x18f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f820_0x18f820");
#endif

    ctx->pc = 0x18f820u;

    // 0x18f820: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f824: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x18f824u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f828: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18f82c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x18f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18f830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f834: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x18f834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18f838: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18f838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18f83c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f840: 0x3e00008  jr          $ra
    ctx->pc = 0x18F840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F840u;
        // 0x18f844: 0xac650054  sw          $a1, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F848u;
}
