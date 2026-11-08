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

// Function: entry_001f1dc4
// Address: 0x1f1dc4 - 0x1f1dd8
void entry_001f1dc4_0x1f1dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1dc4_0x1f1dc4");
#endif

    ctx->pc = 0x1f1dc4u;

    // 0x1f1dc4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1DC4u;
    {
        const bool branch_taken_0x1f1dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1dc4) {
            ctx->pc = 0x1F1DD8u;
            return;
        }
    }
    ctx->pc = 0x1F1DCCu;
    // 0x1f1dcc: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1f1dccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1dd0: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1DD0u;
    {
        const bool branch_taken_0x1f1dd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DD0u;
        // 0x1f1dd4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dd0) {
            ctx->pc = 0x1F1DE8u;
            return;
        }
    }
    ctx->pc = 0x1F1DD8u;
}
