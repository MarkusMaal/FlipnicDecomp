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

// Function: caseD_5
// Address: 0x1ac3ac - 0x1ac3d0
void caseD_5_0x1ac3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1ac3ac");
#endif

    switch (ctx->pc) {
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3c8u: goto label_1ac3c8;
        default: break;
    }

    ctx->pc = 0x1ac3acu;

    // 0x1ac3ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac3b0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AC3B0u;
    SET_GPR_U32(ctx, 31, 0x1AC3B8u);
    ctx->pc = 0x1AC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3B0u;
    // 0x1ac3b4: 0xa22206d8  sb          $v0, 0x6D8($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC3B0u, 0x1AC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3B8u;
label_1ac3b8:
    // 0x1ac3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3bc: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1ac3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1ac3c0: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AC3C0u;
    SET_GPR_U32(ctx, 31, 0x1AC3C8u);
    ctx->pc = 0x1AC3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3C0u;
    // 0x1ac3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC3C0u, 0x1AC3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3C8u;
label_1ac3c8:
    // 0x1ac3c8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AC3C8u;
    SET_GPR_U32(ctx, 31, 0x1AC3D0u);
    ctx->pc = 0x1AC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3C8u;
    // 0x1ac3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC3C8u, 0x1AC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3D0u;
}
