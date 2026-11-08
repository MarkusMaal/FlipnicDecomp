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

// Function: entry_001bb7f0
// Address: 0x1bb7f0 - 0x1bb7f8
void entry_001bb7f0_0x1bb7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb7f0_0x1bb7f0");
#endif

    ctx->pc = 0x1bb7f0u;

    // 0x1bb7f0: 0x1660ffe8  bnez        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BB7F0u;
    {
        const bool branch_taken_0x1bb7f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7F0u;
        // 0x1bb7f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7f0) {
            ctx->pc = 0x1BB794u;
            return;
        }
    }
    ctx->pc = 0x1BB7F8u;
}
