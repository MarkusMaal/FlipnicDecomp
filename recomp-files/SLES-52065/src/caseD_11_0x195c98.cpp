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

// Function: caseD_11
// Address: 0x195c98 - 0x195cb4
void caseD_11_0x195c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x195c98");
#endif

    switch (ctx->pc) {
        case 0x195cacu: goto label_195cac;
        default: break;
    }

    ctx->pc = 0x195c98u;

    // 0x195c98: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x195c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x195c9c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195ca0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195ca4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x195CA4u;
    SET_GPR_U32(ctx, 31, 0x195CACu);
    ctx->pc = 0x195CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CA4u;
    // 0x195ca8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x195CA4u, 0x195CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CACu;
label_195cac:
    // 0x195cac: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x195CACu;
    {
        const bool branch_taken_0x195cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cac) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195CB4u;
}
