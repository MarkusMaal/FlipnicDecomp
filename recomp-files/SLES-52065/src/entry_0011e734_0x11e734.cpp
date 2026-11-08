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

// Function: entry_0011e734
// Address: 0x11e734 - 0x11e73c
void entry_0011e734_0x11e734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e734_0x11e734");
#endif

    ctx->pc = 0x11e734u;

    // 0x11e734: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x11E734u;
    {
        const bool branch_taken_0x11e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E734u;
        // 0x11e738: 0x212c0  sll         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e734) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E73Cu;
}
