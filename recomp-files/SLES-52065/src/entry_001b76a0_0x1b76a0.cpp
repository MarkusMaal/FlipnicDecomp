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

// Function: entry_001b76a0
// Address: 0x1b76a0 - 0x1b76b8
void entry_001b76a0_0x1b76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b76a0_0x1b76a0");
#endif

    switch (ctx->pc) {
        case 0x1b76b0u: goto label_1b76b0;
        default: break;
    }

    ctx->pc = 0x1b76a0u;

    // 0x1b76a0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b76a4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b76a8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1B76A8u;
    SET_GPR_U32(ctx, 31, 0x1B76B0u);
    ctx->pc = 0x1B76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76A8u;
    // 0x1b76ac: 0x24a52ee0  addiu       $a1, $a1, 0x2EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1B76A8u, 0x1B76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76B0u;
label_1b76b0:
    // 0x1b76b0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B76B0u;
    SET_GPR_U32(ctx, 31, 0x1B76B8u);
    ctx->pc = 0x1B76B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76B0u;
    // 0x1b76b4: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B76B0u, 0x1B76B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76B8u;
}
