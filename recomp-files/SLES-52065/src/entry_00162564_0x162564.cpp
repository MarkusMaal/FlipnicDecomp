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

// Function: entry_00162564
// Address: 0x162564 - 0x16256c
void entry_00162564_0x162564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162564_0x162564");
#endif

    ctx->pc = 0x162564u;

    // 0x162564: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x162564u;
    {
        const bool branch_taken_0x162564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162564u;
        // 0x162568: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162564) {
            ctx->pc = 0x1625B0u;
            return;
        }
    }
    ctx->pc = 0x16256Cu;
}
