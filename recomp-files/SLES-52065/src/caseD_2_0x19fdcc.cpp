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

// Function: caseD_2
// Address: 0x19fdcc - 0x19fdd4
void caseD_2_0x19fdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x19fdcc");
#endif

    ctx->pc = 0x19fdccu;

    // 0x19fdcc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19FDCCu;
    {
        const bool branch_taken_0x19fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDCCu;
        // 0x19fdd0: 0xac86068c  sw          $a2, 0x68C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1676), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdcc) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FDD4u;
}
