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

// Function: entry_00160a64
// Address: 0x160a64 - 0x160a84
void entry_00160a64_0x160a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a64_0x160a64");
#endif

    ctx->pc = 0x160a64u;

    // 0x160a64: 0x0  nop
    ctx->pc = 0x160a64u;
    // NOP
    // 0x160a68: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160a6c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x160A6Cu;
    {
        const bool branch_taken_0x160a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A6Cu;
        // 0x160a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a6c) {
            ctx->pc = 0x160B28u;
            return;
        }
    }
    ctx->pc = 0x160A74u;
    // 0x160a74: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x160a74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160a78: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x160A78u;
    {
        const bool branch_taken_0x160a78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A78u;
        // 0x160a7c: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a78) {
            ctx->pc = 0x160AF4u;
            return;
        }
    }
    ctx->pc = 0x160A80u;
    // 0x160a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160a84u;
}
