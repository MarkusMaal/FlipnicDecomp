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

// Function: entry_001b02ac
// Address: 0x1b02ac - 0x1b02bc
void entry_001b02ac_0x1b02ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b02ac_0x1b02ac");
#endif

    ctx->pc = 0x1b02acu;

    // 0x1b02ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B02ACu;
    {
        const bool branch_taken_0x1b02ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02ACu;
        // 0x1b02b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02ac) {
            ctx->pc = 0x1B02BCu;
            return;
        }
    }
    ctx->pc = 0x1B02B4u;
    // 0x1b02b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B02B4u;
    {
        const bool branch_taken_0x1b02b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b02b4) {
            ctx->pc = 0x1B02C4u;
            return;
        }
    }
    ctx->pc = 0x1B02BCu;
}
