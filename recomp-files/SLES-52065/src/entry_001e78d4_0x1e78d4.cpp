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

// Function: entry_001e78d4
// Address: 0x1e78d4 - 0x1e78e0
void entry_001e78d4_0x1e78d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e78d4_0x1e78d4");
#endif

    ctx->pc = 0x1e78d4u;

    // 0x1e78d4: 0x0  nop
    ctx->pc = 0x1e78d4u;
    // NOP
    // 0x1e78d8: 0x1d00ffed  bgtz        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E78D8u;
    {
        const bool branch_taken_0x1e78d8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1E78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78D8u;
        // 0x1e78dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78d8) {
            ctx->pc = 0x1E7890u;
            return;
        }
    }
    ctx->pc = 0x1E78E0u;
}
