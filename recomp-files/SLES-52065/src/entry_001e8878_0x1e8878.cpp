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

// Function: entry_001e8878
// Address: 0x1e8878 - 0x1e8880
void entry_001e8878_0x1e8878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8878_0x1e8878");
#endif

    ctx->pc = 0x1e8878u;

    // 0x1e8878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8878u;
    {
        const bool branch_taken_0x1e8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8878u;
        // 0x1e887c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8878) {
            ctx->pc = 0x1E8894u;
            return;
        }
    }
    ctx->pc = 0x1E8880u;
}
