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

// Function: entry_001c31a8
// Address: 0x1c31a8 - 0x1c31dc
void entry_001c31a8_0x1c31a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c31a8_0x1c31a8");
#endif

    switch (ctx->pc) {
        case 0x1c31b8u: goto label_1c31b8;
        case 0x1c31c0u: goto label_1c31c0;
        case 0x1c31d0u: goto label_1c31d0;
        case 0x1c31d8u: goto label_1c31d8;
        default: break;
    }

    ctx->pc = 0x1c31a8u;

    // 0x1c31a8: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c31ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C31B0u;
    SET_GPR_U32(ctx, 31, 0x1C31B8u);
    ctx->pc = 0x1C31B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B0u;
    // 0x1c31b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C31B0u, 0x1C31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31B8u;
label_1c31b8:
    // 0x1c31b8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C31B8u;
    SET_GPR_U32(ctx, 31, 0x1C31C0u);
    ctx->pc = 0x1C31BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B8u;
    // 0x1c31bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C31B8u, 0x1C31C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31C0u;
label_1c31c0:
    // 0x1c31c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c31c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C31C8u;
    SET_GPR_U32(ctx, 31, 0x1C31D0u);
    ctx->pc = 0x1C31CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31C8u;
    // 0x1c31cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C31C8u, 0x1C31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31D0u;
label_1c31d0:
    // 0x1c31d0: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C31D0u;
    SET_GPR_U32(ctx, 31, 0x1C31D8u);
    ctx->pc = 0x1C31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31D0u;
    // 0x1c31d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C31D0u, 0x1C31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31D8u;
label_1c31d8:
    // 0x1c31d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c31dcu;
}
