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

// Function: entry_001f7e00
// Address: 0x1f7e00 - 0x1f7e1c
void entry_001f7e00_0x1f7e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7e00_0x1f7e00");
#endif

    ctx->pc = 0x1f7e00u;

label_1f7e00:
    // 0x1f7e00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7e04: 0x0  nop
    ctx->pc = 0x1f7e04u;
    // NOP
    // 0x1f7e08: 0x0  nop
    ctx->pc = 0x1f7e08u;
    // NOP
    // 0x1f7e0c: 0x0  nop
    ctx->pc = 0x1f7e0cu;
    // NOP
    // 0x1f7e10: 0x0  nop
    ctx->pc = 0x1f7e10u;
    // NOP
    // 0x1f7e14: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7E14u;
    {
        const bool branch_taken_0x1f7e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7e14) {
            ctx->pc = 0x1F7E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7e00;
        }
    }
    ctx->pc = 0x1F7E1Cu;
}
