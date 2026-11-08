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

// Function: entry_001f11b0
// Address: 0x1f11b0 - 0x1f11d0
void entry_001f11b0_0x1f11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f11b0_0x1f11b0");
#endif

    switch (ctx->pc) {
        case 0x1f11b8u: goto label_1f11b8;
        case 0x1f11c0u: goto label_1f11c0;
        default: break;
    }

    ctx->pc = 0x1f11b0u;

    // 0x1f11b0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F11B0u;
    SET_GPR_U32(ctx, 31, 0x1F11B8u);
    ctx->pc = 0x1F11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11B0u;
    // 0x1f11b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F11B0u, 0x1F11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11B8u;
label_1f11b8:
    // 0x1f11b8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F11B8u;
    SET_GPR_U32(ctx, 31, 0x1F11C0u);
    ctx->pc = 0x1F11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11B8u;
    // 0x1f11bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F11B8u, 0x1F11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11C0u;
label_1f11c0:
    // 0x1f11c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f11c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f11c8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f11c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f11cc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1f11ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1f11d0u;
}
