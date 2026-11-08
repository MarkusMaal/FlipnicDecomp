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

// Function: entry_00202514
// Address: 0x202514 - 0x20252c
void entry_00202514_0x202514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202514_0x202514");
#endif

    ctx->pc = 0x202514u;

    // 0x202514: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x202514u;
    {
        const bool branch_taken_0x202514 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x202514) {
            ctx->pc = 0x202518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202514u;
            // 0x202518: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202534u;
            return;
        }
    }
    ctx->pc = 0x20251Cu;
    // 0x20251c: 0x55000005  bnel        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20251Cu;
    {
        const bool branch_taken_0x20251c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x20251c) {
            ctx->pc = 0x202520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20251Cu;
            // 0x202520: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202534u;
            return;
        }
    }
    ctx->pc = 0x202524u;
    // 0x202524: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x202524u;
    {
        const bool branch_taken_0x202524 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x202524) {
            ctx->pc = 0x202528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202524u;
            // 0x202528: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202534u;
            return;
        }
    }
    ctx->pc = 0x20252Cu;
}
