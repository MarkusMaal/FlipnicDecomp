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

// Function: entry_001daea0
// Address: 0x1daea0 - 0x1daeb0
void entry_001daea0_0x1daea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daea0_0x1daea0");
#endif

    ctx->pc = 0x1daea0u;

    // 0x1daea0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAEA0u;
    {
        const bool branch_taken_0x1daea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1daea0) {
            ctx->pc = 0x1DAEC0u;
            return;
        }
    }
    ctx->pc = 0x1DAEA8u;
    // 0x1daea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAEA8u;
    {
        const bool branch_taken_0x1daea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEA8u;
        // 0x1daeac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daea8) {
            ctx->pc = 0x1DAEBCu;
            return;
        }
    }
    ctx->pc = 0x1DAEB0u;
}
