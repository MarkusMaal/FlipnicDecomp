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

// Function: entry_001231e0
// Address: 0x1231e0 - 0x1231f0
void entry_001231e0_0x1231e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231e0_0x1231e0");
#endif

    ctx->pc = 0x1231e0u;

    // 0x1231e0: 0x10a000d1  beqz        $a1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1231E0u;
    {
        const bool branch_taken_0x1231e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231e0) {
            ctx->pc = 0x123528u;
            return;
        }
    }
    ctx->pc = 0x1231E8u;
    // 0x1231e8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1231E8u;
    {
        const bool branch_taken_0x1231e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231e8) {
            ctx->pc = 0x1234E4u;
            return;
        }
    }
    ctx->pc = 0x1231F0u;
}
