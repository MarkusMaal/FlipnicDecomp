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

// Function: FUN_001d1380
// Address: 0x1d1380 - 0x1d14fc
void FUN_001d1380_0x1d1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1380_0x1d1380");
#endif

    switch (ctx->pc) {
        case 0x1d13d4u: goto label_1d13d4;
        case 0x1d13e4u: goto label_1d13e4;
        case 0x1d13f8u: goto label_1d13f8;
        case 0x1d1400u: goto label_1d1400;
        case 0x1d1440u: goto label_1d1440;
        case 0x1d144cu: goto label_1d144c;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d1478u: goto label_1d1478;
        case 0x1d1484u: goto label_1d1484;
        case 0x1d14acu: goto label_1d14ac;
        case 0x1d14b8u: goto label_1d14b8;
        default: break;
    }

    ctx->pc = 0x1d1380u;

    // 0x1d1380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1384: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d138c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1390: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1d1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1394: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D1394u;
    {
        const bool branch_taken_0x1d1394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1394u;
        // 0x1d1398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1394) {
            ctx->pc = 0x1D14E0u;
            goto label_1d14e0;
        }
    }
    ctx->pc = 0x1D139Cu;
    // 0x1d139c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d13a0: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D13A0u;
    {
        const bool branch_taken_0x1d13a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13A0u;
        // 0x1d13a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13a0) {
            ctx->pc = 0x1D1494u;
            goto label_1d1494;
        }
    }
    ctx->pc = 0x1D13A8u;
    // 0x1d13a8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D13A8u;
    {
        const bool branch_taken_0x1d13a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d13a8) {
            ctx->pc = 0x1D1438u;
            goto label_1d1438;
        }
    }
    ctx->pc = 0x1D13B0u;
    // 0x1d13b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d13b4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D13B4u;
    {
        const bool branch_taken_0x1d13b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d13b4) {
            ctx->pc = 0x1D1410u;
            goto label_1d1410;
        }
    }
    ctx->pc = 0x1D13BCu;
    // 0x1d13bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D13BCu;
    {
        const bool branch_taken_0x1d13bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13BCu;
        // 0x1d13c0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13bc) {
            ctx->pc = 0x1D13CCu;
            goto label_1d13cc;
        }
    }
    ctx->pc = 0x1D13C4u;
    // 0x1d13c4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1D13C4u;
    {
        const bool branch_taken_0x1d13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13C4u;
        // 0x1d13c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13c4) {
            ctx->pc = 0x1D14ECu;
            goto label_1d14ec;
        }
    }
    ctx->pc = 0x1D13CCu;
label_1d13cc:
    // 0x1d13cc: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1D13CCu;
    SET_GPR_U32(ctx, 31, 0x1D13D4u);
    ctx->pc = 0x1D13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13CCu;
    // 0x1d13d0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1D13CCu, 0x1D13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13D4u;
label_1d13d4:
    // 0x1d13d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d13d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d13d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d13d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13dc: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1D13DCu;
    SET_GPR_U32(ctx, 31, 0x1D13E4u);
    ctx->pc = 0x1D13E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13DCu;
    // 0x1d13e0: 0x24a59a50  addiu       $a1, $a1, -0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1D13DCu, 0x1D13E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13E4u;
label_1d13e4:
    // 0x1d13e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d13e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d13e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d13e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13ec: 0x24a59a40  addiu       $a1, $a1, -0x65C0
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    // 0x1d13f0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1D13F0u;
    SET_GPR_U32(ctx, 31, 0x1D13F8u);
    ctx->pc = 0x1D13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13F0u;
    // 0x1d13f4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1D13F0u, 0x1D13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13F8u;
label_1d13f8:
    // 0x1d13f8: 0xc06d328  jal         func_1B4CA0
    ctx->pc = 0x1D13F8u;
    SET_GPR_U32(ctx, 31, 0x1D1400u);
    ctx->pc = 0x1B4CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CA0u, 0x1D13F8u, 0x1D1400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1400u;
label_1d1400:
    // 0x1d1400: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1408: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D1408u;
    {
        const bool branch_taken_0x1d1408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1408u;
        // 0x1d140c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1408) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    ctx->pc = 0x1D1410u;
label_1d1410:
    // 0x1d1410: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d1414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1418: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1d1418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1d141c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d1420: 0x1c400031  bgtz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D1420u;
    {
        const bool branch_taken_0x1d1420 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d1420) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    ctx->pc = 0x1D1428u;
    // 0x1d1428: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d142c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1430: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D1430u;
    {
        const bool branch_taken_0x1d1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1430u;
        // 0x1d1434: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1430) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    ctx->pc = 0x1D1438u;
label_1d1438:
    // 0x1d1438: 0xc06d354  jal         func_1B4D50
    ctx->pc = 0x1D1438u;
    SET_GPR_U32(ctx, 31, 0x1D1440u);
    ctx->pc = 0x1B4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D50u, 0x1D1438u, 0x1D1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1440u;
label_1d1440:
    // 0x1d1440: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d1440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d1444: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1D1444u;
    SET_GPR_U32(ctx, 31, 0x1D144Cu);
    ctx->pc = 0x1D1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1444u;
    // 0x1d1448: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1D1444u, 0x1D144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D144Cu;
label_1d144c:
    // 0x1d144c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d144cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1454: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1D1454u;
    SET_GPR_U32(ctx, 31, 0x1D145Cu);
    ctx->pc = 0x1D1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1454u;
    // 0x1d1458: 0x24a59a40  addiu       $a1, $a1, -0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1D1454u, 0x1D145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D145Cu;
label_1d145c:
    // 0x1d145c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d145cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1464: 0x24a59a50  addiu       $a1, $a1, -0x65B0
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
    // 0x1d1468: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1D1468u;
    SET_GPR_U32(ctx, 31, 0x1D1470u);
    ctx->pc = 0x1D146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1468u;
    // 0x1d146c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1D1468u, 0x1D1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1470u;
label_1d1470:
    // 0x1d1470: 0xc04d988  jal         func_136620
    ctx->pc = 0x1D1470u;
    SET_GPR_U32(ctx, 31, 0x1D1478u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1D1470u, 0x1D1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1478u;
label_1d1478:
    // 0x1d1478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d147c: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1D147Cu;
    SET_GPR_U32(ctx, 31, 0x1D1484u);
    ctx->pc = 0x1D1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D147Cu;
    // 0x1d1480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1D147Cu, 0x1D1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1484u;
label_1d1484:
    // 0x1d1484: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d148c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D148Cu;
    {
        const bool branch_taken_0x1d148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D148Cu;
        // 0x1d1490: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d148c) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    ctx->pc = 0x1D1494u;
label_1d1494:
    // 0x1d1494: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d1494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d1498: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d149c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D149Cu;
    {
        const bool branch_taken_0x1d149c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d149c) {
            ctx->pc = 0x1D14B8u;
            goto label_1d14b8;
        }
    }
    ctx->pc = 0x1D14A4u;
    // 0x1d14a4: 0xc04d988  jal         func_136620
    ctx->pc = 0x1D14A4u;
    SET_GPR_U32(ctx, 31, 0x1D14ACu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1D14A4u, 0x1D14ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14ACu;
label_1d14ac:
    // 0x1d14ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d14acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14b0: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1D14B0u;
    SET_GPR_U32(ctx, 31, 0x1D14B8u);
    ctx->pc = 0x1D14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14B0u;
    // 0x1d14b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1D14B0u, 0x1D14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14B8u;
label_1d14b8:
    // 0x1d14b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d14bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d14c0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1d14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1d14c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d14c8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D14C8u;
    {
        const bool branch_taken_0x1d14c8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d14c8) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    ctx->pc = 0x1D14D0u;
    // 0x1d14d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d14d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d14d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D14D8u;
    {
        const bool branch_taken_0x1d14d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14D8u;
        // 0x1d14dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14d8) {
            ctx->pc = 0x1D14E8u;
            goto label_1d14e8;
        }
    }
    ctx->pc = 0x1D14E0u;
label_1d14e0:
    // 0x1d14e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D14E0u;
    {
        const bool branch_taken_0x1d14e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E0u;
        // 0x1d14e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14e0) {
            ctx->pc = 0x1D14ECu;
            goto label_1d14ec;
        }
    }
    ctx->pc = 0x1D14E8u;
label_1d14e8:
    // 0x1d14e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d14e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d14ec:
    // 0x1d14ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d14ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d14f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d14f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d14f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D14F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14F4u;
        // 0x1d14f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D14F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D14FCu;
}
