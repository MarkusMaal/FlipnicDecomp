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

// Function: entry_001b7600
// Address: 0x1b7600 - 0x1b7614
void entry_001b7600_0x1b7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7600_0x1b7600");
#endif

    ctx->pc = 0x1b7600u;

    // 0x1b7600: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7600u;
    {
        const bool branch_taken_0x1b7600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7600u;
        // 0x1b7604: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7600) {
            ctx->pc = 0x1B7614u;
            return;
        }
    }
    ctx->pc = 0x1B7608u;
    // 0x1b7608: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x1b7608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b760c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B760Cu;
    {
        const bool branch_taken_0x1b760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B760Cu;
        // 0x1b7610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b760c) {
            ctx->pc = 0x1B7618u;
            return;
        }
    }
    ctx->pc = 0x1B7614u;
}
