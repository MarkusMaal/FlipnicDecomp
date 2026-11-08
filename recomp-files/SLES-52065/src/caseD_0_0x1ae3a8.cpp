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

// Function: caseD_0
// Address: 0x1ae3a8 - 0x1ae3d8
void caseD_0_0x1ae3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1ae3a8");
#endif

    switch (ctx->pc) {
        case 0x1ae3b0u: goto label_1ae3b0;
        case 0x1ae3c8u: goto label_1ae3c8;
        default: break;
    }

    ctx->pc = 0x1ae3a8u;

    // 0x1ae3a8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1AE3A8u;
    SET_GPR_U32(ctx, 31, 0x1AE3B0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AE3A8u, 0x1AE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3B0u;
label_1ae3b0:
    // 0x1ae3b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE3B4u;
    {
        const bool branch_taken_0x1ae3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3B4u;
        // 0x1ae3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3b4) {
            ctx->pc = 0x1AE3D8u;
            return;
        }
    }
    ctx->pc = 0x1AE3BCu;
    // 0x1ae3bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ae3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae3c0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AE3C0u;
    SET_GPR_U32(ctx, 31, 0x1AE3C8u);
    ctx->pc = 0x1AE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3C0u;
    // 0x1ae3c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AE3C0u, 0x1AE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3C8u;
label_1ae3c8:
    // 0x1ae3c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3d0: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1AE3D0u;
    SET_GPR_U32(ctx, 31, 0x1AE3D8u);
    ctx->pc = 0x1AE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3D0u;
    // 0x1ae3d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AE3D0u, 0x1AE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3D8u;
}
