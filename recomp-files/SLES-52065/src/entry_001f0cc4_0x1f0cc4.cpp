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

// Function: entry_001f0cc4
// Address: 0x1f0cc4 - 0x1f0ccc
void entry_001f0cc4_0x1f0cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0cc4_0x1f0cc4");
#endif

    ctx->pc = 0x1f0cc4u;

    // 0x1f0cc4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0CC4u;
    {
        const bool branch_taken_0x1f0cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0cc4) {
            ctx->pc = 0x1F0CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0CC4u;
            // 0x1f0cc8: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CCCu;
            return;
        }
    }
    ctx->pc = 0x1F0CCCu;
}
