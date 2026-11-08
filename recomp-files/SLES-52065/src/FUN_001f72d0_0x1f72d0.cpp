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

// Function: FUN_001f72d0
// Address: 0x1f72d0 - 0x1f75e4
void FUN_001f72d0_0x1f72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f72d0_0x1f72d0");
#endif

    switch (ctx->pc) {
        case 0x1f7310u: goto label_1f7310;
        case 0x1f731cu: goto label_1f731c;
        case 0x1f7348u: goto label_1f7348;
        case 0x1f7350u: goto label_1f7350;
        case 0x1f7360u: goto label_1f7360;
        case 0x1f7380u: goto label_1f7380;
        case 0x1f7388u: goto label_1f7388;
        case 0x1f73a8u: goto label_1f73a8;
        case 0x1f73bcu: goto label_1f73bc;
        case 0x1f73dcu: goto label_1f73dc;
        case 0x1f73e8u: goto label_1f73e8;
        case 0x1f7448u: goto label_1f7448;
        case 0x1f749cu: goto label_1f749c;
        case 0x1f74b8u: goto label_1f74b8;
        case 0x1f74e0u: goto label_1f74e0;
        case 0x1f74f4u: goto label_1f74f4;
        case 0x1f7568u: goto label_1f7568;
        case 0x1f7580u: goto label_1f7580;
        case 0x1f7598u: goto label_1f7598;
        case 0x1f75b0u: goto label_1f75b0;
        default: break;
    }

    ctx->pc = 0x1f72d0u;

    // 0x1f72d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f72d4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1f72d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1f72d8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f72d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f72dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f72dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72e0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1f72e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1f72e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f72e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72e8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f72e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f72ec: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1f72ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1f72f0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1f72f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1f72f4: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1f72f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1f72f8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1f72f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1f72fc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1f72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1f7300: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1f7300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1f7304: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f7308: 0xc07dc12  jal         func_1F7048
    ctx->pc = 0x1F7308u;
    SET_GPR_U32(ctx, 31, 0x1F7310u);
    ctx->pc = 0x1F730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7308u;
    // 0x1f730c: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7048u, 0x1F7308u, 0x1F7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7310u;
label_1f7310:
    // 0x1f7310: 0x8ec4bb28  lw          $a0, -0x44D8($s6)
    ctx->pc = 0x1f7310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949672)));
    // 0x1f7314: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F7314u;
    SET_GPR_U32(ctx, 31, 0x1F731Cu);
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F7314u, 0x1F731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F731Cu;
label_1f731c:
    // 0x1f731c: 0x8ec3bb28  lw          $v1, -0x44D8($s6)
    ctx->pc = 0x1f731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949672)));
    // 0x1f7320: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1F7320u;
    {
        const bool branch_taken_0x1f7320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7320u;
        // 0x1f7324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7320) {
            ctx->pc = 0x1F75B4u;
            goto label_1f75b4;
        }
    }
    ctx->pc = 0x1F7328u;
    // 0x1f7328: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f732c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1f732cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1f7330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7334: 0x8c441350  lw          $a0, 0x1350($v0)
    ctx->pc = 0x1f7334u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x391350u));
    // 0x1f7338: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f7338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1f733c: 0xacc3bb1c  sw          $v1, -0x44E4($a2)
    ctx->pc = 0x1f733cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x21BB1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB1Cu, _value); } while (0);
    // 0x1f7340: 0xc07ad48  jal         func_1EB520
    ctx->pc = 0x1F7340u;
    SET_GPR_U32(ctx, 31, 0x1F7348u);
    ctx->pc = 0x1F7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7340u;
    // 0x1f7344: 0x24a51358  addiu       $a1, $a1, 0x1358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB520u, 0x1F7340u, 0x1F7348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7348u;
label_1f7348:
    // 0x1f7348: 0xc07de04  jal         func_1F7810
    ctx->pc = 0x1F7348u;
    SET_GPR_U32(ctx, 31, 0x1F7350u);
    ctx->pc = 0x1F734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7348u;
    // 0x1f734c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7810u, 0x1F7348u, 0x1F7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7350u;
label_1f7350:
    // 0x1f7350: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1F7350u;
    {
        const bool branch_taken_0x1f7350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7350u;
        // 0x1f7354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7350) {
            ctx->pc = 0x1F74E8u;
            goto label_1f74e8;
        }
    }
    ctx->pc = 0x1F7358u;
    // 0x1f7358: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F7358u;
    SET_GPR_U32(ctx, 31, 0x1F7360u);
    ctx->pc = 0x1F735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7358u;
    // 0x1f735c: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F7358u, 0x1F7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7360u;
label_1f7360:
    // 0x1f7360: 0x8e22bb44  lw          $v0, -0x44BC($s1)
    ctx->pc = 0x1f7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949700)));
    // 0x1f7364: 0x441002d  bgez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F7364u;
    {
        const bool branch_taken_0x1f7364 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7364u;
        // 0x1f7368: 0x3c170039  lui         $s7, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7364) {
            ctx->pc = 0x1F741Cu;
            goto label_1f741c;
        }
    }
    ctx->pc = 0x1F736Cu;
    // 0x1f736c: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1f7370: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f7370u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f7374: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F7374u;
    {
        const bool branch_taken_0x1f7374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7374u;
        // 0x1f7378: 0x3c1e0039  lui         $fp, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7374) {
            ctx->pc = 0x1F73A4u;
            goto label_1f73a4;
        }
    }
    ctx->pc = 0x1F737Cu;
    // 0x1f737c: 0x0  nop
    ctx->pc = 0x1f737cu;
    // NOP
label_1f7380:
    // 0x1f7380: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7384: 0x0  nop
    ctx->pc = 0x1f7384u;
    // NOP
label_1f7388:
    // 0x1f7388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f738c: 0x0  nop
    ctx->pc = 0x1f738cu;
    // NOP
    // 0x1f7390: 0x0  nop
    ctx->pc = 0x1f7390u;
    // NOP
    // 0x1f7394: 0x0  nop
    ctx->pc = 0x1f7394u;
    // NOP
    // 0x1f7398: 0x0  nop
    ctx->pc = 0x1f7398u;
    // NOP
    // 0x1f739c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F739Cu;
    {
        const bool branch_taken_0x1f739c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f739c) {
            ctx->pc = 0x1F7388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7388;
        }
    }
    ctx->pc = 0x1F73A4u;
label_1f73a4:
    // 0x1f73a4: 0x26f01540  addiu       $s0, $s7, 0x1540
    ctx->pc = 0x1f73a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 5440));
label_1f73a8:
    // 0x1f73a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f73ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f73acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73b0: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x1f73b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x1f73b4: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F73B4u;
    SET_GPR_U32(ctx, 31, 0x1F73BCu);
    ctx->pc = 0x1F73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73B4u;
    // 0x1f73b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F73B4u, 0x1F73BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73BCu;
label_1f73bc:
    // 0x1f73bc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F73BCu;
    {
        const bool branch_taken_0x1f73bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f73bc) {
            ctx->pc = 0x1F73C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F73BCu;
            // 0x1f73c0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F740Cu;
            goto label_1f740c;
        }
    }
    ctx->pc = 0x1F73C4u;
    // 0x1f73c4: 0x8e82bb10  lw          $v0, -0x44F0($s4)
    ctx->pc = 0x1f73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
    // 0x1f73c8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F73C8u;
    {
        const bool branch_taken_0x1f73c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73C8u;
        // 0x1f73cc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73c8) {
            ctx->pc = 0x1F73E0u;
            goto label_1f73e0;
        }
    }
    ctx->pc = 0x1F73D0u;
    // 0x1f73d0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f73d4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F73D4u;
    SET_GPR_U32(ctx, 31, 0x1F73DCu);
    ctx->pc = 0x1F73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F73D4u;
    // 0x1f73d8: 0x24844688  addiu       $a0, $a0, 0x4688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F73D4u, 0x1F73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73DCu;
label_1f73dc:
    // 0x1f73dc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1f73e0:
    // 0x1f73e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f73e4: 0x0  nop
    ctx->pc = 0x1f73e4u;
    // NOP
label_1f73e8:
    // 0x1f73e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f73ec: 0x0  nop
    ctx->pc = 0x1f73ecu;
    // NOP
    // 0x1f73f0: 0x0  nop
    ctx->pc = 0x1f73f0u;
    // NOP
    // 0x1f73f4: 0x0  nop
    ctx->pc = 0x1f73f4u;
    // NOP
    // 0x1f73f8: 0x0  nop
    ctx->pc = 0x1f73f8u;
    // NOP
    // 0x1f73fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F73FCu;
    {
        const bool branch_taken_0x1f73fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f73fc) {
            ctx->pc = 0x1F73E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73e8;
        }
    }
    ctx->pc = 0x1F7404u;
    // 0x1f7404: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7404u;
    {
        const bool branch_taken_0x1f7404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7404u;
        // 0x1f7408: 0x26f01540  addiu       $s0, $s7, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 5440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7404) {
            ctx->pc = 0x1F73A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73a8;
        }
    }
    ctx->pc = 0x1F740Cu;
label_1f740c:
    // 0x1f740c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F740Cu;
    {
        const bool branch_taken_0x1f740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F740Cu;
        // 0x1f7410: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f740c) {
            ctx->pc = 0x1F7380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7380;
        }
    }
    ctx->pc = 0x1F7414u;
    // 0x1f7414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7414u;
    {
        const bool branch_taken_0x1f7414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7414u;
        // 0x1f7418: 0xae20bb44  sw          $zero, -0x44BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294949700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7414) {
            ctx->pc = 0x1F7428u;
            goto label_1f7428;
        }
    }
    ctx->pc = 0x1F741Cu;
label_1f741c:
    // 0x1f741c: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f741cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1f7420: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f7420u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f7424: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f7424u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
label_1f7428:
    // 0x1f7428: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1f7428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f742c: 0x26a413c0  addiu       $a0, $s5, 0x13C0
    ctx->pc = 0x1f742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 5056));
    // 0x1f7430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7434: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1f7434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f7438: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7438u;
    {
        const bool branch_taken_0x1f7438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7438u;
        // 0x1f743c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7438) {
            ctx->pc = 0x1F746Cu;
            goto label_1f746c;
        }
    }
    ctx->pc = 0x1F7440u;
    // 0x1f7440: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1f7440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1f7444: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f7448:
    // 0x1f7448: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1f7448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f744c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F744Cu;
    {
        const bool branch_taken_0x1f744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F744Cu;
        // 0x1f7450: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f744c) {
            ctx->pc = 0x1F746Cu;
            goto label_1f746c;
        }
    }
    ctx->pc = 0x1F7454u;
    // 0x1f7454: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1f7454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f7458: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f7458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f745c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f745cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7460: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f7460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f7464: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7464u;
    {
        const bool branch_taken_0x1f7464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7464) {
            ctx->pc = 0x1F7468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7464u;
            // 0x1f7468: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7448;
        }
    }
    ctx->pc = 0x1F746Cu;
label_1f746c:
    // 0x1f746c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1f746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f7470: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7470u;
    {
        const bool branch_taken_0x1f7470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7470u;
        // 0x1f7474: 0x8e82bb10  lw          $v0, -0x44F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7470) {
            ctx->pc = 0x1F7484u;
            goto label_1f7484;
        }
    }
    ctx->pc = 0x1F7478u;
    // 0x1f7478: 0x26a213c0  addiu       $v0, $s5, 0x13C0
    ctx->pc = 0x1f7478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5056));
    // 0x1f747c: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x1f747cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7480: 0x8e82bb10  lw          $v0, -0x44F0($s4)
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
label_1f7484:
    // 0x1f7484: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7484u;
    {
        const bool branch_taken_0x1f7484 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7484u;
        // 0x1f7488: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7484) {
            ctx->pc = 0x1F749Cu;
            goto label_1f749c;
        }
    }
    ctx->pc = 0x1F748Cu;
    // 0x1f748c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f748cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1f7490: 0x248446a8  addiu       $a0, $a0, 0x46A8
    ctx->pc = 0x1f7490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18088));
    // 0x1f7494: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7494u;
    SET_GPR_U32(ctx, 31, 0x1F749Cu);
    ctx->pc = 0x1F7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7494u;
    // 0x1f7498: 0x24a513e4  addiu       $a1, $a1, 0x13E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5092));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7494u, 0x1F749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F749Cu;
label_1f749c:
    // 0x1f749c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f74a0: 0x26b013c0  addiu       $s0, $s5, 0x13C0
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5056));
    // 0x1f74a4: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1f74a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1f74a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74ac: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x1f74acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x1f74b0: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F74B0u;
    SET_GPR_U32(ctx, 31, 0x1F74B8u);
    ctx->pc = 0x1F74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74B0u;
    // 0x1f74b4: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F74B0u, 0x1F74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74B8u;
label_1f74b8:
    // 0x1f74b8: 0x26e41540  addiu       $a0, $s7, 0x1540
    ctx->pc = 0x1f74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 5440));
    // 0x1f74bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f74c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f74c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f74c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f74c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74cc: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1f74d0: 0x27c91500  addiu       $t1, $fp, 0x1500
    ctx->pc = 0x1f74d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 5376));
    // 0x1f74d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f74d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f74d8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F74D8u;
    SET_GPR_U32(ctx, 31, 0x1F74E0u);
    ctx->pc = 0x1F74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74D8u;
    // 0x1f74dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F74D8u, 0x1F74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74E0u;
label_1f74e0:
    // 0x1f74e0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F74E0u;
    {
        const bool branch_taken_0x1f74e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74E0u;
        // 0x1f74e4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74e0) {
            ctx->pc = 0x1F74FCu;
            goto label_1f74fc;
        }
    }
    ctx->pc = 0x1F74E8u;
label_1f74e8:
    // 0x1f74e8: 0x8ec4bb28  lw          $a0, -0x44D8($s6)
    ctx->pc = 0x1f74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949672)));
    // 0x1f74ec: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F74ECu;
    SET_GPR_U32(ctx, 31, 0x1F74F4u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F74ECu, 0x1F74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74F4u;
label_1f74f4:
    // 0x1f74f4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F74F4u;
    {
        const bool branch_taken_0x1f74f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74F4u;
        // 0x1f74f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74f4) {
            ctx->pc = 0x1F75B4u;
            goto label_1f75b4;
        }
    }
    ctx->pc = 0x1F74FCu;
label_1f74fc:
    // 0x1f74fc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f74fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7500: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1f7500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f7504: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1f7504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f7508: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1f7508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f750c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1f750cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f7510: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x1f7510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f7514: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x1f7514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f7518: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x1f7518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f751c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x1f751cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f7520: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x1f7520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f7524: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x1f7524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f7528: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x1f7528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f752c: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x1f752cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f7530: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x1f7530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f7534: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x1f7534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f7538: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x1f7538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f753c: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x1f753cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f7540: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x1f7540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1f7544: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x1f7544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1f7548: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x1f7548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f754c: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x1f754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f7550: 0x8e83bb10  lw          $v1, -0x44F0($s4)
    ctx->pc = 0x1f7550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
    // 0x1f7554: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7554u;
    {
        const bool branch_taken_0x1f7554 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7554u;
        // 0x1f7558: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7554) {
            ctx->pc = 0x1F7598u;
            goto label_1f7598;
        }
    }
    ctx->pc = 0x1F755Cu;
    // 0x1f755c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1f755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1f7560: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7560u;
    SET_GPR_U32(ctx, 31, 0x1F7568u);
    ctx->pc = 0x1F7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7560u;
    // 0x1f7564: 0x248446c0  addiu       $a0, $a0, 0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7560u, 0x1F7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7568u;
label_1f7568:
    // 0x1f7568: 0x8e82bb10  lw          $v0, -0x44F0($s4)
    ctx->pc = 0x1f7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
    // 0x1f756c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F756Cu;
    {
        const bool branch_taken_0x1f756c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F756Cu;
        // 0x1f7570: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f756c) {
            ctx->pc = 0x1F7598u;
            goto label_1f7598;
        }
    }
    ctx->pc = 0x1F7574u;
    // 0x1f7574: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1f7574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1f7578: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7578u;
    SET_GPR_U32(ctx, 31, 0x1F7580u);
    ctx->pc = 0x1F757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7578u;
    // 0x1f757c: 0x248446d0  addiu       $a0, $a0, 0x46D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7578u, 0x1F7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7580u;
label_1f7580:
    // 0x1f7580: 0x8e82bb10  lw          $v0, -0x44F0($s4)
    ctx->pc = 0x1f7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
    // 0x1f7584: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7584u;
    {
        const bool branch_taken_0x1f7584 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7584u;
        // 0x1f7588: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7584) {
            ctx->pc = 0x1F7598u;
            goto label_1f7598;
        }
    }
    ctx->pc = 0x1F758Cu;
    // 0x1f758c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1f758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f7590: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7590u;
    SET_GPR_U32(ctx, 31, 0x1F7598u);
    ctx->pc = 0x1F7594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7590u;
    // 0x1f7594: 0x248446e0  addiu       $a0, $a0, 0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7590u, 0x1F7598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7598u;
label_1f7598:
    // 0x1f7598: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1f7598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1f759c: 0x27c21500  addiu       $v0, $fp, 0x1500
    ctx->pc = 0x1f759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5376));
    // 0x1f75a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f75a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f75a4: 0x8ec4bb28  lw          $a0, -0x44D8($s6)
    ctx->pc = 0x1f75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949672)));
    // 0x1f75a8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F75A8u;
    SET_GPR_U32(ctx, 31, 0x1F75B0u);
    ctx->pc = 0x1F75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F75A8u;
    // 0x1f75ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F75A8u, 0x1F75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F75B0u;
label_1f75b0:
    // 0x1f75b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f75b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f75b4:
    // 0x1f75b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f75b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f75b8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1f75b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f75bc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1f75bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f75c0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1f75c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f75c4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1f75c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f75c8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1f75c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f75cc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1f75ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f75d0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f75d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f75d4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1f75d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f75d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f75d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f75dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F75DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75DCu;
        // 0x1f75e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F75DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F75E4u;
}
