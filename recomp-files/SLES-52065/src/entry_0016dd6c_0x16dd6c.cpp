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

// Function: entry_0016dd6c
// Address: 0x16dd6c - 0x16dd74
void entry_0016dd6c_0x16dd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dd6c_0x16dd6c");
#endif

    ctx->pc = 0x16dd6cu;

    // 0x16dd6c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x16DD6Cu;
    {
        const bool branch_taken_0x16dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd6c) {
            ctx->pc = 0x16E048u;
            return;
        }
    }
    ctx->pc = 0x16DD74u;
}
