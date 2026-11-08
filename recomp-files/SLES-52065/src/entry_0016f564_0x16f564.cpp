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

// Function: entry_0016f564
// Address: 0x16f564 - 0x16f574
void entry_0016f564_0x16f564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f564_0x16f564");
#endif

    ctx->pc = 0x16f564u;

    // 0x16f564: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F564u;
    {
        const bool branch_taken_0x16f564 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f564) {
            ctx->pc = 0x16F574u;
            return;
        }
    }
    ctx->pc = 0x16F56Cu;
    // 0x16f56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F56Cu;
    {
        const bool branch_taken_0x16f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f56c) {
            ctx->pc = 0x16F578u;
            return;
        }
    }
    ctx->pc = 0x16F574u;
}
