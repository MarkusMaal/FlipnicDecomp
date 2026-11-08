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

// Function: entry_0011bd60
// Address: 0x11bd60 - 0x11bd68
void entry_0011bd60_0x11bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd60_0x11bd60");
#endif

    ctx->pc = 0x11bd60u;

    // 0x11bd60: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11BD60u;
    {
        const bool branch_taken_0x11bd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd60) {
            ctx->pc = 0x11BE28u;
            return;
        }
    }
    ctx->pc = 0x11BD68u;
}
