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

// Function: entry_0012f644
// Address: 0x12f644 - 0x12f658
void entry_0012f644_0x12f644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f644_0x12f644");
#endif

    ctx->pc = 0x12f644u;

    // 0x12f644: 0x0  nop
    ctx->pc = 0x12f644u;
    // NOP
    // 0x12f648: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x12f648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12f64c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x12F64Cu;
    {
        const bool branch_taken_0x12f64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F64Cu;
        // 0x12f650: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f64c) {
            ctx->pc = 0x12F6ACu;
            return;
        }
    }
    ctx->pc = 0x12F654u;
    // 0x12f654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12f658u;
}
