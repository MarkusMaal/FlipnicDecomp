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

// Function: entry_001e6268
// Address: 0x1e6268 - 0x1e6278
void entry_001e6268_0x1e6268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6268_0x1e6268");
#endif

    ctx->pc = 0x1e6268u;

    // 0x1e6268: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6268u;
    {
        const bool branch_taken_0x1e6268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6268u;
        // 0x1e626c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6268) {
            ctx->pc = 0x1E6278u;
            return;
        }
    }
    ctx->pc = 0x1E6270u;
    // 0x1e6270: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1E6270u;
    {
        const bool branch_taken_0x1e6270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6270u;
        // 0x1e6274: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6270) {
            ctx->pc = 0x1E6370u;
            return;
        }
    }
    ctx->pc = 0x1E6278u;
}
