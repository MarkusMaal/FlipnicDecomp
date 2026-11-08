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

// Function: entry_0012c4b4
// Address: 0x12c4b4 - 0x12c4bc
void entry_0012c4b4_0x12c4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4b4_0x12c4b4");
#endif

    ctx->pc = 0x12c4b4u;

    // 0x12c4b4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x12C4B4u;
    {
        const bool branch_taken_0x12c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4B4u;
        // 0x12c4b8: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4b4) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C4BCu;
}
