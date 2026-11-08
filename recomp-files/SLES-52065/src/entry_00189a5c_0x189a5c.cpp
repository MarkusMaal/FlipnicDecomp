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

// Function: entry_00189a5c
// Address: 0x189a5c - 0x189a6c
void entry_00189a5c_0x189a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a5c_0x189a5c");
#endif

    ctx->pc = 0x189a5cu;

    // 0x189a5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189A5Cu;
    {
        const bool branch_taken_0x189a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a5c) {
            ctx->pc = 0x189A6Cu;
            return;
        }
    }
    ctx->pc = 0x189A64u;
    // 0x189a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189A64u;
    {
        const bool branch_taken_0x189a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A64u;
        // 0x189a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a64) {
            ctx->pc = 0x189A74u;
            return;
        }
    }
    ctx->pc = 0x189A6Cu;
}
