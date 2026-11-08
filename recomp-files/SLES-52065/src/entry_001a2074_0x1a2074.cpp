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

// Function: entry_001a2074
// Address: 0x1a2074 - 0x1a2090
void entry_001a2074_0x1a2074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2074_0x1a2074");
#endif

    ctx->pc = 0x1a2074u;

label_1a2074:
    // 0x1a2074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2078: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1a2078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a207c: 0x0  nop
    ctx->pc = 0x1a207cu;
    // NOP
    // 0x1a2080: 0x0  nop
    ctx->pc = 0x1a2080u;
    // NOP
    // 0x1a2084: 0x0  nop
    ctx->pc = 0x1a2084u;
    // NOP
    // 0x1a2088: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2088u;
    {
        const bool branch_taken_0x1a2088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2088) {
            ctx->pc = 0x1A2074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2074;
        }
    }
    ctx->pc = 0x1A2090u;
}
