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

// Function: entry_001e6b20
// Address: 0x1e6b20 - 0x1e6b28
void entry_001e6b20_0x1e6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b20_0x1e6b20");
#endif

    ctx->pc = 0x1e6b20u;

    // 0x1e6b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6B20u;
    {
        const bool branch_taken_0x1e6b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B20u;
        // 0x1e6b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b20) {
            ctx->pc = 0x1E6B40u;
            return;
        }
    }
    ctx->pc = 0x1E6B28u;
}
