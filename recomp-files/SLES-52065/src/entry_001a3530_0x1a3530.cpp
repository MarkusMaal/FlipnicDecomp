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

// Function: entry_001a3530
// Address: 0x1a3530 - 0x1a3544
void entry_001a3530_0x1a3530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3530_0x1a3530");
#endif

    ctx->pc = 0x1a3530u;

    // 0x1a3530: 0x8e2307c0  lw          $v1, 0x7C0($s1)
    ctx->pc = 0x1a3530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x1a3534: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3538: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a3538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a353c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A353Cu;
    {
        const bool branch_taken_0x1a353c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A353Cu;
        // 0x1a3540: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a353c) {
            ctx->pc = 0x1A350Cu;
            return;
        }
    }
    ctx->pc = 0x1A3544u;
}
