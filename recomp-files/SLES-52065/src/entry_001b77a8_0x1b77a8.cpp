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

// Function: entry_001b77a8
// Address: 0x1b77a8 - 0x1b77b8
void entry_001b77a8_0x1b77a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b77a8_0x1b77a8");
#endif

    switch (ctx->pc) {
        case 0x1b77b0u: goto label_1b77b0;
        default: break;
    }

    ctx->pc = 0x1b77a8u;

    // 0x1b77a8: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1B77A8u;
    SET_GPR_U32(ctx, 31, 0x1B77B0u);
    ctx->pc = 0x1B77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77A8u;
    // 0x1b77ac: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1B77A8u, 0x1B77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77B0u;
label_1b77b0:
    // 0x1b77b0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B77B0u;
    SET_GPR_U32(ctx, 31, 0x1B77B8u);
    ctx->pc = 0x1B77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77B0u;
    // 0x1b77b4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B77B0u, 0x1B77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B77B8u;
}
