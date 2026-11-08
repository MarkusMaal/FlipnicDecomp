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

// Function: entry_001e8524
// Address: 0x1e8524 - 0x1e8530
void entry_001e8524_0x1e8524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8524_0x1e8524");
#endif

    ctx->pc = 0x1e8524u;

    // 0x1e8524: 0x0  nop
    ctx->pc = 0x1e8524u;
    // NOP
    // 0x1e8528: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8528u;
    {
        const bool branch_taken_0x1e8528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8528) {
            ctx->pc = 0x1E8578u;
            return;
        }
    }
    ctx->pc = 0x1E8530u;
}
