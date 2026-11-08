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

// Function: entry_001fc368
// Address: 0x1fc368 - 0x1fc370
void entry_001fc368_0x1fc368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc368_0x1fc368");
#endif

    ctx->pc = 0x1fc368u;

    // 0x1fc368: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x1FC368u;
    {
        const bool branch_taken_0x1fc368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC368u;
        // 0x1fc36c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc368) {
            ctx->pc = 0x1FD3ACu;
            return;
        }
    }
    ctx->pc = 0x1FC370u;
}
