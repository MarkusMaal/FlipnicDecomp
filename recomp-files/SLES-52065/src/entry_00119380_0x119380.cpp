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

// Function: entry_00119380
// Address: 0x119380 - 0x119388
void entry_00119380_0x119380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119380_0x119380");
#endif

    ctx->pc = 0x119380u;

    // 0x119380: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x119380u;
    {
        const bool branch_taken_0x119380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x119384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119380u;
        // 0x119384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119380) {
            ctx->pc = 0x1193C4u;
            return;
        }
    }
    ctx->pc = 0x119388u;
}
