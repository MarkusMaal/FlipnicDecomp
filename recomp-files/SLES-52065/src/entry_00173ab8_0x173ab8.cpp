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

// Function: entry_00173ab8
// Address: 0x173ab8 - 0x173ac8
void entry_00173ab8_0x173ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ab8_0x173ab8");
#endif

    ctx->pc = 0x173ab8u;

    // 0x173ab8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x173AB8u;
    {
        const bool branch_taken_0x173ab8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x173ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AB8u;
        // 0x173abc: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ab8) {
            ctx->pc = 0x173AC8u;
            return;
        }
    }
    ctx->pc = 0x173AC0u;
    // 0x173ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173AC0u;
    {
        const bool branch_taken_0x173ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AC0u;
        // 0x173ac4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ac0) {
            ctx->pc = 0x173AE8u;
            return;
        }
    }
    ctx->pc = 0x173AC8u;
}
