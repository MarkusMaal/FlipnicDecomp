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

// Function: entry_001a8550
// Address: 0x1a8550 - 0x1a855c
void entry_001a8550_0x1a8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8550_0x1a8550");
#endif

    ctx->pc = 0x1a8550u;

    // 0x1a8550: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1a8550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a8554: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1A8554u;
    {
        const bool branch_taken_0x1a8554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8554u;
        // 0x1a8558: 0x2671821  addu        $v1, $s3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8554) {
            ctx->pc = 0x1A8490u;
            return;
        }
    }
    ctx->pc = 0x1A855Cu;
}
