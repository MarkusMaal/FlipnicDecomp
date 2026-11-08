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

// Function: entry_00192db4
// Address: 0x192db4 - 0x192dc8
void entry_00192db4_0x192db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192db4_0x192db4");
#endif

    ctx->pc = 0x192db4u;

    // 0x192db4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x192DB4u;
    {
        const bool branch_taken_0x192db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x192db4) {
            ctx->pc = 0x192DC8u;
            return;
        }
    }
    ctx->pc = 0x192DBCu;
    // 0x192dbc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x192DBCu;
    {
        const bool branch_taken_0x192dbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DBCu;
        // 0x192dc0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dbc) {
            ctx->pc = 0x192DC8u;
            return;
        }
    }
    ctx->pc = 0x192DC4u;
    // 0x192dc4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x192dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192dc8u;
}
