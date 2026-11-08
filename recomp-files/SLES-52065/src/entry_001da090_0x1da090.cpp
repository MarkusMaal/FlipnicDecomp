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

// Function: entry_001da090
// Address: 0x1da090 - 0x1da0a0
void entry_001da090_0x1da090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da090_0x1da090");
#endif

    ctx->pc = 0x1da090u;

    // 0x1da090: 0x11c200c7  beq         $t6, $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1DA090u;
    {
        const bool branch_taken_0x1da090 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        if (branch_taken_0x1da090) {
            ctx->pc = 0x1DA3B0u;
            return;
        }
    }
    ctx->pc = 0x1DA098u;
    // 0x1da098: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1DA098u;
    {
        const bool branch_taken_0x1da098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA098u;
        // 0x1da09c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da098) {
            ctx->pc = 0x1DA510u;
            return;
        }
    }
    ctx->pc = 0x1DA0A0u;
}
