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

// Function: entry_001c3658
// Address: 0x1c3658 - 0x1c3660
void entry_001c3658_0x1c3658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3658_0x1c3658");
#endif

    ctx->pc = 0x1c3658u;

    // 0x1c3658: 0x1000036b  b           . + 4 + (0x36B << 2)
    ctx->pc = 0x1C3658u;
    {
        const bool branch_taken_0x1c3658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3658u;
        // 0x1c365c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3658) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3660u;
}
