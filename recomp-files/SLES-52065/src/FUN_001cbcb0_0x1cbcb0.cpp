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

// Function: FUN_001cbcb0
// Address: 0x1cbcb0 - 0x1cbcc8
void FUN_001cbcb0_0x1cbcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbcb0_0x1cbcb0");
#endif

    ctx->pc = 0x1cbcb0u;

    // 0x1cbcb0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbcb4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cbcb8: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cbcbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCC0u;
        // 0x1cbcc4: 0x8c4210cc  lw          $v0, 0x10CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBCC8u;
}
