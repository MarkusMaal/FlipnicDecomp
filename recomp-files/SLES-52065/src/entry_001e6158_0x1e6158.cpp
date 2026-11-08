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

// Function: entry_001e6158
// Address: 0x1e6158 - 0x1e6160
void entry_001e6158_0x1e6158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6158_0x1e6158");
#endif

    ctx->pc = 0x1e6158u;

    // 0x1e6158: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E6158u;
    {
        const bool branch_taken_0x1e6158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6158) {
            ctx->pc = 0x1E6190u;
            return;
        }
    }
    ctx->pc = 0x1E6160u;
}
