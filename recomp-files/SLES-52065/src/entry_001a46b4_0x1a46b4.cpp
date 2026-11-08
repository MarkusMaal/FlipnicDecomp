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

// Function: entry_001a46b4
// Address: 0x1a46b4 - 0x1a46bc
void entry_001a46b4_0x1a46b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a46b4_0x1a46b4");
#endif

    ctx->pc = 0x1a46b4u;

    // 0x1a46b4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1A46B4u;
    {
        const bool branch_taken_0x1a46b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46B4u;
        // 0x1a46b8: 0xae320320  sw          $s2, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46b4) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A46BCu;
}
