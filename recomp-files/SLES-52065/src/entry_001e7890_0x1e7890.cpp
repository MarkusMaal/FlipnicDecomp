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

// Function: entry_001e7890
// Address: 0x1e7890 - 0x1e78a0
void entry_001e7890_0x1e7890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7890_0x1e7890");
#endif

    ctx->pc = 0x1e7890u;

    // 0x1e7890: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7890u;
    {
        const bool branch_taken_0x1e7890 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7890u;
        // 0x1e7894: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7890) {
            ctx->pc = 0x1E78A0u;
            return;
        }
    }
    ctx->pc = 0x1E7898u;
    // 0x1e7898: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1e7898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e789c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1e789cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e78a0u;
}
