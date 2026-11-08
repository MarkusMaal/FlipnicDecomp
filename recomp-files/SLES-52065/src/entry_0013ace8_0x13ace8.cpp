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

// Function: entry_0013ace8
// Address: 0x13ace8 - 0x13acf0
void entry_0013ace8_0x13ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ace8_0x13ace8");
#endif

    ctx->pc = 0x13ace8u;

    // 0x13ace8: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13ACE8u;
    {
        const bool branch_taken_0x13ace8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ace8) {
            ctx->pc = 0x13ACC4u;
            return;
        }
    }
    ctx->pc = 0x13ACF0u;
}
