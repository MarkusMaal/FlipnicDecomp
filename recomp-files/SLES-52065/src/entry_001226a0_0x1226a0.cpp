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

// Function: entry_001226a0
// Address: 0x1226a0 - 0x1226c4
void entry_001226a0_0x1226a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226a0_0x1226a0");
#endif

    switch (ctx->pc) {
        case 0x1226a8u: goto label_1226a8;
        case 0x1226b4u: goto label_1226b4;
        case 0x1226bcu: goto label_1226bc;
        default: break;
    }

    ctx->pc = 0x1226a0u;

    // 0x1226a0: 0xc048a1c  jal         func_122870
    ctx->pc = 0x1226A0u;
    SET_GPR_U32(ctx, 31, 0x1226A8u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x1226A0u, 0x1226A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226A8u;
label_1226a8:
    // 0x1226a8: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1226a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1226ac: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x1226ACu;
    SET_GPR_U32(ctx, 31, 0x1226B4u);
    ctx->pc = 0x1226B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226ACu;
    // 0x1226b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x1226ACu, 0x1226B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226B4u;
label_1226b4:
    // 0x1226b4: 0xc048a18  jal         func_122860
    ctx->pc = 0x1226B4u;
    SET_GPR_U32(ctx, 31, 0x1226BCu);
    ctx->pc = 0x1226B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226B4u;
    // 0x1226b8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x1226B4u, 0x1226BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226BCu;
label_1226bc:
    // 0x1226bc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1226BCu;
    SET_GPR_U32(ctx, 31, 0x1226C4u);
    ctx->pc = 0x1226C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226BCu;
    // 0x1226c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1226BCu, 0x1226C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226C4u;
}
