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

// Function: entry_0019de98
// Address: 0x19de98 - 0x19dea0
void entry_0019de98_0x19de98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de98_0x19de98");
#endif

    ctx->pc = 0x19de98u;

    // 0x19de98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19DE98u;
    {
        const bool branch_taken_0x19de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE98u;
        // 0x19de9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de98) {
            ctx->pc = 0x19DEF0u;
            return;
        }
    }
    ctx->pc = 0x19DEA0u;
}
