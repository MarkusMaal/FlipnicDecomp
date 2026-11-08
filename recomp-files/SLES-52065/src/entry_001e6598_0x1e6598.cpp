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

// Function: entry_001e6598
// Address: 0x1e6598 - 0x1e65a0
void entry_001e6598_0x1e6598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6598_0x1e6598");
#endif

    ctx->pc = 0x1e6598u;

    // 0x1e6598: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1E6598u;
    {
        const bool branch_taken_0x1e6598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6598u;
        // 0x1e659c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6598) {
            ctx->pc = 0x1E66A0u;
            return;
        }
    }
    ctx->pc = 0x1E65A0u;
}
