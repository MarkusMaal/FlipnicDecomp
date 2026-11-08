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

// Function: entry_001948f0
// Address: 0x1948f0 - 0x194900
void entry_001948f0_0x1948f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001948f0_0x1948f0");
#endif

    ctx->pc = 0x1948f0u;

    // 0x1948f0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1948F0u;
    {
        const bool branch_taken_0x1948f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1948f0) {
            ctx->pc = 0x194900u;
            return;
        }
    }
    ctx->pc = 0x1948F8u;
    // 0x1948f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1948F8u;
    {
        const bool branch_taken_0x1948f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948f8) {
            ctx->pc = 0x19490Cu;
            return;
        }
    }
    ctx->pc = 0x194900u;
}
