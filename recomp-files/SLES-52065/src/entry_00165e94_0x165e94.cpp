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

// Function: entry_00165e94
// Address: 0x165e94 - 0x165ea4
void entry_00165e94_0x165e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165e94_0x165e94");
#endif

    ctx->pc = 0x165e94u;

    // 0x165e94: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x165E94u;
    {
        const bool branch_taken_0x165e94 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x165E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E94u;
        // 0x165e98: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e94) {
            ctx->pc = 0x165EA4u;
            return;
        }
    }
    ctx->pc = 0x165E9Cu;
    // 0x165e9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165E9Cu;
    {
        const bool branch_taken_0x165e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E9Cu;
        // 0x165ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e9c) {
            ctx->pc = 0x165EC4u;
            return;
        }
    }
    ctx->pc = 0x165EA4u;
}
