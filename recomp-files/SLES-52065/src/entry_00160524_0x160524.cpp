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

// Function: entry_00160524
// Address: 0x160524 - 0x160538
void entry_00160524_0x160524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160524_0x160524");
#endif

    ctx->pc = 0x160524u;

    // 0x160524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160524u;
    {
        const bool branch_taken_0x160524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160524u;
        // 0x160528: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160524) {
            ctx->pc = 0x160538u;
            return;
        }
    }
    ctx->pc = 0x16052Cu;
    // 0x16052c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160530: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x160530u;
    SET_GPR_U32(ctx, 31, 0x160538u);
    ctx->pc = 0x160534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160530u;
    // 0x160534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x160530u, 0x160538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160538u;
}
