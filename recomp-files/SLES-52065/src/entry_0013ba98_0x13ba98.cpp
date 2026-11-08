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

// Function: entry_0013ba98
// Address: 0x13ba98 - 0x13baa8
void entry_0013ba98_0x13ba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba98_0x13ba98");
#endif

    switch (ctx->pc) {
        case 0x13baa0u: goto label_13baa0;
        default: break;
    }

    ctx->pc = 0x13ba98u;

    // 0x13ba98: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BA98u;
    SET_GPR_U32(ctx, 31, 0x13BAA0u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BA98u, 0x13BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAA0u;
label_13baa0:
    // 0x13baa0: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BAA0u;
    SET_GPR_U32(ctx, 31, 0x13BAA8u);
    ctx->pc = 0x13BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAA0u;
    // 0x13baa4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BAA0u, 0x13BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAA8u;
}
