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

// Function: entry_001e6360
// Address: 0x1e6360 - 0x1e6368
void entry_001e6360_0x1e6360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6360_0x1e6360");
#endif

    ctx->pc = 0x1e6360u;

    // 0x1e6360: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E6360u;
    {
        const bool branch_taken_0x1e6360 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6360) {
            ctx->pc = 0x1E6334u;
            return;
        }
    }
    ctx->pc = 0x1E6368u;
}
