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

// Function: FUN_001c79f0
// Address: 0x1c79f0 - 0x1c7cd4
void FUN_001c79f0_0x1c79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c79f0_0x1c79f0");
#endif

    switch (ctx->pc) {
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a38u: goto label_1c7a38;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a50u: goto label_1c7a50;
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a70u: goto label_1c7a70;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7abcu: goto label_1c7abc;
        case 0x1c7ac8u: goto label_1c7ac8;
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7af4u: goto label_1c7af4;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b14u: goto label_1c7b14;
        case 0x1c7b20u: goto label_1c7b20;
        case 0x1c7b2cu: goto label_1c7b2c;
        case 0x1c7b40u: goto label_1c7b40;
        case 0x1c7b4cu: goto label_1c7b4c;
        case 0x1c7b58u: goto label_1c7b58;
        case 0x1c7b6cu: goto label_1c7b6c;
        case 0x1c7b78u: goto label_1c7b78;
        case 0x1c7b84u: goto label_1c7b84;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7ba4u: goto label_1c7ba4;
        case 0x1c7bb0u: goto label_1c7bb0;
        case 0x1c7bc4u: goto label_1c7bc4;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7bdcu: goto label_1c7bdc;
        case 0x1c7bf0u: goto label_1c7bf0;
        case 0x1c7bfcu: goto label_1c7bfc;
        case 0x1c7c08u: goto label_1c7c08;
        case 0x1c7c1cu: goto label_1c7c1c;
        case 0x1c7c28u: goto label_1c7c28;
        case 0x1c7c34u: goto label_1c7c34;
        case 0x1c7c48u: goto label_1c7c48;
        case 0x1c7c54u: goto label_1c7c54;
        case 0x1c7c60u: goto label_1c7c60;
        case 0x1c7c74u: goto label_1c7c74;
        case 0x1c7c80u: goto label_1c7c80;
        case 0x1c7c8cu: goto label_1c7c8c;
        case 0x1c7ca0u: goto label_1c7ca0;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7cb8u: goto label_1c7cb8;
        default: break;
    }

    ctx->pc = 0x1c79f0u;

    // 0x1c79f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c79f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c79f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c79f8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1c79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1c79fc: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C79FCu;
    SET_GPR_U32(ctx, 31, 0x1C7A04u);
    ctx->pc = 0x1C7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79FCu;
    // 0x1c7a00: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C79FCu, 0x1C7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A04u;
label_1c7a04:
    // 0x1c7a04: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7a08: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c7a0c: 0x2463bc80  addiu       $v1, $v1, -0x4380
    ctx->pc = 0x1c7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950016));
    // 0x1c7a10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7a14: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c7a18: 0x24a52200  addiu       $a1, $a1, 0x2200
    ctx->pc = 0x1c7a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
    // 0x1c7a1c: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c7a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c7a20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c7a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c7a24: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7a28: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1c7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1c7a2c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7a30: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7A30u;
    SET_GPR_U32(ctx, 31, 0x1C7A38u);
    ctx->pc = 0x1C7A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A30u;
    // 0x1c7a34: 0xac400064  sw          $zero, 0x64($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7A30u, 0x1C7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A38u;
label_1c7a38:
    // 0x1c7a38: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7a3c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A44u);
    ctx->pc = 0x1C7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A3Cu;
    // 0x1c7a40: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7A3Cu, 0x1C7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A44u;
label_1c7a44:
    // 0x1c7a44: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c7a48: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7A48u;
    SET_GPR_U32(ctx, 31, 0x1C7A50u);
    ctx->pc = 0x1C7A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A48u;
    // 0x1c7a4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7A48u, 0x1C7A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A50u;
label_1c7a50:
    // 0x1c7a50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7a54: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c7a58: 0x24a52220  addiu       $a1, $a1, 0x2220
    ctx->pc = 0x1c7a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8736));
    // 0x1c7a5c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A64u);
    ctx->pc = 0x1C7A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A5Cu;
    // 0x1c7a60: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7A5Cu, 0x1C7A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A64u;
label_1c7a64:
    // 0x1c7a64: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7a68: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7A68u;
    SET_GPR_U32(ctx, 31, 0x1C7A70u);
    ctx->pc = 0x1C7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A68u;
    // 0x1c7a6c: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7A68u, 0x1C7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A70u;
label_1c7a70:
    // 0x1c7a70: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c7a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c7a74: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7A74u;
    SET_GPR_U32(ctx, 31, 0x1C7A7Cu);
    ctx->pc = 0x1C7A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A74u;
    // 0x1c7a78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7A74u, 0x1C7A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A7Cu;
label_1c7a7c:
    // 0x1c7a7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7a80: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c7a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c7a84: 0x24a52240  addiu       $a1, $a1, 0x2240
    ctx->pc = 0x1c7a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8768));
    // 0x1c7a88: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7A88u;
    SET_GPR_U32(ctx, 31, 0x1C7A90u);
    ctx->pc = 0x1C7A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A88u;
    // 0x1c7a8c: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7A88u, 0x1C7A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A90u;
label_1c7a90:
    // 0x1c7a90: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7a94: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7A94u;
    SET_GPR_U32(ctx, 31, 0x1C7A9Cu);
    ctx->pc = 0x1C7A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A94u;
    // 0x1c7a98: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7A94u, 0x1C7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A9Cu;
label_1c7a9c:
    // 0x1c7a9c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c7a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c7aa0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7AA0u;
    SET_GPR_U32(ctx, 31, 0x1C7AA8u);
    ctx->pc = 0x1C7AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AA0u;
    // 0x1c7aa4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7AA0u, 0x1C7AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AA8u;
label_1c7aa8:
    // 0x1c7aa8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7aac: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c7ab0: 0x24a52260  addiu       $a1, $a1, 0x2260
    ctx->pc = 0x1c7ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8800));
    // 0x1c7ab4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7AB4u;
    SET_GPR_U32(ctx, 31, 0x1C7ABCu);
    ctx->pc = 0x1C7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AB4u;
    // 0x1c7ab8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7AB4u, 0x1C7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ABCu;
label_1c7abc:
    // 0x1c7abc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7ac0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7AC0u;
    SET_GPR_U32(ctx, 31, 0x1C7AC8u);
    ctx->pc = 0x1C7AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AC0u;
    // 0x1c7ac4: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7AC0u, 0x1C7AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AC8u;
label_1c7ac8:
    // 0x1c7ac8: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c7ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c7acc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7ACCu;
    SET_GPR_U32(ctx, 31, 0x1C7AD4u);
    ctx->pc = 0x1C7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7ACCu;
    // 0x1c7ad0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7ACCu, 0x1C7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AD4u;
label_1c7ad4:
    // 0x1c7ad4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7ad8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c7adc: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x1c7adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
    // 0x1c7ae0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7AE0u;
    SET_GPR_U32(ctx, 31, 0x1C7AE8u);
    ctx->pc = 0x1C7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AE0u;
    // 0x1c7ae4: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7AE0u, 0x1C7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AE8u;
label_1c7ae8:
    // 0x1c7ae8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7aec: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7AECu;
    SET_GPR_U32(ctx, 31, 0x1C7AF4u);
    ctx->pc = 0x1C7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AECu;
    // 0x1c7af0: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7AECu, 0x1C7AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AF4u;
label_1c7af4:
    // 0x1c7af4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c7af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c7af8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7AF8u;
    SET_GPR_U32(ctx, 31, 0x1C7B00u);
    ctx->pc = 0x1C7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AF8u;
    // 0x1c7afc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7AF8u, 0x1C7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B00u;
label_1c7b00:
    // 0x1c7b00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7b04: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c7b08: 0x24a522a0  addiu       $a1, $a1, 0x22A0
    ctx->pc = 0x1c7b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8864));
    // 0x1c7b0c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B14u);
    ctx->pc = 0x1C7B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B0Cu;
    // 0x1c7b10: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7B0Cu, 0x1C7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B14u;
label_1c7b14:
    // 0x1c7b14: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7b18: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7B18u;
    SET_GPR_U32(ctx, 31, 0x1C7B20u);
    ctx->pc = 0x1C7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B18u;
    // 0x1c7b1c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7B18u, 0x1C7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B20u;
label_1c7b20:
    // 0x1c7b20: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c7b24: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7B24u;
    SET_GPR_U32(ctx, 31, 0x1C7B2Cu);
    ctx->pc = 0x1C7B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B24u;
    // 0x1c7b28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7B24u, 0x1C7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B2Cu;
label_1c7b2c:
    // 0x1c7b2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7b30: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c7b34: 0x24a522c0  addiu       $a1, $a1, 0x22C0
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8896));
    // 0x1c7b38: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7B38u;
    SET_GPR_U32(ctx, 31, 0x1C7B40u);
    ctx->pc = 0x1C7B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B38u;
    // 0x1c7b3c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7B38u, 0x1C7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B40u;
label_1c7b40:
    // 0x1c7b40: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7b44: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7B44u;
    SET_GPR_U32(ctx, 31, 0x1C7B4Cu);
    ctx->pc = 0x1C7B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B44u;
    // 0x1c7b48: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7B44u, 0x1C7B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B4Cu;
label_1c7b4c:
    // 0x1c7b4c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c7b50: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7B50u;
    SET_GPR_U32(ctx, 31, 0x1C7B58u);
    ctx->pc = 0x1C7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B50u;
    // 0x1c7b54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7B50u, 0x1C7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B58u;
label_1c7b58:
    // 0x1c7b58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7b5c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c7b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c7b60: 0x24a522e0  addiu       $a1, $a1, 0x22E0
    ctx->pc = 0x1c7b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8928));
    // 0x1c7b64: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7B64u;
    SET_GPR_U32(ctx, 31, 0x1C7B6Cu);
    ctx->pc = 0x1C7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B64u;
    // 0x1c7b68: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7B64u, 0x1C7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B6Cu;
label_1c7b6c:
    // 0x1c7b6c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7b70: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7B70u;
    SET_GPR_U32(ctx, 31, 0x1C7B78u);
    ctx->pc = 0x1C7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B70u;
    // 0x1c7b74: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7B70u, 0x1C7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B78u;
label_1c7b78:
    // 0x1c7b78: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c7b7c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B84u);
    ctx->pc = 0x1C7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B7Cu;
    // 0x1c7b80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7B7Cu, 0x1C7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B84u;
label_1c7b84:
    // 0x1c7b84: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7b88: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c7b8c: 0x24a52300  addiu       $a1, $a1, 0x2300
    ctx->pc = 0x1c7b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    // 0x1c7b90: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7B90u;
    SET_GPR_U32(ctx, 31, 0x1C7B98u);
    ctx->pc = 0x1C7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B90u;
    // 0x1c7b94: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7B90u, 0x1C7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B98u;
label_1c7b98:
    // 0x1c7b98: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7b9c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7BA4u);
    ctx->pc = 0x1C7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B9Cu;
    // 0x1c7ba0: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7B9Cu, 0x1C7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BA4u;
label_1c7ba4:
    // 0x1c7ba4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c7ba8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7BA8u;
    SET_GPR_U32(ctx, 31, 0x1C7BB0u);
    ctx->pc = 0x1C7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BA8u;
    // 0x1c7bac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7BA8u, 0x1C7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BB0u;
label_1c7bb0:
    // 0x1c7bb0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7bb4: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c7bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c7bb8: 0x24a52320  addiu       $a1, $a1, 0x2320
    ctx->pc = 0x1c7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8992));
    // 0x1c7bbc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7BBCu;
    SET_GPR_U32(ctx, 31, 0x1C7BC4u);
    ctx->pc = 0x1C7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BBCu;
    // 0x1c7bc0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7BBCu, 0x1C7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BC4u;
label_1c7bc4:
    // 0x1c7bc4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7bc8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7BC8u;
    SET_GPR_U32(ctx, 31, 0x1C7BD0u);
    ctx->pc = 0x1C7BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BC8u;
    // 0x1c7bcc: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7BC8u, 0x1C7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BD0u;
label_1c7bd0:
    // 0x1c7bd0: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c7bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c7bd4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7BD4u;
    SET_GPR_U32(ctx, 31, 0x1C7BDCu);
    ctx->pc = 0x1C7BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BD4u;
    // 0x1c7bd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7BD4u, 0x1C7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BDCu;
label_1c7bdc:
    // 0x1c7bdc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7be0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c7be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c7be4: 0x24a52340  addiu       $a1, $a1, 0x2340
    ctx->pc = 0x1c7be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9024));
    // 0x1c7be8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7BE8u;
    SET_GPR_U32(ctx, 31, 0x1C7BF0u);
    ctx->pc = 0x1C7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BE8u;
    // 0x1c7bec: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7BE8u, 0x1C7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BF0u;
label_1c7bf0:
    // 0x1c7bf0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7bf4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7BF4u;
    SET_GPR_U32(ctx, 31, 0x1C7BFCu);
    ctx->pc = 0x1C7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BF4u;
    // 0x1c7bf8: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7BF4u, 0x1C7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BFCu;
label_1c7bfc:
    // 0x1c7bfc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c7c00: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7C00u;
    SET_GPR_U32(ctx, 31, 0x1C7C08u);
    ctx->pc = 0x1C7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C00u;
    // 0x1c7c04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7C00u, 0x1C7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C08u;
label_1c7c08:
    // 0x1c7c08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7c0c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c7c10: 0x24a52360  addiu       $a1, $a1, 0x2360
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9056));
    // 0x1c7c14: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7C14u;
    SET_GPR_U32(ctx, 31, 0x1C7C1Cu);
    ctx->pc = 0x1C7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C14u;
    // 0x1c7c18: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7C14u, 0x1C7C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C1Cu;
label_1c7c1c:
    // 0x1c7c1c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7c20: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7C20u;
    SET_GPR_U32(ctx, 31, 0x1C7C28u);
    ctx->pc = 0x1C7C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C20u;
    // 0x1c7c24: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7C20u, 0x1C7C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C28u;
label_1c7c28:
    // 0x1c7c28: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c7c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c7c2c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C34u);
    ctx->pc = 0x1C7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C2Cu;
    // 0x1c7c30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7C2Cu, 0x1C7C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C34u;
label_1c7c34:
    // 0x1c7c34: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7c38: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c7c3c: 0x24a52380  addiu       $a1, $a1, 0x2380
    ctx->pc = 0x1c7c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9088));
    // 0x1c7c40: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7C40u;
    SET_GPR_U32(ctx, 31, 0x1C7C48u);
    ctx->pc = 0x1C7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C40u;
    // 0x1c7c44: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7C40u, 0x1C7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C48u;
label_1c7c48:
    // 0x1c7c48: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7c4c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C54u);
    ctx->pc = 0x1C7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C4Cu;
    // 0x1c7c50: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7C4Cu, 0x1C7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C54u;
label_1c7c54:
    // 0x1c7c54: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c7c58: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7C58u;
    SET_GPR_U32(ctx, 31, 0x1C7C60u);
    ctx->pc = 0x1C7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C58u;
    // 0x1c7c5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7C58u, 0x1C7C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C60u;
label_1c7c60:
    // 0x1c7c60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7c64: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1c7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c7c68: 0x24a523a0  addiu       $a1, $a1, 0x23A0
    ctx->pc = 0x1c7c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9120));
    // 0x1c7c6c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C74u);
    ctx->pc = 0x1C7C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C6Cu;
    // 0x1c7c70: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7C6Cu, 0x1C7C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C74u;
label_1c7c74:
    // 0x1c7c74: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7c78: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7C78u;
    SET_GPR_U32(ctx, 31, 0x1C7C80u);
    ctx->pc = 0x1C7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C78u;
    // 0x1c7c7c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7C78u, 0x1C7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C80u;
label_1c7c80:
    // 0x1c7c80: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1c7c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c7c84: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7C84u;
    SET_GPR_U32(ctx, 31, 0x1C7C8Cu);
    ctx->pc = 0x1C7C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C84u;
    // 0x1c7c88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7C84u, 0x1C7C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C8Cu;
label_1c7c8c:
    // 0x1c7c8c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7c90: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1c7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1c7c94: 0x24a523c0  addiu       $a1, $a1, 0x23C0
    ctx->pc = 0x1c7c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9152));
    // 0x1c7c98: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C7C98u;
    SET_GPR_U32(ctx, 31, 0x1C7CA0u);
    ctx->pc = 0x1C7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C98u;
    // 0x1c7c9c: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C7C98u, 0x1C7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CA0u;
label_1c7ca0:
    // 0x1c7ca0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c7ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7ca4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C7CA4u;
    SET_GPR_U32(ctx, 31, 0x1C7CACu);
    ctx->pc = 0x1C7CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CA4u;
    // 0x1c7ca8: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C7CA4u, 0x1C7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CACu;
label_1c7cac:
    // 0x1c7cac: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1c7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1c7cb0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C7CB0u;
    SET_GPR_U32(ctx, 31, 0x1C7CB8u);
    ctx->pc = 0x1C7CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CB0u;
    // 0x1c7cb4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C7CB0u, 0x1C7CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CB8u;
label_1c7cb8:
    // 0x1c7cb8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7cc0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1c7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1c7cc4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c7cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CCCu;
        // 0x1c7cd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7CD4u;
}
