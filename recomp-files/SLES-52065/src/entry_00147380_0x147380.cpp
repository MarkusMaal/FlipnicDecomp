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

// Function: entry_00147380
// Address: 0x147380 - 0x147398
void entry_00147380_0x147380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147380_0x147380");
#endif

    ctx->pc = 0x147380u;

    // 0x147380: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x147380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x147384: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x147384u;
    {
        const bool branch_taken_0x147384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147384u;
        // 0x147388: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147384) {
            ctx->pc = 0x147398u;
            return;
        }
    }
    ctx->pc = 0x14738Cu;
    // 0x14738c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14738Cu;
    {
        const bool branch_taken_0x14738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14738Cu;
        // 0x147390: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14738c) {
            ctx->pc = 0x147398u;
            return;
        }
    }
    ctx->pc = 0x147394u;
    // 0x147394: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x147394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147398u;
}
