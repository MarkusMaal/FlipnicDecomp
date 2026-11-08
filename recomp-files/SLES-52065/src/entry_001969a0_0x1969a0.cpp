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

// Function: entry_001969a0
// Address: 0x1969a0 - 0x1969d0
void entry_001969a0_0x1969a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001969a0_0x1969a0");
#endif

    ctx->pc = 0x1969a0u;

label_1969a0:
    // 0x1969a0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1969a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1969a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1969a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1969a8: 0x12e30009  beq         $s7, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1969A8u;
    {
        const bool branch_taken_0x1969a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x1969a8) {
            ctx->pc = 0x1969D0u;
            return;
        }
    }
    ctx->pc = 0x1969B0u;
    // 0x1969b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1969b4: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x1969b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1969b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1969B8u;
    {
        const bool branch_taken_0x1969b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B8u;
        // 0x1969bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969b8) {
            ctx->pc = 0x1969D0u;
            return;
        }
    }
    ctx->pc = 0x1969C0u;
    // 0x1969c0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1969c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1969c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1969c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1969c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1969C8u;
    {
        const bool branch_taken_0x1969c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1969c8) {
            ctx->pc = 0x1969A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1969a0;
        }
    }
    ctx->pc = 0x1969D0u;
}
