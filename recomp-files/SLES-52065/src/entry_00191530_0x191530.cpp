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

// Function: entry_00191530
// Address: 0x191530 - 0x19154c
void entry_00191530_0x191530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191530_0x191530");
#endif

    ctx->pc = 0x191530u;

    // 0x191530: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x191530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191534: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x191534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
    // 0x191538: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191538u;
    {
        const bool branch_taken_0x191538 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191538u;
        // 0x19153c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191538) {
            ctx->pc = 0x19154Cu;
            return;
        }
    }
    ctx->pc = 0x191540u;
    // 0x191540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191540u;
    {
        const bool branch_taken_0x191540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191540u;
        // 0x191544: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191540) {
            ctx->pc = 0x191564u;
            return;
        }
    }
    ctx->pc = 0x191548u;
    // 0x191548: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x19154cu;
}
