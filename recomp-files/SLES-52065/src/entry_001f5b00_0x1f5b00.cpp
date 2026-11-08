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

// Function: entry_001f5b00
// Address: 0x1f5b00 - 0x1f5b08
void entry_001f5b00_0x1f5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5b00_0x1f5b00");
#endif

    ctx->pc = 0x1f5b00u;

    // 0x1f5b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5B00u;
    {
        const bool branch_taken_0x1f5b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B00u;
        // 0x1f5b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b00) {
            ctx->pc = 0x1F5B10u;
            return;
        }
    }
    ctx->pc = 0x1F5B08u;
}
