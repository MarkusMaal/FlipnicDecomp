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

// Function: entry_001e3eb4
// Address: 0x1e3eb4 - 0x1e3ec4
void entry_001e3eb4_0x1e3eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3eb4_0x1e3eb4");
#endif

    ctx->pc = 0x1e3eb4u;

    // 0x1e3eb4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3EB4u;
    {
        const bool branch_taken_0x1e3eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EB4u;
        // 0x1e3eb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3eb4) {
            ctx->pc = 0x1E3EC4u;
            return;
        }
    }
    ctx->pc = 0x1E3EBCu;
    // 0x1e3ebc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E3EBCu;
    {
        const bool branch_taken_0x1e3ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EBCu;
        // 0x1e3ec0: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ebc) {
            ctx->pc = 0x1E3FE0u;
            return;
        }
    }
    ctx->pc = 0x1E3EC4u;
}
