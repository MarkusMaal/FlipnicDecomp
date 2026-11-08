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
// Address: 0x195cd0 - 0x195ce4
void caseD_13_0x195cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x195cd0");
#endif

    switch (ctx->pc) {
        case 0x195cdcu: goto label_195cdc;
        default: break;
    }

    ctx->pc = 0x195cd0u;

    // 0x195cd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195cd4: 0xc05473c  jal         func_151CF0
    ctx->pc = 0x195CD4u;
    SET_GPR_U32(ctx, 31, 0x195CDCu);
    ctx->pc = 0x195CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CD4u;
    // 0x195cd8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CF0u, 0x195CD4u, 0x195CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CDCu;
label_195cdc:
    // 0x195cdc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x195CDCu;
    {
        const bool branch_taken_0x195cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cdc) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195CE4u;
}
