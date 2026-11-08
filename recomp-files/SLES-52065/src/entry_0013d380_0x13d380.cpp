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

// Function: entry_0013d380
// Address: 0x13d380 - 0x13d390
void entry_0013d380_0x13d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d380_0x13d380");
#endif

    ctx->pc = 0x13d380u;

    // 0x13d380: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13D380u;
    {
        const bool branch_taken_0x13d380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d380) {
            ctx->pc = 0x13D3BCu;
            return;
        }
    }
    ctx->pc = 0x13D388u;
    // 0x13d388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D388u;
    {
        const bool branch_taken_0x13d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d388) {
            ctx->pc = 0x13D398u;
            return;
        }
    }
    ctx->pc = 0x13D390u;
}
