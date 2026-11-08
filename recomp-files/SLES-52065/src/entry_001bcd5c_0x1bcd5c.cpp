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

// Function: entry_001bcd5c
// Address: 0x1bcd5c - 0x1bcd7c
void entry_001bcd5c_0x1bcd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcd5c_0x1bcd5c");
#endif

    ctx->pc = 0x1bcd5cu;

    // 0x1bcd5c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1bcd60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bcd64: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1bcd64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bcd68: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCD68u;
    {
        const bool branch_taken_0x1bcd68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD68u;
        // 0x1bcd6c: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd68) {
            ctx->pc = 0x1BCD7Cu;
            return;
        }
    }
    ctx->pc = 0x1BCD70u;
    // 0x1bcd70: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1bcd70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bcd74: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BCD74u;
    {
        const bool branch_taken_0x1bcd74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd74) {
            ctx->pc = 0x1BCDF0u;
            return;
        }
    }
    ctx->pc = 0x1BCD7Cu;
}
