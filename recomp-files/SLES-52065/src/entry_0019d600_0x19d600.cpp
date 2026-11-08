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

// Function: entry_0019d600
// Address: 0x19d600 - 0x19d60c
void entry_0019d600_0x19d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d600_0x19d600");
#endif

    ctx->pc = 0x19d600u;

    // 0x19d600: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x19d600u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19d604: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x19D604u;
    {
        const bool branch_taken_0x19d604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d604) {
            ctx->pc = 0x19D5A0u;
            return;
        }
    }
    ctx->pc = 0x19D60Cu;
}
