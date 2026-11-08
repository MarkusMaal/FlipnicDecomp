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

// Function: entry_0014b90c
// Address: 0x14b90c - 0x14b924
void entry_0014b90c_0x14b90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b90c_0x14b90c");
#endif

    ctx->pc = 0x14b90cu;

    // 0x14b90c: 0x0  nop
    ctx->pc = 0x14b90cu;
    // NOP
    // 0x14b910: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x14b910u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b914: 0x0  nop
    ctx->pc = 0x14b914u;
    // NOP
    // 0x14b918: 0x0  nop
    ctx->pc = 0x14b918u;
    // NOP
    // 0x14b91c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B91Cu;
    {
        const bool branch_taken_0x14b91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b91c) {
            ctx->pc = 0x14B908u;
            return;
        }
    }
    ctx->pc = 0x14B924u;
}
