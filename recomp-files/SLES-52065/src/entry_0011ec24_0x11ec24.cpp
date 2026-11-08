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

// Function: entry_0011ec24
// Address: 0x11ec24 - 0x11ec38
void entry_0011ec24_0x11ec24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec24_0x11ec24");
#endif

    ctx->pc = 0x11ec24u;

    // 0x11ec24: 0x0  nop
    ctx->pc = 0x11ec24u;
    // NOP
    // 0x11ec28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11ec28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11ec2c: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x11ec2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x11ec30: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x11EC30u;
    {
        const bool branch_taken_0x11ec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC30u;
        // 0x11ec34: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec30) {
            ctx->pc = 0x11EAF4u;
            return;
        }
    }
    ctx->pc = 0x11EC38u;
}
