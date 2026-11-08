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

// Function: entry_0015e588
// Address: 0x15e588 - 0x15e598
void entry_0015e588_0x15e588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e588_0x15e588");
#endif

    ctx->pc = 0x15e588u;

    // 0x15e588: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15e588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15e58c: 0x275182a  slt         $v1, $s3, $s5
    ctx->pc = 0x15e58cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x15e590: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x15E590u;
    {
        const bool branch_taken_0x15e590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E590u;
        // 0x15e594: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e590) {
            ctx->pc = 0x15E538u;
            return;
        }
    }
    ctx->pc = 0x15E598u;
}
