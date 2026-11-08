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

// Function: entry_0010ea7c
// Address: 0x10ea7c - 0x10ea90
void entry_0010ea7c_0x10ea7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea7c_0x10ea7c");
#endif

    ctx->pc = 0x10ea7cu;

    // 0x10ea7c: 0x0  nop
    ctx->pc = 0x10ea7cu;
    // NOP
    // 0x10ea80: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x10ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10ea84: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x10ea84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10ea88: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10EA88u;
    {
        const bool branch_taken_0x10ea88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ea88) {
            ctx->pc = 0x10EA40u;
            return;
        }
    }
    ctx->pc = 0x10EA90u;
}
