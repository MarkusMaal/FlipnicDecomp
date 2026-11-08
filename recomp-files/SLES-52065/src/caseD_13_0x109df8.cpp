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

// Function: caseD_13
// Address: 0x109df8 - 0x109e08
void caseD_13_0x109df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x109df8");
#endif

    switch (ctx->pc) {
        case 0x109e00u: goto label_109e00;
        default: break;
    }

    ctx->pc = 0x109df8u;

    // 0x109df8: 0xc058080  jal         func_160200
    ctx->pc = 0x109DF8u;
    SET_GPR_U32(ctx, 31, 0x109E00u);
    ctx->pc = 0x109DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DF8u;
    // 0x109dfc: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160200u, 0x109DF8u, 0x109E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E00u;
label_109e00:
    // 0x109e00: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x109E00u;
    {
        const bool branch_taken_0x109e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109e00) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109E08u;
}
