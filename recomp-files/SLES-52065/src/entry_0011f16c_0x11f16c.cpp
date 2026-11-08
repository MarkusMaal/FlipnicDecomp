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

// Function: entry_0011f16c
// Address: 0x11f16c - 0x11f174
void entry_0011f16c_0x11f16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f16c_0x11f16c");
#endif

    ctx->pc = 0x11f16cu;

    // 0x11f16c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x11F16Cu;
    {
        const bool branch_taken_0x11f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f16c) {
            ctx->pc = 0x11F174u;
            return;
        }
    }
    ctx->pc = 0x11F174u;
}
