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

// Function: entry_001f5a78
// Address: 0x1f5a78 - 0x1f5a94
void entry_001f5a78_0x1f5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5a78_0x1f5a78");
#endif

    ctx->pc = 0x1f5a78u;

label_1f5a78:
    // 0x1f5a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5a7c: 0x0  nop
    ctx->pc = 0x1f5a7cu;
    // NOP
    // 0x1f5a80: 0x0  nop
    ctx->pc = 0x1f5a80u;
    // NOP
    // 0x1f5a84: 0x0  nop
    ctx->pc = 0x1f5a84u;
    // NOP
    // 0x1f5a88: 0x0  nop
    ctx->pc = 0x1f5a88u;
    // NOP
    // 0x1f5a8c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5A8Cu;
    {
        const bool branch_taken_0x1f5a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5a8c) {
            ctx->pc = 0x1F5A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a78;
        }
    }
    ctx->pc = 0x1F5A94u;
}
