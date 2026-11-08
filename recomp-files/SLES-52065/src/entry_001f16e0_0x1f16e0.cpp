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

// Function: entry_001f16e0
// Address: 0x1f16e0 - 0x1f16f4
void entry_001f16e0_0x1f16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f16e0_0x1f16e0");
#endif

    switch (ctx->pc) {
        case 0x1f16e8u: goto label_1f16e8;
        case 0x1f16f0u: goto label_1f16f0;
        default: break;
    }

    ctx->pc = 0x1f16e0u;

    // 0x1f16e0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F16E0u;
    SET_GPR_U32(ctx, 31, 0x1F16E8u);
    ctx->pc = 0x1F16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16E0u;
    // 0x1f16e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F16E0u, 0x1F16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E8u;
label_1f16e8:
    // 0x1f16e8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F16E8u;
    SET_GPR_U32(ctx, 31, 0x1F16F0u);
    ctx->pc = 0x1F16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16E8u;
    // 0x1f16ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F16E8u, 0x1F16F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16F0u;
label_1f16f0:
    // 0x1f16f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f16f4u;
}
