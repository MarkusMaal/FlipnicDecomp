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

// Function: entry_0014d324
// Address: 0x14d324 - 0x14d33c
void entry_0014d324_0x14d324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d324_0x14d324");
#endif

    ctx->pc = 0x14d324u;

    // 0x14d324: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D324u;
    {
        const bool branch_taken_0x14d324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d324) {
            ctx->pc = 0x14D33Cu;
            return;
        }
    }
    ctx->pc = 0x14D32Cu;
    // 0x14d32c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D32Cu;
    {
        const bool branch_taken_0x14d32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D32Cu;
        // 0x14d330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d32c) {
            ctx->pc = 0x14D33Cu;
            return;
        }
    }
    ctx->pc = 0x14D334u;
    // 0x14d334: 0xc048414  jal         func_121050
    ctx->pc = 0x14D334u;
    SET_GPR_U32(ctx, 31, 0x14D33Cu);
    ctx->pc = 0x14D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D334u;
    // 0x14d338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14D334u, 0x14D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D33Cu;
}
