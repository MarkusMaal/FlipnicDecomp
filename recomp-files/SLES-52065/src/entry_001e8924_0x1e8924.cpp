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

// Function: entry_001e8924
// Address: 0x1e8924 - 0x1e8930
void entry_001e8924_0x1e8924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8924_0x1e8924");
#endif

    ctx->pc = 0x1e8924u;

    // 0x1e8924: 0x0  nop
    ctx->pc = 0x1e8924u;
    // NOP
    // 0x1e8928: 0x1d00ffed  bgtz        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E8928u;
    {
        const bool branch_taken_0x1e8928 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1E892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8928u;
        // 0x1e892c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8928) {
            ctx->pc = 0x1E88E0u;
            return;
        }
    }
    ctx->pc = 0x1E8930u;
}
