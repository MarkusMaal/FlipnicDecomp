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

// Function: caseD_15
// Address: 0x10a0b0 - 0x10a0c0
void caseD_15_0x10a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x10a0b0");
#endif

    switch (ctx->pc) {
        case 0x10a0b8u: goto label_10a0b8;
        default: break;
    }

    ctx->pc = 0x10a0b0u;

    // 0x10a0b0: 0xc0580dc  jal         func_160370
    ctx->pc = 0x10A0B0u;
    SET_GPR_U32(ctx, 31, 0x10A0B8u);
    ctx->pc = 0x10A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0B0u;
    // 0x10a0b4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160370u, 0x10A0B0u, 0x10A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0B8u;
label_10a0b8:
    // 0x10a0b8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x10A0B8u;
    {
        const bool branch_taken_0x10a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0b8) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A0C0u;
}
