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

// Function: FUN_001c9000
// Address: 0x1c9000 - 0x1c9024
void FUN_001c9000_0x1c9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9000_0x1c9000");
#endif

    ctx->pc = 0x1c9000u;

    // 0x1c9000: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9004: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9004u;
    {
        const bool branch_taken_0x1c9004 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9004u;
        // 0x1c9008: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9004) {
            ctx->pc = 0x1C9014u;
            goto label_1c9014;
        }
    }
    ctx->pc = 0x1C900Cu;
    // 0x1c900c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C900Cu;
    {
        const bool branch_taken_0x1c900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C900Cu;
        // 0x1c9010: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c900c) {
            ctx->pc = 0x1C901Cu;
            goto label_1c901c;
        }
    }
    ctx->pc = 0x1C9014u;
label_1c9014:
    // 0x1c9014: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c9018: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1c901c:
    // 0x1c901c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9024u;
}
