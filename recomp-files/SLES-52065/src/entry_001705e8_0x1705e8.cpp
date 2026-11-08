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

// Function: entry_001705e8
// Address: 0x1705e8 - 0x1705f8
void entry_001705e8_0x1705e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001705e8_0x1705e8");
#endif

    ctx->pc = 0x1705e8u;

    // 0x1705e8: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1705E8u;
    {
        const bool branch_taken_0x1705e8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1705ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705E8u;
        // 0x1705ec: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705e8) {
            ctx->pc = 0x1705F8u;
            return;
        }
    }
    ctx->pc = 0x1705F0u;
    // 0x1705f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1705F0u;
    {
        const bool branch_taken_0x1705f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705F0u;
        // 0x1705f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705f0) {
            ctx->pc = 0x170618u;
            return;
        }
    }
    ctx->pc = 0x1705F8u;
}
