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

// Function: entry_001660d4
// Address: 0x1660d4 - 0x1660e4
void entry_001660d4_0x1660d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001660d4_0x1660d4");
#endif

    ctx->pc = 0x1660d4u;

    // 0x1660d4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1660D4u;
    {
        const bool branch_taken_0x1660d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1660D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660D4u;
        // 0x1660d8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660d4) {
            ctx->pc = 0x1660E4u;
            return;
        }
    }
    ctx->pc = 0x1660DCu;
    // 0x1660dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1660DCu;
    {
        const bool branch_taken_0x1660dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660DCu;
        // 0x1660e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660dc) {
            ctx->pc = 0x166104u;
            return;
        }
    }
    ctx->pc = 0x1660E4u;
}
