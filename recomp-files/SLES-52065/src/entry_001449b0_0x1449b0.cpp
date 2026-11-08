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

// Function: entry_001449b0
// Address: 0x1449b0 - 0x1449b8
void entry_001449b0_0x1449b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001449b0_0x1449b0");
#endif

    ctx->pc = 0x1449b0u;

    // 0x1449b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1449B0u;
    {
        const bool branch_taken_0x1449b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449B0u;
        // 0x1449b4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449b0) {
            ctx->pc = 0x1449DCu;
            return;
        }
    }
    ctx->pc = 0x1449B8u;
}
