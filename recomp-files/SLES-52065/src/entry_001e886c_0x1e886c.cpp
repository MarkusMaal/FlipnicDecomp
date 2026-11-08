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

// Function: entry_001e886c
// Address: 0x1e886c - 0x1e8878
void entry_001e886c_0x1e886c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e886c_0x1e886c");
#endif

    ctx->pc = 0x1e886cu;

    // 0x1e886c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e8870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8870u;
    {
        const bool branch_taken_0x1e8870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8870) {
            ctx->pc = 0x1E8880u;
            return;
        }
    }
    ctx->pc = 0x1E8878u;
}
