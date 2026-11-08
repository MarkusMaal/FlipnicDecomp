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

// Function: entry_0013610c
// Address: 0x13610c - 0x136128
void entry_0013610c_0x13610c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013610c_0x13610c");
#endif

    ctx->pc = 0x13610cu;

label_13610c:
    // 0x13610c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x13610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x136110: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x136110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x136114: 0x0  nop
    ctx->pc = 0x136114u;
    // NOP
    // 0x136118: 0x0  nop
    ctx->pc = 0x136118u;
    // NOP
    // 0x13611c: 0x0  nop
    ctx->pc = 0x13611cu;
    // NOP
    // 0x136120: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136120u;
    {
        const bool branch_taken_0x136120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136120) {
            ctx->pc = 0x13610Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13610c;
        }
    }
    ctx->pc = 0x136128u;
}
