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

// Function: entry_001214c0
// Address: 0x1214c0 - 0x1214c8
void entry_001214c0_0x1214c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001214c0_0x1214c0");
#endif

    ctx->pc = 0x1214c0u;

    // 0x1214c0: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1214C0u;
    {
        const bool branch_taken_0x1214c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214C0u;
        // 0x1214c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214c0) {
            ctx->pc = 0x1214E4u;
            return;
        }
    }
    ctx->pc = 0x1214C8u;
}
