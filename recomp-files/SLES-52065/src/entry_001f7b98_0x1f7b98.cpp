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

// Function: entry_001f7b98
// Address: 0x1f7b98 - 0x1f7bbc
void entry_001f7b98_0x1f7b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7b98_0x1f7b98");
#endif

    ctx->pc = 0x1f7b98u;

label_1f7b98:
    // 0x1f7b98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7b9c: 0x0  nop
    ctx->pc = 0x1f7b9cu;
    // NOP
    // 0x1f7ba0: 0x0  nop
    ctx->pc = 0x1f7ba0u;
    // NOP
    // 0x1f7ba4: 0x0  nop
    ctx->pc = 0x1f7ba4u;
    // NOP
    // 0x1f7ba8: 0x0  nop
    ctx->pc = 0x1f7ba8u;
    // NOP
    // 0x1f7bac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7BACu;
    {
        const bool branch_taken_0x1f7bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7bac) {
            ctx->pc = 0x1F7B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7b98;
        }
    }
    ctx->pc = 0x1F7BB4u;
    // 0x1f7bb4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7BB4u;
    {
        const bool branch_taken_0x1f7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7bb4) {
            ctx->pc = 0x1F7B58u;
            return;
        }
    }
    ctx->pc = 0x1F7BBCu;
}
