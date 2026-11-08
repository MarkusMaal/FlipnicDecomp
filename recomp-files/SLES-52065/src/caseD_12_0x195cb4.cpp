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

// Function: caseD_12
// Address: 0x195cb4 - 0x195cd0
void caseD_12_0x195cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x195cb4");
#endif

    switch (ctx->pc) {
        case 0x195cc8u: goto label_195cc8;
        default: break;
    }

    ctx->pc = 0x195cb4u;

    // 0x195cb4: 0x0  nop
    ctx->pc = 0x195cb4u;
    // NOP
    // 0x195cb8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195cbc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x195cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195cc0: 0xc054710  jal         func_151C40
    ctx->pc = 0x195CC0u;
    SET_GPR_U32(ctx, 31, 0x195CC8u);
    ctx->pc = 0x195CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CC0u;
    // 0x195cc4: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C40u, 0x195CC0u, 0x195CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CC8u;
label_195cc8:
    // 0x195cc8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x195CC8u;
    {
        const bool branch_taken_0x195cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cc8) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195CD0u;
}
