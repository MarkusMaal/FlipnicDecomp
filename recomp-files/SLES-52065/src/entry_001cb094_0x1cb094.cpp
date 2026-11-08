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

// Function: entry_001cb094
// Address: 0x1cb094 - 0x1cb0a8
void entry_001cb094_0x1cb094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb094_0x1cb094");
#endif

    switch (ctx->pc) {
        case 0x1cb0a0u: goto label_1cb0a0;
        default: break;
    }

    ctx->pc = 0x1cb094u;

    // 0x1cb094: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb098: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB098u;
    SET_GPR_U32(ctx, 31, 0x1CB0A0u);
    ctx->pc = 0x1CB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB098u;
    // 0x1cb09c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB098u, 0x1CB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0A0u;
label_1cb0a0:
    // 0x1cb0a0: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB0A0u;
    SET_GPR_U32(ctx, 31, 0x1CB0A8u);
    ctx->pc = 0x1CB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0A0u;
    // 0x1cb0a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB0A0u, 0x1CB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0A8u;
}
