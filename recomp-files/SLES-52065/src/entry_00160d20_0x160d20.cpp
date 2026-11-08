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

// Function: entry_00160d20
// Address: 0x160d20 - 0x160d30
void entry_00160d20_0x160d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160d20_0x160d20");
#endif

    ctx->pc = 0x160d20u;

    // 0x160d20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160d24: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160d28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x160D28u;
    {
        const bool branch_taken_0x160d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D28u;
        // 0x160d2c: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d28) {
            ctx->pc = 0x160D08u;
            return;
        }
    }
    ctx->pc = 0x160D30u;
}
