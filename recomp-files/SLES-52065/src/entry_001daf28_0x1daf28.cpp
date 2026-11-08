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

// Function: entry_001daf28
// Address: 0x1daf28 - 0x1daf34
void entry_001daf28_0x1daf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daf28_0x1daf28");
#endif

    ctx->pc = 0x1daf28u;

    // 0x1daf28: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1daf28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1daf2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DAF2Cu;
    {
        const bool branch_taken_0x1daf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF2Cu;
        // 0x1daf30: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf2c) {
            ctx->pc = 0x1DAF00u;
            return;
        }
    }
    ctx->pc = 0x1DAF34u;
}
