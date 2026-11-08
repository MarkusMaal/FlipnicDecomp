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

// Function: entry_001be09c
// Address: 0x1be09c - 0x1be0b4
void entry_001be09c_0x1be09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be09c_0x1be09c");
#endif

    ctx->pc = 0x1be09cu;

    // 0x1be09c: 0x0  nop
    ctx->pc = 0x1be09cu;
    // NOP
    // 0x1be0a0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1be0a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1be0a4: 0x0  nop
    ctx->pc = 0x1be0a4u;
    // NOP
    // 0x1be0a8: 0x0  nop
    ctx->pc = 0x1be0a8u;
    // NOP
    // 0x1be0ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BE0ACu;
    {
        const bool branch_taken_0x1be0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be0ac) {
            ctx->pc = 0x1BE098u;
            return;
        }
    }
    ctx->pc = 0x1BE0B4u;
}
