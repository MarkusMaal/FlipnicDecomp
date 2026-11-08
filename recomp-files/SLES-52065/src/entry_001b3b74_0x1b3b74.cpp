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

// Function: entry_001b3b74
// Address: 0x1b3b74 - 0x1b3b90
void entry_001b3b74_0x1b3b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b74_0x1b3b74");
#endif

    ctx->pc = 0x1b3b74u;

    // 0x1b3b74: 0x0  nop
    ctx->pc = 0x1b3b74u;
    // NOP
    // 0x1b3b78: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1b3b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b3b7c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3B7Cu;
    {
        const bool branch_taken_0x1b3b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b7c) {
            ctx->pc = 0x1B3B68u;
            return;
        }
    }
    ctx->pc = 0x1B3B84u;
    // 0x1b3b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3B88u;
    {
        const bool branch_taken_0x1b3b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b88) {
            ctx->pc = 0x1B3BA0u;
            return;
        }
    }
    ctx->pc = 0x1B3B90u;
}
