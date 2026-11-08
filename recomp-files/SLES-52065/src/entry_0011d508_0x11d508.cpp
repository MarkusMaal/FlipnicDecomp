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

// Function: entry_0011d508
// Address: 0x11d508 - 0x11d520
void entry_0011d508_0x11d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d508_0x11d508");
#endif

    ctx->pc = 0x11d508u;

    // 0x11d508: 0x8ea30538  lw          $v1, 0x538($s5)
    ctx->pc = 0x11d508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x11d50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d510: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D510u;
    {
        const bool branch_taken_0x11d510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11d510) {
            ctx->pc = 0x11D520u;
            return;
        }
    }
    ctx->pc = 0x11D518u;
    // 0x11d518: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11D518u;
    SET_GPR_U32(ctx, 31, 0x11D520u);
    ctx->pc = 0x11D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D518u;
    // 0x11d51c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11D518u, 0x11D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D520u;
}
