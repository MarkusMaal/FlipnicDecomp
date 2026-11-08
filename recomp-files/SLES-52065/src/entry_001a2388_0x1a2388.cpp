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

// Function: entry_001a2388
// Address: 0x1a2388 - 0x1a2390
void entry_001a2388_0x1a2388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2388_0x1a2388");
#endif

    ctx->pc = 0x1a2388u;

    // 0x1a2388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2388u;
    {
        const bool branch_taken_0x1a2388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2388u;
        // 0x1a238c: 0xae440670  sw          $a0, 0x670($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2388) {
            ctx->pc = 0x1A23A0u;
            return;
        }
    }
    ctx->pc = 0x1A2390u;
}
