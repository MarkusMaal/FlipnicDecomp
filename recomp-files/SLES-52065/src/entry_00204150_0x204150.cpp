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

// Function: entry_00204150
// Address: 0x204150 - 0x204158
void entry_00204150_0x204150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204150_0x204150");
#endif

    ctx->pc = 0x204150u;

    // 0x204150: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x204150u;
    {
        const bool branch_taken_0x204150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204150u;
        // 0x204154: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204150) {
            ctx->pc = 0x204374u;
            return;
        }
    }
    ctx->pc = 0x204158u;
}
