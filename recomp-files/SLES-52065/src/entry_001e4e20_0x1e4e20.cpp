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

// Function: entry_001e4e20
// Address: 0x1e4e20 - 0x1e4e2c
void entry_001e4e20_0x1e4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4e20_0x1e4e20");
#endif

    ctx->pc = 0x1e4e20u;

    // 0x1e4e20: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4E20u;
    {
        const bool branch_taken_0x1e4e20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4e20) {
            ctx->pc = 0x1E4E2Cu;
            return;
        }
    }
    ctx->pc = 0x1E4E28u;
    // 0x1e4e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e4e2cu;
}
