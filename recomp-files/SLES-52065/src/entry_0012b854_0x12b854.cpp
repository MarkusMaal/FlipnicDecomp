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

// Function: entry_0012b854
// Address: 0x12b854 - 0x12b864
void entry_0012b854_0x12b854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b854_0x12b854");
#endif

    ctx->pc = 0x12b854u;

    // 0x12b854: 0x0  nop
    ctx->pc = 0x12b854u;
    // NOP
    // 0x12b858: 0x1c3102a  slt         $v0, $t6, $v1
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12b85c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x12B85Cu;
    {
        const bool branch_taken_0x12b85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b85c) {
            ctx->pc = 0x12B7E0u;
            return;
        }
    }
    ctx->pc = 0x12B864u;
}
