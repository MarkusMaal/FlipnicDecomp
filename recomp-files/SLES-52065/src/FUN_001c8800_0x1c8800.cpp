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

// Function: FUN_001c8800
// Address: 0x1c8800 - 0x1c8984
void FUN_001c8800_0x1c8800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8800_0x1c8800");
#endif

    switch (ctx->pc) {
        case 0x1c8814u: goto label_1c8814;
        case 0x1c8838u: goto label_1c8838;
        case 0x1c8844u: goto label_1c8844;
        case 0x1c8850u: goto label_1c8850;
        case 0x1c8864u: goto label_1c8864;
        case 0x1c8870u: goto label_1c8870;
        case 0x1c887cu: goto label_1c887c;
        case 0x1c8890u: goto label_1c8890;
        case 0x1c889cu: goto label_1c889c;
        case 0x1c88a8u: goto label_1c88a8;
        case 0x1c88bcu: goto label_1c88bc;
        case 0x1c88c8u: goto label_1c88c8;
        case 0x1c88d4u: goto label_1c88d4;
        case 0x1c88e8u: goto label_1c88e8;
        case 0x1c88f4u: goto label_1c88f4;
        case 0x1c8900u: goto label_1c8900;
        case 0x1c8914u: goto label_1c8914;
        case 0x1c8920u: goto label_1c8920;
        case 0x1c892cu: goto label_1c892c;
        case 0x1c8940u: goto label_1c8940;
        case 0x1c894cu: goto label_1c894c;
        case 0x1c8958u: goto label_1c8958;
        default: break;
    }

    ctx->pc = 0x1c8800u;

    // 0x1c8800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c8800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c8804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8808: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1c8808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1c880c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C880Cu;
    SET_GPR_U32(ctx, 31, 0x1C8814u);
    ctx->pc = 0x1C8810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C880Cu;
    // 0x1c8810: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C880Cu, 0x1C8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8814u;
label_1c8814:
    // 0x1c8814: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c8814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8818: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c8818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c881c: 0x2463bcb0  addiu       $v1, $v1, -0x4350
    ctx->pc = 0x1c881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950064));
    // 0x1c8820: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c8820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c8824: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c8824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c8828: 0x24a52420  addiu       $a1, $a1, 0x2420
    ctx->pc = 0x1c8828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9248));
    // 0x1c882c: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c882cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c8830: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C8830u;
    SET_GPR_U32(ctx, 31, 0x1C8838u);
    ctx->pc = 0x1C8834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8830u;
    // 0x1c8834: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C8830u, 0x1C8838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8838u;
label_1c8838:
    // 0x1c8838: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c8838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c883c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C883Cu;
    SET_GPR_U32(ctx, 31, 0x1C8844u);
    ctx->pc = 0x1C8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C883Cu;
    // 0x1c8840: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C883Cu, 0x1C8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8844u;
label_1c8844:
    // 0x1c8844: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c8844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c8848: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C8848u;
    SET_GPR_U32(ctx, 31, 0x1C8850u);
    ctx->pc = 0x1C884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8848u;
    // 0x1c884c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C8848u, 0x1C8850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8850u;
label_1c8850:
    // 0x1c8850: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c8850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c8854: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c8854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c8858: 0x24a52440  addiu       $a1, $a1, 0x2440
    ctx->pc = 0x1c8858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9280));
    // 0x1c885c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C885Cu;
    SET_GPR_U32(ctx, 31, 0x1C8864u);
    ctx->pc = 0x1C8860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C885Cu;
    // 0x1c8860: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C885Cu, 0x1C8864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8864u;
label_1c8864:
    // 0x1c8864: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c8864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8868: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C8868u;
    SET_GPR_U32(ctx, 31, 0x1C8870u);
    ctx->pc = 0x1C886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8868u;
    // 0x1c886c: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C8868u, 0x1C8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8870u;
label_1c8870:
    // 0x1c8870: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c8874: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C8874u;
    SET_GPR_U32(ctx, 31, 0x1C887Cu);
    ctx->pc = 0x1C8878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8874u;
    // 0x1c8878: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C8874u, 0x1C887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C887Cu;
label_1c887c:
    // 0x1c887c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c887cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c8880: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c8884: 0x24a52460  addiu       $a1, $a1, 0x2460
    ctx->pc = 0x1c8884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
    // 0x1c8888: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C8888u;
    SET_GPR_U32(ctx, 31, 0x1C8890u);
    ctx->pc = 0x1C888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8888u;
    // 0x1c888c: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C8888u, 0x1C8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8890u;
label_1c8890:
    // 0x1c8890: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c8890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8894: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C8894u;
    SET_GPR_U32(ctx, 31, 0x1C889Cu);
    ctx->pc = 0x1C8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8894u;
    // 0x1c8898: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C8894u, 0x1C889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C889Cu;
label_1c889c:
    // 0x1c889c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c88a0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C88A0u;
    SET_GPR_U32(ctx, 31, 0x1C88A8u);
    ctx->pc = 0x1C88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88A0u;
    // 0x1c88a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C88A0u, 0x1C88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88A8u;
label_1c88a8:
    // 0x1c88a8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c88a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c88ac: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c88acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c88b0: 0x24a52480  addiu       $a1, $a1, 0x2480
    ctx->pc = 0x1c88b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9344));
    // 0x1c88b4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C88B4u;
    SET_GPR_U32(ctx, 31, 0x1C88BCu);
    ctx->pc = 0x1C88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88B4u;
    // 0x1c88b8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C88B4u, 0x1C88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88BCu;
label_1c88bc:
    // 0x1c88bc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c88c0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C88C0u;
    SET_GPR_U32(ctx, 31, 0x1C88C8u);
    ctx->pc = 0x1C88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88C0u;
    // 0x1c88c4: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C88C0u, 0x1C88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88C8u;
label_1c88c8:
    // 0x1c88c8: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c88cc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C88CCu;
    SET_GPR_U32(ctx, 31, 0x1C88D4u);
    ctx->pc = 0x1C88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88CCu;
    // 0x1c88d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C88CCu, 0x1C88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88D4u;
label_1c88d4:
    // 0x1c88d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c88d8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c88dc: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x1c88dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x1c88e0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C88E0u;
    SET_GPR_U32(ctx, 31, 0x1C88E8u);
    ctx->pc = 0x1C88E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88E0u;
    // 0x1c88e4: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C88E0u, 0x1C88E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88E8u;
label_1c88e8:
    // 0x1c88e8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c88ec: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C88ECu;
    SET_GPR_U32(ctx, 31, 0x1C88F4u);
    ctx->pc = 0x1C88F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88ECu;
    // 0x1c88f0: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C88ECu, 0x1C88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88F4u;
label_1c88f4:
    // 0x1c88f4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c88f8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C88F8u;
    SET_GPR_U32(ctx, 31, 0x1C8900u);
    ctx->pc = 0x1C88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88F8u;
    // 0x1c88fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C88F8u, 0x1C8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8900u;
label_1c8900:
    // 0x1c8900: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c8900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c8904: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c8904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c8908: 0x24a524c0  addiu       $a1, $a1, 0x24C0
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9408));
    // 0x1c890c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C890Cu;
    SET_GPR_U32(ctx, 31, 0x1C8914u);
    ctx->pc = 0x1C8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C890Cu;
    // 0x1c8910: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C890Cu, 0x1C8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8914u;
label_1c8914:
    // 0x1c8914: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c8914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8918: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C8918u;
    SET_GPR_U32(ctx, 31, 0x1C8920u);
    ctx->pc = 0x1C891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8918u;
    // 0x1c891c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C8918u, 0x1C8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8920u;
label_1c8920:
    // 0x1c8920: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c8920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c8924: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C8924u;
    SET_GPR_U32(ctx, 31, 0x1C892Cu);
    ctx->pc = 0x1C8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8924u;
    // 0x1c8928: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C8924u, 0x1C892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C892Cu;
label_1c892c:
    // 0x1c892c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c8930: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c8934: 0x24a524e0  addiu       $a1, $a1, 0x24E0
    ctx->pc = 0x1c8934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9440));
    // 0x1c8938: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C8938u;
    SET_GPR_U32(ctx, 31, 0x1C8940u);
    ctx->pc = 0x1C893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8938u;
    // 0x1c893c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C8938u, 0x1C8940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8940u;
label_1c8940:
    // 0x1c8940: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c8940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8944: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C8944u;
    SET_GPR_U32(ctx, 31, 0x1C894Cu);
    ctx->pc = 0x1C8948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8944u;
    // 0x1c8948: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C8944u, 0x1C894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C894Cu;
label_1c894c:
    // 0x1c894c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c8950: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C8950u;
    SET_GPR_U32(ctx, 31, 0x1C8958u);
    ctx->pc = 0x1C8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8950u;
    // 0x1c8954: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C8950u, 0x1C8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8958u;
label_1c8958:
    // 0x1c8958: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c895c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8960: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x1c8960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1c8964: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c8964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8968: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1c8968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1c896c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8970: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1c8970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1c8974: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c8974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c8978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c897c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C897Cu;
        // 0x1c8980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C897Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8984u;
}
