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

// Function: entry_001af574
// Address: 0x1af574 - 0x1af584
void entry_001af574_0x1af574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af574_0x1af574");
#endif

    ctx->pc = 0x1af574u;

    // 0x1af574: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF574u;
    {
        const bool branch_taken_0x1af574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af574) {
            ctx->pc = 0x1AF584u;
            return;
        }
    }
    ctx->pc = 0x1AF57Cu;
    // 0x1af57c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF57Cu;
    {
        const bool branch_taken_0x1af57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF57Cu;
        // 0x1af580: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af57c) {
            ctx->pc = 0x1AF588u;
            return;
        }
    }
    ctx->pc = 0x1AF584u;
}
