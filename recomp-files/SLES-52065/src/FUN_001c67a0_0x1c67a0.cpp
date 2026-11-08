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

// Function: FUN_001c67a0
// Address: 0x1c67a0 - 0x1c6874
void FUN_001c67a0_0x1c67a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c67a0_0x1c67a0");
#endif

    switch (ctx->pc) {
        case 0x1c67b4u: goto label_1c67b4;
        case 0x1c67d0u: goto label_1c67d0;
        case 0x1c67e4u: goto label_1c67e4;
        case 0x1c67f0u: goto label_1c67f0;
        case 0x1c67fcu: goto label_1c67fc;
        case 0x1c6810u: goto label_1c6810;
        case 0x1c681cu: goto label_1c681c;
        case 0x1c6828u: goto label_1c6828;
        case 0x1c683cu: goto label_1c683c;
        case 0x1c6848u: goto label_1c6848;
        case 0x1c6854u: goto label_1c6854;
        default: break;
    }

    ctx->pc = 0x1c67a0u;

    // 0x1c67a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c67a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c67a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c67a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c67a8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1c67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1c67ac: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C67ACu;
    SET_GPR_U32(ctx, 31, 0x1C67B4u);
    ctx->pc = 0x1C67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67ACu;
    // 0x1c67b0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C67ACu, 0x1C67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67B4u;
label_1c67b4:
    // 0x1c67b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c67b8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c67bc: 0x2463bc50  addiu       $v1, $v1, -0x43B0
    ctx->pc = 0x1c67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x1c67c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c67c4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c67c8: 0xc0745e4  jal         func_1D1790
    ctx->pc = 0x1C67C8u;
    SET_GPR_U32(ctx, 31, 0x1C67D0u);
    ctx->pc = 0x1C67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67C8u;
    // 0x1c67cc: 0x2444006c  addiu       $a0, $v0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1790u, 0x1C67C8u, 0x1C67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67D0u;
label_1c67d0:
    // 0x1c67d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c67d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c67d4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c67d8: 0x24a52060  addiu       $a1, $a1, 0x2060
    ctx->pc = 0x1c67d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8288));
    // 0x1c67dc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C67DCu;
    SET_GPR_U32(ctx, 31, 0x1C67E4u);
    ctx->pc = 0x1C67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67DCu;
    // 0x1c67e0: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C67DCu, 0x1C67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67E4u;
label_1c67e4:
    // 0x1c67e4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c67e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c67e8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C67E8u;
    SET_GPR_U32(ctx, 31, 0x1C67F0u);
    ctx->pc = 0x1C67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67E8u;
    // 0x1c67ec: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C67E8u, 0x1C67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67F0u;
label_1c67f0:
    // 0x1c67f0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c67f4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C67F4u;
    SET_GPR_U32(ctx, 31, 0x1C67FCu);
    ctx->pc = 0x1C67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67F4u;
    // 0x1c67f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C67F4u, 0x1C67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67FCu;
label_1c67fc:
    // 0x1c67fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c67fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c6800: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c6800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c6804: 0x24a52080  addiu       $a1, $a1, 0x2080
    ctx->pc = 0x1c6804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8320));
    // 0x1c6808: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C6808u;
    SET_GPR_U32(ctx, 31, 0x1C6810u);
    ctx->pc = 0x1C680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6808u;
    // 0x1c680c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C6808u, 0x1C6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6810u;
label_1c6810:
    // 0x1c6810: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c6810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c6814: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C6814u;
    SET_GPR_U32(ctx, 31, 0x1C681Cu);
    ctx->pc = 0x1C6818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6814u;
    // 0x1c6818: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C6814u, 0x1C681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C681Cu;
label_1c681c:
    // 0x1c681c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c6820: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C6820u;
    SET_GPR_U32(ctx, 31, 0x1C6828u);
    ctx->pc = 0x1C6824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6820u;
    // 0x1c6824: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C6820u, 0x1C6828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6828u;
label_1c6828:
    // 0x1c6828: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c6828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c682c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c6830: 0x24a520a0  addiu       $a1, $a1, 0x20A0
    ctx->pc = 0x1c6830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8352));
    // 0x1c6834: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C6834u;
    SET_GPR_U32(ctx, 31, 0x1C683Cu);
    ctx->pc = 0x1C6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6834u;
    // 0x1c6838: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C6834u, 0x1C683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C683Cu;
label_1c683c:
    // 0x1c683c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c6840: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C6840u;
    SET_GPR_U32(ctx, 31, 0x1C6848u);
    ctx->pc = 0x1C6844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6840u;
    // 0x1c6844: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C6840u, 0x1C6848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6848u;
label_1c6848:
    // 0x1c6848: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c6848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c684c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C684Cu;
    SET_GPR_U32(ctx, 31, 0x1C6854u);
    ctx->pc = 0x1C6850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C684Cu;
    // 0x1c6850: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C684Cu, 0x1C6854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6854u;
label_1c6854:
    // 0x1c6854: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c6854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c6858: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c6858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1c685c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c6860: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1c6860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6864: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c6868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c686c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C686Cu;
        // 0x1c6870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C686Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6874u;
}
