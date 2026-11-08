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

// Function: entry_001afe50
// Address: 0x1afe50 - 0x1afe60
void entry_001afe50_0x1afe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afe50_0x1afe50");
#endif

    ctx->pc = 0x1afe50u;

    // 0x1afe50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFE50u;
    {
        const bool branch_taken_0x1afe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe50) {
            ctx->pc = 0x1AFE60u;
            return;
        }
    }
    ctx->pc = 0x1AFE58u;
    // 0x1afe58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFE58u;
    {
        const bool branch_taken_0x1afe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe58) {
            ctx->pc = 0x1AFE64u;
            return;
        }
    }
    ctx->pc = 0x1AFE60u;
}
