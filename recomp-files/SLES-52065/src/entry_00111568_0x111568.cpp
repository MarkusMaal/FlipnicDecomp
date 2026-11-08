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

// Function: entry_00111568
// Address: 0x111568 - 0x111584
void entry_00111568_0x111568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111568_0x111568");
#endif

    ctx->pc = 0x111568u;

    // 0x111568: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x111568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11156c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11156Cu;
    {
        const bool branch_taken_0x11156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11156c) {
            ctx->pc = 0x111514u;
            return;
        }
    }
    ctx->pc = 0x111574u;
    // 0x111574: 0x15070117  bne         $t0, $a3, . + 4 + (0x117 << 2)
    ctx->pc = 0x111574u;
    {
        const bool branch_taken_0x111574 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x111578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111574u;
        // 0x111578: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111574) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x11157Cu;
    // 0x11157c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11157Cu;
    {
        const bool branch_taken_0x11157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11157Cu;
        // 0x111580: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11157c) {
            ctx->pc = 0x1115D4u;
            return;
        }
    }
    ctx->pc = 0x111584u;
}
