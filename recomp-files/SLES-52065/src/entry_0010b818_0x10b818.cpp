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

// Function: entry_0010b818
// Address: 0x10b818 - 0x10b820
void entry_0010b818_0x10b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b818_0x10b818");
#endif

    ctx->pc = 0x10b818u;

    // 0x10b818: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10B818u;
    {
        const bool branch_taken_0x10b818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b818) {
            ctx->pc = 0x10B848u;
            return;
        }
    }
    ctx->pc = 0x10B820u;
}
