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

// Function: FUN_001e1150
// Address: 0x1e1150 - 0x1e1178
void FUN_001e1150_0x1e1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1150_0x1e1150");
#endif

    ctx->pc = 0x1e1150u;

    // 0x1e1150: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e1150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e1154: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e1154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e115c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e115cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1164: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e1164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e1168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e116c: 0x8c42b350  lw          $v0, -0x4CB0($v0)
    ctx->pc = 0x1e116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947664)));
    // 0x1e1170: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1178u;
}
