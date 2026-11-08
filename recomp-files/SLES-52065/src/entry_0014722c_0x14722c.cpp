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

// Function: entry_0014722c
// Address: 0x14722c - 0x147244
void entry_0014722c_0x14722c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014722c_0x14722c");
#endif

    ctx->pc = 0x14722cu;

    // 0x14722c: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x14722cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x147230: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x147230u;
    {
        const bool branch_taken_0x147230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147230u;
        // 0x147234: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147230) {
            ctx->pc = 0x147244u;
            return;
        }
    }
    ctx->pc = 0x147238u;
    // 0x147238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147238u;
    {
        const bool branch_taken_0x147238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147238u;
        // 0x14723c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147238) {
            ctx->pc = 0x147244u;
            return;
        }
    }
    ctx->pc = 0x147240u;
    // 0x147240: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x147240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147244u;
}
