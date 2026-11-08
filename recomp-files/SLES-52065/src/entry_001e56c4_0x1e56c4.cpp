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

// Function: entry_001e56c4
// Address: 0x1e56c4 - 0x1e56cc
void entry_001e56c4_0x1e56c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e56c4_0x1e56c4");
#endif

    ctx->pc = 0x1e56c4u;

    // 0x1e56c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E56C4u;
    {
        const bool branch_taken_0x1e56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e56c4) {
            ctx->pc = 0x1E56DCu;
            return;
        }
    }
    ctx->pc = 0x1E56CCu;
}
