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

// Function: caseD_7
// Address: 0x10a0c0 - 0x10a0cc
void caseD_7_0x10a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x10a0c0");
#endif

    ctx->pc = 0x10a0c0u;

    // 0x10a0c0: 0x878283a4  lh          $v0, -0x7C5C($gp)
    ctx->pc = 0x10a0c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935460)));
    // 0x10a0c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10A0C4u;
    {
        const bool branch_taken_0x10a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0C4u;
        // 0x10a0c8: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0c4) {
            ctx->pc = 0x10A0E0u;
            return;
        }
    }
    ctx->pc = 0x10A0CCu;
}
