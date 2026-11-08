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

// Function: entry_001efe80
// Address: 0x1efe80 - 0x1efe90
void entry_001efe80_0x1efe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efe80_0x1efe80");
#endif

    switch (ctx->pc) {
        case 0x1efe88u: goto label_1efe88;
        default: break;
    }

    ctx->pc = 0x1efe80u;

    // 0x1efe80: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFE80u;
    SET_GPR_U32(ctx, 31, 0x1EFE88u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFE80u, 0x1EFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE88u;
label_1efe88:
    // 0x1efe88: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1EFE88u;
    {
        const bool branch_taken_0x1efe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE88u;
        // 0x1efe8c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe88) {
            ctx->pc = 0x1F0030u;
            return;
        }
    }
    ctx->pc = 0x1EFE90u;
}
