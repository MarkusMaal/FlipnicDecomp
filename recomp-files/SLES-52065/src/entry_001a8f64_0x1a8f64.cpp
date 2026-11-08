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

// Function: entry_001a8f64
// Address: 0x1a8f64 - 0x1a8f6c
void entry_001a8f64_0x1a8f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f64_0x1a8f64");
#endif

    ctx->pc = 0x1a8f64u;

    // 0x1a8f64: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1A8F64u;
    {
        const bool branch_taken_0x1a8f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F64u;
        // 0x1a8f68: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f64) {
            ctx->pc = 0x1A91C0u;
            return;
        }
    }
    ctx->pc = 0x1A8F6Cu;
}
