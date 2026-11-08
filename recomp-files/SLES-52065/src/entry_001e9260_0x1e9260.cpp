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

// Function: entry_001e9260
// Address: 0x1e9260 - 0x1e9268
void entry_001e9260_0x1e9260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9260_0x1e9260");
#endif

    ctx->pc = 0x1e9260u;

    // 0x1e9260: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1E9260u;
    {
        const bool branch_taken_0x1e9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9260) {
            ctx->pc = 0x1E943Cu;
            return;
        }
    }
    ctx->pc = 0x1E9268u;
}
