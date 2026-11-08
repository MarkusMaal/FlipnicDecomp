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

// Function: FUN_0011ee60
// Address: 0x11ee60 - 0x11ee80
void FUN_0011ee60_0x11ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ee60_0x11ee60");
#endif

    ctx->pc = 0x11ee60u;

    // 0x11ee60: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11ee60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ee64: 0x3283e  dsrl32      $a1, $v1, 0
    ctx->pc = 0x11ee64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ee68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x11ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11ee6c: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x11ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x11ee70: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x11ee74: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x11ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11ee78: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE78u;
        // 0x11ee7c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EE80u;
}
