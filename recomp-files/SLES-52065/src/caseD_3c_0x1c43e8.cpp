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

// Function: caseD_3c
// Address: 0x1c43e8 - 0x1c4408
void caseD_3c_0x1c43e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3c_0x1c43e8");
#endif

    switch (ctx->pc) {
        case 0x1c43f4u: goto label_1c43f4;
        default: break;
    }

    ctx->pc = 0x1c43e8u;

    // 0x1c43e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c43e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43ec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C43ECu;
    SET_GPR_U32(ctx, 31, 0x1C43F4u);
    ctx->pc = 0x1C43F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43ECu;
    // 0x1c43f0: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C43ECu, 0x1C43F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43F4u;
label_1c43f4:
    // 0x1c43f4: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1c43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1c43f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c43f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43fc: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c4400: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C4400u;
    SET_GPR_U32(ctx, 31, 0x1C4408u);
    ctx->pc = 0x1C4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4400u;
    // 0x1c4404: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C4400u, 0x1C4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4408u;
}
