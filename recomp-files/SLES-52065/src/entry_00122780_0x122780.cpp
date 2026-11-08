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

// Function: entry_00122780
// Address: 0x122780 - 0x1227a4
void entry_00122780_0x122780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122780_0x122780");
#endif

    switch (ctx->pc) {
        case 0x122788u: goto label_122788;
        case 0x122794u: goto label_122794;
        case 0x12279cu: goto label_12279c;
        default: break;
    }

    ctx->pc = 0x122780u;

    // 0x122780: 0xc048a1c  jal         func_122870
    ctx->pc = 0x122780u;
    SET_GPR_U32(ctx, 31, 0x122788u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x122780u, 0x122788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122788u;
label_122788:
    // 0x122788: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x122788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x12278c: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x12278Cu;
    SET_GPR_U32(ctx, 31, 0x122794u);
    ctx->pc = 0x122790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12278Cu;
    // 0x122790: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x12278Cu, 0x122794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122794u;
label_122794:
    // 0x122794: 0xc048a18  jal         func_122860
    ctx->pc = 0x122794u;
    SET_GPR_U32(ctx, 31, 0x12279Cu);
    ctx->pc = 0x122798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122794u;
    // 0x122798: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x122794u, 0x12279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12279Cu;
label_12279c:
    // 0x12279c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12279Cu;
    SET_GPR_U32(ctx, 31, 0x1227A4u);
    ctx->pc = 0x1227A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12279Cu;
    // 0x1227a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12279Cu, 0x1227A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227A4u;
}
