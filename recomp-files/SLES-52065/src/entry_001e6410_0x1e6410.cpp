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

// Function: entry_001e6410
// Address: 0x1e6410 - 0x1e6420
void entry_001e6410_0x1e6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6410_0x1e6410");
#endif

    ctx->pc = 0x1e6410u;

    // 0x1e6410: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6410u;
    {
        const bool branch_taken_0x1e6410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6410) {
            ctx->pc = 0x1E6420u;
            return;
        }
    }
    ctx->pc = 0x1E6418u;
    // 0x1e6418: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E6418u;
    {
        const bool branch_taken_0x1e6418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6418u;
        // 0x1e641c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6418) {
            ctx->pc = 0x1E6500u;
            return;
        }
    }
    ctx->pc = 0x1E6420u;
}
