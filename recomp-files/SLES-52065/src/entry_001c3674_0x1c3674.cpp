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

// Function: entry_001c3674
// Address: 0x1c3674 - 0x1c367c
void entry_001c3674_0x1c3674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3674_0x1c3674");
#endif

    ctx->pc = 0x1c3674u;

    // 0x1c3674: 0x10000364  b           . + 4 + (0x364 << 2)
    ctx->pc = 0x1C3674u;
    {
        const bool branch_taken_0x1c3674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3674u;
        // 0x1c3678: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3674) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C367Cu;
}
