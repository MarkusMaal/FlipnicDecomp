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

// Function: entry_00160f28
// Address: 0x160f28 - 0x160f38
void entry_00160f28_0x160f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160f28_0x160f28");
#endif

    ctx->pc = 0x160f28u;

    // 0x160f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160f2c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x160f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160f30: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x160F30u;
    {
        const bool branch_taken_0x160f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F30u;
        // 0x160f34: 0x25290050  addiu       $t1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f30) {
            ctx->pc = 0x160EF8u;
            return;
        }
    }
    ctx->pc = 0x160F38u;
}
