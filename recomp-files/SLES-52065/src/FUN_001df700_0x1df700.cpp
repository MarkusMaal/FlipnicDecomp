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

// Function: FUN_001df700
// Address: 0x1df700 - 0x1df728
void FUN_001df700_0x1df700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df700_0x1df700");
#endif

    ctx->pc = 0x1df700u;

    // 0x1df700: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF700u;
    {
        const bool branch_taken_0x1df700 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF700u;
        // 0x1df704: 0x411c0  sll         $v0, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df700) {
            ctx->pc = 0x1DF720u;
            goto label_1df720;
        }
    }
    ctx->pc = 0x1DF708u;
    // 0x1df708: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1df708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1df70c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1df70cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1df710: 0x8c229f00  lw          $v0, -0x6100($at)
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942464)));
    // 0x1df714: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF71Cu;
    // 0x1df71c: 0x0  nop
    ctx->pc = 0x1df71cu;
    // NOP
label_1df720:
    // 0x1df720: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF720u;
        // 0x1df724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF728u;
}
