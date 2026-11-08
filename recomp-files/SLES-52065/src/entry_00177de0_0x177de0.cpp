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

// Function: entry_00177de0
// Address: 0x177de0 - 0x177de8
void entry_00177de0_0x177de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177de0_0x177de0");
#endif

    ctx->pc = 0x177de0u;

    // 0x177de0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x177DE0u;
    {
        const bool branch_taken_0x177de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DE0u;
        // 0x177de4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177de0) {
            ctx->pc = 0x177E9Cu;
            return;
        }
    }
    ctx->pc = 0x177DE8u;
}
