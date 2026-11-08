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

// Function: entry_001142d0
// Address: 0x1142d0 - 0x1142d8
void entry_001142d0_0x1142d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001142d0_0x1142d0");
#endif

    ctx->pc = 0x1142d0u;

    // 0x1142d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1142D0u;
    {
        const bool branch_taken_0x1142d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142D0u;
        // 0x1142d4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142d0) {
            ctx->pc = 0x1142DCu;
            return;
        }
    }
    ctx->pc = 0x1142D8u;
}
