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

// Function: entry_001b3c9c
// Address: 0x1b3c9c - 0x1b3cb0
void entry_001b3c9c_0x1b3c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3c9c_0x1b3c9c");
#endif

    ctx->pc = 0x1b3c9cu;

    // 0x1b3c9c: 0x0  nop
    ctx->pc = 0x1b3c9cu;
    // NOP
    // 0x1b3ca0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1b3ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b3ca4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B3CA4u;
    {
        const bool branch_taken_0x1b3ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ca4) {
            ctx->pc = 0x1B3C64u;
            return;
        }
    }
    ctx->pc = 0x1B3CACu;
    // 0x1b3cac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1b3cb0u;
}
