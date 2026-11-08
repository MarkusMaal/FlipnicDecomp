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

// Function: entry_00110808
// Address: 0x110808 - 0x110824
void entry_00110808_0x110808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110808_0x110808");
#endif

    ctx->pc = 0x110808u;

    // 0x110808: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11080c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11080Cu;
    {
        const bool branch_taken_0x11080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11080c) {
            ctx->pc = 0x1107C4u;
            return;
        }
    }
    ctx->pc = 0x110814u;
    // 0x110814: 0x14e60043  bne         $a3, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x110814u;
    {
        const bool branch_taken_0x110814 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110814u;
        // 0x110818: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110814) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x11081Cu;
    // 0x11081c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11081Cu;
    {
        const bool branch_taken_0x11081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11081Cu;
        // 0x110820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11081c) {
            ctx->pc = 0x110854u;
            return;
        }
    }
    ctx->pc = 0x110824u;
}
