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

// Function: entry_00160fa4
// Address: 0x160fa4 - 0x160fb8
void entry_00160fa4_0x160fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160fa4_0x160fa4");
#endif

    ctx->pc = 0x160fa4u;

    // 0x160fa4: 0x0  nop
    ctx->pc = 0x160fa4u;
    // NOP
    // 0x160fa8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160fac: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x160facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x160fb0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x160FB0u;
    {
        const bool branch_taken_0x160fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FB0u;
        // 0x160fb4: 0x25290050  addiu       $t1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fb0) {
            ctx->pc = 0x160F80u;
            return;
        }
    }
    ctx->pc = 0x160FB8u;
}
