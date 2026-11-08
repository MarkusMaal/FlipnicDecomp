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

// Function: entry_001a491c
// Address: 0x1a491c - 0x1a4928
void entry_001a491c_0x1a491c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a491c_0x1a491c");
#endif

    ctx->pc = 0x1a491cu;

    // 0x1a491c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A491Cu;
    {
        const bool branch_taken_0x1a491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A491Cu;
        // 0x1a4920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a491c) {
            ctx->pc = 0x1A49B8u;
            return;
        }
    }
    ctx->pc = 0x1A4924u;
    // 0x1a4924: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x1a4924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x1a4928u;
}
