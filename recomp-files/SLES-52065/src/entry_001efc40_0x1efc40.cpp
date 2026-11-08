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

// Function: entry_001efc40
// Address: 0x1efc40 - 0x1efc50
void entry_001efc40_0x1efc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efc40_0x1efc40");
#endif

    switch (ctx->pc) {
        case 0x1efc48u: goto label_1efc48;
        default: break;
    }

    ctx->pc = 0x1efc40u;

    // 0x1efc40: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFC40u;
    SET_GPR_U32(ctx, 31, 0x1EFC48u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFC40u, 0x1EFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC48u;
label_1efc48:
    // 0x1efc48: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1EFC48u;
    {
        const bool branch_taken_0x1efc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC48u;
        // 0x1efc4c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc48) {
            ctx->pc = 0x1EFDD8u;
            return;
        }
    }
    ctx->pc = 0x1EFC50u;
}
