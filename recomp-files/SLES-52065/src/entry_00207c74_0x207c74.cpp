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

// Function: entry_00207c74
// Address: 0x207c74 - 0x207c7c
void entry_00207c74_0x207c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207c74_0x207c74");
#endif

    ctx->pc = 0x207c74u;

    // 0x207c74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x207C74u;
    {
        const bool branch_taken_0x207c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C74u;
        // 0x207c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c74) {
            ctx->pc = 0x207CB8u;
            return;
        }
    }
    ctx->pc = 0x207C7Cu;
}
