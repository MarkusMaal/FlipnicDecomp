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

// Function: entry_001e613c
// Address: 0x1e613c - 0x1e6144
void entry_001e613c_0x1e613c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e613c_0x1e613c");
#endif

    ctx->pc = 0x1e613cu;

    // 0x1e613c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E613Cu;
    {
        const bool branch_taken_0x1e613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e613c) {
            ctx->pc = 0x1E6158u;
            return;
        }
    }
    ctx->pc = 0x1E6144u;
}
