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

// Function: entry_00104fb0
// Address: 0x104fb0 - 0x104fec
void entry_00104fb0_0x104fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104fb0_0x104fb0");
#endif

    switch (ctx->pc) {
        case 0x104fb8u: goto label_104fb8;
        case 0x104fccu: goto label_104fcc;
        default: break;
    }

    ctx->pc = 0x104fb0u;

    // 0x104fb0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104FB0u;
    SET_GPR_U32(ctx, 31, 0x104FB8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104FB0u, 0x104FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FB8u;
label_104fb8:
    // 0x104fb8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x104FB8u;
    {
        const bool branch_taken_0x104fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FB8u;
        // 0x104fbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fb8) {
            ctx->pc = 0x105020u;
            return;
        }
    }
    ctx->pc = 0x104FC0u;
    // 0x104fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fc4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104FC4u;
    SET_GPR_U32(ctx, 31, 0x104FCCu);
    ctx->pc = 0x104FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FC4u;
    // 0x104fc8: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104FC4u, 0x104FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FCCu;
label_104fcc:
    // 0x104fcc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104fd0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104fd4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104fd8: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x104fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x104fdc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104fe0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104fe4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x104fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x104fe8: 0x24500280  addiu       $s0, $v0, 0x280
    ctx->pc = 0x104fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->pc = 0x104fecu;
}
