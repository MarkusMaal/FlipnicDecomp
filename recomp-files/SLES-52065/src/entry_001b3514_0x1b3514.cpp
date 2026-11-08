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

// Function: entry_001b3514
// Address: 0x1b3514 - 0x1b3524
void entry_001b3514_0x1b3514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3514_0x1b3514");
#endif

    ctx->pc = 0x1b3514u;

    // 0x1b3514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3514u;
    {
        const bool branch_taken_0x1b3514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3514) {
            ctx->pc = 0x1B3524u;
            return;
        }
    }
    ctx->pc = 0x1B351Cu;
    // 0x1b351c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B351Cu;
    {
        const bool branch_taken_0x1b351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B351Cu;
        // 0x1b3520: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b351c) {
            ctx->pc = 0x1B3528u;
            return;
        }
    }
    ctx->pc = 0x1B3524u;
}
