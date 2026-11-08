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

// Function: entry_0013d140
// Address: 0x13d140 - 0x13d148
void entry_0013d140_0x13d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d140_0x13d140");
#endif

    ctx->pc = 0x13d140u;

    // 0x13d140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D140u;
    {
        const bool branch_taken_0x13d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d140) {
            ctx->pc = 0x13D150u;
            return;
        }
    }
    ctx->pc = 0x13D148u;
}
