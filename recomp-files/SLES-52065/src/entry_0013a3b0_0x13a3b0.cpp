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

// Function: entry_0013a3b0
// Address: 0x13a3b0 - 0x13a3bc
void entry_0013a3b0_0x13a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a3b0_0x13a3b0");
#endif

    ctx->pc = 0x13a3b0u;

    // 0x13a3b0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x13a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a3b4: 0x1470ffd2  bne         $v1, $s0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x13A3B4u;
    {
        const bool branch_taken_0x13a3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13a3b4) {
            ctx->pc = 0x13A300u;
            return;
        }
    }
    ctx->pc = 0x13A3BCu;
}
