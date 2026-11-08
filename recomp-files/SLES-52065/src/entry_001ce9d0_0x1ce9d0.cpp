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

// Function: entry_001ce9d0
// Address: 0x1ce9d0 - 0x1ce9d8
void entry_001ce9d0_0x1ce9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9d0_0x1ce9d0");
#endif

    ctx->pc = 0x1ce9d0u;

    // 0x1ce9d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9D0u;
    {
        const bool branch_taken_0x1ce9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9D0u;
        // 0x1ce9d4: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9d0) {
            ctx->pc = 0x1CE9E0u;
            return;
        }
    }
    ctx->pc = 0x1CE9D8u;
}
