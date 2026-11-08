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

// Function: entry_0011e3ac
// Address: 0x11e3ac - 0x11e3e8
void entry_0011e3ac_0x11e3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e3ac_0x11e3ac");
#endif

    switch (ctx->pc) {
        case 0x11e3bcu: goto label_11e3bc;
        case 0x11e3d4u: goto label_11e3d4;
        default: break;
    }

    ctx->pc = 0x11e3acu;

    // 0x11e3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11e3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3b4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E3B4u;
    SET_GPR_U32(ctx, 31, 0x11E3BCu);
    ctx->pc = 0x11E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3B4u;
    // 0x11e3b8: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E3B4u, 0x11E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3BCu;
label_11e3bc:
    // 0x11e3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11e3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3c0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3cc: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E3CCu;
    SET_GPR_U32(ctx, 31, 0x11E3D4u);
    ctx->pc = 0x11E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3CCu;
    // 0x11e3d0: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E3CCu, 0x11E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3D4u;
label_11e3d4:
    // 0x11e3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e3d8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E3D8u;
    {
        const bool branch_taken_0x11e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3D8u;
        // 0x11e3dc: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3d8) {
            ctx->pc = 0x11E3E8u;
            return;
        }
    }
    ctx->pc = 0x11E3E0u;
    // 0x11e3e0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x11E3E0u;
    {
        const bool branch_taken_0x11e3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3E0u;
        // 0x11e3e4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3e0) {
            ctx->pc = 0x11E420u;
            return;
        }
    }
    ctx->pc = 0x11E3E8u;
}
