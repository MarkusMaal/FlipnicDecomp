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

// Function: entry_0014d728
// Address: 0x14d728 - 0x14d738
void entry_0014d728_0x14d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d728_0x14d728");
#endif

    ctx->pc = 0x14d728u;

    // 0x14d728: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D728u;
        // 0x14d72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D738u;
            return;
        }
    }
    ctx->pc = 0x14D730u;
    // 0x14d730: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D730u;
    SET_GPR_U32(ctx, 31, 0x14D738u);
    ctx->pc = 0x14D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D730u;
    // 0x14d734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D730u, 0x14D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D738u;
}
