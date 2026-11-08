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

// Function: entry_001e56dc
// Address: 0x1e56dc - 0x1e56e8
void entry_001e56dc_0x1e56dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e56dc_0x1e56dc");
#endif

    ctx->pc = 0x1e56dcu;

    // 0x1e56dc: 0x0  nop
    ctx->pc = 0x1e56dcu;
    // NOP
    // 0x1e56e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E56E0u;
    {
        const bool branch_taken_0x1e56e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e56e0) {
            ctx->pc = 0x1E5714u;
            return;
        }
    }
    ctx->pc = 0x1E56E8u;
}
