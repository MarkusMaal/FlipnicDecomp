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

// Function: entry_00160428
// Address: 0x160428 - 0x160438
void entry_00160428_0x160428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160428_0x160428");
#endif

    ctx->pc = 0x160428u;

    // 0x160428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16042c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x16042cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x160430: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x160430u;
    {
        const bool branch_taken_0x160430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160430u;
        // 0x160434: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160430) {
            ctx->pc = 0x1603ACu;
            return;
        }
    }
    ctx->pc = 0x160438u;
}
