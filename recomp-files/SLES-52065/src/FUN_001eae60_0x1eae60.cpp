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

// Function: FUN_001eae60
// Address: 0x1eae60 - 0x1eae80
void FUN_001eae60_0x1eae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eae60_0x1eae60");
#endif

    ctx->pc = 0x1eae60u;

    // 0x1eae60: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1eae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1eae64: 0x2442c370  addiu       $v0, $v0, -0x3C90
    ctx->pc = 0x1eae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951792));
    // 0x1eae68: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1eae68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1eae6c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1eae70: 0x2442c370  addiu       $v0, $v0, -0x3C90
    ctx->pc = 0x1eae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951792));
    // 0x1eae74: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1eae74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1eae78: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE78u;
        // 0x1eae7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAE80u;
}
