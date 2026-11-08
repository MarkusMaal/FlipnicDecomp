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

// Function: entry_0019c870
// Address: 0x19c870 - 0x19c880
void entry_0019c870_0x19c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c870_0x19c870");
#endif

    ctx->pc = 0x19c870u;

    // 0x19c870: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C870u;
    {
        const bool branch_taken_0x19c870 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C870u;
        // 0x19c874: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c870) {
            ctx->pc = 0x19C880u;
            return;
        }
    }
    ctx->pc = 0x19C878u;
    // 0x19c878: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19C878u;
    {
        const bool branch_taken_0x19c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C878u;
        // 0x19c87c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c878) {
            ctx->pc = 0x19C8A0u;
            return;
        }
    }
    ctx->pc = 0x19C880u;
}
