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
// Address: 0x11331c - 0x113328
void caseD_5_0x11331c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x11331c");
#endif

    ctx->pc = 0x11331cu;

    // 0x11331c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11331cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x113320u;
    {
        const bool branch_taken_0x113320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113320u;
        // 0x113324: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113320) {
            ctx->pc = 0x113358u;
            return;
        }
    }
    ctx->pc = 0x113328u;
}
