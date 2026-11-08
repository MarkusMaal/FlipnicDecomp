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

// Function: FUN_001ddb60
// Address: 0x1ddb60 - 0x1ddb88
void FUN_001ddb60_0x1ddb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddb60_0x1ddb60");
#endif

    ctx->pc = 0x1ddb60u;

    // 0x1ddb60: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ddb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ddb64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddb68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ddb6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddb70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ddb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ddb74: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ddb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ddb78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddb7c: 0x8c42737c  lw          $v0, 0x737C($v0)
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29564)));
    // 0x1ddb80: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDB88u;
}
