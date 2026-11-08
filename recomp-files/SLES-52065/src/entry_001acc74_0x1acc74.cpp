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

// Function: entry_001acc74
// Address: 0x1acc74 - 0x1acc7c
void entry_001acc74_0x1acc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acc74_0x1acc74");
#endif

    ctx->pc = 0x1acc74u;

    // 0x1acc74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC74u;
    {
        const bool branch_taken_0x1acc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc74) {
            ctx->pc = 0x1ACC80u;
            return;
        }
    }
    ctx->pc = 0x1ACC7Cu;
}
