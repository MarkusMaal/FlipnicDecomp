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

// Function: entry_00113390
// Address: 0x113390 - 0x11339c
void entry_00113390_0x113390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113390_0x113390");
#endif

    ctx->pc = 0x113390u;

    // 0x113390: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x113390u;
    {
        const bool branch_taken_0x113390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113390u;
        // 0x113394: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113390) {
            ctx->pc = 0x1133DCu;
            return;
        }
    }
    ctx->pc = 0x113398u;
    // 0x113398: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x113398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11339cu;
}
