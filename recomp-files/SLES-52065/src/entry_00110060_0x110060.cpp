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

// Function: entry_00110060
// Address: 0x110060 - 0x11007c
void entry_00110060_0x110060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110060_0x110060");
#endif

    ctx->pc = 0x110060u;

    // 0x110060: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x110064: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x110064u;
    {
        const bool branch_taken_0x110064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110064) {
            ctx->pc = 0x11001Cu;
            return;
        }
    }
    ctx->pc = 0x11006Cu;
    // 0x11006c: 0x14e6008d  bne         $a3, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x11006Cu;
    {
        const bool branch_taken_0x11006c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11006Cu;
        // 0x110070: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11006c) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x110074u;
    // 0x110074: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x110074u;
    {
        const bool branch_taken_0x110074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110074u;
        // 0x110078: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110074) {
            ctx->pc = 0x1100ACu;
            return;
        }
    }
    ctx->pc = 0x11007Cu;
}
