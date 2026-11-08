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

// Function: FUN_001f1348
// Address: 0x1f1348 - 0x1f14e8
void FUN_001f1348_0x1f1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1348_0x1f1348");
#endif

    switch (ctx->pc) {
        case 0x1f1388u: goto label_1f1388;
        case 0x1f13a0u: goto label_1f13a0;
        case 0x1f13c0u: goto label_1f13c0;
        case 0x1f1428u: goto label_1f1428;
        case 0x1f1464u: goto label_1f1464;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1490u: goto label_1f1490;
        case 0x1f14a0u: goto label_1f14a0;
        case 0x1f14b0u: goto label_1f14b0;
        case 0x1f14b8u: goto label_1f14b8;
        default: break;
    }

    ctx->pc = 0x1f1348u;

    // 0x1f1348: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f134c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f1350: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f1350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f1354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1358: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f1358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f135c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f135cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1360: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f1360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f1364: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1f1364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f1368: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f136c: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f136cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f1370: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f1370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f1374: 0x26f2e200  addiu       $s2, $s7, -0x1E00
    ctx->pc = 0x1f1374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f1378: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f1378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f137c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f1380: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F1380u;
    SET_GPR_U32(ctx, 31, 0x1F1388u);
    ctx->pc = 0x1F1384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1380u;
    // 0x1f1384: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F1380u, 0x1F1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1388u;
label_1f1388:
    // 0x1f1388: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f138c: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f138cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f1390: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1390u;
    {
        const bool branch_taken_0x1f1390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1390) {
            ctx->pc = 0x1F1394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1390u;
            // 0x1f1394: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F13A4u;
            goto label_1f13a4;
        }
    }
    ctx->pc = 0x1F1398u;
    // 0x1f1398: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F1398u;
    SET_GPR_U32(ctx, 31, 0x1F13A0u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F1398u, 0x1F13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13A0u;
label_1f13a0:
    // 0x1f13a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f13a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1f13a4:
    // 0x1f13a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f13a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f13a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F13ACu;
    {
        const bool branch_taken_0x1f13ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13ACu;
        // 0x1f13b0: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13ac) {
            ctx->pc = 0x1F13E8u;
            goto label_1f13e8;
        }
    }
    ctx->pc = 0x1F13B4u;
    // 0x1f13b4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f13b8: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f13b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f13bc: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f13bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f13c0:
    // 0x1f13c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f13c4: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1f13c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f13c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F13C8u;
    {
        const bool branch_taken_0x1f13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C8u;
        // 0x1f13cc: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13c8) {
            ctx->pc = 0x1F13F4u;
            goto label_1f13f4;
        }
    }
    ctx->pc = 0x1F13D0u;
    // 0x1f13d0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1f13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f13d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f13d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f13d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F13D8u;
    {
        const bool branch_taken_0x1f13d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13D8u;
        // 0x1f13dc: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13d8) {
            ctx->pc = 0x1F13C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f13c0;
        }
    }
    ctx->pc = 0x1F13E0u;
    // 0x1f13e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F13E0u;
    {
        const bool branch_taken_0x1f13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13E0u;
        // 0x1f13e4: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13e0) {
            ctx->pc = 0x1F13F8u;
            goto label_1f13f8;
        }
    }
    ctx->pc = 0x1F13E8u;
label_1f13e8:
    // 0x1f13e8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f13ec: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f13ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f13f0: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f13f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f13f4:
    // 0x1f13f4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f13f8:
    // 0x1f13f8: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F13F8u;
    {
        const bool branch_taken_0x1f13f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f13f8) {
            ctx->pc = 0x1F13FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F13F8u;
            // 0x1f13fc: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F140Cu;
            goto label_1f140c;
        }
    }
    ctx->pc = 0x1F1400u;
    // 0x1f1400: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1f1400u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1404: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1f1404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f1408: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1f1408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1f140c:
    // 0x1f140c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1410: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1414: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1418: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f141c: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f1420: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1420u;
    SET_GPR_U32(ctx, 31, 0x1F1428u);
    ctx->pc = 0x1F1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1420u;
    // 0x1f1424: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1420u, 0x1F1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1428u;
label_1f1428:
    // 0x1f1428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f142c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f142cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f1430: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1434: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f1434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f1438: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f1438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f143c: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f1440: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f1440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f1444: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1f1444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1f1448: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f144c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f1450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1454: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f1454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1458: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f145c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F145Cu;
    SET_GPR_U32(ctx, 31, 0x1F1464u);
    ctx->pc = 0x1F1460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F145Cu;
    // 0x1f1460: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F145Cu, 0x1F1464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1464u;
label_1f1464:
    // 0x1f1464: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1464u;
    {
        const bool branch_taken_0x1f1464 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1464u;
        // 0x1f1468: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1464) {
            ctx->pc = 0x1F1484u;
            goto label_1f1484;
        }
    }
    ctx->pc = 0x1F146Cu;
    // 0x1f146c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F146Cu;
    SET_GPR_U32(ctx, 31, 0x1F1474u);
    ctx->pc = 0x1F1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F146Cu;
    // 0x1f1470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F146Cu, 0x1F1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1474u;
label_1f1474:
    // 0x1f1474: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1474u;
    SET_GPR_U32(ctx, 31, 0x1F147Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1474u, 0x1F147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F147Cu;
label_1f147c:
    // 0x1f147c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F147Cu;
    {
        const bool branch_taken_0x1f147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F147Cu;
        // 0x1f1480: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f147c) {
            ctx->pc = 0x1F14BCu;
            goto label_1f14bc;
        }
    }
    ctx->pc = 0x1F1484u;
label_1f1484:
    // 0x1f1484: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f1484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f1488: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1488u;
    SET_GPR_U32(ctx, 31, 0x1F1490u);
    ctx->pc = 0x1F148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1488u;
    // 0x1f148c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1488u, 0x1F1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1490u;
label_1f1490:
    // 0x1f1490: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1490u;
    {
        const bool branch_taken_0x1f1490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1490) {
            ctx->pc = 0x1F14A8u;
            goto label_1f14a8;
        }
    }
    ctx->pc = 0x1F1498u;
    // 0x1f1498: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1498u;
    SET_GPR_U32(ctx, 31, 0x1F14A0u);
    ctx->pc = 0x1F149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1498u;
    // 0x1f149c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1498u, 0x1F14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14A0u;
label_1f14a0:
    // 0x1f14a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F14A0u;
    {
        const bool branch_taken_0x1f14a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14A0u;
        // 0x1f14a4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14a0) {
            ctx->pc = 0x1F14BCu;
            goto label_1f14bc;
        }
    }
    ctx->pc = 0x1F14A8u;
label_1f14a8:
    // 0x1f14a8: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F14A8u;
    SET_GPR_U32(ctx, 31, 0x1F14B0u);
    ctx->pc = 0x1F14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14A8u;
    // 0x1f14ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F14A8u, 0x1F14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14B0u;
label_1f14b0:
    // 0x1f14b0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F14B0u;
    SET_GPR_U32(ctx, 31, 0x1F14B8u);
    ctx->pc = 0x1F14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14B0u;
    // 0x1f14b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F14B0u, 0x1F14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14B8u;
label_1f14b8:
    // 0x1f14b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f14bc:
    // 0x1f14bc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f14bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f14c0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f14c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f14c4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f14c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f14c8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f14c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f14cc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f14ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f14d0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f14d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f14d4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f14d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f14d8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f14d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f14dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f14dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f14e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F14E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14E0u;
        // 0x1f14e4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F14E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F14E8u;
}
