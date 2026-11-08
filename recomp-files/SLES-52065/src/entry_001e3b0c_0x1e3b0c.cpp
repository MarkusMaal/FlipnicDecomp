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

// Function: entry_001e3b0c
// Address: 0x1e3b0c - 0x1e3b14
void entry_001e3b0c_0x1e3b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3b0c_0x1e3b0c");
#endif

    ctx->pc = 0x1e3b0cu;

    // 0x1e3b0c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1E3B0Cu;
    {
        const bool branch_taken_0x1e3b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b0c) {
            ctx->pc = 0x1E3D58u;
            return;
        }
    }
    ctx->pc = 0x1E3B14u;
}
