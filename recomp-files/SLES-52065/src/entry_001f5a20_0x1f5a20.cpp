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

// Function: entry_001f5a20
// Address: 0x1f5a20 - 0x1f5a3c
void entry_001f5a20_0x1f5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5a20_0x1f5a20");
#endif

    ctx->pc = 0x1f5a20u;

label_1f5a20:
    // 0x1f5a20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5a24: 0x0  nop
    ctx->pc = 0x1f5a24u;
    // NOP
    // 0x1f5a28: 0x0  nop
    ctx->pc = 0x1f5a28u;
    // NOP
    // 0x1f5a2c: 0x0  nop
    ctx->pc = 0x1f5a2cu;
    // NOP
    // 0x1f5a30: 0x0  nop
    ctx->pc = 0x1f5a30u;
    // NOP
    // 0x1f5a34: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5A34u;
    {
        const bool branch_taken_0x1f5a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5a34) {
            ctx->pc = 0x1F5A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a20;
        }
    }
    ctx->pc = 0x1F5A3Cu;
}
