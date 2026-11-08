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

// Function: FUN_001a6e30
// Address: 0x1a6e30 - 0x1a6e4c
void FUN_001a6e30_0x1a6e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6e30_0x1a6e30");
#endif

    ctx->pc = 0x1a6e30u;

    // 0x1a6e30: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1a6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1a6e34: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a6e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a6e38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6e3c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a6e40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E44u;
        // 0x1a6e48: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E4Cu;
}
