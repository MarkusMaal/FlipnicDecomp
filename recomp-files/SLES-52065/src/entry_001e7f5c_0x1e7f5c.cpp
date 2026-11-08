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

// Function: entry_001e7f5c
// Address: 0x1e7f5c - 0x1e7f68
void entry_001e7f5c_0x1e7f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7f5c_0x1e7f5c");
#endif

    ctx->pc = 0x1e7f5cu;

    // 0x1e7f5c: 0x0  nop
    ctx->pc = 0x1e7f5cu;
    // NOP
    // 0x1e7f60: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E7F60u;
    {
        const bool branch_taken_0x1e7f60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f60) {
            ctx->pc = 0x1E7FA8u;
            return;
        }
    }
    ctx->pc = 0x1E7F68u;
}
