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

// Function: entry_0015d5e4
// Address: 0x15d5e4 - 0x15d5f4
void entry_0015d5e4_0x15d5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d5e4_0x15d5e4");
#endif

    ctx->pc = 0x15d5e4u;

    // 0x15d5e4: 0x0  nop
    ctx->pc = 0x15d5e4u;
    // NOP
    // 0x15d5e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15d5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D5ECu;
    {
        const bool branch_taken_0x15d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5ECu;
        // 0x15d5f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5ec) {
            ctx->pc = 0x15D614u;
            return;
        }
    }
    ctx->pc = 0x15D5F4u;
}
