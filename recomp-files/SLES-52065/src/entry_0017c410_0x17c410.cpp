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

// Function: entry_0017c410
// Address: 0x17c410 - 0x17c418
void entry_0017c410_0x17c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c410_0x17c410");
#endif

    ctx->pc = 0x17c410u;

    // 0x17c410: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C410u;
    {
        const bool branch_taken_0x17c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C410u;
        // 0x17c414: 0xa22001d3  sb          $zero, 0x1D3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c410) {
            ctx->pc = 0x17C42Cu;
            return;
        }
    }
    ctx->pc = 0x17C418u;
}
