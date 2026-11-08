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

// Function: entry_0011e844
// Address: 0x11e844 - 0x11e84c
void entry_0011e844_0x11e844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e844_0x11e844");
#endif

    ctx->pc = 0x11e844u;

    // 0x11e844: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E844u;
    {
        const bool branch_taken_0x11e844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E844u;
        // 0x11e848: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e844) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E84Cu;
}
