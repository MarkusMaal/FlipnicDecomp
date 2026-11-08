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

// Function: entry_001bf1ac
// Address: 0x1bf1ac - 0x1bf1e0
void entry_001bf1ac_0x1bf1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf1ac_0x1bf1ac");
#endif

    switch (ctx->pc) {
        case 0x1bf1b4u: goto label_1bf1b4;
        case 0x1bf1c8u: goto label_1bf1c8;
        case 0x1bf1d8u: goto label_1bf1d8;
        default: break;
    }

    ctx->pc = 0x1bf1acu;

    // 0x1bf1ac: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1BF1ACu;
    SET_GPR_U32(ctx, 31, 0x1BF1B4u);
    ctx->pc = 0x1BF1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1ACu;
    // 0x1bf1b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1BF1ACu, 0x1BF1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1B4u;
label_1bf1b4:
    // 0x1bf1b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1bc: 0x8c26f4e8  lw          $a2, -0xB18($at)
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bf1c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF1C0u;
    SET_GPR_U32(ctx, 31, 0x1BF1C8u);
    ctx->pc = 0x1BF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1C0u;
    // 0x1bf1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF1C0u, 0x1BF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1C8u;
label_1bf1c8:
    // 0x1bf1c8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1d0: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BF1D0u;
    SET_GPR_U32(ctx, 31, 0x1BF1D8u);
    ctx->pc = 0x1BF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1D0u;
    // 0x1bf1d4: 0x24a530a0  addiu       $a1, $a1, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BF1D0u, 0x1BF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1D8u;
label_1bf1d8:
    // 0x1bf1d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf1d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bf1e0u;
}
