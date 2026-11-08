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

// Function: entry_001afc64
// Address: 0x1afc64 - 0x1afc74
void entry_001afc64_0x1afc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc64_0x1afc64");
#endif

    ctx->pc = 0x1afc64u;

    // 0x1afc64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC64u;
    {
        const bool branch_taken_0x1afc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc64) {
            ctx->pc = 0x1AFC74u;
            return;
        }
    }
    ctx->pc = 0x1AFC6Cu;
    // 0x1afc6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC6Cu;
    {
        const bool branch_taken_0x1afc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc6c) {
            ctx->pc = 0x1AFC7Cu;
            return;
        }
    }
    ctx->pc = 0x1AFC74u;
}
