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

// Function: entry_001d4338
// Address: 0x1d4338 - 0x1d4368
void entry_001d4338_0x1d4338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4338_0x1d4338");
#endif

    ctx->pc = 0x1d4338u;

label_1d4338:
    // 0x1d4338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d433c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d4340: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d4344: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d4344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d4348: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d434c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4350: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d4350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d4354: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d4354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d4358: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D4358u;
    {
        const bool branch_taken_0x1d4358 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1D435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4358u;
        // 0x1d435c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4358) {
            ctx->pc = 0x1D4338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4338;
        }
    }
    ctx->pc = 0x1D4360u;
    // 0x1d4360: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4368u;
}
