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

// Function: entry_001a9900
// Address: 0x1a9900 - 0x1a9910
void entry_001a9900_0x1a9900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9900_0x1a9900");
#endif

    ctx->pc = 0x1a9900u;

    // 0x1a9900: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1a9900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1a9904: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x1a9904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
    // 0x1a9908: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A9908u;
    {
        const bool branch_taken_0x1a9908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9908u;
        // 0x1a990c: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9908) {
            ctx->pc = 0x1A996Cu;
            return;
        }
    }
    ctx->pc = 0x1A9910u;
}
