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

// Function: entry_00147244
// Address: 0x147244 - 0x14725c
void entry_00147244_0x147244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147244_0x147244");
#endif

    ctx->pc = 0x147244u;

    // 0x147244: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x147244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x147248: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x147248u;
    {
        const bool branch_taken_0x147248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147248u;
        // 0x14724c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147248) {
            ctx->pc = 0x14725Cu;
            return;
        }
    }
    ctx->pc = 0x147250u;
    // 0x147250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147250u;
    {
        const bool branch_taken_0x147250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147250u;
        // 0x147254: 0x3c0a82d  daddu       $s5, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147250) {
            ctx->pc = 0x14725Cu;
            return;
        }
    }
    ctx->pc = 0x147258u;
    // 0x147258: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x147258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14725cu;
}
