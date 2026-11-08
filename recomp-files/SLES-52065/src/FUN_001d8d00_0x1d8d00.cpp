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

// Function: FUN_001d8d00
// Address: 0x1d8d00 - 0x1d8d20
void FUN_001d8d00_0x1d8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8d00_0x1d8d00");
#endif

    ctx->pc = 0x1d8d00u;

    // 0x1d8d00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d8d04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8d08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8d0c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d8d10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8d14: 0x8c426450  lw          $v0, 0x6450($v0)
    ctx->pc = 0x1d8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25680)));
    // 0x1d8d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8D20u;
}
