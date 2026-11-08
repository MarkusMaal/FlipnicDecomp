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

// Function: entry_001fe3b0
// Address: 0x1fe3b0 - 0x1fe3d4
void entry_001fe3b0_0x1fe3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe3b0_0x1fe3b0");
#endif

    ctx->pc = 0x1fe3b0u;

label_1fe3b0:
    // 0x1fe3b0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1fe3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fe3b4: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fe3b8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1fe3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1fe3bc: 0x0  nop
    ctx->pc = 0x1fe3bcu;
    // NOP
    // 0x1fe3c0: 0x0  nop
    ctx->pc = 0x1fe3c0u;
    // NOP
    // 0x1fe3c4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE3C4u;
    {
        const bool branch_taken_0x1fe3c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3c4) {
            ctx->pc = 0x1FE3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe3b0;
        }
    }
    ctx->pc = 0x1FE3CCu;
    // 0x1fe3cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE3CCu;
    {
        const bool branch_taken_0x1fe3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3CCu;
        // 0x1fe3d0: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3cc) {
            ctx->pc = 0x1FE3D8u;
            return;
        }
    }
    ctx->pc = 0x1FE3D4u;
}
