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

// Function: entry_001add4c
// Address: 0x1add4c - 0x1add54
void entry_001add4c_0x1add4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add4c_0x1add4c");
#endif

    ctx->pc = 0x1add4cu;

    // 0x1add4c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1ADD4Cu;
    {
        const bool branch_taken_0x1add4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add4c) {
            ctx->pc = 0x1ADE98u;
            return;
        }
    }
    ctx->pc = 0x1ADD54u;
}
