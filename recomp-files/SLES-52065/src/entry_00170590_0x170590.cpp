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

// Function: entry_00170590
// Address: 0x170590 - 0x1705a0
void entry_00170590_0x170590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170590_0x170590");
#endif

    ctx->pc = 0x170590u;

    // 0x170590: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x170590u;
    {
        const bool branch_taken_0x170590 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x170594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170590u;
        // 0x170594: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170590) {
            ctx->pc = 0x1705A0u;
            return;
        }
    }
    ctx->pc = 0x170598u;
    // 0x170598: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x170598u;
    {
        const bool branch_taken_0x170598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170598u;
        // 0x17059c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170598) {
            ctx->pc = 0x1705C0u;
            return;
        }
    }
    ctx->pc = 0x1705A0u;
}
