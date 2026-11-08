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

// Function: entry_00158550
// Address: 0x158550 - 0x158564
void entry_00158550_0x158550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158550_0x158550");
#endif

    ctx->pc = 0x158550u;

    // 0x158550: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x158550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x158554: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x158554u;
    {
        const bool branch_taken_0x158554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158554u;
        // 0x158558: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158554) {
            ctx->pc = 0x158538u;
            return;
        }
    }
    ctx->pc = 0x15855Cu;
    // 0x15855c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x15855Cu;
    {
        const bool branch_taken_0x15855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15855c) {
            ctx->pc = 0x158604u;
            return;
        }
    }
    ctx->pc = 0x158564u;
}
