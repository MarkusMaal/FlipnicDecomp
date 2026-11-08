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

// Function: entry_0017192c
// Address: 0x17192c - 0x17193c
void entry_0017192c_0x17192c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017192c_0x17192c");
#endif

    ctx->pc = 0x17192cu;

    // 0x17192c: 0x0  nop
    ctx->pc = 0x17192cu;
    // NOP
    // 0x171930: 0x65202a  slt         $a0, $v1, $a1
    ctx->pc = 0x171930u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x171934: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x171934u;
    {
        const bool branch_taken_0x171934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x171934) {
            ctx->pc = 0x1718D4u;
            return;
        }
    }
    ctx->pc = 0x17193Cu;
}
