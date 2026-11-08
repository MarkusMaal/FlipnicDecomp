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

// Function: entry_001a9d0c
// Address: 0x1a9d0c - 0x1a9d18
void entry_001a9d0c_0x1a9d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9d0c_0x1a9d0c");
#endif

    ctx->pc = 0x1a9d0cu;

    // 0x1a9d0c: 0x8ea20944  lw          $v0, 0x944($s5)
    ctx->pc = 0x1a9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2372)));
    // 0x1a9d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9D10u;
    {
        const bool branch_taken_0x1a9d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D10u;
        // 0x1a9d14: 0xaea20948  sw          $v0, 0x948($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d10) {
            ctx->pc = 0x1A9D1Cu;
            return;
        }
    }
    ctx->pc = 0x1A9D18u;
}
