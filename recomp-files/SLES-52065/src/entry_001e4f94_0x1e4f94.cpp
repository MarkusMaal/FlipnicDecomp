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

// Function: entry_001e4f94
// Address: 0x1e4f94 - 0x1e4fa4
void entry_001e4f94_0x1e4f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4f94_0x1e4f94");
#endif

    ctx->pc = 0x1e4f94u;

    // 0x1e4f94: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4F94u;
    {
        const bool branch_taken_0x1e4f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F94u;
        // 0x1e4f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f94) {
            ctx->pc = 0x1E4FA4u;
            return;
        }
    }
    ctx->pc = 0x1E4F9Cu;
    // 0x1e4f9c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E4F9Cu;
    {
        const bool branch_taken_0x1e4f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F9Cu;
        // 0x1e4fa0: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f9c) {
            ctx->pc = 0x1E50C0u;
            return;
        }
    }
    ctx->pc = 0x1E4FA4u;
}
