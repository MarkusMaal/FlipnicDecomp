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

// Function: entry_001171e4
// Address: 0x1171e4 - 0x1171ec
void entry_001171e4_0x1171e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171e4_0x1171e4");
#endif

    ctx->pc = 0x1171e4u;

    // 0x1171e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1171E4u;
    {
        const bool branch_taken_0x1171e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1171e4) {
            ctx->pc = 0x1171F8u;
            return;
        }
    }
    ctx->pc = 0x1171ECu;
}
