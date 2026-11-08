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

// Function: entry_001ed630
// Address: 0x1ed630 - 0x1ed638
void entry_001ed630_0x1ed630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed630_0x1ed630");
#endif

    ctx->pc = 0x1ed630u;

    // 0x1ed630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED630u;
    {
        const bool branch_taken_0x1ed630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED630u;
        // 0x1ed634: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed630) {
            ctx->pc = 0x1ED63Cu;
            return;
        }
    }
    ctx->pc = 0x1ED638u;
}
