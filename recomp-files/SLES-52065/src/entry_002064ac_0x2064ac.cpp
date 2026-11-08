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

// Function: entry_002064ac
// Address: 0x2064ac - 0x2064b4
void entry_002064ac_0x2064ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002064ac_0x2064ac");
#endif

    ctx->pc = 0x2064acu;

    // 0x2064ac: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2064ACu;
    {
        const bool branch_taken_0x2064ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064ac) {
            ctx->pc = 0x2064B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064ACu;
            // 0x2064b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064B4u;
            return;
        }
    }
    ctx->pc = 0x2064B4u;
}
