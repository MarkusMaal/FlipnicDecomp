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

// Function: caseD_1
// Address: 0x1a5990 - 0x1a5998
void caseD_1_0x1a5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a5990");
#endif

    ctx->pc = 0x1a5990u;

    // 0x1a5990: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A5990u;
    {
        const bool branch_taken_0x1a5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5990) {
            ctx->pc = 0x1A59C4u;
            return;
        }
    }
    ctx->pc = 0x1A5998u;
}
