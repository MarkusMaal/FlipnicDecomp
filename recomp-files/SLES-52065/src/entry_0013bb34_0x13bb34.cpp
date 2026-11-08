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

// Function: entry_0013bb34
// Address: 0x13bb34 - 0x13bb44
void entry_0013bb34_0x13bb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb34_0x13bb34");
#endif

    switch (ctx->pc) {
        case 0x13bb3cu: goto label_13bb3c;
        default: break;
    }

    ctx->pc = 0x13bb34u;

    // 0x13bb34: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BB34u;
    SET_GPR_U32(ctx, 31, 0x13BB3Cu);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BB34u, 0x13BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB3Cu;
label_13bb3c:
    // 0x13bb3c: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BB3Cu;
    SET_GPR_U32(ctx, 31, 0x13BB44u);
    ctx->pc = 0x13BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB3Cu;
    // 0x13bb40: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BB3Cu, 0x13BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB44u;
}
