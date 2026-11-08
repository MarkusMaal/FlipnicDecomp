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

// Function: entry_001cdfd8
// Address: 0x1cdfd8 - 0x1cdfe8
void entry_001cdfd8_0x1cdfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdfd8_0x1cdfd8");
#endif

    ctx->pc = 0x1cdfd8u;

    // 0x1cdfd8: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1cdfdc: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CDFDCu;
    {
        const bool branch_taken_0x1cdfdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFDCu;
        // 0x1cdfe0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfdc) {
            ctx->pc = 0x1CE0E8u;
            return;
        }
    }
    ctx->pc = 0x1CDFE4u;
    // 0x1cdfe4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cdfe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cdfe8u;
}
