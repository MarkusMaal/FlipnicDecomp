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

// Function: entry_001e8578
// Address: 0x1e8578 - 0x1e8584
void entry_001e8578_0x1e8578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8578_0x1e8578");
#endif

    ctx->pc = 0x1e8578u;

    // 0x1e8578: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e8578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e857c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E857Cu;
    {
        const bool branch_taken_0x1e857c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e857c) {
            ctx->pc = 0x1E85D4u;
            return;
        }
    }
    ctx->pc = 0x1E8584u;
}
