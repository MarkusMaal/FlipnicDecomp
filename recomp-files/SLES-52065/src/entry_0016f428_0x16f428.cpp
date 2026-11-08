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

// Function: entry_0016f428
// Address: 0x16f428 - 0x16f434
void entry_0016f428_0x16f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f428_0x16f428");
#endif

    ctx->pc = 0x16f428u;

    // 0x16f428: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x16f428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16f42c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x16F42Cu;
    {
        const bool branch_taken_0x16f42c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F42Cu;
        // 0x16f430: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f42c) {
            ctx->pc = 0x16F45Cu;
            return;
        }
    }
    ctx->pc = 0x16F434u;
}
