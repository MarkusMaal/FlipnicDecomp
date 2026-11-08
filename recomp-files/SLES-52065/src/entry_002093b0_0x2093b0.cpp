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

// Function: entry_002093b0
// Address: 0x2093b0 - 0x2093b8
void entry_002093b0_0x2093b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002093b0_0x2093b0");
#endif

    ctx->pc = 0x2093b0u;

    // 0x2093b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2093B0u;
    {
        const bool branch_taken_0x2093b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093B0u;
        // 0x2093b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093b0) {
            ctx->pc = 0x20940Cu;
            return;
        }
    }
    ctx->pc = 0x2093B8u;
}
