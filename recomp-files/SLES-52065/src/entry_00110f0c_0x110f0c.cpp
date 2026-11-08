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

// Function: entry_00110f0c
// Address: 0x110f0c - 0x110f20
void entry_00110f0c_0x110f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f0c_0x110f0c");
#endif

    ctx->pc = 0x110f0cu;

    // 0x110f0c: 0x0  nop
    ctx->pc = 0x110f0cu;
    // NOP
    // 0x110f10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x110f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110f14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x110f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110f18: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x110F18u;
    {
        const bool branch_taken_0x110f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f18) {
            ctx->pc = 0x110EBCu;
            return;
        }
    }
    ctx->pc = 0x110F20u;
}
