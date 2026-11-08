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

// Function: entry_001bcdf0
// Address: 0x1bcdf0 - 0x1bcdfc
void entry_001bcdf0_0x1bcdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcdf0_0x1bcdf0");
#endif

    switch (ctx->pc) {
        case 0x1bcdf8u: goto label_1bcdf8;
        default: break;
    }

    ctx->pc = 0x1bcdf0u;

    // 0x1bcdf0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BCDF0u;
    SET_GPR_U32(ctx, 31, 0x1BCDF8u);
    ctx->pc = 0x1BCDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDF0u;
    // 0x1bcdf4: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BCDF0u, 0x1BCDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDF8u;
label_1bcdf8:
    // 0x1bcdf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bcdf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1bcdfcu;
}
