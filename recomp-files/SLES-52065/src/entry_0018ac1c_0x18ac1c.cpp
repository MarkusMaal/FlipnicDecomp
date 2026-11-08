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

// Function: entry_0018ac1c
// Address: 0x18ac1c - 0x18ac30
void entry_0018ac1c_0x18ac1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac1c_0x18ac1c");
#endif

    ctx->pc = 0x18ac1cu;

    // 0x18ac1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ac20: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC20u;
    {
        const bool branch_taken_0x18ac20 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18ac20) {
            ctx->pc = 0x18AC30u;
            return;
        }
    }
    ctx->pc = 0x18AC28u;
    // 0x18ac28: 0xc076654  jal         func_1D9950
    ctx->pc = 0x18AC28u;
    SET_GPR_U32(ctx, 31, 0x18AC30u);
    ctx->pc = 0x18AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC28u;
    // 0x18ac2c: 0x8f8580dc  lw          $a1, -0x7F24($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x18AC28u, 0x18AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC30u;
}
