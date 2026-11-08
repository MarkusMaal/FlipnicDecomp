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

// Function: entry_001c3824
// Address: 0x1c3824 - 0x1c382c
void entry_001c3824_0x1c3824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3824_0x1c3824");
#endif

    ctx->pc = 0x1c3824u;

    // 0x1c3824: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x1C3824u;
    {
        const bool branch_taken_0x1c3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3824u;
        // 0x1c3828: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3824) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C382Cu;
}
