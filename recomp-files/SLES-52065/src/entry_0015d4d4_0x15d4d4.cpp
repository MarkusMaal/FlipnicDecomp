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

// Function: entry_0015d4d4
// Address: 0x15d4d4 - 0x15d4e8
void entry_0015d4d4_0x15d4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d4d4_0x15d4d4");
#endif

    ctx->pc = 0x15d4d4u;

    // 0x15d4d4: 0x0  nop
    ctx->pc = 0x15d4d4u;
    // NOP
    // 0x15d4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15d4dc: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15d4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d4e0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x15D4E0u;
    {
        const bool branch_taken_0x15d4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4E0u;
        // 0x15d4e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4e0) {
            ctx->pc = 0x15D454u;
            return;
        }
    }
    ctx->pc = 0x15D4E8u;
}
