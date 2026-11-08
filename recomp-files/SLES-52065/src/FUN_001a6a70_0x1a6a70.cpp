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

// Function: FUN_001a6a70
// Address: 0x1a6a70 - 0x1a6a98
void FUN_001a6a70_0x1a6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6a70_0x1a6a70");
#endif

    ctx->pc = 0x1a6a70u;

    // 0x1a6a70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a6a74: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1a6a74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a6a78: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6A78u;
    {
        const bool branch_taken_0x1a6a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A78u;
        // 0x1a6a7c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a78) {
            ctx->pc = 0x1A6A8Cu;
            goto label_1a6a8c;
        }
    }
    ctx->pc = 0x1A6A80u;
    // 0x1a6a80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a6a84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6A84u;
    {
        const bool branch_taken_0x1a6a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A84u;
        // 0x1a6a88: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a84) {
            ctx->pc = 0x1A6A90u;
            goto label_1a6a90;
        }
    }
    ctx->pc = 0x1A6A8Cu;
label_1a6a8c:
    // 0x1a6a8c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1a6a90:
    // 0x1a6a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6A98u;
}
