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

// Function: entry_001b9700
// Address: 0x1b9700 - 0x1b9710
void entry_001b9700_0x1b9700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9700_0x1b9700");
#endif

    switch (ctx->pc) {
        case 0x1b9708u: goto label_1b9708;
        default: break;
    }

    ctx->pc = 0x1b9700u;

    // 0x1b9700: 0xc06e5d0  jal         func_1B9740
    ctx->pc = 0x1B9700u;
    SET_GPR_U32(ctx, 31, 0x1B9708u);
    ctx->pc = 0x1B9704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9700u;
    // 0x1b9704: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9740u, 0x1B9700u, 0x1B9708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9708u;
label_1b9708:
    // 0x1b9708: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B9708u;
    SET_GPR_U32(ctx, 31, 0x1B9710u);
    ctx->pc = 0x1B970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9708u;
    // 0x1b970c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B9708u, 0x1B9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9710u;
}
