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

// Function: entry_001b7ca8
// Address: 0x1b7ca8 - 0x1b7cc4
void entry_001b7ca8_0x1b7ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ca8_0x1b7ca8");
#endif

    switch (ctx->pc) {
        case 0x1b7cbcu: goto label_1b7cbc;
        default: break;
    }

    ctx->pc = 0x1b7ca8u;

    // 0x1b7ca8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7cac: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7cb0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1b7cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7cb4: 0xc06ea38  jal         func_1BA8E0
    ctx->pc = 0x1B7CB4u;
    SET_GPR_U32(ctx, 31, 0x1B7CBCu);
    ctx->pc = 0x1B7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CB4u;
    // 0x1b7cb8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA8E0u, 0x1B7CB4u, 0x1B7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CBCu;
label_1b7cbc:
    // 0x1b7cbc: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7CBCu;
    SET_GPR_U32(ctx, 31, 0x1B7CC4u);
    ctx->pc = 0x1B7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CBCu;
    // 0x1b7cc0: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7CBCu, 0x1B7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CC4u;
}
