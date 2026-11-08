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

// Function: entry_002051b8
// Address: 0x2051b8 - 0x2051c0
void entry_002051b8_0x2051b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002051b8_0x2051b8");
#endif

    ctx->pc = 0x2051b8u;

    // 0x2051b8: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2051B8u;
    {
        const bool branch_taken_0x2051b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2051b8) {
            ctx->pc = 0x2051BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051B8u;
            // 0x2051bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2051C0u;
            return;
        }
    }
    ctx->pc = 0x2051C0u;
}
