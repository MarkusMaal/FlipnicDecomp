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

// Function: entry_00102514
// Address: 0x102514 - 0x10251c
void entry_00102514_0x102514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102514_0x102514");
#endif

    ctx->pc = 0x102514u;

    // 0x102514: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x102514u;
    {
        const bool branch_taken_0x102514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102514u;
        // 0x102518: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102514) {
            ctx->pc = 0x102560u;
            return;
        }
    }
    ctx->pc = 0x10251Cu;
}
