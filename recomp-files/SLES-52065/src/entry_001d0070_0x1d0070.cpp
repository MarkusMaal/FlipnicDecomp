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

// Function: entry_001d0070
// Address: 0x1d0070 - 0x1d0078
void entry_001d0070_0x1d0070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0070_0x1d0070");
#endif

    ctx->pc = 0x1d0070u;

    // 0x1d0070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0070u;
    {
        const bool branch_taken_0x1d0070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0070u;
        // 0x1d0074: 0xa2230061  sb          $v1, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0070) {
            ctx->pc = 0x1D007Cu;
            return;
        }
    }
    ctx->pc = 0x1D0078u;
}
