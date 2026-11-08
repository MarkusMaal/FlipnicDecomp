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

// Function: entry_001115e8
// Address: 0x1115e8 - 0x1115f4
void entry_001115e8_0x1115e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115e8_0x1115e8");
#endif

    ctx->pc = 0x1115e8u;

    // 0x1115e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1115ECu;
    {
        const bool branch_taken_0x1115ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115ECu;
        // 0x1115f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115ec) {
            ctx->pc = 0x111650u;
            return;
        }
    }
    ctx->pc = 0x1115F4u;
}
