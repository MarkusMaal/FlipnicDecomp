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

// Function: entry_001b7db8
// Address: 0x1b7db8 - 0x1b7de4
void entry_001b7db8_0x1b7db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7db8_0x1b7db8");
#endif

    switch (ctx->pc) {
        case 0x1b7dc4u: goto label_1b7dc4;
        case 0x1b7ddcu: goto label_1b7ddc;
        default: break;
    }

    ctx->pc = 0x1b7db8u;

    // 0x1b7db8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7dbc: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1B7DBCu;
    SET_GPR_U32(ctx, 31, 0x1B7DC4u);
    ctx->pc = 0x1B7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DBCu;
    // 0x1b7dc0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1B7DBCu, 0x1B7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DC4u;
label_1b7dc4:
    // 0x1b7dc4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b7dc8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7dcc: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1b7dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7dd0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1b7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b7dd4: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1B7DD4u;
    SET_GPR_U32(ctx, 31, 0x1B7DDCu);
    ctx->pc = 0x1B7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DD4u;
    // 0x1b7dd8: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1B7DD4u, 0x1B7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DDCu;
label_1b7ddc:
    // 0x1b7ddc: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7DDCu;
    SET_GPR_U32(ctx, 31, 0x1B7DE4u);
    ctx->pc = 0x1B7DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DDCu;
    // 0x1b7de0: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7DDCu, 0x1B7DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DE4u;
}
