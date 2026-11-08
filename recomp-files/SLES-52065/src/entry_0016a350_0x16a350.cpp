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

// Function: entry_0016a350
// Address: 0x16a350 - 0x16a358
void entry_0016a350_0x16a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a350_0x16a350");
#endif

    ctx->pc = 0x16a350u;

    // 0x16a350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A350u;
    {
        const bool branch_taken_0x16a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a350) {
            ctx->pc = 0x16A35Cu;
            return;
        }
    }
    ctx->pc = 0x16A358u;
}
