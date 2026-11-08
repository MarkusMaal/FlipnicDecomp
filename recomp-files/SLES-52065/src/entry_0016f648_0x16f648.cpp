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

// Function: entry_0016f648
// Address: 0x16f648 - 0x16f658
void entry_0016f648_0x16f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f648_0x16f648");
#endif

    ctx->pc = 0x16f648u;

    // 0x16f648: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F648u;
    {
        const bool branch_taken_0x16f648 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f648) {
            ctx->pc = 0x16F658u;
            return;
        }
    }
    ctx->pc = 0x16F650u;
    // 0x16f650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F650u;
    {
        const bool branch_taken_0x16f650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f650) {
            ctx->pc = 0x16F65Cu;
            return;
        }
    }
    ctx->pc = 0x16F658u;
}
