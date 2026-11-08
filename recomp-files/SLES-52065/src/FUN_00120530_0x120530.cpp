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

// Function: FUN_00120530
// Address: 0x120530 - 0x120564
void FUN_00120530_0x120530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120530_0x120530");
#endif

    ctx->pc = 0x120530u;

    // 0x120530: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x120530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120534: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x120534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x120538: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x120538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12053c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x12053cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x120540: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x120540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x120544: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120544u;
    {
        const bool branch_taken_0x120544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120544u;
        // 0x120548: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120544) {
            ctx->pc = 0x12055Cu;
            goto label_12055c;
        }
    }
    ctx->pc = 0x12054Cu;
    // 0x12054c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120554: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x120554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x120558: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x120558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12055c:
    // 0x12055c: 0x3e00008  jr          $ra
    ctx->pc = 0x12055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120564u;
}
