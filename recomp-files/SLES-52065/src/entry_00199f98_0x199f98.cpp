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

// Function: entry_00199f98
// Address: 0x199f98 - 0x199fa0
void entry_00199f98_0x199f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f98_0x199f98");
#endif

    ctx->pc = 0x199f98u;

    // 0x199f98: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x199F98u;
    {
        const bool branch_taken_0x199f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f98) {
            ctx->pc = 0x19A0A0u;
            return;
        }
    }
    ctx->pc = 0x199FA0u;
}
