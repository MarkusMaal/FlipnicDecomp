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

// Function: entry_001aa874
// Address: 0x1aa874 - 0x1aa87c
void entry_001aa874_0x1aa874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa874_0x1aa874");
#endif

    ctx->pc = 0x1aa874u;

    // 0x1aa874: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA874u;
    {
        const bool branch_taken_0x1aa874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA874u;
        // 0x1aa878: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa874) {
            ctx->pc = 0x1AA8C4u;
            return;
        }
    }
    ctx->pc = 0x1AA87Cu;
}
