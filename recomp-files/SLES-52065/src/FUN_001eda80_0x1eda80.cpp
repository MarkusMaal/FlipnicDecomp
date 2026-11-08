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

// Function: FUN_001eda80
// Address: 0x1eda80 - 0x1edaac
void FUN_001eda80_0x1eda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eda80_0x1eda80");
#endif

    ctx->pc = 0x1eda80u;

    // 0x1eda80: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDA80u;
    {
        const bool branch_taken_0x1eda80 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1EDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA80u;
        // 0x1eda84: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda80) {
            ctx->pc = 0x1EDA94u;
            goto label_1eda94;
        }
    }
    ctx->pc = 0x1EDA88u;
    // 0x1eda88: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1eda88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1eda8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDA8Cu;
    {
        const bool branch_taken_0x1eda8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA8Cu;
        // 0x1eda90: 0x8c44c7e4  lw          $a0, -0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda8c) {
            ctx->pc = 0x1EDA9Cu;
            goto label_1eda9c;
        }
    }
    ctx->pc = 0x1EDA94u;
label_1eda94:
    // 0x1eda94: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1eda94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1eda98: 0x8c44c7ec  lw          $a0, -0x3814($v0)
    ctx->pc = 0x1eda98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38C7ECu));
label_1eda9c:
    // 0x1eda9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1eda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1edaa0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1edaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1edaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAA4u;
        // 0x1edaa8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDAACu;
}
