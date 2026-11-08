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

// Function: entry_00191c54
// Address: 0x191c54 - 0x191c6c
void entry_00191c54_0x191c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c54_0x191c54");
#endif

    ctx->pc = 0x191c54u;

    // 0x191c54: 0x0  nop
    ctx->pc = 0x191c54u;
    // NOP
    // 0x191c58: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x191c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x191c5c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x191C5Cu;
    {
        const bool branch_taken_0x191c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191c5c) {
            ctx->pc = 0x191BF4u;
            return;
        }
    }
    ctx->pc = 0x191C64u;
    // 0x191c64: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x191C64u;
    {
        const bool branch_taken_0x191c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c64) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191C6Cu;
}
