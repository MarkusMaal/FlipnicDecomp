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

// Function: entry_001afc00
// Address: 0x1afc00 - 0x1afc10
void entry_001afc00_0x1afc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc00_0x1afc00");
#endif

    ctx->pc = 0x1afc00u;

    // 0x1afc00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC00u;
    {
        const bool branch_taken_0x1afc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc00) {
            ctx->pc = 0x1AFC10u;
            return;
        }
    }
    ctx->pc = 0x1AFC08u;
    // 0x1afc08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC08u;
    {
        const bool branch_taken_0x1afc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc08) {
            ctx->pc = 0x1AFC14u;
            return;
        }
    }
    ctx->pc = 0x1AFC10u;
}
