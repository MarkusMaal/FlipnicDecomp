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

// Function: FUN_001edab0
// Address: 0x1edab0 - 0x1edad8
void FUN_001edab0_0x1edab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001edab0_0x1edab0");
#endif

    ctx->pc = 0x1edab0u;

    // 0x1edab0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDAB0u;
    {
        const bool branch_taken_0x1edab0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1EDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAB0u;
        // 0x1edab4: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edab0) {
            ctx->pc = 0x1EDAC4u;
            goto label_1edac4;
        }
    }
    ctx->pc = 0x1EDAB8u;
    // 0x1edab8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1edab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1edabc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDABCu;
    {
        const bool branch_taken_0x1edabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDABCu;
        // 0x1edac0: 0x8c44c7e4  lw          $a0, -0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edabc) {
            ctx->pc = 0x1EDACCu;
            goto label_1edacc;
        }
    }
    ctx->pc = 0x1EDAC4u;
label_1edac4:
    // 0x1edac4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1edac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1edac8: 0x8c44c7ec  lw          $a0, -0x3814($v0)
    ctx->pc = 0x1edac8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38C7ECu));
label_1edacc:
    // 0x1edacc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1edaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1edad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD0u;
        // 0x1edad4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDAD8u;
}
