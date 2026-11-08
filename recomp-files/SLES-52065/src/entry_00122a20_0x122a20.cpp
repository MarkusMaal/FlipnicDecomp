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

// Function: entry_00122a20
// Address: 0x122a20 - 0x122a28
void entry_00122a20_0x122a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a20_0x122a20");
#endif

    ctx->pc = 0x122a20u;

    // 0x122a20: 0x1660ffe8  bnez        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x122A20u;
    {
        const bool branch_taken_0x122a20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A20u;
        // 0x122a24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a20) {
            ctx->pc = 0x1229C4u;
            return;
        }
    }
    ctx->pc = 0x122A28u;
}
