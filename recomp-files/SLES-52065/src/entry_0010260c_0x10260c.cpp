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

// Function: entry_0010260c
// Address: 0x10260c - 0x102618
void entry_0010260c_0x10260c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010260c_0x10260c");
#endif

    ctx->pc = 0x10260cu;

    // 0x10260c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x10260cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x102610: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x102610u;
    {
        const bool branch_taken_0x102610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102610u;
        // 0x102614: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102610) {
            ctx->pc = 0x102678u;
            return;
        }
    }
    ctx->pc = 0x102618u;
}
