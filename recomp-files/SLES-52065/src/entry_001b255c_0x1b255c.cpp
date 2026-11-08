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

// Function: entry_001b255c
// Address: 0x1b255c - 0x1b256c
void entry_001b255c_0x1b255c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b255c_0x1b255c");
#endif

    ctx->pc = 0x1b255cu;

    // 0x1b255c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B255Cu;
    {
        const bool branch_taken_0x1b255c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B255Cu;
        // 0x1b2560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b255c) {
            ctx->pc = 0x1B2570u;
            return;
        }
    }
    ctx->pc = 0x1B2564u;
    // 0x1b2564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2564u;
    {
        const bool branch_taken_0x1b2564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2564u;
        // 0x1b2568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2564) {
            ctx->pc = 0x1B2570u;
            return;
        }
    }
    ctx->pc = 0x1B256Cu;
}
