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

// Function: entry_0018f070
// Address: 0x18f070 - 0x18f07c
void entry_0018f070_0x18f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f070_0x18f070");
#endif

    ctx->pc = 0x18f070u;

    // 0x18f070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18f074: 0x1a00ffc8  blez        $s0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x18F074u;
    {
        const bool branch_taken_0x18f074 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x18F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F074u;
        // 0x18f078: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f074) {
            ctx->pc = 0x18EF98u;
            return;
        }
    }
    ctx->pc = 0x18F07Cu;
}
