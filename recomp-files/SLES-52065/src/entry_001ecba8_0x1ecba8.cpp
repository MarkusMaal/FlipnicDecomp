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

// Function: entry_001ecba8
// Address: 0x1ecba8 - 0x1ecbc0
void entry_001ecba8_0x1ecba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecba8_0x1ecba8");
#endif

    switch (ctx->pc) {
        case 0x1ecbb4u: goto label_1ecbb4;
        default: break;
    }

    ctx->pc = 0x1ecba8u;

label_1ecba8:
    // 0x1ecba8: 0x8e24c3d0  lw          $a0, -0x3C30($s1)
    ctx->pc = 0x1ecba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951888)));
    // 0x1ecbac: 0xc07b1c8  jal         func_1EC720
    ctx->pc = 0x1ECBACu;
    SET_GPR_U32(ctx, 31, 0x1ECBB4u);
    ctx->pc = 0x1EC720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC720u, 0x1ECBACu, 0x1ECBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBB4u;
label_1ecbb4:
    // 0x1ecbb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ecbb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECBB8u;
    {
        const bool branch_taken_0x1ecbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbb8) {
            ctx->pc = 0x1ECBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecba8;
        }
    }
    ctx->pc = 0x1ECBC0u;
}
