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

// Function: caseD_14
// Address: 0x10a0a0 - 0x10a0b0
void caseD_14_0x10a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x10a0a0");
#endif

    switch (ctx->pc) {
        case 0x10a0a8u: goto label_10a0a8;
        default: break;
    }

    ctx->pc = 0x10a0a0u;

    // 0x10a0a0: 0xc05809c  jal         func_160270
    ctx->pc = 0x10A0A0u;
    SET_GPR_U32(ctx, 31, 0x10A0A8u);
    ctx->pc = 0x10A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0A0u;
    // 0x10a0a4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160270u, 0x10A0A0u, 0x10A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0A8u;
label_10a0a8:
    // 0x10a0a8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x10A0A8u;
    {
        const bool branch_taken_0x10a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0a8) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A0B0u;
}
