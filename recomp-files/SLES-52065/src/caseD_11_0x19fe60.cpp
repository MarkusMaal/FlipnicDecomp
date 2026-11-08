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

// Function: caseD_11
// Address: 0x19fe60 - 0x19fe68
void caseD_11_0x19fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x19fe60");
#endif

    ctx->pc = 0x19fe60u;

    // 0x19fe60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FE60u;
    {
        const bool branch_taken_0x19fe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE60u;
        // 0x19fe64: 0xac8606a0  sw          $a2, 0x6A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1696), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe60) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE68u;
}
