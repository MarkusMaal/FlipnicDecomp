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

// Function: entry_00199574
// Address: 0x199574 - 0x199588
void entry_00199574_0x199574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199574_0x199574");
#endif

    ctx->pc = 0x199574u;

    // 0x199574: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199574u;
    {
        const bool branch_taken_0x199574 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x199578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199574u;
        // 0x199578: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199574) {
            ctx->pc = 0x199588u;
            return;
        }
    }
    ctx->pc = 0x19957Cu;
    // 0x19957c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19957Cu;
    {
        const bool branch_taken_0x19957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19957Cu;
        // 0x199580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19957c) {
            ctx->pc = 0x1995A8u;
            return;
        }
    }
    ctx->pc = 0x199584u;
    // 0x199584: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x199584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x199588u;
}
