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

// Function: entry_00188d70
// Address: 0x188d70 - 0x188d80
void entry_00188d70_0x188d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d70_0x188d70");
#endif

    ctx->pc = 0x188d70u;

    // 0x188d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D70u;
    {
        const bool branch_taken_0x188d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d70) {
            ctx->pc = 0x188D80u;
            return;
        }
    }
    ctx->pc = 0x188D78u;
    // 0x188d78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188D78u;
    {
        const bool branch_taken_0x188d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d78) {
            ctx->pc = 0x188D84u;
            return;
        }
    }
    ctx->pc = 0x188D80u;
}
