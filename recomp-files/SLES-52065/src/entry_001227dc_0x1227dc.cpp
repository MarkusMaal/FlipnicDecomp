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

// Function: entry_001227dc
// Address: 0x1227dc - 0x122804
void entry_001227dc_0x1227dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001227dc_0x1227dc");
#endif

    switch (ctx->pc) {
        case 0x1227e4u: goto label_1227e4;
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f8u: goto label_1227f8;
        case 0x122800u: goto label_122800;
        default: break;
    }

    ctx->pc = 0x1227dcu;

    // 0x1227dc: 0xc048a1c  jal         func_122870
    ctx->pc = 0x1227DCu;
    SET_GPR_U32(ctx, 31, 0x1227E4u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x1227DCu, 0x1227E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227E4u;
label_1227e4:
    // 0x1227e4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1227e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1227e8: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x1227E8u;
    SET_GPR_U32(ctx, 31, 0x1227F0u);
    ctx->pc = 0x1227ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227E8u;
    // 0x1227ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x1227E8u, 0x1227F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F0u;
label_1227f0:
    // 0x1227f0: 0xc048a18  jal         func_122860
    ctx->pc = 0x1227F0u;
    SET_GPR_U32(ctx, 31, 0x1227F8u);
    ctx->pc = 0x1227F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F0u;
    // 0x1227f4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x1227F0u, 0x1227F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F8u;
label_1227f8:
    // 0x1227f8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1227F8u;
    SET_GPR_U32(ctx, 31, 0x122800u);
    ctx->pc = 0x1227FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F8u;
    // 0x1227fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1227F8u, 0x122800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122800u;
label_122800:
    // 0x122800: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x122800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->pc = 0x122804u;
}
