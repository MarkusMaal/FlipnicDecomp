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

// Function: entry_001185f8
// Address: 0x1185f8 - 0x118600
void entry_001185f8_0x1185f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001185f8_0x1185f8");
#endif

    ctx->pc = 0x1185f8u;

    // 0x1185f8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1185F8u;
    {
        const bool branch_taken_0x1185f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185F8u;
        // 0x1185fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185f8) {
            ctx->pc = 0x118644u;
            return;
        }
    }
    ctx->pc = 0x118600u;
}
