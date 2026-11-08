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

// Function: entry_001633b0
// Address: 0x1633b0 - 0x1633bc
void entry_001633b0_0x1633b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633b0_0x1633b0");
#endif

    ctx->pc = 0x1633b0u;

    // 0x1633b0: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x1633b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1633b4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1633B4u;
    {
        const bool branch_taken_0x1633b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1633b4) {
            ctx->pc = 0x163378u;
            return;
        }
    }
    ctx->pc = 0x1633BCu;
}
