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

// Function: entry_001bb3d8
// Address: 0x1bb3d8 - 0x1bb3f4
void entry_001bb3d8_0x1bb3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb3d8_0x1bb3d8");
#endif

    switch (ctx->pc) {
        case 0x1bb3e0u: goto label_1bb3e0;
        case 0x1bb3e8u: goto label_1bb3e8;
        case 0x1bb3f0u: goto label_1bb3f0;
        default: break;
    }

    ctx->pc = 0x1bb3d8u;

    // 0x1bb3d8: 0xc06ed10  jal         func_1BB440
    ctx->pc = 0x1BB3D8u;
    SET_GPR_U32(ctx, 31, 0x1BB3E0u);
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1BB3D8u, 0x1BB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3E0u;
label_1bb3e0:
    // 0x1bb3e0: 0xc06ed0c  jal         func_1BB430
    ctx->pc = 0x1BB3E0u;
    SET_GPR_U32(ctx, 31, 0x1BB3E8u);
    ctx->pc = 0x1BB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3E0u;
    // 0x1bb3e4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB430u, 0x1BB3E0u, 0x1BB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3E8u;
label_1bb3e8:
    // 0x1bb3e8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB3E8u;
    SET_GPR_U32(ctx, 31, 0x1BB3F0u);
    ctx->pc = 0x1BB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3E8u;
    // 0x1bb3ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB3E8u, 0x1BB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3F0u;
label_1bb3f0:
    // 0x1bb3f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb3f4u;
}
