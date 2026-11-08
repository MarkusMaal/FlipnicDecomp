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

// Function: caseD_6
// Address: 0x195450 - 0x195460
void caseD_6_0x195450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x195450");
#endif

    switch (ctx->pc) {
        case 0x195458u: goto label_195458;
        default: break;
    }

    ctx->pc = 0x195450u;

    // 0x195450: 0xc0463fc  jal         func_118FF0
    ctx->pc = 0x195450u;
    SET_GPR_U32(ctx, 31, 0x195458u);
    ctx->pc = 0x195454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195450u;
    // 0x195454: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FF0u, 0x195450u, 0x195458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195458u;
label_195458:
    // 0x195458: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x195458u;
    {
        const bool branch_taken_0x195458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195458) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195460u;
}
