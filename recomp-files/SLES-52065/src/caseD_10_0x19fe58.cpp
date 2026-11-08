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

// Function: caseD_10
// Address: 0x19fe58 - 0x19fe60
void caseD_10_0x19fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x19fe58");
#endif

    ctx->pc = 0x19fe58u;

    // 0x19fe58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19FE58u;
    {
        const bool branch_taken_0x19fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE58u;
        // 0x19fe5c: 0xac860698  sw          $a2, 0x698($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1688), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe58) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE60u;
}
