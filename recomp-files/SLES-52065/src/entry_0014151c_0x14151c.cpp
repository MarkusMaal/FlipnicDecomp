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

// Function: entry_0014151c
// Address: 0x14151c - 0x141530
void entry_0014151c_0x14151c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014151c_0x14151c");
#endif

    ctx->pc = 0x14151cu;

    // 0x14151c: 0x0  nop
    ctx->pc = 0x14151cu;
    // NOP
    // 0x141520: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x141520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141524: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x141524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x141528: 0x14e6ffe9  bne         $a3, $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x141528u;
    {
        const bool branch_taken_0x141528 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x141528) {
            ctx->pc = 0x1414D0u;
            return;
        }
    }
    ctx->pc = 0x141530u;
}
