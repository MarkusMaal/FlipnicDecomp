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

// Function: entry_0016333c
// Address: 0x16333c - 0x163354
void entry_0016333c_0x16333c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016333c_0x16333c");
#endif

    ctx->pc = 0x16333cu;

    // 0x16333c: 0x0  nop
    ctx->pc = 0x16333cu;
    // NOP
    // 0x163340: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x163340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x163344: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x163344u;
    {
        const bool branch_taken_0x163344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163344) {
            ctx->pc = 0x1632ECu;
            return;
        }
    }
    ctx->pc = 0x16334Cu;
    // 0x16334c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16334Cu;
    {
        const bool branch_taken_0x16334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16334c) {
            ctx->pc = 0x1633BCu;
            return;
        }
    }
    ctx->pc = 0x163354u;
}
