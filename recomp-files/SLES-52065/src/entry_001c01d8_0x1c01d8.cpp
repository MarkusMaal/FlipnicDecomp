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

// Function: entry_001c01d8
// Address: 0x1c01d8 - 0x1c01e0
void entry_001c01d8_0x1c01d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c01d8_0x1c01d8");
#endif

    ctx->pc = 0x1c01d8u;

    // 0x1c01d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C01D8u;
    {
        const bool branch_taken_0x1c01d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c01d8) {
            ctx->pc = 0x1C01E4u;
            return;
        }
    }
    ctx->pc = 0x1C01E0u;
}
