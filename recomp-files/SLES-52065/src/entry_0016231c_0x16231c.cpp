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

// Function: entry_0016231c
// Address: 0x16231c - 0x162330
void entry_0016231c_0x16231c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016231c_0x16231c");
#endif

    ctx->pc = 0x16231cu;

    // 0x16231c: 0x0  nop
    ctx->pc = 0x16231cu;
    // NOP
    // 0x162320: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x162324: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x162324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162328: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x162328u;
    {
        const bool branch_taken_0x162328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162328) {
            ctx->pc = 0x16227Cu;
            return;
        }
    }
    ctx->pc = 0x162330u;
}
