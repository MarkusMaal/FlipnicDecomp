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

// Function: entry_00113140
// Address: 0x113140 - 0x11314c
void entry_00113140_0x113140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113140_0x113140");
#endif

    ctx->pc = 0x113140u;

    // 0x113140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113144: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x113144u;
    {
        const bool branch_taken_0x113144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113144u;
        // 0x113148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113144) {
            ctx->pc = 0x1131A0u;
            return;
        }
    }
    ctx->pc = 0x11314Cu;
}
