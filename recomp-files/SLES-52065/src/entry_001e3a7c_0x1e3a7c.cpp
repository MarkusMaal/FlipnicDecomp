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

// Function: entry_001e3a7c
// Address: 0x1e3a7c - 0x1e3a88
void entry_001e3a7c_0x1e3a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3a7c_0x1e3a7c");
#endif

    ctx->pc = 0x1e3a7cu;

    // 0x1e3a7c: 0x0  nop
    ctx->pc = 0x1e3a7cu;
    // NOP
    // 0x1e3a80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E3A80u;
    {
        const bool branch_taken_0x1e3a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a80) {
            ctx->pc = 0x1E3AACu;
            return;
        }
    }
    ctx->pc = 0x1E3A88u;
}
