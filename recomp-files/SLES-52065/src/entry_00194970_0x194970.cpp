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

// Function: entry_00194970
// Address: 0x194970 - 0x194980
void entry_00194970_0x194970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194970_0x194970");
#endif

    ctx->pc = 0x194970u;

    // 0x194970: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194970u;
    {
        const bool branch_taken_0x194970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x194970) {
            ctx->pc = 0x194980u;
            return;
        }
    }
    ctx->pc = 0x194978u;
    // 0x194978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194978u;
    {
        const bool branch_taken_0x194978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194978u;
        // 0x19497c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194978) {
            ctx->pc = 0x194988u;
            return;
        }
    }
    ctx->pc = 0x194980u;
}
