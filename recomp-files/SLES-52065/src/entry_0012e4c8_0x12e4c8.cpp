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

// Function: entry_0012e4c8
// Address: 0x12e4c8 - 0x12e4d0
void entry_0012e4c8_0x12e4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e4c8_0x12e4c8");
#endif

    ctx->pc = 0x12e4c8u;

    // 0x12e4c8: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12E4C8u;
    {
        const bool branch_taken_0x12e4c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e4c8) {
            ctx->pc = 0x12E4A4u;
            return;
        }
    }
    ctx->pc = 0x12E4D0u;
}
