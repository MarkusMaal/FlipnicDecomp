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

// Function: entry_001c5c2c
// Address: 0x1c5c2c - 0x1c5c34
void entry_001c5c2c_0x1c5c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5c2c_0x1c5c2c");
#endif

    ctx->pc = 0x1c5c2cu;

    // 0x1c5c2c: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x1C5C2Cu;
    {
        const bool branch_taken_0x1c5c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c2c) {
            ctx->pc = 0x1C636Cu;
            return;
        }
    }
    ctx->pc = 0x1C5C34u;
}
