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

// Function: entry_0011a93c
// Address: 0x11a93c - 0x11a944
void entry_0011a93c_0x11a93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a93c_0x11a93c");
#endif

    ctx->pc = 0x11a93cu;

    // 0x11a93c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A93Cu;
    {
        const bool branch_taken_0x11a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A93Cu;
        // 0x11a940: 0xaf8083b4  sw          $zero, -0x7C4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a93c) {
            ctx->pc = 0x11A94Cu;
            return;
        }
    }
    ctx->pc = 0x11A944u;
}
