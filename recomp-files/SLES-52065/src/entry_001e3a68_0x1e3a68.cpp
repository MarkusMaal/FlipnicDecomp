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

// Function: entry_001e3a68
// Address: 0x1e3a68 - 0x1e3a70
void entry_001e3a68_0x1e3a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3a68_0x1e3a68");
#endif

    ctx->pc = 0x1e3a68u;

    // 0x1e3a68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3A68u;
    {
        const bool branch_taken_0x1e3a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a68) {
            ctx->pc = 0x1E3A7Cu;
            return;
        }
    }
    ctx->pc = 0x1E3A70u;
}
