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

// Function: caseD_0
// Address: 0x20252c - 0x202534
void caseD_0_0x20252c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x20252c");
#endif

    ctx->pc = 0x20252cu;

    // 0x20252c: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x20252Cu;
    {
        const bool branch_taken_0x20252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20252Cu;
        // 0x202530: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20252c) {
            ctx->pc = 0x2030ECu;
            return;
        }
    }
    ctx->pc = 0x202534u;
}
