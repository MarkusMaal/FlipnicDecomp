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

// Function: entry_001de850
// Address: 0x1de850 - 0x1de85c
void entry_001de850_0x1de850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de850_0x1de850");
#endif

    ctx->pc = 0x1de850u;

    // 0x1de850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de854: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE854u;
    {
        const bool branch_taken_0x1de854 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de854) {
            ctx->pc = 0x1DE858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE854u;
            // 0x1de858: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE85Cu;
            return;
        }
    }
    ctx->pc = 0x1DE85Cu;
}
