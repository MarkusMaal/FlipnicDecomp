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

// Function: entry_001f79e8
// Address: 0x1f79e8 - 0x1f7a04
void entry_001f79e8_0x1f79e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f79e8_0x1f79e8");
#endif

    ctx->pc = 0x1f79e8u;

label_1f79e8:
    // 0x1f79e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f79ec: 0x0  nop
    ctx->pc = 0x1f79ecu;
    // NOP
    // 0x1f79f0: 0x0  nop
    ctx->pc = 0x1f79f0u;
    // NOP
    // 0x1f79f4: 0x0  nop
    ctx->pc = 0x1f79f4u;
    // NOP
    // 0x1f79f8: 0x0  nop
    ctx->pc = 0x1f79f8u;
    // NOP
    // 0x1f79fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F79FCu;
    {
        const bool branch_taken_0x1f79fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f79fc) {
            ctx->pc = 0x1F79E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79e8;
        }
    }
    ctx->pc = 0x1F7A04u;
}
