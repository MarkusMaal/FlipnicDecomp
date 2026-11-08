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

// Function: entry_001f7388
// Address: 0x1f7388 - 0x1f73a4
void entry_001f7388_0x1f7388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7388_0x1f7388");
#endif

    ctx->pc = 0x1f7388u;

label_1f7388:
    // 0x1f7388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f738c: 0x0  nop
    ctx->pc = 0x1f738cu;
    // NOP
    // 0x1f7390: 0x0  nop
    ctx->pc = 0x1f7390u;
    // NOP
    // 0x1f7394: 0x0  nop
    ctx->pc = 0x1f7394u;
    // NOP
    // 0x1f7398: 0x0  nop
    ctx->pc = 0x1f7398u;
    // NOP
    // 0x1f739c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F739Cu;
    {
        const bool branch_taken_0x1f739c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f739c) {
            ctx->pc = 0x1F7388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7388;
        }
    }
    ctx->pc = 0x1F73A4u;
}
