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

// Function: entry_00179420
// Address: 0x179420 - 0x179438
void entry_00179420_0x179420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179420_0x179420");
#endif

    ctx->pc = 0x179420u;

    // 0x179420: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x179420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179424: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x179424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179428: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x179428u;
    {
        const bool branch_taken_0x179428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179428u;
        // 0x17942c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179428) {
            ctx->pc = 0x1793E0u;
            return;
        }
    }
    ctx->pc = 0x179430u;
    // 0x179430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x179430u;
    {
        const bool branch_taken_0x179430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179430) {
            ctx->pc = 0x179440u;
            return;
        }
    }
    ctx->pc = 0x179438u;
}
