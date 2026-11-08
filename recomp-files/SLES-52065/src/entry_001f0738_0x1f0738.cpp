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

// Function: entry_001f0738
// Address: 0x1f0738 - 0x1f0748
void entry_001f0738_0x1f0738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0738_0x1f0738");
#endif

    switch (ctx->pc) {
        case 0x1f0740u: goto label_1f0740;
        default: break;
    }

    ctx->pc = 0x1f0738u;

    // 0x1f0738: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0738u;
    SET_GPR_U32(ctx, 31, 0x1F0740u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0738u, 0x1F0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0740u;
label_1f0740:
    // 0x1f0740: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1F0740u;
    {
        const bool branch_taken_0x1f0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0740u;
        // 0x1f0744: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0740) {
            ctx->pc = 0x1F0848u;
            return;
        }
    }
    ctx->pc = 0x1F0748u;
}
