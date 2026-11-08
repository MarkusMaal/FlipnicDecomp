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

// Function: FUN_001ddb88
// Address: 0x1ddb88 - 0x1ddbb0
void FUN_001ddb88_0x1ddb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddb88_0x1ddb88");
#endif

    ctx->pc = 0x1ddb88u;

    // 0x1ddb88: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ddb8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ddb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddb90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ddb94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ddb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddb98: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ddb9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ddb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ddba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddba4: 0x8c427388  lw          $v0, 0x7388($v0)
    ctx->pc = 0x1ddba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29576)));
    // 0x1ddba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDBB0u;
}
