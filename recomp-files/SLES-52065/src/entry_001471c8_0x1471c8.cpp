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

// Function: entry_001471c8
// Address: 0x1471c8 - 0x1471e0
void entry_001471c8_0x1471c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001471c8_0x1471c8");
#endif

    ctx->pc = 0x1471c8u;

    // 0x1471c8: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x1471c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1471cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1471CCu;
    {
        const bool branch_taken_0x1471cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471CCu;
        // 0x1471d0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471cc) {
            ctx->pc = 0x1471E0u;
            return;
        }
    }
    ctx->pc = 0x1471D4u;
    // 0x1471d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1471D4u;
    {
        const bool branch_taken_0x1471d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471D4u;
        // 0x1471d8: 0x3c0a82d  daddu       $s5, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471d4) {
            ctx->pc = 0x1471E0u;
            return;
        }
    }
    ctx->pc = 0x1471DCu;
    // 0x1471dc: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x1471dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1471e0u;
}
