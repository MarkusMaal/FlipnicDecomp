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

// Function: entry_001ed850
// Address: 0x1ed850 - 0x1ed880
void entry_001ed850_0x1ed850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed850_0x1ed850");
#endif

    ctx->pc = 0x1ed850u;

label_1ed850:
    // 0x1ed850: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ed850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ed854: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed858: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed85c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ed85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ed860: 0x0  nop
    ctx->pc = 0x1ed860u;
    // NOP
    // 0x1ed864: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED864u;
    {
        const bool branch_taken_0x1ed864 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ed864) {
            ctx->pc = 0x1ED850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed850;
        }
    }
    ctx->pc = 0x1ED86Cu;
    // 0x1ed86c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ed870: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ed870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ed874: 0x2442c900  addiu       $v0, $v0, -0x3700
    ctx->pc = 0x1ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953216));
    // 0x1ed878: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x1ed878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x1ed87c: 0x0  nop
    ctx->pc = 0x1ed87cu;
    // NOP
    ctx->pc = 0x1ed880u;
}
