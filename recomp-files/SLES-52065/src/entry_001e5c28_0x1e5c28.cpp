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

// Function: entry_001e5c28
// Address: 0x1e5c28 - 0x1e5c30
void entry_001e5c28_0x1e5c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5c28_0x1e5c28");
#endif

    ctx->pc = 0x1e5c28u;

    // 0x1e5c28: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E5C28u;
    {
        const bool branch_taken_0x1e5c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C28u;
        // 0x1e5c2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c28) {
            ctx->pc = 0x1E5D14u;
            return;
        }
    }
    ctx->pc = 0x1E5C30u;
}
