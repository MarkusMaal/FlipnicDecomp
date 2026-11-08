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

// Function: entry_001a8bc4
// Address: 0x1a8bc4 - 0x1a8bcc
void entry_001a8bc4_0x1a8bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8bc4_0x1a8bc4");
#endif

    ctx->pc = 0x1a8bc4u;

    // 0x1a8bc4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1A8BC4u;
    {
        const bool branch_taken_0x1a8bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BC4u;
        // 0x1a8bc8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bc4) {
            ctx->pc = 0x1A8DD8u;
            return;
        }
    }
    ctx->pc = 0x1A8BCCu;
}
