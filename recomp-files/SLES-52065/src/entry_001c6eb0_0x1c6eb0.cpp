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

// Function: entry_001c6eb0
// Address: 0x1c6eb0 - 0x1c6eb8
void entry_001c6eb0_0x1c6eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6eb0_0x1c6eb0");
#endif

    ctx->pc = 0x1c6eb0u;

    // 0x1c6eb0: 0x10000234  b           . + 4 + (0x234 << 2)
    ctx->pc = 0x1C6EB0u;
    {
        const bool branch_taken_0x1c6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EB0u;
        // 0x1c6eb4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eb0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6EB8u;
}
