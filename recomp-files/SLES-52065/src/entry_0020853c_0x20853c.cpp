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

// Function: entry_0020853c
// Address: 0x20853c - 0x208554
void entry_0020853c_0x20853c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020853c_0x20853c");
#endif

    ctx->pc = 0x20853cu;

    // 0x20853c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20853Cu;
    {
        const bool branch_taken_0x20853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20853Cu;
        // 0x208540: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20853c) {
            ctx->pc = 0x208564u;
            return;
        }
    }
    ctx->pc = 0x208544u;
    // 0x208544: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208544u;
    {
        const bool branch_taken_0x208544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208544) {
            ctx->pc = 0x208548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208544u;
            // 0x208548: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208554u;
            return;
        }
    }
    ctx->pc = 0x20854Cu;
    // 0x20854c: 0x3e00008  jr          $ra
    ctx->pc = 0x20854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20854Cu;
        // 0x208550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20854Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208554u;
}
