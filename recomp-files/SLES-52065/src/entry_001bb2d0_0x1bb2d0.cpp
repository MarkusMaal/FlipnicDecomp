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

// Function: entry_001bb2d0
// Address: 0x1bb2d0 - 0x1bb2e8
void entry_001bb2d0_0x1bb2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb2d0_0x1bb2d0");
#endif

    switch (ctx->pc) {
        case 0x1bb2d8u: goto label_1bb2d8;
        case 0x1bb2e0u: goto label_1bb2e0;
        default: break;
    }

    ctx->pc = 0x1bb2d0u;

    // 0x1bb2d0: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB2D0u;
    SET_GPR_U32(ctx, 31, 0x1BB2D8u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB2D0u, 0x1BB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2D8u;
label_1bb2d8:
    // 0x1bb2d8: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB2D8u;
    SET_GPR_U32(ctx, 31, 0x1BB2E0u);
    ctx->pc = 0x1BB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2D8u;
    // 0x1bb2dc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB2D8u, 0x1BB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2E0u;
label_1bb2e0:
    // 0x1bb2e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB2E0u;
    SET_GPR_U32(ctx, 31, 0x1BB2E8u);
    ctx->pc = 0x1BB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2E0u;
    // 0x1bb2e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB2E0u, 0x1BB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2E8u;
}
