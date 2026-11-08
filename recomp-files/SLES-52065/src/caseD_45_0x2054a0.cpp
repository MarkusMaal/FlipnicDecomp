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

// Function: caseD_45
// Address: 0x2054a0 - 0x2054a8
void caseD_45_0x2054a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_45_0x2054a0");
#endif

    ctx->pc = 0x2054a0u;

    // 0x2054a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2054A0u;
    {
        const bool branch_taken_0x2054a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A0u;
        // 0x2054a4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054a0) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x2054A8u;
}
