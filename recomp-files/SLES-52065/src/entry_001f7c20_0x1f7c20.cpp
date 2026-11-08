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

// Function: entry_001f7c20
// Address: 0x1f7c20 - 0x1f7c44
void entry_001f7c20_0x1f7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7c20_0x1f7c20");
#endif

    ctx->pc = 0x1f7c20u;

label_1f7c20:
    // 0x1f7c20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7c24: 0x0  nop
    ctx->pc = 0x1f7c24u;
    // NOP
    // 0x1f7c28: 0x0  nop
    ctx->pc = 0x1f7c28u;
    // NOP
    // 0x1f7c2c: 0x0  nop
    ctx->pc = 0x1f7c2cu;
    // NOP
    // 0x1f7c30: 0x0  nop
    ctx->pc = 0x1f7c30u;
    // NOP
    // 0x1f7c34: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7C34u;
    {
        const bool branch_taken_0x1f7c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7c34) {
            ctx->pc = 0x1F7C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7c20;
        }
    }
    ctx->pc = 0x1F7C3Cu;
    // 0x1f7c3c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1F7C3Cu;
    {
        const bool branch_taken_0x1f7c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c3c) {
            ctx->pc = 0x1F7B58u;
            return;
        }
    }
    ctx->pc = 0x1F7C44u;
}
