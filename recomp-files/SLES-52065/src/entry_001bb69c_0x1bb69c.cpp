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

// Function: entry_001bb69c
// Address: 0x1bb69c - 0x1bb6c4
void entry_001bb69c_0x1bb69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb69c_0x1bb69c");
#endif

    switch (ctx->pc) {
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6b0u: goto label_1bb6b0;
        case 0x1bb6b8u: goto label_1bb6b8;
        case 0x1bb6c0u: goto label_1bb6c0;
        default: break;
    }

    ctx->pc = 0x1bb69cu;

    // 0x1bb69c: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB69Cu;
    SET_GPR_U32(ctx, 31, 0x1BB6A4u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB69Cu, 0x1BB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6A4u;
label_1bb6a4:
    // 0x1bb6a4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb6a8: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB6A8u;
    SET_GPR_U32(ctx, 31, 0x1BB6B0u);
    ctx->pc = 0x1BB6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6A8u;
    // 0x1bb6ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB6A8u, 0x1BB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6B0u;
label_1bb6b0:
    // 0x1bb6b0: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB6B0u;
    SET_GPR_U32(ctx, 31, 0x1BB6B8u);
    ctx->pc = 0x1BB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6B0u;
    // 0x1bb6b4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB6B0u, 0x1BB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6B8u;
label_1bb6b8:
    // 0x1bb6b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB6B8u;
    SET_GPR_U32(ctx, 31, 0x1BB6C0u);
    ctx->pc = 0x1BB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6B8u;
    // 0x1bb6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB6B8u, 0x1BB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6C0u;
label_1bb6c0:
    // 0x1bb6c0: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->pc = 0x1bb6c4u;
}
