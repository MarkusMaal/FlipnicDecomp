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

// Function: entry_001bae98
// Address: 0x1bae98 - 0x1baea0
void entry_001bae98_0x1bae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae98_0x1bae98");
#endif

    ctx->pc = 0x1bae98u;

    // 0x1bae98: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BAE98u;
    {
        const bool branch_taken_0x1bae98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae98) {
            ctx->pc = 0x1BAE74u;
            return;
        }
    }
    ctx->pc = 0x1BAEA0u;
}
