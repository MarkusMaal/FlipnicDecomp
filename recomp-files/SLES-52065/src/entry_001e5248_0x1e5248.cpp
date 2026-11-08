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

// Function: entry_001e5248
// Address: 0x1e5248 - 0x1e5258
void entry_001e5248_0x1e5248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5248_0x1e5248");
#endif

    ctx->pc = 0x1e5248u;

    // 0x1e5248: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5248u;
    {
        const bool branch_taken_0x1e5248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5248) {
            ctx->pc = 0x1E5258u;
            return;
        }
    }
    ctx->pc = 0x1E5250u;
    // 0x1e5250: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E5250u;
    {
        const bool branch_taken_0x1e5250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5250u;
        // 0x1e5254: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5250) {
            ctx->pc = 0x1E52C4u;
            return;
        }
    }
    ctx->pc = 0x1E5258u;
}
