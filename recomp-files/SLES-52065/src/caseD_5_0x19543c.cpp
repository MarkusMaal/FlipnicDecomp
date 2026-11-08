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

// Function: caseD_5
// Address: 0x19543c - 0x195450
void caseD_5_0x19543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x19543c");
#endif

    switch (ctx->pc) {
        case 0x195448u: goto label_195448;
        default: break;
    }

    ctx->pc = 0x19543cu;

    // 0x19543c: 0x0  nop
    ctx->pc = 0x19543cu;
    // NOP
    // 0x195440: 0xc0463e0  jal         func_118F80
    ctx->pc = 0x195440u;
    SET_GPR_U32(ctx, 31, 0x195448u);
    ctx->pc = 0x195444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195440u;
    // 0x195444: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F80u, 0x195440u, 0x195448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195448u;
label_195448:
    // 0x195448: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x195448u;
    {
        const bool branch_taken_0x195448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195448) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195450u;
}
