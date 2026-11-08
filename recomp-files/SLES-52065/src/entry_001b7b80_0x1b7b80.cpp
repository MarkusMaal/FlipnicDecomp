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

// Function: entry_001b7b80
// Address: 0x1b7b80 - 0x1b7ba0
void entry_001b7b80_0x1b7b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7b80_0x1b7b80");
#endif

    switch (ctx->pc) {
        case 0x1b7b8cu: goto label_1b7b8c;
        case 0x1b7b98u: goto label_1b7b98;
        default: break;
    }

    ctx->pc = 0x1b7b80u;

    // 0x1b7b80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1b7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7b84: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1B7B84u;
    SET_GPR_U32(ctx, 31, 0x1B7B8Cu);
    ctx->pc = 0x1B7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B84u;
    // 0x1b7b88: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1B7B84u, 0x1B7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B8Cu;
label_1b7b8c:
    // 0x1b7b8c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1b7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7b90: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1B7B90u;
    SET_GPR_U32(ctx, 31, 0x1B7B98u);
    ctx->pc = 0x1B7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B90u;
    // 0x1b7b94: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1B7B90u, 0x1B7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B98u;
label_1b7b98:
    // 0x1b7b98: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7B98u;
    SET_GPR_U32(ctx, 31, 0x1B7BA0u);
    ctx->pc = 0x1B7B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B98u;
    // 0x1b7b9c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7B98u, 0x1B7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BA0u;
}
