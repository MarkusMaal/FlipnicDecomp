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

// Function: entry_001e6614
// Address: 0x1e6614 - 0x1e661c
void entry_001e6614_0x1e6614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6614_0x1e6614");
#endif

    ctx->pc = 0x1e6614u;

    // 0x1e6614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6614u;
    {
        const bool branch_taken_0x1e6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6614) {
            ctx->pc = 0x1E662Cu;
            return;
        }
    }
    ctx->pc = 0x1E661Cu;
}
