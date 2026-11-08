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

// Function: entry_001db2a8
// Address: 0x1db2a8 - 0x1db2b8
void entry_001db2a8_0x1db2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db2a8_0x1db2a8");
#endif

    ctx->pc = 0x1db2a8u;

    // 0x1db2a8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB2A8u;
    {
        const bool branch_taken_0x1db2a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db2a8) {
            ctx->pc = 0x1DB2C8u;
            return;
        }
    }
    ctx->pc = 0x1DB2B0u;
    // 0x1db2b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB2B0u;
    {
        const bool branch_taken_0x1db2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B0u;
        // 0x1db2b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2b0) {
            ctx->pc = 0x1DB2C4u;
            return;
        }
    }
    ctx->pc = 0x1DB2B8u;
}
