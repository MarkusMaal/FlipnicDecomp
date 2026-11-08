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

// Function: entry_00152278
// Address: 0x152278 - 0x152288
void entry_00152278_0x152278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152278_0x152278");
#endif

    ctx->pc = 0x152278u;

    // 0x152278: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x152278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15227c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x15227cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152280: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x152280u;
    {
        const bool branch_taken_0x152280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152280u;
        // 0x152284: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152280) {
            ctx->pc = 0x152234u;
            return;
        }
    }
    ctx->pc = 0x152288u;
}
