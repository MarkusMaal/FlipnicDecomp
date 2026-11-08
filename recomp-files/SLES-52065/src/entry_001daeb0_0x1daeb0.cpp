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

// Function: entry_001daeb0
// Address: 0x1daeb0 - 0x1daeb8
void entry_001daeb0_0x1daeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daeb0_0x1daeb0");
#endif

    ctx->pc = 0x1daeb0u;

    // 0x1daeb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAEB0u;
    {
        const bool branch_taken_0x1daeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEB0u;
        // 0x1daeb4: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daeb0) {
            ctx->pc = 0x1DAEC0u;
            return;
        }
    }
    ctx->pc = 0x1DAEB8u;
}
