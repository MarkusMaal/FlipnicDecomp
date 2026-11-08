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

// Function: entry_001f76d0
// Address: 0x1f76d0 - 0x1f76ec
void entry_001f76d0_0x1f76d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f76d0_0x1f76d0");
#endif

    ctx->pc = 0x1f76d0u;

label_1f76d0:
    // 0x1f76d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f76d4: 0x0  nop
    ctx->pc = 0x1f76d4u;
    // NOP
    // 0x1f76d8: 0x0  nop
    ctx->pc = 0x1f76d8u;
    // NOP
    // 0x1f76dc: 0x0  nop
    ctx->pc = 0x1f76dcu;
    // NOP
    // 0x1f76e0: 0x0  nop
    ctx->pc = 0x1f76e0u;
    // NOP
    // 0x1f76e4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F76E4u;
    {
        const bool branch_taken_0x1f76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f76e4) {
            ctx->pc = 0x1F76D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f76d0;
        }
    }
    ctx->pc = 0x1F76ECu;
}
