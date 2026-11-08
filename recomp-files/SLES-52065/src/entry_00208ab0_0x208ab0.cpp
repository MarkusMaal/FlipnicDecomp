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

// Function: entry_00208ab0
// Address: 0x208ab0 - 0x208ad8
void entry_00208ab0_0x208ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208ab0_0x208ab0");
#endif

    ctx->pc = 0x208ab0u;

    // 0x208ab0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208AB0u;
    {
        const bool branch_taken_0x208ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB0u;
        // 0x208ab4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ab0) {
            ctx->pc = 0x208AD8u;
            return;
        }
    }
    ctx->pc = 0x208AB8u;
    // 0x208ab8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x208AB8u;
    {
        const bool branch_taken_0x208ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208ab8) {
            ctx->pc = 0x208A94u;
            return;
        }
    }
    ctx->pc = 0x208AC0u;
    // 0x208ac0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208ac4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x208ac8: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x208AC8u;
    {
        const bool branch_taken_0x208ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AC8u;
        // 0x208acc: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ac8) {
            ctx->pc = 0x208A94u;
            return;
        }
    }
    ctx->pc = 0x208AD0u;
    // 0x208ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x208AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD0u;
        // 0x208ad4: 0x24422c18  addiu       $v0, $v0, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208AD8u;
}
