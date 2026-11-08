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

// Function: entry_0013ba50
// Address: 0x13ba50 - 0x13ba60
void entry_0013ba50_0x13ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba50_0x13ba50");
#endif

    switch (ctx->pc) {
        case 0x13ba58u: goto label_13ba58;
        default: break;
    }

    ctx->pc = 0x13ba50u;

    // 0x13ba50: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BA50u;
    SET_GPR_U32(ctx, 31, 0x13BA58u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BA50u, 0x13BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA58u;
label_13ba58:
    // 0x13ba58: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BA58u;
    SET_GPR_U32(ctx, 31, 0x13BA60u);
    ctx->pc = 0x13BA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA58u;
    // 0x13ba5c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BA58u, 0x13BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA60u;
}
