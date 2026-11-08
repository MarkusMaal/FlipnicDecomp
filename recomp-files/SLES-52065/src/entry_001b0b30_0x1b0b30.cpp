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

// Function: entry_001b0b30
// Address: 0x1b0b30 - 0x1b0b40
void entry_001b0b30_0x1b0b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0b30_0x1b0b30");
#endif

    ctx->pc = 0x1b0b30u;

    // 0x1b0b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0B30u;
    {
        const bool branch_taken_0x1b0b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B30u;
        // 0x1b0b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b30) {
            ctx->pc = 0x1B0B40u;
            return;
        }
    }
    ctx->pc = 0x1B0B38u;
    // 0x1b0b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0B38u;
    {
        const bool branch_taken_0x1b0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b38) {
            ctx->pc = 0x1B0B44u;
            return;
        }
    }
    ctx->pc = 0x1B0B40u;
}
