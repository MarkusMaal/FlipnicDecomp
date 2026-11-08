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

// Function: entry_002071ec
// Address: 0x2071ec - 0x2071f4
void entry_002071ec_0x2071ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002071ec_0x2071ec");
#endif

    ctx->pc = 0x2071ecu;

    // 0x2071ec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2071ECu;
    {
        const bool branch_taken_0x2071ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071ec) {
            ctx->pc = 0x2071F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071ECu;
            // 0x2071f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071F4u;
            return;
        }
    }
    ctx->pc = 0x2071F4u;
}
