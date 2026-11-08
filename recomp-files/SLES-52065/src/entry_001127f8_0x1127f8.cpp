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

// Function: entry_001127f8
// Address: 0x1127f8 - 0x112814
void entry_001127f8_0x1127f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001127f8_0x1127f8");
#endif

    ctx->pc = 0x1127f8u;

    // 0x1127f8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1127f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1127fc: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1127FCu;
    {
        const bool branch_taken_0x1127fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127fc) {
            ctx->pc = 0x1127B4u;
            return;
        }
    }
    ctx->pc = 0x112804u;
    // 0x112804: 0x14e600f3  bne         $a3, $a2, . + 4 + (0xF3 << 2)
    ctx->pc = 0x112804u;
    {
        const bool branch_taken_0x112804 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x112808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112804u;
        // 0x112808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112804) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x11280Cu;
    // 0x11280c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11280Cu;
    {
        const bool branch_taken_0x11280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11280Cu;
        // 0x112810: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11280c) {
            ctx->pc = 0x112864u;
            return;
        }
    }
    ctx->pc = 0x112814u;
}
