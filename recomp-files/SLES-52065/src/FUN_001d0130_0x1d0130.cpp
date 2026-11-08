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

// Function: FUN_001d0130
// Address: 0x1d0130 - 0x1d0190
void FUN_001d0130_0x1d0130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0130_0x1d0130");
#endif

    switch (ctx->pc) {
        case 0x1d0144u: goto label_1d0144;
        case 0x1d0168u: goto label_1d0168;
        case 0x1d0174u: goto label_1d0174;
        case 0x1d0180u: goto label_1d0180;
        default: break;
    }

    ctx->pc = 0x1d0130u;

    // 0x1d0130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0138: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1d0138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1d013c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1D013Cu;
    SET_GPR_U32(ctx, 31, 0x1D0144u);
    ctx->pc = 0x1D0140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D013Cu;
    // 0x1d0140: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1D013Cu, 0x1D0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0144u;
label_1d0144:
    // 0x1d0144: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d0144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d0148: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1d0148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1d014c: 0x2463bf50  addiu       $v1, $v1, -0x40B0
    ctx->pc = 0x1d014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950736));
    // 0x1d0150: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0154: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1d0158: 0x24a531d0  addiu       $a1, $a1, 0x31D0
    ctx->pc = 0x1d0158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12752));
    // 0x1d015c: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1d015cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1d0160: 0xc04889c  jal         func_122270
    ctx->pc = 0x1D0160u;
    SET_GPR_U32(ctx, 31, 0x1D0168u);
    ctx->pc = 0x1D0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0160u;
    // 0x1d0164: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1D0160u, 0x1D0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0168u;
label_1d0168:
    // 0x1d0168: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1d0168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d016c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1D016Cu;
    SET_GPR_U32(ctx, 31, 0x1D0174u);
    ctx->pc = 0x1D0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D016Cu;
    // 0x1d0170: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1D016Cu, 0x1D0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0174u;
label_1d0174:
    // 0x1d0174: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1d0178: 0xc04619c  jal         func_118670
    ctx->pc = 0x1D0178u;
    SET_GPR_U32(ctx, 31, 0x1D0180u);
    ctx->pc = 0x1D017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0178u;
    // 0x1d017c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1D0178u, 0x1D0180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0180u;
label_1d0180:
    // 0x1d0180: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d0180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d0184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0188: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0188u;
        // 0x1d018c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0190u;
}
