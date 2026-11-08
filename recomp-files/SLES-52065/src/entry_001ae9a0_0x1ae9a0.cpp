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

// Function: entry_001ae9a0
// Address: 0x1ae9a0 - 0x1ae9b0
void entry_001ae9a0_0x1ae9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae9a0_0x1ae9a0");
#endif

    ctx->pc = 0x1ae9a0u;

    // 0x1ae9a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ae9a4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ae9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae9a8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1AE9A8u;
    {
        const bool branch_taken_0x1ae9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9A8u;
        // 0x1ae9ac: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9a8) {
            ctx->pc = 0x1AE8F0u;
            return;
        }
    }
    ctx->pc = 0x1AE9B0u;
}
