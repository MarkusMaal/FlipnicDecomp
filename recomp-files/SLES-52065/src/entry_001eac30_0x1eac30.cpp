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

// Function: entry_001eac30
// Address: 0x1eac30 - 0x1eac38
void entry_001eac30_0x1eac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac30_0x1eac30");
#endif

    ctx->pc = 0x1eac30u;

    // 0x1eac30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAC30u;
    {
        const bool branch_taken_0x1eac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac30) {
            ctx->pc = 0x1EAC4Cu;
            return;
        }
    }
    ctx->pc = 0x1EAC38u;
}
