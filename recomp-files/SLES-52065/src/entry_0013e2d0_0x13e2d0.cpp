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

// Function: entry_0013e2d0
// Address: 0x13e2d0 - 0x13e2e0
void entry_0013e2d0_0x13e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e2d0_0x13e2d0");
#endif

    ctx->pc = 0x13e2d0u;

    // 0x13e2d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E2D0u;
    {
        const bool branch_taken_0x13e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2D0u;
        // 0x13e2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2d0) {
            ctx->pc = 0x13E2E0u;
            return;
        }
    }
    ctx->pc = 0x13E2D8u;
    // 0x13e2d8: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x13E2D8u;
    {
        const bool branch_taken_0x13e2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2D8u;
        // 0x13e2dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2d8) {
            ctx->pc = 0x13E554u;
            return;
        }
    }
    ctx->pc = 0x13E2E0u;
}
