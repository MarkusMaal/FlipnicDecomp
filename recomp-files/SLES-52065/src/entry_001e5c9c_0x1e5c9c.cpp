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

// Function: entry_001e5c9c
// Address: 0x1e5c9c - 0x1e5ca4
void entry_001e5c9c_0x1e5c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5c9c_0x1e5c9c");
#endif

    ctx->pc = 0x1e5c9cu;

    // 0x1e5c9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5C9Cu;
    {
        const bool branch_taken_0x1e5c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c9c) {
            ctx->pc = 0x1E5CB8u;
            return;
        }
    }
    ctx->pc = 0x1E5CA4u;
}
