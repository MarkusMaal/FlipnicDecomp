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

// Function: entry_001e7e98
// Address: 0x1e7e98 - 0x1e7ea4
void entry_001e7e98_0x1e7e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7e98_0x1e7e98");
#endif

    ctx->pc = 0x1e7e98u;

    // 0x1e7e98: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7E98u;
    {
        const bool branch_taken_0x1e7e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E98u;
        // 0x1e7e9c: 0x3c022aaa  lui         $v0, 0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e98) {
            ctx->pc = 0x1E7ED4u;
            return;
        }
    }
    ctx->pc = 0x1E7EA0u;
    // 0x1e7ea0: 0x3c011555  lui         $at, 0x1555
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
    ctx->pc = 0x1e7ea4u;
}
