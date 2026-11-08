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

// Function: entry_0013baa8
// Address: 0x13baa8 - 0x13bad4
void entry_0013baa8_0x13baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013baa8_0x13baa8");
#endif

    ctx->pc = 0x13baa8u;

    // 0x13baa8: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13baac: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13BAACu;
    {
        const bool branch_taken_0x13baac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baac) {
            ctx->pc = 0x13BB44u;
            return;
        }
    }
    ctx->pc = 0x13BAB4u;
    // 0x13bab4: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x13bab4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bab8: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BAB8u;
    {
        const bool branch_taken_0x13bab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bab8) {
            ctx->pc = 0x13BAFCu;
            return;
        }
    }
    ctx->pc = 0x13BAC0u;
    // 0x13bac0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13bac4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BAC4u;
    {
        const bool branch_taken_0x13bac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAC4u;
        // 0x13bac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bac4) {
            ctx->pc = 0x13BAD4u;
            return;
        }
    }
    ctx->pc = 0x13BACCu;
    // 0x13bacc: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BACCu;
    SET_GPR_U32(ctx, 31, 0x13BAD4u);
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BACCu, 0x13BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAD4u;
}
