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

// Function: entry_001c6dd0
// Address: 0x1c6dd0 - 0x1c6dd8
void entry_001c6dd0_0x1c6dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6dd0_0x1c6dd0");
#endif

    ctx->pc = 0x1c6dd0u;

    // 0x1c6dd0: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x1C6DD0u;
    {
        const bool branch_taken_0x1c6dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DD0u;
        // 0x1c6dd4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dd0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6DD8u;
}
