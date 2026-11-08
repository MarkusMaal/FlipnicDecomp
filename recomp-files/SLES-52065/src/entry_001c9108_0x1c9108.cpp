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

// Function: entry_001c9108
// Address: 0x1c9108 - 0x1c9110
void entry_001c9108_0x1c9108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9108_0x1c9108");
#endif

    ctx->pc = 0x1c9108u;

    // 0x1c9108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9108u;
    {
        const bool branch_taken_0x1c9108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9108) {
            ctx->pc = 0x1C9114u;
            return;
        }
    }
    ctx->pc = 0x1C9110u;
}
