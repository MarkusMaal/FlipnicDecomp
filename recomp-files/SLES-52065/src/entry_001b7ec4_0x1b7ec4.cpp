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

// Function: entry_001b7ec4
// Address: 0x1b7ec4 - 0x1b7ee4
void entry_001b7ec4_0x1b7ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ec4_0x1b7ec4");
#endif

    switch (ctx->pc) {
        case 0x1b7ed0u: goto label_1b7ed0;
        case 0x1b7edcu: goto label_1b7edc;
        default: break;
    }

    ctx->pc = 0x1b7ec4u;

    // 0x1b7ec4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b7ec8: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1B7EC8u;
    SET_GPR_U32(ctx, 31, 0x1B7ED0u);
    ctx->pc = 0x1B7ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EC8u;
    // 0x1b7ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1B7EC8u, 0x1B7ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ED0u;
label_1b7ed0:
    // 0x1b7ed0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b7ed4: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1B7ED4u;
    SET_GPR_U32(ctx, 31, 0x1B7EDCu);
    ctx->pc = 0x1B7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7ED4u;
    // 0x1b7ed8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1B7ED4u, 0x1B7EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EDCu;
label_1b7edc:
    // 0x1b7edc: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7EDCu;
    SET_GPR_U32(ctx, 31, 0x1B7EE4u);
    ctx->pc = 0x1B7EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EDCu;
    // 0x1b7ee0: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7EDCu, 0x1B7EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EE4u;
}
