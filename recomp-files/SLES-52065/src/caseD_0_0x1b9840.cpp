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

// Function: caseD_0
// Address: 0x1b9840 - 0x1b9858
void caseD_0_0x1b9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1b9840");
#endif

    ctx->pc = 0x1b9840u;

    // 0x1b9840: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9844: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1b9844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x1b9848: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x1b9848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x1b984c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x1b984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x1b9850: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1B9850u;
    {
        const bool branch_taken_0x1b9850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9850u;
        // 0x1b9854: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9850) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9858u;
}
