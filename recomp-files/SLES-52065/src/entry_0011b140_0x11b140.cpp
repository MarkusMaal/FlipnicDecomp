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

// Function: entry_0011b140
// Address: 0x11b140 - 0x11b150
void entry_0011b140_0x11b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b140_0x11b140");
#endif

    ctx->pc = 0x11b140u;

    // 0x11b140: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B140u;
    {
        const bool branch_taken_0x11b140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B140u;
        // 0x11b144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b140) {
            ctx->pc = 0x11B150u;
            return;
        }
    }
    ctx->pc = 0x11B148u;
    // 0x11b148: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11B148u;
    {
        const bool branch_taken_0x11b148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B148u;
        // 0x11b14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b148) {
            ctx->pc = 0x11B198u;
            return;
        }
    }
    ctx->pc = 0x11B150u;
}
