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

// Function: entry_001f73e8
// Address: 0x1f73e8 - 0x1f740c
void entry_001f73e8_0x1f73e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f73e8_0x1f73e8");
#endif

    ctx->pc = 0x1f73e8u;

label_1f73e8:
    // 0x1f73e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f73ec: 0x0  nop
    ctx->pc = 0x1f73ecu;
    // NOP
    // 0x1f73f0: 0x0  nop
    ctx->pc = 0x1f73f0u;
    // NOP
    // 0x1f73f4: 0x0  nop
    ctx->pc = 0x1f73f4u;
    // NOP
    // 0x1f73f8: 0x0  nop
    ctx->pc = 0x1f73f8u;
    // NOP
    // 0x1f73fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F73FCu;
    {
        const bool branch_taken_0x1f73fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f73fc) {
            ctx->pc = 0x1F73E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73e8;
        }
    }
    ctx->pc = 0x1F7404u;
    // 0x1f7404: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7404u;
    {
        const bool branch_taken_0x1f7404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7404u;
        // 0x1f7408: 0x26f01540  addiu       $s0, $s7, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 5440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7404) {
            ctx->pc = 0x1F73A8u;
            return;
        }
    }
    ctx->pc = 0x1F740Cu;
}
