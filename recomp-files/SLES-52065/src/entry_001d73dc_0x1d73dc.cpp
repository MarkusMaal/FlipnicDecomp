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

// Function: entry_001d73dc
// Address: 0x1d73dc - 0x1d73f8
void entry_001d73dc_0x1d73dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d73dc_0x1d73dc");
#endif

    ctx->pc = 0x1d73dcu;

    // 0x1d73dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D73DCu;
    {
        const bool branch_taken_0x1d73dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73DCu;
        // 0x1d73e0: 0x2a970018  slti        $s7, $s4, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73dc) {
            ctx->pc = 0x1D7428u;
            return;
        }
    }
    ctx->pc = 0x1D73E4u;
    // 0x1d73e4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D73E4u;
    {
        const bool branch_taken_0x1d73e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E4u;
        // 0x1d73e8: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73e4) {
            ctx->pc = 0x1D73F8u;
            return;
        }
    }
    ctx->pc = 0x1D73ECu;
    // 0x1d73ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d73f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D73F0u;
    {
        const bool branch_taken_0x1d73f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F0u;
        // 0x1d73f4: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73f0) {
            ctx->pc = 0x1D7404u;
            return;
        }
    }
    ctx->pc = 0x1D73F8u;
}
