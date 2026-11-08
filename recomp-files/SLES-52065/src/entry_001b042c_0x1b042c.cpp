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

// Function: entry_001b042c
// Address: 0x1b042c - 0x1b043c
void entry_001b042c_0x1b042c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b042c_0x1b042c");
#endif

    ctx->pc = 0x1b042cu;

    // 0x1b042c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B042Cu;
    {
        const bool branch_taken_0x1b042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B042Cu;
        // 0x1b0430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b042c) {
            ctx->pc = 0x1B0440u;
            return;
        }
    }
    ctx->pc = 0x1B0434u;
    // 0x1b0434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0434u;
    {
        const bool branch_taken_0x1b0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0434u;
        // 0x1b0438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0434) {
            ctx->pc = 0x1B0440u;
            return;
        }
    }
    ctx->pc = 0x1B043Cu;
}
