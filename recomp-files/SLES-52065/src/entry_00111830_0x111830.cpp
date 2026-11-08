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

// Function: entry_00111830
// Address: 0x111830 - 0x11184c
void entry_00111830_0x111830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111830_0x111830");
#endif

    ctx->pc = 0x111830u;

    // 0x111830: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x111830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111834: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x111834u;
    {
        const bool branch_taken_0x111834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111834) {
            ctx->pc = 0x1117ECu;
            return;
        }
    }
    ctx->pc = 0x11183Cu;
    // 0x11183c: 0x14e60065  bne         $a3, $a2, . + 4 + (0x65 << 2)
    ctx->pc = 0x11183Cu;
    {
        const bool branch_taken_0x11183c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x111840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11183Cu;
        // 0x111840: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11183c) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x111844u;
    // 0x111844: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111844u;
    {
        const bool branch_taken_0x111844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111844u;
        // 0x111848: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111844) {
            ctx->pc = 0x11187Cu;
            return;
        }
    }
    ctx->pc = 0x11184Cu;
}
