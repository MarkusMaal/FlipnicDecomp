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

// Function: entry_00155630
// Address: 0x155630 - 0x155638
void entry_00155630_0x155630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155630_0x155630");
#endif

    ctx->pc = 0x155630u;

    // 0x155630: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x155630u;
    {
        const bool branch_taken_0x155630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155630) {
            ctx->pc = 0x155794u;
            return;
        }
    }
    ctx->pc = 0x155638u;
}
