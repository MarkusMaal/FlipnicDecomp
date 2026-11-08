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

// Function: entry_0019044c
// Address: 0x19044c - 0x190460
void entry_0019044c_0x19044c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019044c_0x19044c");
#endif

    ctx->pc = 0x19044cu;

    // 0x19044c: 0x0  nop
    ctx->pc = 0x19044cu;
    // NOP
    // 0x190450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x190454: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x190454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x190458: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x190458u;
    {
        const bool branch_taken_0x190458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190458) {
            ctx->pc = 0x190330u;
            return;
        }
    }
    ctx->pc = 0x190460u;
}
