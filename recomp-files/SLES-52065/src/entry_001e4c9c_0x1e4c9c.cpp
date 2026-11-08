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

// Function: entry_001e4c9c
// Address: 0x1e4c9c - 0x1e4cac
void entry_001e4c9c_0x1e4c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4c9c_0x1e4c9c");
#endif

    ctx->pc = 0x1e4c9cu;

    // 0x1e4c9c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4C9Cu;
    {
        const bool branch_taken_0x1e4c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4c9c) {
            ctx->pc = 0x1E4CACu;
            return;
        }
    }
    ctx->pc = 0x1E4CA4u;
    // 0x1e4ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4CA4u;
    {
        const bool branch_taken_0x1e4ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA4u;
        // 0x1e4ca8: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ca4) {
            ctx->pc = 0x1E4CB4u;
            return;
        }
    }
    ctx->pc = 0x1E4CACu;
}
