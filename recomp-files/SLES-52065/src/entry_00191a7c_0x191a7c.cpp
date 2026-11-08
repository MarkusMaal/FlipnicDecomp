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

// Function: entry_00191a7c
// Address: 0x191a7c - 0x191a94
void entry_00191a7c_0x191a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a7c_0x191a7c");
#endif

    ctx->pc = 0x191a7cu;

    // 0x191a7c: 0x0  nop
    ctx->pc = 0x191a7cu;
    // NOP
    // 0x191a80: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x191a84: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x191A84u;
    {
        const bool branch_taken_0x191a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a84) {
            ctx->pc = 0x191A40u;
            return;
        }
    }
    ctx->pc = 0x191A8Cu;
    // 0x191a8c: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x191A8Cu;
    {
        const bool branch_taken_0x191a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a8c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191A94u;
}
