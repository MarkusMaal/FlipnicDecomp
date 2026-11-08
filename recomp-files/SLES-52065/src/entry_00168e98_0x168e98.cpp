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

// Function: entry_00168e98
// Address: 0x168e98 - 0x168ea8
void entry_00168e98_0x168e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e98_0x168e98");
#endif

    ctx->pc = 0x168e98u;

    // 0x168e98: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E98u;
    {
        const bool branch_taken_0x168e98 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x168E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E98u;
        // 0x168e9c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e98) {
            ctx->pc = 0x168EA8u;
            return;
        }
    }
    ctx->pc = 0x168EA0u;
    // 0x168ea0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x168EA0u;
    {
        const bool branch_taken_0x168ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EA0u;
        // 0x168ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ea0) {
            ctx->pc = 0x168EC8u;
            return;
        }
    }
    ctx->pc = 0x168EA8u;
}
