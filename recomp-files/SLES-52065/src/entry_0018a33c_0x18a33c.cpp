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

// Function: entry_0018a33c
// Address: 0x18a33c - 0x18a34c
void entry_0018a33c_0x18a33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a33c_0x18a33c");
#endif

    ctx->pc = 0x18a33cu;

    // 0x18a33c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A33Cu;
    {
        const bool branch_taken_0x18a33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A33Cu;
        // 0x18a340: 0x290100a0  slti        $at, $t0, 0xA0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)160) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a33c) {
            ctx->pc = 0x18A34Cu;
            return;
        }
    }
    ctx->pc = 0x18A344u;
    // 0x18a344: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A344u;
    {
        const bool branch_taken_0x18a344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a344) {
            ctx->pc = 0x18A364u;
            return;
        }
    }
    ctx->pc = 0x18A34Cu;
}
