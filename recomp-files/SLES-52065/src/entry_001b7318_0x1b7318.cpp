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

// Function: entry_001b7318
// Address: 0x1b7318 - 0x1b7328
void entry_001b7318_0x1b7318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7318_0x1b7318");
#endif

    ctx->pc = 0x1b7318u;

    // 0x1b7318: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7318u;
    {
        const bool branch_taken_0x1b7318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7318) {
            ctx->pc = 0x1B7328u;
            return;
        }
    }
    ctx->pc = 0x1B7320u;
    // 0x1b7320: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7320u;
    {
        const bool branch_taken_0x1b7320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7320u;
        // 0x1b7324: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7320) {
            ctx->pc = 0x1B733Cu;
            return;
        }
    }
    ctx->pc = 0x1B7328u;
}
