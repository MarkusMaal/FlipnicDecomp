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

// Function: entry_00111b98
// Address: 0x111b98 - 0x111ba0
void entry_00111b98_0x111b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111b98_0x111b98");
#endif

    ctx->pc = 0x111b98u;

    // 0x111b98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111B98u;
    {
        const bool branch_taken_0x111b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B98u;
        // 0x111b9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b98) {
            ctx->pc = 0x111BD0u;
            return;
        }
    }
    ctx->pc = 0x111BA0u;
}
