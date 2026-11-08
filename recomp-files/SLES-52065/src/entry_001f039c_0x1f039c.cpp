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

// Function: entry_001f039c
// Address: 0x1f039c - 0x1f03ac
void entry_001f039c_0x1f039c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f039c_0x1f039c");
#endif

    switch (ctx->pc) {
        case 0x1f03a4u: goto label_1f03a4;
        default: break;
    }

    ctx->pc = 0x1f039cu;

    // 0x1f039c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F039Cu;
    SET_GPR_U32(ctx, 31, 0x1F03A4u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F039Cu, 0x1F03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03A4u;
label_1f03a4:
    // 0x1f03a4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1F03A4u;
    {
        const bool branch_taken_0x1f03a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03A4u;
        // 0x1f03a8: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03a4) {
            ctx->pc = 0x1F066Cu;
            return;
        }
    }
    ctx->pc = 0x1F03ACu;
}
