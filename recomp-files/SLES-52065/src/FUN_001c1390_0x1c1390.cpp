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

// Function: FUN_001c1390
// Address: 0x1c1390 - 0x1c1628
void FUN_001c1390_0x1c1390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1390_0x1c1390");
#endif

    switch (ctx->pc) {
        case 0x1c13a4u: goto label_1c13a4;
        case 0x1c13c8u: goto label_1c13c8;
        case 0x1c13d4u: goto label_1c13d4;
        case 0x1c13e0u: goto label_1c13e0;
        case 0x1c13f4u: goto label_1c13f4;
        case 0x1c1400u: goto label_1c1400;
        case 0x1c140cu: goto label_1c140c;
        case 0x1c1420u: goto label_1c1420;
        case 0x1c142cu: goto label_1c142c;
        case 0x1c1438u: goto label_1c1438;
        case 0x1c144cu: goto label_1c144c;
        case 0x1c1458u: goto label_1c1458;
        case 0x1c1464u: goto label_1c1464;
        case 0x1c1478u: goto label_1c1478;
        case 0x1c1484u: goto label_1c1484;
        case 0x1c1490u: goto label_1c1490;
        case 0x1c14a4u: goto label_1c14a4;
        case 0x1c14b0u: goto label_1c14b0;
        case 0x1c14bcu: goto label_1c14bc;
        case 0x1c14d0u: goto label_1c14d0;
        case 0x1c14dcu: goto label_1c14dc;
        case 0x1c14e8u: goto label_1c14e8;
        case 0x1c14fcu: goto label_1c14fc;
        case 0x1c1508u: goto label_1c1508;
        case 0x1c1514u: goto label_1c1514;
        case 0x1c1528u: goto label_1c1528;
        case 0x1c1534u: goto label_1c1534;
        case 0x1c1540u: goto label_1c1540;
        case 0x1c1554u: goto label_1c1554;
        case 0x1c1560u: goto label_1c1560;
        case 0x1c156cu: goto label_1c156c;
        case 0x1c1580u: goto label_1c1580;
        case 0x1c158cu: goto label_1c158c;
        case 0x1c1598u: goto label_1c1598;
        case 0x1c15acu: goto label_1c15ac;
        case 0x1c15b8u: goto label_1c15b8;
        case 0x1c15c4u: goto label_1c15c4;
        case 0x1c15d8u: goto label_1c15d8;
        case 0x1c15e4u: goto label_1c15e4;
        case 0x1c15f0u: goto label_1c15f0;
        default: break;
    }

    ctx->pc = 0x1c1390u;

    // 0x1c1390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c1394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1398: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1c1398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1c139c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C139Cu;
    SET_GPR_U32(ctx, 31, 0x1C13A4u);
    ctx->pc = 0x1C13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C139Cu;
    // 0x1c13a0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C139Cu, 0x1C13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13A4u;
label_1c13a4:
    // 0x1c13a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c13a8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c13ac: 0x2463bad0  addiu       $v1, $v1, -0x4530
    ctx->pc = 0x1c13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949584));
    // 0x1c13b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c13b4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c13b8: 0x24a51840  addiu       $a1, $a1, 0x1840
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6208));
    // 0x1c13bc: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c13c0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C13C0u;
    SET_GPR_U32(ctx, 31, 0x1C13C8u);
    ctx->pc = 0x1C13C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13C0u;
    // 0x1c13c4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C13C0u, 0x1C13C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13C8u;
label_1c13c8:
    // 0x1c13c8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c13cc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C13CCu;
    SET_GPR_U32(ctx, 31, 0x1C13D4u);
    ctx->pc = 0x1C13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13CCu;
    // 0x1c13d0: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C13CCu, 0x1C13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13D4u;
label_1c13d4:
    // 0x1c13d4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c13d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c13d8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C13D8u;
    SET_GPR_U32(ctx, 31, 0x1C13E0u);
    ctx->pc = 0x1C13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13D8u;
    // 0x1c13dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C13D8u, 0x1C13E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13E0u;
label_1c13e0:
    // 0x1c13e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c13e4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c13e8: 0x24a51860  addiu       $a1, $a1, 0x1860
    ctx->pc = 0x1c13e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6240));
    // 0x1c13ec: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C13ECu;
    SET_GPR_U32(ctx, 31, 0x1C13F4u);
    ctx->pc = 0x1C13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13ECu;
    // 0x1c13f0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C13ECu, 0x1C13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13F4u;
label_1c13f4:
    // 0x1c13f4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c13f8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C13F8u;
    SET_GPR_U32(ctx, 31, 0x1C1400u);
    ctx->pc = 0x1C13FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13F8u;
    // 0x1c13fc: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C13F8u, 0x1C1400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1400u;
label_1c1400:
    // 0x1c1400: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c1404: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C1404u;
    SET_GPR_U32(ctx, 31, 0x1C140Cu);
    ctx->pc = 0x1C1408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1404u;
    // 0x1c1408: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C1404u, 0x1C140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C140Cu;
label_1c140c:
    // 0x1c140c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c140cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c1410: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c1410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c1414: 0x24a51880  addiu       $a1, $a1, 0x1880
    ctx->pc = 0x1c1414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6272));
    // 0x1c1418: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C1418u;
    SET_GPR_U32(ctx, 31, 0x1C1420u);
    ctx->pc = 0x1C141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1418u;
    // 0x1c141c: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C1418u, 0x1C1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1420u;
label_1c1420:
    // 0x1c1420: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c1420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1424: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C1424u;
    SET_GPR_U32(ctx, 31, 0x1C142Cu);
    ctx->pc = 0x1C1428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1424u;
    // 0x1c1428: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C1424u, 0x1C142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C142Cu;
label_1c142c:
    // 0x1c142c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c142cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c1430: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C1430u;
    SET_GPR_U32(ctx, 31, 0x1C1438u);
    ctx->pc = 0x1C1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1430u;
    // 0x1c1434: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C1430u, 0x1C1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1438u;
label_1c1438:
    // 0x1c1438: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c1438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c143c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c1440: 0x24a518a0  addiu       $a1, $a1, 0x18A0
    ctx->pc = 0x1c1440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6304));
    // 0x1c1444: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C1444u;
    SET_GPR_U32(ctx, 31, 0x1C144Cu);
    ctx->pc = 0x1C1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1444u;
    // 0x1c1448: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C1444u, 0x1C144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C144Cu;
label_1c144c:
    // 0x1c144c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c144cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1450: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C1450u;
    SET_GPR_U32(ctx, 31, 0x1C1458u);
    ctx->pc = 0x1C1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1450u;
    // 0x1c1454: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C1450u, 0x1C1458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1458u;
label_1c1458:
    // 0x1c1458: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c1458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c145c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C145Cu;
    SET_GPR_U32(ctx, 31, 0x1C1464u);
    ctx->pc = 0x1C1460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C145Cu;
    // 0x1c1460: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C145Cu, 0x1C1464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1464u;
label_1c1464:
    // 0x1c1464: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c1464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c1468: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c1468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c146c: 0x24a518c0  addiu       $a1, $a1, 0x18C0
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
    // 0x1c1470: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C1470u;
    SET_GPR_U32(ctx, 31, 0x1C1478u);
    ctx->pc = 0x1C1474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1470u;
    // 0x1c1474: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C1470u, 0x1C1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1478u;
label_1c1478:
    // 0x1c1478: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c1478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c147c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C147Cu;
    SET_GPR_U32(ctx, 31, 0x1C1484u);
    ctx->pc = 0x1C1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C147Cu;
    // 0x1c1480: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C147Cu, 0x1C1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1484u;
label_1c1484:
    // 0x1c1484: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c1488: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C1488u;
    SET_GPR_U32(ctx, 31, 0x1C1490u);
    ctx->pc = 0x1C148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1488u;
    // 0x1c148c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C1488u, 0x1C1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1490u;
label_1c1490:
    // 0x1c1490: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c1490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c1494: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c1498: 0x24a518e0  addiu       $a1, $a1, 0x18E0
    ctx->pc = 0x1c1498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
    // 0x1c149c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C149Cu;
    SET_GPR_U32(ctx, 31, 0x1C14A4u);
    ctx->pc = 0x1C14A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C149Cu;
    // 0x1c14a0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C149Cu, 0x1C14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14A4u;
label_1c14a4:
    // 0x1c14a4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c14a8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C14A8u;
    SET_GPR_U32(ctx, 31, 0x1C14B0u);
    ctx->pc = 0x1C14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14A8u;
    // 0x1c14ac: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C14A8u, 0x1C14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14B0u;
label_1c14b0:
    // 0x1c14b0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c14b4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C14B4u;
    SET_GPR_U32(ctx, 31, 0x1C14BCu);
    ctx->pc = 0x1C14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14B4u;
    // 0x1c14b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C14B4u, 0x1C14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14BCu;
label_1c14bc:
    // 0x1c14bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c14c0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c14c4: 0x24a51900  addiu       $a1, $a1, 0x1900
    ctx->pc = 0x1c14c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6400));
    // 0x1c14c8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C14C8u;
    SET_GPR_U32(ctx, 31, 0x1C14D0u);
    ctx->pc = 0x1C14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14C8u;
    // 0x1c14cc: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C14C8u, 0x1C14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14D0u;
label_1c14d0:
    // 0x1c14d0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c14d4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C14D4u;
    SET_GPR_U32(ctx, 31, 0x1C14DCu);
    ctx->pc = 0x1C14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14D4u;
    // 0x1c14d8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C14D4u, 0x1C14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14DCu;
label_1c14dc:
    // 0x1c14dc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c14e0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C14E0u;
    SET_GPR_U32(ctx, 31, 0x1C14E8u);
    ctx->pc = 0x1C14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14E0u;
    // 0x1c14e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C14E0u, 0x1C14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14E8u;
label_1c14e8:
    // 0x1c14e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c14e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c14ec: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c14f0: 0x24a51920  addiu       $a1, $a1, 0x1920
    ctx->pc = 0x1c14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6432));
    // 0x1c14f4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C14F4u;
    SET_GPR_U32(ctx, 31, 0x1C14FCu);
    ctx->pc = 0x1C14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14F4u;
    // 0x1c14f8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C14F4u, 0x1C14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14FCu;
label_1c14fc:
    // 0x1c14fc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c14fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1500: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C1500u;
    SET_GPR_U32(ctx, 31, 0x1C1508u);
    ctx->pc = 0x1C1504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1500u;
    // 0x1c1504: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C1500u, 0x1C1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1508u;
label_1c1508:
    // 0x1c1508: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c1508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c150c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C150Cu;
    SET_GPR_U32(ctx, 31, 0x1C1514u);
    ctx->pc = 0x1C1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C150Cu;
    // 0x1c1510: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C150Cu, 0x1C1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1514u;
label_1c1514:
    // 0x1c1514: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c1514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c1518: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c1518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c151c: 0x24a51940  addiu       $a1, $a1, 0x1940
    ctx->pc = 0x1c151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6464));
    // 0x1c1520: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C1520u;
    SET_GPR_U32(ctx, 31, 0x1C1528u);
    ctx->pc = 0x1C1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1520u;
    // 0x1c1524: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C1520u, 0x1C1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1528u;
label_1c1528:
    // 0x1c1528: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c1528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c152c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C152Cu;
    SET_GPR_U32(ctx, 31, 0x1C1534u);
    ctx->pc = 0x1C1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C152Cu;
    // 0x1c1530: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C152Cu, 0x1C1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1534u;
label_1c1534:
    // 0x1c1534: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c1534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c1538: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C1538u;
    SET_GPR_U32(ctx, 31, 0x1C1540u);
    ctx->pc = 0x1C153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1538u;
    // 0x1c153c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C1538u, 0x1C1540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1540u;
label_1c1540:
    // 0x1c1540: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c1540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c1544: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c1544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c1548: 0x24a51960  addiu       $a1, $a1, 0x1960
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6496));
    // 0x1c154c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C154Cu;
    SET_GPR_U32(ctx, 31, 0x1C1554u);
    ctx->pc = 0x1C1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C154Cu;
    // 0x1c1550: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C154Cu, 0x1C1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1554u;
label_1c1554:
    // 0x1c1554: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c1554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1558: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C1558u;
    SET_GPR_U32(ctx, 31, 0x1C1560u);
    ctx->pc = 0x1C155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1558u;
    // 0x1c155c: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C1558u, 0x1C1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1560u;
label_1c1560:
    // 0x1c1560: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c1560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c1564: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C1564u;
    SET_GPR_U32(ctx, 31, 0x1C156Cu);
    ctx->pc = 0x1C1568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1564u;
    // 0x1c1568: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C1564u, 0x1C156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C156Cu;
label_1c156c:
    // 0x1c156c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c156cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c1570: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c1570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c1574: 0x24a51980  addiu       $a1, $a1, 0x1980
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
    // 0x1c1578: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C1578u;
    SET_GPR_U32(ctx, 31, 0x1C1580u);
    ctx->pc = 0x1C157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1578u;
    // 0x1c157c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C1578u, 0x1C1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1580u;
label_1c1580:
    // 0x1c1580: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1584: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C1584u;
    SET_GPR_U32(ctx, 31, 0x1C158Cu);
    ctx->pc = 0x1C1588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1584u;
    // 0x1c1588: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C1584u, 0x1C158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C158Cu;
label_1c158c:
    // 0x1c158c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c1590: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C1590u;
    SET_GPR_U32(ctx, 31, 0x1C1598u);
    ctx->pc = 0x1C1594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1590u;
    // 0x1c1594: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C1590u, 0x1C1598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1598u;
label_1c1598:
    // 0x1c1598: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c1598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c159c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c15a0: 0x24a519a0  addiu       $a1, $a1, 0x19A0
    ctx->pc = 0x1c15a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6560));
    // 0x1c15a4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C15A4u;
    SET_GPR_U32(ctx, 31, 0x1C15ACu);
    ctx->pc = 0x1C15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15A4u;
    // 0x1c15a8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C15A4u, 0x1C15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15ACu;
label_1c15ac:
    // 0x1c15ac: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c15b0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C15B0u;
    SET_GPR_U32(ctx, 31, 0x1C15B8u);
    ctx->pc = 0x1C15B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15B0u;
    // 0x1c15b4: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C15B0u, 0x1C15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15B8u;
label_1c15b8:
    // 0x1c15b8: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c15bc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C15BCu;
    SET_GPR_U32(ctx, 31, 0x1C15C4u);
    ctx->pc = 0x1C15C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15BCu;
    // 0x1c15c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C15BCu, 0x1C15C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15C4u;
label_1c15c4:
    // 0x1c15c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c15c8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c15cc: 0x24a519c0  addiu       $a1, $a1, 0x19C0
    ctx->pc = 0x1c15ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6592));
    // 0x1c15d0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C15D0u;
    SET_GPR_U32(ctx, 31, 0x1C15D8u);
    ctx->pc = 0x1C15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15D0u;
    // 0x1c15d4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C15D0u, 0x1C15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15D8u;
label_1c15d8:
    // 0x1c15d8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c15dc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C15DCu;
    SET_GPR_U32(ctx, 31, 0x1C15E4u);
    ctx->pc = 0x1C15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15DCu;
    // 0x1c15e0: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C15DCu, 0x1C15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15E4u;
label_1c15e4:
    // 0x1c15e4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c15e8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C15E8u;
    SET_GPR_U32(ctx, 31, 0x1C15F0u);
    ctx->pc = 0x1C15ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15E8u;
    // 0x1c15ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C15E8u, 0x1C15F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15F0u;
label_1c15f0:
    // 0x1c15f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c15f4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1c15f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c15f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c15fc: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1c15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x1c1600: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c1600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1604: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1c1604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1c1608: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c1608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c160c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x1c160cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x1c1610: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c1614: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1c1614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1c1618: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c1618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c161c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c161cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1620: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1620u;
        // 0x1c1624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1628u;
}
