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

// Function: KeyConfigurationMenuRendering
// Address: 0x1cd010 - 0x1cd408
void KeyConfigurationMenuRendering_0x1cd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyConfigurationMenuRendering_0x1cd010");
#endif

    switch (ctx->pc) {
        case 0x1cd028u: goto label_1cd028;
        case 0x1cd054u: goto label_1cd054;
        case 0x1cd06cu: goto label_1cd06c;
        case 0x1cd074u: goto label_1cd074;
        case 0x1cd084u: goto label_1cd084;
        case 0x1cd08cu: goto label_1cd08c;
        case 0x1cd09cu: goto label_1cd09c;
        case 0x1cd0b4u: goto label_1cd0b4;
        case 0x1cd0bcu: goto label_1cd0bc;
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd114u: goto label_1cd114;
        case 0x1cd138u: goto label_1cd138;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1bcu: goto label_1cd1bc;
        case 0x1cd1c4u: goto label_1cd1c4;
        case 0x1cd1e4u: goto label_1cd1e4;
        case 0x1cd1f4u: goto label_1cd1f4;
        case 0x1cd204u: goto label_1cd204;
        case 0x1cd20cu: goto label_1cd20c;
        case 0x1cd210u: goto label_1cd210;
        case 0x1cd220u: goto label_1cd220;
        case 0x1cd244u: goto label_1cd244;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2c8u: goto label_1cd2c8;
        case 0x1cd2d0u: goto label_1cd2d0;
        case 0x1cd2f0u: goto label_1cd2f0;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd318u: goto label_1cd318;
        case 0x1cd32cu: goto label_1cd32c;
        case 0x1cd340u: goto label_1cd340;
        case 0x1cd348u: goto label_1cd348;
        case 0x1cd358u: goto label_1cd358;
        case 0x1cd360u: goto label_1cd360;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd378u: goto label_1cd378;
        case 0x1cd388u: goto label_1cd388;
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd39cu: goto label_1cd39c;
        case 0x1cd3a4u: goto label_1cd3a4;
        case 0x1cd3b8u: goto label_1cd3b8;
        case 0x1cd3c8u: goto label_1cd3c8;
        case 0x1cd3d4u: goto label_1cd3d4;
        case 0x1cd3e8u: goto label_1cd3e8;
        case 0x1cd3ecu: goto label_1cd3ec;
        case 0x1cd3f4u: goto label_1cd3f4;
        default: break;
    }

    ctx->pc = 0x1cd010u;

    // 0x1cd010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cd018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cd01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd020: 0xc07357c  jal         func_1CD5F0
    ctx->pc = 0x1CD020u;
    SET_GPR_U32(ctx, 31, 0x1CD028u);
    ctx->pc = 0x1CD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD020u;
    // 0x1cd024: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD5F0u, 0x1CD020u, 0x1CD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD028u;
label_1cd028:
    // 0x1cd028: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd030: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd034: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1cd034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cd038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd03c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd040: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cd040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd044: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1cd044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cd048: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cd048u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd04c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CD04Cu;
    SET_GPR_U32(ctx, 31, 0x1CD054u);
    ctx->pc = 0x1CD050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD04Cu;
    // 0x1cd050: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CD04Cu, 0x1CD054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD054u;
label_1cd054:
    // 0x1cd054: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cd054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd058: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cd05c: 0x10c2001d  beq         $a2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CD05Cu;
    {
        const bool branch_taken_0x1cd05c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD05Cu;
        // 0x1cd060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd05c) {
            ctx->pc = 0x1CD0D4u;
            goto label_1cd0d4;
        }
    }
    ctx->pc = 0x1CD064u;
    // 0x1cd064: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD064u;
    SET_GPR_U32(ctx, 31, 0x1CD06Cu);
    ctx->pc = 0x1CD068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD064u;
    // 0x1cd068: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD064u, 0x1CD06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD06Cu;
label_1cd06c:
    // 0x1cd06c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CD06Cu;
    SET_GPR_U32(ctx, 31, 0x1CD074u);
    ctx->pc = 0x1CD070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD06Cu;
    // 0x1cd070: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CD06Cu, 0x1CD074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD074u;
label_1cd074:
    // 0x1cd074: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1cd074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cd078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd07c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD07Cu;
    SET_GPR_U32(ctx, 31, 0x1CD084u);
    ctx->pc = 0x1CD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD07Cu;
    // 0x1cd080: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD07Cu, 0x1CD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD084u;
label_1cd084:
    // 0x1cd084: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CD084u;
    SET_GPR_U32(ctx, 31, 0x1CD08Cu);
    ctx->pc = 0x1CD088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD084u;
    // 0x1cd088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CD084u, 0x1CD08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD08Cu;
label_1cd08c:
    // 0x1cd08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd090: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd094: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD094u;
    SET_GPR_U32(ctx, 31, 0x1CD09Cu);
    ctx->pc = 0x1CD098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD094u;
    // 0x1cd098: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD094u, 0x1CD09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD09Cu;
label_1cd09c:
    // 0x1cd09c: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cd09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd0a0: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x1cd0a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd0a4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1CD0A4u;
    {
        const bool branch_taken_0x1cd0a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0A4u;
        // 0x1cd0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0a4) {
            ctx->pc = 0x1CD0D4u;
            goto label_1cd0d4;
        }
    }
    ctx->pc = 0x1CD0ACu;
    // 0x1cd0ac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD0ACu;
    SET_GPR_U32(ctx, 31, 0x1CD0B4u);
    ctx->pc = 0x1CD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0ACu;
    // 0x1cd0b0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD0ACu, 0x1CD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0B4u;
label_1cd0b4:
    // 0x1cd0b4: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CD0B4u;
    SET_GPR_U32(ctx, 31, 0x1CD0BCu);
    ctx->pc = 0x1CD0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0B4u;
    // 0x1cd0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CD0B4u, 0x1CD0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0BCu;
label_1cd0bc:
    // 0x1cd0bc: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cd0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd0c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD0C8u;
    SET_GPR_U32(ctx, 31, 0x1CD0D0u);
    ctx->pc = 0x1CD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0C8u;
    // 0x1cd0cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD0C8u, 0x1CD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0D0u;
label_1cd0d0:
    // 0x1cd0d0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1cd0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
label_1cd0d4:
    // 0x1cd0d4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd0d8: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1cd0d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cd0dc: 0x102000bb  beqz        $at, . + 4 + (0xBB << 2)
    ctx->pc = 0x1CD0DCu;
    {
        const bool branch_taken_0x1cd0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0DCu;
        // 0x1cd0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0dc) {
            ctx->pc = 0x1CD3CCu;
            goto label_1cd3cc;
        }
    }
    ctx->pc = 0x1CD0E4u;
    // 0x1cd0e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cd0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cd0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd0ec: 0x24632cb0  addiu       $v1, $v1, 0x2CB0
    ctx->pc = 0x1cd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11440));
    // 0x1cd0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd0f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd0f8: 0x400008  jr          $v0
    ctx->pc = 0x1CD0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD100u: goto label_1cd100;
            case 0x1CD320u: goto label_1cd320;
            case 0x1CD3ACu: goto label_1cd3ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CD100u;
label_1cd100:
    // 0x1cd100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd104: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cd104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cd108: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cd10c: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CD10Cu;
    SET_GPR_U32(ctx, 31, 0x1CD114u);
    ctx->pc = 0x1CD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD10Cu;
    // 0x1cd110: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CD10Cu, 0x1CD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD114u;
label_1cd114:
    // 0x1cd114: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CD114u;
    {
        const bool branch_taken_0x1cd114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD114u;
        // 0x1cd118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd114) {
            ctx->pc = 0x1CD210u;
            goto label_1cd210;
        }
    }
    ctx->pc = 0x1CD11Cu;
    // 0x1cd11c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd128: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd12c: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd130: 0xc07354c  jal         func_1CD530
    ctx->pc = 0x1CD130u;
    SET_GPR_U32(ctx, 31, 0x1CD138u);
    ctx->pc = 0x1CD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD130u;
    // 0x1cd134: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD530u, 0x1CD130u, 0x1CD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD138u;
label_1cd138:
    // 0x1cd138: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x1cd138u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd13c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd140: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1cd140u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1cd144: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1cd144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1cd148: 0x24a52ca0  addiu       $a1, $a1, 0x2CA0
    ctx->pc = 0x1cd148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11424));
    // 0x1cd14c: 0x24e72c70  addiu       $a3, $a3, 0x2C70
    ctx->pc = 0x1cd14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11376));
    // 0x1cd150: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1cd154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd15c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cd15cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cd160: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x1cd160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd164: 0xad020070  sw          $v0, 0x70($t0)
    ctx->pc = 0x1cd164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 2));
    // 0x1cd168: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd16c: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1cd16cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd170: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1cd174: 0x1102821  addu        $a1, $t0, $s0
    ctx->pc = 0x1cd174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd17c: 0x8ca50070  lw          $a1, 0x70($a1)
    ctx->pc = 0x1cd17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1cd180: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cd180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cd184: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cd184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cd188: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cd188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cd18c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd190: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1cd190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd194: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd198: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD198u;
    SET_GPR_U32(ctx, 31, 0x1CD1A0u);
    ctx->pc = 0x1CD19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD198u;
    // 0x1cd19c: 0x24450006  addiu       $a1, $v0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD198u, 0x1CD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd1a4: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd1a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd1ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd1b0: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd1b4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD1B4u;
    SET_GPR_U32(ctx, 31, 0x1CD1BCu);
    ctx->pc = 0x1CD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1B4u;
    // 0x1cd1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD1B4u, 0x1CD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1BCu;
label_1cd1bc:
    // 0x1cd1bc: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CD1BCu;
    SET_GPR_U32(ctx, 31, 0x1CD1C4u);
    ctx->pc = 0x1CD1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1BCu;
    // 0x1cd1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CD1BCu, 0x1CD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1C4u;
label_1cd1c4:
    // 0x1cd1c4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1cc: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd1d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd1d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd1d8: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd1dc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD1DCu;
    SET_GPR_U32(ctx, 31, 0x1CD1E4u);
    ctx->pc = 0x1CD1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1DCu;
    // 0x1cd1e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD1DCu, 0x1CD1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1E4u;
label_1cd1e4:
    // 0x1cd1e4: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1cd1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cd1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1ec: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1CD1ECu;
    SET_GPR_U32(ctx, 31, 0x1CD1F4u);
    ctx->pc = 0x1CD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1ECu;
    // 0x1cd1f0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1CD1ECu, 0x1CD1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1F4u;
label_1cd1f4:
    // 0x1cd1f4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cd1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1fc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD1FCu;
    SET_GPR_U32(ctx, 31, 0x1CD204u);
    ctx->pc = 0x1CD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1FCu;
    // 0x1cd200: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD1FCu, 0x1CD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD204u;
label_1cd204:
    // 0x1cd204: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD204u;
    SET_GPR_U32(ctx, 31, 0x1CD20Cu);
    ctx->pc = 0x1CD208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD204u;
    // 0x1cd208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD204u, 0x1CD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD20Cu;
label_1cd20c:
    // 0x1cd20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd210:
    // 0x1cd210: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cd214: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1cd214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cd218: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CD218u;
    SET_GPR_U32(ctx, 31, 0x1CD220u);
    ctx->pc = 0x1CD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD218u;
    // 0x1cd21c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CD218u, 0x1CD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD220u;
label_1cd220:
    // 0x1cd220: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1CD220u;
    {
        const bool branch_taken_0x1cd220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd220) {
            ctx->pc = 0x1CD3C8u;
            goto label_1cd3c8;
        }
    }
    ctx->pc = 0x1CD228u;
    // 0x1cd228: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd234: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd238: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1cd238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd23c: 0xc07354c  jal         func_1CD530
    ctx->pc = 0x1CD23Cu;
    SET_GPR_U32(ctx, 31, 0x1CD244u);
    ctx->pc = 0x1CD240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD23Cu;
    // 0x1cd240: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD530u, 0x1CD23Cu, 0x1CD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD244u;
label_1cd244:
    // 0x1cd244: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd248: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd24c: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1cd24cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1cd250: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1cd254: 0x24a52ca0  addiu       $a1, $a1, 0x2CA0
    ctx->pc = 0x1cd254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11424));
    // 0x1cd258: 0x24e72c70  addiu       $a3, $a3, 0x2C70
    ctx->pc = 0x1cd258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11376));
    // 0x1cd25c: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1cd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1cd260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd268: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cd268u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cd26c: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x1cd26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd270: 0xad020070  sw          $v0, 0x70($t0)
    ctx->pc = 0x1cd270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 2));
    // 0x1cd274: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd278: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd27c: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1cd280: 0x1102821  addu        $a1, $t0, $s0
    ctx->pc = 0x1cd280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd288: 0x8ca50070  lw          $a1, 0x70($a1)
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1cd28c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cd290: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cd290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cd294: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cd294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cd298: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1cd298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd29c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1cd29cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd2a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd2a4: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD2A4u;
    SET_GPR_U32(ctx, 31, 0x1CD2ACu);
    ctx->pc = 0x1CD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2A4u;
    // 0x1cd2a8: 0x24450006  addiu       $a1, $v0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD2A4u, 0x1CD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2ACu;
label_1cd2ac:
    // 0x1cd2ac: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd2b0: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd2b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd2b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd2bc: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd2c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD2C0u;
    SET_GPR_U32(ctx, 31, 0x1CD2C8u);
    ctx->pc = 0x1CD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2C0u;
    // 0x1cd2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD2C0u, 0x1CD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2C8u;
label_1cd2c8:
    // 0x1cd2c8: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CD2C8u;
    SET_GPR_U32(ctx, 31, 0x1CD2D0u);
    ctx->pc = 0x1CD2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2C8u;
    // 0x1cd2cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CD2C8u, 0x1CD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2D0u;
label_1cd2d0:
    // 0x1cd2d0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2d8: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd2dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd2e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd2e4: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd2e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD2E8u;
    SET_GPR_U32(ctx, 31, 0x1CD2F0u);
    ctx->pc = 0x1CD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2E8u;
    // 0x1cd2ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD2E8u, 0x1CD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2F0u;
label_1cd2f0:
    // 0x1cd2f0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1cd2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cd2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2f8: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1CD2F8u;
    SET_GPR_U32(ctx, 31, 0x1CD300u);
    ctx->pc = 0x1CD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2F8u;
    // 0x1cd2fc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1CD2F8u, 0x1CD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD300u;
label_1cd300:
    // 0x1cd300: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd308: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD308u;
    SET_GPR_U32(ctx, 31, 0x1CD310u);
    ctx->pc = 0x1CD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD308u;
    // 0x1cd30c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD308u, 0x1CD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD310u;
label_1cd310:
    // 0x1cd310: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD310u;
    SET_GPR_U32(ctx, 31, 0x1CD318u);
    ctx->pc = 0x1CD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD310u;
    // 0x1cd314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD310u, 0x1CD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD318u;
label_1cd318:
    // 0x1cd318: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1CD318u;
    {
        const bool branch_taken_0x1cd318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd318) {
            ctx->pc = 0x1CD3C8u;
            goto label_1cd3c8;
        }
    }
    ctx->pc = 0x1CD320u;
label_1cd320:
    // 0x1cd320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd324: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CD324u;
    SET_GPR_U32(ctx, 31, 0x1CD32Cu);
    ctx->pc = 0x1CD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD324u;
    // 0x1cd328: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CD324u, 0x1CD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD32Cu;
label_1cd32c:
    // 0x1cd32c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CD32Cu;
    {
        const bool branch_taken_0x1cd32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD32Cu;
        // 0x1cd330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd32c) {
            ctx->pc = 0x1CD3C8u;
            goto label_1cd3c8;
        }
    }
    ctx->pc = 0x1CD334u;
    // 0x1cd334: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd338: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD338u;
    SET_GPR_U32(ctx, 31, 0x1CD340u);
    ctx->pc = 0x1CD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD338u;
    // 0x1cd33c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD338u, 0x1CD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD340u;
label_1cd340:
    // 0x1cd340: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD340u;
    SET_GPR_U32(ctx, 31, 0x1CD348u);
    ctx->pc = 0x1CD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD340u;
    // 0x1cd344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD340u, 0x1CD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD348u;
label_1cd348:
    // 0x1cd348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd34c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd350: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD350u;
    SET_GPR_U32(ctx, 31, 0x1CD358u);
    ctx->pc = 0x1CD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD350u;
    // 0x1cd354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD350u, 0x1CD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD358u;
label_1cd358:
    // 0x1cd358: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD358u;
    SET_GPR_U32(ctx, 31, 0x1CD360u);
    ctx->pc = 0x1CD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD358u;
    // 0x1cd35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD358u, 0x1CD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD360u;
label_1cd360:
    // 0x1cd360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd364: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd368: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD368u;
    SET_GPR_U32(ctx, 31, 0x1CD370u);
    ctx->pc = 0x1CD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD368u;
    // 0x1cd36c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD368u, 0x1CD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD370u;
label_1cd370:
    // 0x1cd370: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD370u;
    SET_GPR_U32(ctx, 31, 0x1CD378u);
    ctx->pc = 0x1CD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD370u;
    // 0x1cd374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD370u, 0x1CD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD378u;
label_1cd378:
    // 0x1cd378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd37c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd380: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD380u;
    SET_GPR_U32(ctx, 31, 0x1CD388u);
    ctx->pc = 0x1CD384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD380u;
    // 0x1cd384: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD380u, 0x1CD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD388u;
label_1cd388:
    // 0x1cd388: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD388u;
    SET_GPR_U32(ctx, 31, 0x1CD390u);
    ctx->pc = 0x1CD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD388u;
    // 0x1cd38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD388u, 0x1CD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD390u;
label_1cd390:
    // 0x1cd390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd394: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1CD394u;
    SET_GPR_U32(ctx, 31, 0x1CD39Cu);
    ctx->pc = 0x1CD398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD394u;
    // 0x1cd398: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1CD394u, 0x1CD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD39Cu;
label_1cd39c:
    // 0x1cd39c: 0xc073504  jal         func_1CD410
    ctx->pc = 0x1CD39Cu;
    SET_GPR_U32(ctx, 31, 0x1CD3A4u);
    ctx->pc = 0x1CD3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD39Cu;
    // 0x1cd3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD410u, 0x1CD39Cu, 0x1CD3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3A4u;
label_1cd3a4:
    // 0x1cd3a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD3A4u;
    {
        const bool branch_taken_0x1cd3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3a4) {
            ctx->pc = 0x1CD3C8u;
            goto label_1cd3c8;
        }
    }
    ctx->pc = 0x1CD3ACu;
label_1cd3ac:
    // 0x1cd3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3b0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CD3B0u;
    SET_GPR_U32(ctx, 31, 0x1CD3B8u);
    ctx->pc = 0x1CD3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3B0u;
    // 0x1cd3b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CD3B0u, 0x1CD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3B8u;
label_1cd3b8:
    // 0x1cd3b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD3B8u;
    {
        const bool branch_taken_0x1cd3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3B8u;
        // 0x1cd3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3b8) {
            ctx->pc = 0x1CD3C8u;
            goto label_1cd3c8;
        }
    }
    ctx->pc = 0x1CD3C0u;
    // 0x1cd3c0: 0xc073680  jal         func_1CDA00
    ctx->pc = 0x1CD3C0u;
    SET_GPR_U32(ctx, 31, 0x1CD3C8u);
    ctx->pc = 0x1CD3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3C0u;
    // 0x1cd3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA00u, 0x1CD3C0u, 0x1CD3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3C8u;
label_1cd3c8:
    // 0x1cd3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3cc:
    // 0x1cd3cc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CD3CCu;
    SET_GPR_U32(ctx, 31, 0x1CD3D4u);
    ctx->pc = 0x1CD3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3CCu;
    // 0x1cd3d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CD3CCu, 0x1CD3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3D4u;
label_1cd3d4:
    // 0x1cd3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD3D4u;
    {
        const bool branch_taken_0x1cd3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3D4u;
        // 0x1cd3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3d4) {
            ctx->pc = 0x1CD3ECu;
            goto label_1cd3ec;
        }
    }
    ctx->pc = 0x1CD3DCu;
    // 0x1cd3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3e0: 0xc073680  jal         func_1CDA00
    ctx->pc = 0x1CD3E0u;
    SET_GPR_U32(ctx, 31, 0x1CD3E8u);
    ctx->pc = 0x1CD3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3E0u;
    // 0x1cd3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA00u, 0x1CD3E0u, 0x1CD3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3E8u;
label_1cd3e8:
    // 0x1cd3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3ec:
    // 0x1cd3ec: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CD3ECu;
    SET_GPR_U32(ctx, 31, 0x1CD3F4u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CD3ECu, 0x1CD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3F4u;
label_1cd3f4:
    // 0x1cd3f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd400: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD400u;
        // 0x1cd404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD408u;
}
