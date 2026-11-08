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

// Function: entry_00160418
// Address: 0x160418 - 0x160428
void entry_00160418_0x160418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160418_0x160418");
#endif

    ctx->pc = 0x160418u;

    // 0x160418: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x160418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16041c: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x16041cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x160420: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x160420u;
    {
        const bool branch_taken_0x160420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160420u;
        // 0x160424: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160420) {
            ctx->pc = 0x1603DCu;
            return;
        }
    }
    ctx->pc = 0x160428u;
}
