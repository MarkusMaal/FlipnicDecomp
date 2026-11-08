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

// Function: entry_00188d08
// Address: 0x188d08 - 0x188d18
void entry_00188d08_0x188d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d08_0x188d08");
#endif

    ctx->pc = 0x188d08u;

    // 0x188d08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D08u;
    {
        const bool branch_taken_0x188d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d08) {
            ctx->pc = 0x188D18u;
            return;
        }
    }
    ctx->pc = 0x188D10u;
    // 0x188d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188D10u;
    {
        const bool branch_taken_0x188d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d10) {
            ctx->pc = 0x188D1Cu;
            return;
        }
    }
    ctx->pc = 0x188D18u;
}
