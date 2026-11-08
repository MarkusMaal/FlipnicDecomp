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

// Function: entry_001e4894
// Address: 0x1e4894 - 0x1e489c
void entry_001e4894_0x1e4894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4894_0x1e4894");
#endif

    ctx->pc = 0x1e4894u;

    // 0x1e4894: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E4894u;
    {
        const bool branch_taken_0x1e4894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4894u;
        // 0x1e4898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4894) {
            ctx->pc = 0x1E48F4u;
            return;
        }
    }
    ctx->pc = 0x1E489Cu;
}
