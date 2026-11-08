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

// Function: default
// Address: 0x1cd3cc - 0x1cd3ec
void ps2_default_0x1cd3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1cd3cc");
#endif

    switch (ctx->pc) {
        case 0x1cd3d4u: goto label_1cd3d4;
        case 0x1cd3e8u: goto label_1cd3e8;
        default: break;
    }

    ctx->pc = 0x1cd3ccu;

    // 0x1cd3cc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CD3CCu;
    SET_GPR_U32(ctx, 31, 0x1CD3D4u);
    ctx->pc = 0x1CD3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3CCu;
    // 0x1cd3d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CD3CCu, 0x1CD3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3D4u;
label_1cd3d4:
    // 0x1cd3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD3D4u;
    {
        const bool branch_taken_0x1cd3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3D4u;
        // 0x1cd3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3d4) {
            ctx->pc = 0x1CD3ECu;
            return;
        }
    }
    ctx->pc = 0x1CD3DCu;
    // 0x1cd3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3e0: 0xc073680  jal         func_1CDA00
    ctx->pc = 0x1CD3E0u;
    SET_GPR_U32(ctx, 31, 0x1CD3E8u);
    ctx->pc = 0x1CD3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3E0u;
    // 0x1cd3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA00u, 0x1CD3E0u, 0x1CD3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3E8u;
label_1cd3e8:
    // 0x1cd3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd3ecu;
}
