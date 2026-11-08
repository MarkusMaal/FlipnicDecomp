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

// Function: entry_0017901c
// Address: 0x17901c - 0x179024
void entry_0017901c_0x17901c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017901c_0x17901c");
#endif

    ctx->pc = 0x17901cu;

    // 0x17901c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17901Cu;
    {
        const bool branch_taken_0x17901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17901Cu;
        // 0x179020: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17901c) {
            ctx->pc = 0x179104u;
            return;
        }
    }
    ctx->pc = 0x179024u;
}
