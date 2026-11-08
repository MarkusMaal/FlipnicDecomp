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

// Function: entry_0011dff4
// Address: 0x11dff4 - 0x11dffc
void entry_0011dff4_0x11dff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dff4_0x11dff4");
#endif

    ctx->pc = 0x11dff4u;

    // 0x11dff4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11DFF4u;
    {
        const bool branch_taken_0x11dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFF4u;
        // 0x11dff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dff4) {
            ctx->pc = 0x11E080u;
            return;
        }
    }
    ctx->pc = 0x11DFFCu;
}
