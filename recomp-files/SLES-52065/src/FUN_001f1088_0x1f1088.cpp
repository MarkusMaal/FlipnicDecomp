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

// Function: FUN_001f1088
// Address: 0x1f1088 - 0x1f11f0
void FUN_001f1088_0x1f1088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1088_0x1f1088");
#endif

    switch (ctx->pc) {
        case 0x1f10b0u: goto label_1f10b0;
        case 0x1f10bcu: goto label_1f10bc;
        case 0x1f10d4u: goto label_1f10d4;
        case 0x1f10f8u: goto label_1f10f8;
        case 0x1f111cu: goto label_1f111c;
        case 0x1f1168u: goto label_1f1168;
        case 0x1f1178u: goto label_1f1178;
        case 0x1f1180u: goto label_1f1180;
        case 0x1f1198u: goto label_1f1198;
        case 0x1f11a8u: goto label_1f11a8;
        case 0x1f11b8u: goto label_1f11b8;
        case 0x1f11c0u: goto label_1f11c0;
        default: break;
    }

    ctx->pc = 0x1f1088u;

    // 0x1f1088: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f1088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f108c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f1090: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f1090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f1094: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f1094u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f1098: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f109c: 0x2692e200  addiu       $s2, $s4, -0x1E00
    ctx->pc = 0x1f109cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959616));
    // 0x1f10a0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f10a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f10a4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f10a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f10a8: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1F10A8u;
    SET_GPR_U32(ctx, 31, 0x1F10B0u);
    ctx->pc = 0x1F10ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10A8u;
    // 0x1f10ac: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1F10A8u, 0x1F10B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10B0u;
label_1f10b0:
    // 0x1f10b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f10b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10b4: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F10B4u;
    SET_GPR_U32(ctx, 31, 0x1F10BCu);
    ctx->pc = 0x1F10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10B4u;
    // 0x1f10b8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F10B4u, 0x1F10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10BCu;
label_1f10bc:
    // 0x1f10bc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f10c0: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f10c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F10C4u;
    {
        const bool branch_taken_0x1f10c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f10c4) {
            ctx->pc = 0x1F10DCu;
            goto label_1f10dc;
        }
    }
    ctx->pc = 0x1F10CCu;
    // 0x1f10cc: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F10CCu;
    SET_GPR_U32(ctx, 31, 0x1F10D4u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F10CCu, 0x1F10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10D4u;
label_1f10d4:
    // 0x1f10d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1F10D4u;
    {
        const bool branch_taken_0x1f10d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10D4u;
        // 0x1f10d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10d4) {
            ctx->pc = 0x1F11D0u;
            goto label_1f11d0;
        }
    }
    ctx->pc = 0x1F10DCu;
label_1f10dc:
    // 0x1f10dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F10DCu;
    {
        const bool branch_taken_0x1f10dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10dc) {
            ctx->pc = 0x1F10F0u;
            goto label_1f10f0;
        }
    }
    ctx->pc = 0x1F10E4u;
    // 0x1f10e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f10e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F10E8u;
    {
        const bool branch_taken_0x1f10e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f10e8) {
            ctx->pc = 0x1F10ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F10E8u;
            // 0x1f10ec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1100u;
            goto label_1f1100;
        }
    }
    ctx->pc = 0x1F10F0u;
label_1f10f0:
    // 0x1f10f0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F10F0u;
    SET_GPR_U32(ctx, 31, 0x1F10F8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F10F0u, 0x1F10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10F8u;
label_1f10f8:
    // 0x1f10f8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1F10F8u;
    {
        const bool branch_taken_0x1f10f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10F8u;
        // 0x1f10fc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10f8) {
            ctx->pc = 0x1F11D0u;
            goto label_1f11d0;
        }
    }
    ctx->pc = 0x1F1100u;
label_1f1100:
    // 0x1f1100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1104: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1108: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f110c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f110cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f1110: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1114: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1114u;
    SET_GPR_U32(ctx, 31, 0x1F111Cu);
    ctx->pc = 0x1F1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1114u;
    // 0x1f1118: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1114u, 0x1F111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F111Cu;
label_1f111c:
    // 0x1f111c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f111cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1120: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f1120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1124: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f1124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f1128: 0xae91e200  sw          $s1, -0x1E00($s4)
    ctx->pc = 0x1f1128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 17));
    // 0x1f112c: 0x2453ee40  addiu       $s3, $v0, -0x11C0
    ctx->pc = 0x1f112cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1f1130: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f1130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f1134: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1138: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1f1138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1f113c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f113cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f1140: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1f1140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1f1144: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f1144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1148: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f1148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f114c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f114cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1154: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1f1154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f1158: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1f1158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f115c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f115cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1160: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1160u;
    SET_GPR_U32(ctx, 31, 0x1F1168u);
    ctx->pc = 0x1F1164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1160u;
    // 0x1f1164: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1160u, 0x1F1168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1168u;
label_1f1168:
    // 0x1f1168: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1168u;
    {
        const bool branch_taken_0x1f1168 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f1168) {
            ctx->pc = 0x1F116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1168u;
            // 0x1f116c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1188u;
            goto label_1f1188;
        }
    }
    ctx->pc = 0x1F1170u;
    // 0x1f1170: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1170u;
    SET_GPR_U32(ctx, 31, 0x1F1178u);
    ctx->pc = 0x1F1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1170u;
    // 0x1f1174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1170u, 0x1F1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1178u;
label_1f1178:
    // 0x1f1178: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1178u;
    SET_GPR_U32(ctx, 31, 0x1F1180u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1178u, 0x1F1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1180u;
label_1f1180:
    // 0x1f1180: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1180u;
    {
        const bool branch_taken_0x1f1180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1180u;
        // 0x1f1184: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1180) {
            ctx->pc = 0x1F11D0u;
            goto label_1f11d0;
        }
    }
    ctx->pc = 0x1F1188u;
label_1f1188:
    // 0x1f1188: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f1188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f118c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1f118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1f1190: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1190u;
    SET_GPR_U32(ctx, 31, 0x1F1198u);
    ctx->pc = 0x1F1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1190u;
    // 0x1f1194: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1190u, 0x1F1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1198u;
label_1f1198:
    // 0x1f1198: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1198u;
    {
        const bool branch_taken_0x1f1198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1198) {
            ctx->pc = 0x1F11B0u;
            goto label_1f11b0;
        }
    }
    ctx->pc = 0x1F11A0u;
    // 0x1f11a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F11A0u;
    SET_GPR_U32(ctx, 31, 0x1F11A8u);
    ctx->pc = 0x1F11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11A0u;
    // 0x1f11a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F11A0u, 0x1F11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11A8u;
label_1f11a8:
    // 0x1f11a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F11A8u;
    {
        const bool branch_taken_0x1f11a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11A8u;
        // 0x1f11ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11a8) {
            ctx->pc = 0x1F11D0u;
            goto label_1f11d0;
        }
    }
    ctx->pc = 0x1F11B0u;
label_1f11b0:
    // 0x1f11b0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F11B0u;
    SET_GPR_U32(ctx, 31, 0x1F11B8u);
    ctx->pc = 0x1F11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11B0u;
    // 0x1f11b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F11B0u, 0x1F11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11B8u;
label_1f11b8:
    // 0x1f11b8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F11B8u;
    SET_GPR_U32(ctx, 31, 0x1F11C0u);
    ctx->pc = 0x1F11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11B8u;
    // 0x1f11bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F11B8u, 0x1F11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11C0u;
label_1f11c0:
    // 0x1f11c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f11c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f11c8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f11c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f11cc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1f11ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f11d0:
    // 0x1f11d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f11d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f11d4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f11d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f11d8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f11d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f11dc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f11dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f11e0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f11e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f11e4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f11e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f11e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11E8u;
        // 0x1f11ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F11E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F11F0u;
}
