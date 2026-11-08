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

// Function: entry_001ab2d4
// Address: 0x1ab2d4 - 0x1ab2dc
void entry_001ab2d4_0x1ab2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab2d4_0x1ab2d4");
#endif

    ctx->pc = 0x1ab2d4u;

    // 0x1ab2d4: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x1AB2D4u;
    {
        const bool branch_taken_0x1ab2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2D4u;
        // 0x1ab2d8: 0xa28306da  sb          $v1, 0x6DA($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1754), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2d4) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB2DCu;
}
