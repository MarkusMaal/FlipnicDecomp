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

// Function: entry_0011e6c8
// Address: 0x11e6c8 - 0x11e6d4
void entry_0011e6c8_0x11e6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e6c8_0x11e6c8");
#endif

    switch (ctx->pc) {
        case 0x11e6d0u: goto label_11e6d0;
        default: break;
    }

    ctx->pc = 0x11e6c8u;

    // 0x11e6c8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E6C8u;
    SET_GPR_U32(ctx, 31, 0x11E6D0u);
    ctx->pc = 0x11E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6C8u;
    // 0x11e6cc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E6C8u, 0x11E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6D0u;
label_11e6d0:
    // 0x11e6d0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->pc = 0x11e6d4u;
}
