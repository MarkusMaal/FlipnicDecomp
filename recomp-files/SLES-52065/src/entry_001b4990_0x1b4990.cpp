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

// Function: entry_001b4990
// Address: 0x1b4990 - 0x1b4998
void entry_001b4990_0x1b4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4990_0x1b4990");
#endif

    ctx->pc = 0x1b4990u;

    // 0x1b4990: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B4990u;
    {
        const bool branch_taken_0x1b4990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4990) {
            ctx->pc = 0x1B49F0u;
            return;
        }
    }
    ctx->pc = 0x1B4998u;
}
