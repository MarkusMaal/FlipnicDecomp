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

// Function: entry_001a7168
// Address: 0x1a7168 - 0x1a7170
void entry_001a7168_0x1a7168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7168_0x1a7168");
#endif

    ctx->pc = 0x1a7168u;

    // 0x1a7168: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7168u;
    {
        const bool branch_taken_0x1a7168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7168) {
            ctx->pc = 0x1A71C8u;
            return;
        }
    }
    ctx->pc = 0x1A7170u;
}
