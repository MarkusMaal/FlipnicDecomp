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

// Function: entry_001347b8
// Address: 0x1347b8 - 0x1347c0
void entry_001347b8_0x1347b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347b8_0x1347b8");
#endif

    ctx->pc = 0x1347b8u;

    // 0x1347b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1347B8u;
    {
        const bool branch_taken_0x1347b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B8u;
        // 0x1347bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347b8) {
            ctx->pc = 0x1347E0u;
            return;
        }
    }
    ctx->pc = 0x1347C0u;
}
