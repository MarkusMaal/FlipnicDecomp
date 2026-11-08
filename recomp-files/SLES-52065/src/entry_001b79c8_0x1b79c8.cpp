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

// Function: entry_001b79c8
// Address: 0x1b79c8 - 0x1b79d8
void entry_001b79c8_0x1b79c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b79c8_0x1b79c8");
#endif

    ctx->pc = 0x1b79c8u;

    // 0x1b79c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b79c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b79cc: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x1b79ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b79d0: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B79D0u;
    {
        const bool branch_taken_0x1b79d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D0u;
        // 0x1b79d4: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79d0) {
            ctx->pc = 0x1B78CCu;
            return;
        }
    }
    ctx->pc = 0x1B79D8u;
}
