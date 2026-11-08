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

// Function: caseD_5
// Address: 0x110750 - 0x11075c
void caseD_5_0x110750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x110750");
#endif

    ctx->pc = 0x110750u;

    // 0x110750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110754: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x110754u;
    {
        const bool branch_taken_0x110754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110754u;
        // 0x110758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110754) {
            ctx->pc = 0x110784u;
            return;
        }
    }
    ctx->pc = 0x11075Cu;
}
