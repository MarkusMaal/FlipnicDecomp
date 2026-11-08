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

// Function: FUN_00148c90
// Address: 0x148c90 - 0x148cac
void FUN_00148c90_0x148c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148c90_0x148c90");
#endif

    ctx->pc = 0x148c90u;

    // 0x148c90: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x148c94: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x148c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148c98: 0x8ca302c4  lw          $v1, 0x2C4($a1)
    ctx->pc = 0x148c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 708)));
    // 0x148c9c: 0xac8302bc  sw          $v1, 0x2BC($a0)
    ctx->pc = 0x148c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 700), GPR_U32(ctx, 3));
    // 0x148ca0: 0x8ca30344  lw          $v1, 0x344($a1)
    ctx->pc = 0x148ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x148ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x148CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CA4u;
        // 0x148ca8: 0xac8302c0  sw          $v1, 0x2C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148CACu;
}
