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

// Function: entry_001b49e4
// Address: 0x1b49e4 - 0x1b49f0
void entry_001b49e4_0x1b49e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b49e4_0x1b49e4");
#endif

    ctx->pc = 0x1b49e4u;

    // 0x1b49e4: 0x0  nop
    ctx->pc = 0x1b49e4u;
    // NOP
    // 0x1b49e8: 0x1660ffeb  bnez        $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B49E8u;
    {
        const bool branch_taken_0x1b49e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b49e8) {
            ctx->pc = 0x1B4998u;
            return;
        }
    }
    ctx->pc = 0x1B49F0u;
}
