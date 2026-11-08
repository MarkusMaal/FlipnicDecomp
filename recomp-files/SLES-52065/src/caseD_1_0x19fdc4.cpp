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

// Function: caseD_1
// Address: 0x19fdc4 - 0x19fdcc
void caseD_1_0x19fdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x19fdc4");
#endif

    ctx->pc = 0x19fdc4u;

    // 0x19fdc4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19FDC4u;
    {
        const bool branch_taken_0x19fdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDC4u;
        // 0x19fdc8: 0xac860688  sw          $a2, 0x688($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1672), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdc4) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FDCCu;
}
