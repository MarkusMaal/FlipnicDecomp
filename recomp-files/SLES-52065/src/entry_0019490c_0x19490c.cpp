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

// Function: entry_0019490c
// Address: 0x19490c - 0x194920
void entry_0019490c_0x19490c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019490c_0x19490c");
#endif

    ctx->pc = 0x19490cu;

    // 0x19490c: 0x0  nop
    ctx->pc = 0x19490cu;
    // NOP
    // 0x194910: 0x501ffd1  bgez        $t0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x194910u;
    {
        const bool branch_taken_0x194910 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x194910) {
            ctx->pc = 0x194858u;
            return;
        }
    }
    ctx->pc = 0x194918u;
    // 0x194918: 0x10000516  b           . + 4 + (0x516 << 2)
    ctx->pc = 0x194918u;
    {
        const bool branch_taken_0x194918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194918) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194920u;
}
