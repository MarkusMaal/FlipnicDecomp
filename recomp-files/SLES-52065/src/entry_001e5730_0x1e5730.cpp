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

// Function: entry_001e5730
// Address: 0x1e5730 - 0x1e573c
void entry_001e5730_0x1e5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5730_0x1e5730");
#endif

    ctx->pc = 0x1e5730u;

    // 0x1e5730: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e5730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5734: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1E5734u;
    {
        const bool branch_taken_0x1e5734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5734) {
            ctx->pc = 0x1E5658u;
            return;
        }
    }
    ctx->pc = 0x1E573Cu;
}
