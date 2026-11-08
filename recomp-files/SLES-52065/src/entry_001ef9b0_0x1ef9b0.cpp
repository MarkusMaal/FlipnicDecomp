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

// Function: entry_001ef9b0
// Address: 0x1ef9b0 - 0x1ef9e8
void entry_001ef9b0_0x1ef9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef9b0_0x1ef9b0");
#endif

    switch (ctx->pc) {
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9d4u: goto label_1ef9d4;
        case 0x1ef9e0u: goto label_1ef9e0;
        default: break;
    }

    ctx->pc = 0x1ef9b0u;

    // 0x1ef9b0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF9B0u;
    SET_GPR_U32(ctx, 31, 0x1EF9B8u);
    ctx->pc = 0x1EF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9B0u;
    // 0x1ef9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF9B0u, 0x1EF9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9B8u;
label_1ef9b8:
    // 0x1ef9b8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EF9B8u;
    SET_GPR_U32(ctx, 31, 0x1EF9C0u);
    ctx->pc = 0x1EF9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9B8u;
    // 0x1ef9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EF9B8u, 0x1EF9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9C0u;
label_1ef9c0:
    // 0x1ef9c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ef9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef9c4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF9C4u;
    {
        const bool branch_taken_0x1ef9c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9C4u;
        // 0x1ef9c8: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9c4) {
            ctx->pc = 0x1EF9E8u;
            return;
        }
    }
    ctx->pc = 0x1EF9CCu;
    // 0x1ef9cc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF9CCu;
    SET_GPR_U32(ctx, 31, 0x1EF9D4u);
    ctx->pc = 0x1EF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9CCu;
    // 0x1ef9d0: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF9CCu, 0x1EF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9D4u;
label_1ef9d4:
    // 0x1ef9d4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ef9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1ef9d8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EF9D8u;
    SET_GPR_U32(ctx, 31, 0x1EF9E0u);
    ctx->pc = 0x1EF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9D8u;
    // 0x1ef9dc: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EF9D8u, 0x1EF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9E0u;
label_1ef9e0:
    // 0x1ef9e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EF9E0u;
    {
        const bool branch_taken_0x1ef9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9E0u;
        // 0x1ef9e4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9e0) {
            ctx->pc = 0x1EFA14u;
            return;
        }
    }
    ctx->pc = 0x1EF9E8u;
}
