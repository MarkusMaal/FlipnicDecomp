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

// Function: entry_0011f0d8
// Address: 0x11f0d8 - 0x11f0e0
void entry_0011f0d8_0x11f0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f0d8_0x11f0d8");
#endif

    ctx->pc = 0x11f0d8u;

    // 0x11f0d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11F0D8u;
    {
        const bool branch_taken_0x11f0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0d8) {
            ctx->pc = 0x11F0F4u;
            return;
        }
    }
    ctx->pc = 0x11F0E0u;
}
