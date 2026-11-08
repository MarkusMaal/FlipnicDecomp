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

// Function: entry_001175fc
// Address: 0x1175fc - 0x11760c
void entry_001175fc_0x1175fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001175fc_0x1175fc");
#endif

    switch (ctx->pc) {
        case 0x117604u: goto label_117604;
        default: break;
    }

    ctx->pc = 0x1175fcu;

    // 0x1175fc: 0xc0828ce  jal         func_20A338
    ctx->pc = 0x1175FCu;
    SET_GPR_U32(ctx, 31, 0x117604u);
    ctx->pc = 0x117600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175FCu;
    // 0x117600: 0x2484d8c0  addiu       $a0, $a0, -0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A338u, 0x1175FCu, 0x117604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117604u;
label_117604:
    // 0x117604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117604u;
    {
        const bool branch_taken_0x117604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117604) {
            ctx->pc = 0x117614u;
            return;
        }
    }
    ctx->pc = 0x11760Cu;
}
