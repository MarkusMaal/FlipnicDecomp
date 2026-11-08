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

// Function: entry_0018b7c8
// Address: 0x18b7c8 - 0x18b7d8
void entry_0018b7c8_0x18b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7c8_0x18b7c8");
#endif

    ctx->pc = 0x18b7c8u;

    // 0x18b7c8: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B7C8u;
    {
        const bool branch_taken_0x18b7c8 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x18b7c8) {
            ctx->pc = 0x18B7D8u;
            return;
        }
    }
    ctx->pc = 0x18B7D0u;
    // 0x18b7d0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x18B7D0u;
    {
        const bool branch_taken_0x18b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7D0u;
        // 0x18b7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7d0) {
            ctx->pc = 0x18B870u;
            return;
        }
    }
    ctx->pc = 0x18B7D8u;
}
