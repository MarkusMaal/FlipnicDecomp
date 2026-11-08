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

// Function: entry_0011a2ac
// Address: 0x11a2ac - 0x11a2b4
void entry_0011a2ac_0x11a2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a2ac_0x11a2ac");
#endif

    ctx->pc = 0x11a2acu;

    // 0x11a2ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A2ACu;
    {
        const bool branch_taken_0x11a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2ACu;
        // 0x11a2b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2ac) {
            ctx->pc = 0x11A2C0u;
            return;
        }
    }
    ctx->pc = 0x11A2B4u;
}
