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

// Function: FUN_001f0320
// Address: 0x1f0320 - 0x1f0694
void FUN_001f0320_0x1f0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0320_0x1f0320");
#endif

    switch (ctx->pc) {
        case 0x1f0360u: goto label_1f0360;
        case 0x1f036cu: goto label_1f036c;
        case 0x1f0388u: goto label_1f0388;
        case 0x1f03a4u: goto label_1f03a4;
        case 0x1f03ecu: goto label_1f03ec;
        case 0x1f0410u: goto label_1f0410;
        case 0x1f0450u: goto label_1f0450;
        case 0x1f04b8u: goto label_1f04b8;
        case 0x1f050cu: goto label_1f050c;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f0614u: goto label_1f0614;
        case 0x1f0624u: goto label_1f0624;
        case 0x1f062cu: goto label_1f062c;
        case 0x1f0640u: goto label_1f0640;
        case 0x1f0650u: goto label_1f0650;
        case 0x1f0660u: goto label_1f0660;
        case 0x1f0668u: goto label_1f0668;
        default: break;
    }

    ctx->pc = 0x1f0320u;

    // 0x1f0320: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f0324: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f0328: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f0328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f032c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f032cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0330: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f0330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f0334: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f0334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0338: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f0338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f033c: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f033cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f0340: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f0340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f0344: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1f0344u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0348: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f034c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f034cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f0350: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f0350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f0354: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f0354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f0358: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1F0358u;
    SET_GPR_U32(ctx, 31, 0x1F0360u);
    ctx->pc = 0x1F035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0358u;
    // 0x1f035c: 0x26d3e200  addiu       $s3, $s6, -0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1F0358u, 0x1F0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0360u;
label_1f0360:
    // 0x1f0360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0364: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F0364u;
    SET_GPR_U32(ctx, 31, 0x1F036Cu);
    ctx->pc = 0x1F0368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0364u;
    // 0x1f0368: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F0364u, 0x1F036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F036Cu;
label_1f036c:
    // 0x1f036c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f0370: 0xae92e1c8  sw          $s2, -0x1E38($s4)
    ctx->pc = 0x1f0370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294959560), GPR_U32(ctx, 18));
    // 0x1f0374: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f0374u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f0378: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0378u;
    {
        const bool branch_taken_0x1f0378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0378) {
            ctx->pc = 0x1F0388u;
            goto label_1f0388;
        }
    }
    ctx->pc = 0x1F0380u;
    // 0x1f0380: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F0380u;
    SET_GPR_U32(ctx, 31, 0x1F0388u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F0380u, 0x1F0388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0388u;
label_1f0388:
    // 0x1f0388: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0388u;
    {
        const bool branch_taken_0x1f0388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0388) {
            ctx->pc = 0x1F039Cu;
            goto label_1f039c;
        }
    }
    ctx->pc = 0x1F0390u;
    // 0x1f0390: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f0394: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0394u;
    {
        const bool branch_taken_0x1f0394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0394) {
            ctx->pc = 0x1F0398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0394u;
            // 0x1f0398: 0xae600414  sw          $zero, 0x414($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F03ACu;
            goto label_1f03ac;
        }
    }
    ctx->pc = 0x1F039Cu;
label_1f039c:
    // 0x1f039c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F039Cu;
    SET_GPR_U32(ctx, 31, 0x1F03A4u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F039Cu, 0x1F03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03A4u;
label_1f03a4:
    // 0x1f03a4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1F03A4u;
    {
        const bool branch_taken_0x1f03a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03A4u;
        // 0x1f03a8: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03a4) {
            ctx->pc = 0x1F066Cu;
            goto label_1f066c;
        }
    }
    ctx->pc = 0x1F03ACu;
label_1f03ac:
    // 0x1f03ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f03acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f03b0: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F03B0u;
    {
        const bool branch_taken_0x1f03b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03B0u;
        // 0x1f03b4: 0xae600418  sw          $zero, 0x418($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03b0) {
            ctx->pc = 0x1F0458u;
            goto label_1f0458;
        }
    }
    ctx->pc = 0x1F03B8u;
    // 0x1f03b8: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1f03b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f03bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F03BCu;
    {
        const bool branch_taken_0x1f03bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03BCu;
        // 0x1f03c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03bc) {
            ctx->pc = 0x1F03D4u;
            goto label_1f03d4;
        }
    }
    ctx->pc = 0x1F03C4u;
    // 0x1f03c4: 0x52350007  beql        $s1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F03C4u;
    {
        const bool branch_taken_0x1f03c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x1f03c4) {
            ctx->pc = 0x1F03C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F03C4u;
            // 0x1f03c8: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F03E4u;
            goto label_1f03e4;
        }
    }
    ctx->pc = 0x1F03CCu;
    // 0x1f03cc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F03CCu;
    {
        const bool branch_taken_0x1f03cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03CCu;
        // 0x1f03d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03cc) {
            ctx->pc = 0x1F04C0u;
            goto label_1f04c0;
        }
    }
    ctx->pc = 0x1F03D4u;
label_1f03d4:
    // 0x1f03d4: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F03D4u;
    {
        const bool branch_taken_0x1f03d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03D4u;
        // 0x1f03d8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03d4) {
            ctx->pc = 0x1F0488u;
            goto label_1f0488;
        }
    }
    ctx->pc = 0x1F03DCu;
    // 0x1f03dc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1F03DCu;
    {
        const bool branch_taken_0x1f03dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03DCu;
        // 0x1f03e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03dc) {
            ctx->pc = 0x1F04C0u;
            goto label_1f04c0;
        }
    }
    ctx->pc = 0x1F03E4u;
label_1f03e4:
    // 0x1f03e4: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F03E4u;
    SET_GPR_U32(ctx, 31, 0x1F03ECu);
    ctx->pc = 0x1F03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03E4u;
    // 0x1f03e8: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F03E4u, 0x1F03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03ECu;
label_1f03ec:
    // 0x1f03ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1f03ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1f03f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f03f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03f4: 0x8ca3a3d8  lw          $v1, -0x5C28($a1)
    ctx->pc = 0x1f03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1f03f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f03fc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F03FCu;
    {
        const bool branch_taken_0x1f03fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03FCu;
        // 0x1f0400: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03fc) {
            ctx->pc = 0x1F042Cu;
            goto label_1f042c;
        }
    }
    ctx->pc = 0x1F0404u;
    // 0x1f0404: 0x24a3a3d8  addiu       $v1, $a1, -0x5C28
    ctx->pc = 0x1f0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943704));
    // 0x1f0408: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f040c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f0410:
    // 0x1f0410: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1f0410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f0414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0414u;
    {
        const bool branch_taken_0x1f0414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0414u;
        // 0x1f0418: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0414) {
            ctx->pc = 0x1F0428u;
            goto label_1f0428;
        }
    }
    ctx->pc = 0x1F041Cu;
    // 0x1f041c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0420: 0x5045fffb  beql        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F0420u;
    {
        const bool branch_taken_0x1f0420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f0420) {
            ctx->pc = 0x1F0424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0420u;
            // 0x1f0424: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0410;
        }
    }
    ctx->pc = 0x1F0428u;
label_1f0428:
    // 0x1f0428: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f0428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f042c:
    // 0x1f042c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F042Cu;
    {
        const bool branch_taken_0x1f042c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F042Cu;
        // 0x1f0430: 0x8e83e1c8  lw          $v1, -0x1E38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f042c) {
            ctx->pc = 0x1F0440u;
            goto label_1f0440;
        }
    }
    ctx->pc = 0x1F0434u;
    // 0x1f0434: 0x8e82e1c8  lw          $v0, -0x1E38($s4)
    ctx->pc = 0x1f0434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959560)));
    // 0x1f0438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0438u;
    {
        const bool branch_taken_0x1f0438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0438u;
        // 0x1f043c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0438) {
            ctx->pc = 0x1F0448u;
            goto label_1f0448;
        }
    }
    ctx->pc = 0x1F0440u;
label_1f0440:
    // 0x1f0440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0444: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f0444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f0448:
    // 0x1f0448: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F0448u;
    SET_GPR_U32(ctx, 31, 0x1F0450u);
    ctx->pc = 0x1F044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0448u;
    // 0x1f044c: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F0448u, 0x1F0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0450u;
label_1f0450:
    // 0x1f0450: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0450u;
    {
        const bool branch_taken_0x1f0450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0450) {
            ctx->pc = 0x1F04B0u;
            goto label_1f04b0;
        }
    }
    ctx->pc = 0x1F0458u;
label_1f0458:
    // 0x1f0458: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f0458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f045c: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x1f045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1f0460: 0x8c82a458  lw          $v0, -0x5BA8($a0)
    ctx->pc = 0x1f0460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A458u));
    // 0x1f0464: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f0464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f0468: 0x2463ee90  addiu       $v1, $v1, -0x1170
    ctx->pc = 0x1f0468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962832));
    // 0x1f046c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1f046cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1f0470: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1f0470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0478: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f0478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f047c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0480: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F0480u;
    {
        const bool branch_taken_0x1f0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0480u;
        // 0x1f0484: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0480) {
            ctx->pc = 0x1F04B0u;
            goto label_1f04b0;
        }
    }
    ctx->pc = 0x1F0488u;
label_1f0488:
    // 0x1f0488: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x1f0488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1f048c: 0x8c82a458  lw          $v0, -0x5BA8($a0)
    ctx->pc = 0x1f048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943832)));
    // 0x1f0490: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f0490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f0494: 0x2463ee90  addiu       $v1, $v1, -0x1170
    ctx->pc = 0x1f0494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962832));
    // 0x1f0498: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1f0498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1f049c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1f049cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f04a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f04a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f04a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f04a8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1f04a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f04ac: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x1f04acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_1f04b0:
    // 0x1f04b0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F04B0u;
    SET_GPR_U32(ctx, 31, 0x1F04B8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F04B0u, 0x1F04B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04B8u;
label_1f04b8:
    // 0x1f04b8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F04B8u;
    {
        const bool branch_taken_0x1f04b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04B8u;
        // 0x1f04bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04b8) {
            ctx->pc = 0x1F066Cu;
            goto label_1f066c;
        }
    }
    ctx->pc = 0x1F04C0u;
label_1f04c0:
    // 0x1f04c0: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x1f04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
    // 0x1f04c4: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F04C4u;
    {
        const bool branch_taken_0x1f04c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04C4u;
        // 0x1f04c8: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04c4) {
            ctx->pc = 0x1F04E0u;
            goto label_1f04e0;
        }
    }
    ctx->pc = 0x1F04CCu;
    // 0x1f04cc: 0xae60041c  sw          $zero, 0x41C($s3)
    ctx->pc = 0x1f04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 0));
    // 0x1f04d0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f04d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f04d4: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f04d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f04d8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1F04D8u;
    {
        const bool branch_taken_0x1f04d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04D8u;
        // 0x1f04dc: 0x3c110039  lui         $s1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04d8) {
            ctx->pc = 0x1F05ACu;
            goto label_1f05ac;
        }
    }
    ctx->pc = 0x1F04E0u;
label_1f04e0:
    // 0x1f04e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f04e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04e4: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x1f04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1f04e8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1f04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1f04ec: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x1f04ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1f04f0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f04f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f04f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F04F4u;
    {
        const bool branch_taken_0x1f04f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04F4u;
        // 0x1f04f8: 0xae63041c  sw          $v1, 0x41C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04f4) {
            ctx->pc = 0x1F0568u;
            goto label_1f0568;
        }
    }
    ctx->pc = 0x1F04FCu;
    // 0x1f04fc: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x1f04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1f0500: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f0500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0504: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0504u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0508: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f0508u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
label_1f050c:
    // 0x1f050c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1f050cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f0510: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1f0510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f0514: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x1f0514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f0518: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x1f0518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f051c: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x1f051cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f0520: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x1f0520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f0524: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x1f0524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f0528: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x1f0528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f052c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1f052cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0530: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1f0530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0534: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x1f0534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0538: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x1f0538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f053c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1f053cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0540: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1f0540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0544: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1f0544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0548: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1f0548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f054c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1f0550: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f0550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f0554: 0x0  nop
    ctx->pc = 0x1f0554u;
    // NOP
    // 0x1f0558: 0x14c2ffec  bne         $a2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F0558u;
    {
        const bool branch_taken_0x1f0558 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0558) {
            ctx->pc = 0x1F050Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f050c;
        }
    }
    ctx->pc = 0x1F0560u;
    // 0x1f0560: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F0560u;
    {
        const bool branch_taken_0x1f0560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0560u;
        // 0x1f0564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0560) {
            ctx->pc = 0x1F05B0u;
            goto label_1f05b0;
        }
    }
    ctx->pc = 0x1F0568u;
label_1f0568:
    // 0x1f0568: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1f056c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f056cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0570: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0570u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0574: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f0574u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
label_1f0578:
    // 0x1f0578: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1f0578u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f057c: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x1f057cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f0580: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1f0580u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1f0584: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x1f0584u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1f0588: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1f0588u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1f058c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1f058cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1f0590: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1f0590u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1f0594: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1f0594u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1f0598: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1f0598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1f059c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f05a0: 0x0  nop
    ctx->pc = 0x1f05a0u;
    // NOP
    // 0x1f05a4: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F05A4u;
    {
        const bool branch_taken_0x1f05a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f05a4) {
            ctx->pc = 0x1F0578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0578;
        }
    }
    ctx->pc = 0x1F05ACu;
label_1f05ac:
    // 0x1f05ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f05b0:
    // 0x1f05b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f05b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f05b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f05b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f05bc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f05c0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F05C0u;
    SET_GPR_U32(ctx, 31, 0x1F05C8u);
    ctx->pc = 0x1F05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05C0u;
    // 0x1f05c4: 0x2634ee40  addiu       $s4, $s1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F05C0u, 0x1F05C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05C8u;
label_1f05c8:
    // 0x1f05c8: 0x26d0e200  addiu       $s0, $s6, -0x1E00
    ctx->pc = 0x1f05c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f05cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f05ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f05d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f05d8: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1f05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1f05dc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1f05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1f05e0: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x1f05e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1f05e4: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F05E4u;
    SET_GPR_U32(ctx, 31, 0x1F05ECu);
    ctx->pc = 0x1F05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05E4u;
    // 0x1f05e8: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F05E4u, 0x1F05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05ECu;
label_1f05ec:
    // 0x1f05ec: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f05f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f05f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f05f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f05fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f05fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0600: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1f0600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1f0604: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0608: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f060c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F060Cu;
    SET_GPR_U32(ctx, 31, 0x1F0614u);
    ctx->pc = 0x1F0610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F060Cu;
    // 0x1f0610: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F060Cu, 0x1F0614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0614u;
label_1f0614:
    // 0x1f0614: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0614u;
    {
        const bool branch_taken_0x1f0614 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0614u;
        // 0x1f0618: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0614) {
            ctx->pc = 0x1F0634u;
            goto label_1f0634;
        }
    }
    ctx->pc = 0x1F061Cu;
    // 0x1f061c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F061Cu;
    SET_GPR_U32(ctx, 31, 0x1F0624u);
    ctx->pc = 0x1F0620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F061Cu;
    // 0x1f0620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F061Cu, 0x1F0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0624u;
label_1f0624:
    // 0x1f0624: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0624u;
    SET_GPR_U32(ctx, 31, 0x1F062Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0624u, 0x1F062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F062Cu;
label_1f062c:
    // 0x1f062c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F062Cu;
    {
        const bool branch_taken_0x1f062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F062Cu;
        // 0x1f0630: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f062c) {
            ctx->pc = 0x1F066Cu;
            goto label_1f066c;
        }
    }
    ctx->pc = 0x1F0634u;
label_1f0634:
    // 0x1f0634: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f0638: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0638u;
    SET_GPR_U32(ctx, 31, 0x1F0640u);
    ctx->pc = 0x1F063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0638u;
    // 0x1f063c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0638u, 0x1F0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0640u;
label_1f0640:
    // 0x1f0640: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0640u;
    {
        const bool branch_taken_0x1f0640 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0640) {
            ctx->pc = 0x1F0658u;
            goto label_1f0658;
        }
    }
    ctx->pc = 0x1F0648u;
    // 0x1f0648: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0648u;
    SET_GPR_U32(ctx, 31, 0x1F0650u);
    ctx->pc = 0x1F064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0648u;
    // 0x1f064c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0648u, 0x1F0650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0650u;
label_1f0650:
    // 0x1f0650: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0650u;
    {
        const bool branch_taken_0x1f0650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0650u;
        // 0x1f0654: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0650) {
            ctx->pc = 0x1F066Cu;
            goto label_1f066c;
        }
    }
    ctx->pc = 0x1F0658u;
label_1f0658:
    // 0x1f0658: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0658u;
    SET_GPR_U32(ctx, 31, 0x1F0660u);
    ctx->pc = 0x1F065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0658u;
    // 0x1f065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0658u, 0x1F0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0660u;
label_1f0660:
    // 0x1f0660: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0660u;
    SET_GPR_U32(ctx, 31, 0x1F0668u);
    ctx->pc = 0x1F0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0660u;
    // 0x1f0664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0660u, 0x1F0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0668u;
label_1f0668:
    // 0x1f0668: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f066c:
    // 0x1f066c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0670: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f0670u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0674: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f0674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0678: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f067c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f067cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0680: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0684: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0688: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f068c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F068Cu;
        // 0x1f0690: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F068Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0694u;
}
