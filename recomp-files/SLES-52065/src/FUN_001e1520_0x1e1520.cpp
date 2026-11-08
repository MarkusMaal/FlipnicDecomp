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

// Function: FUN_001e1520
// Address: 0x1e1520 - 0x1e15f0
void FUN_001e1520_0x1e1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1520_0x1e1520");
#endif

    switch (ctx->pc) {
        case 0x1e1520u: goto label_1e1520;
        case 0x1e1524u: goto label_1e1524;
        case 0x1e1528u: goto label_1e1528;
        case 0x1e152cu: goto label_1e152c;
        case 0x1e1530u: goto label_1e1530;
        case 0x1e1534u: goto label_1e1534;
        case 0x1e1538u: goto label_1e1538;
        case 0x1e153cu: goto label_1e153c;
        case 0x1e1540u: goto label_1e1540;
        case 0x1e1544u: goto label_1e1544;
        case 0x1e1548u: goto label_1e1548;
        case 0x1e154cu: goto label_1e154c;
        case 0x1e1550u: goto label_1e1550;
        case 0x1e1554u: goto label_1e1554;
        case 0x1e1558u: goto label_1e1558;
        case 0x1e155cu: goto label_1e155c;
        case 0x1e1560u: goto label_1e1560;
        case 0x1e1564u: goto label_1e1564;
        case 0x1e1568u: goto label_1e1568;
        case 0x1e156cu: goto label_1e156c;
        case 0x1e1570u: goto label_1e1570;
        case 0x1e1574u: goto label_1e1574;
        case 0x1e1578u: goto label_1e1578;
        case 0x1e157cu: goto label_1e157c;
        case 0x1e1580u: goto label_1e1580;
        case 0x1e1584u: goto label_1e1584;
        case 0x1e1588u: goto label_1e1588;
        case 0x1e158cu: goto label_1e158c;
        case 0x1e1590u: goto label_1e1590;
        case 0x1e1594u: goto label_1e1594;
        case 0x1e1598u: goto label_1e1598;
        case 0x1e159cu: goto label_1e159c;
        case 0x1e15a0u: goto label_1e15a0;
        case 0x1e15a4u: goto label_1e15a4;
        case 0x1e15a8u: goto label_1e15a8;
        case 0x1e15acu: goto label_1e15ac;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15b8u: goto label_1e15b8;
        case 0x1e15bcu: goto label_1e15bc;
        case 0x1e15c0u: goto label_1e15c0;
        case 0x1e15c4u: goto label_1e15c4;
        case 0x1e15c8u: goto label_1e15c8;
        case 0x1e15ccu: goto label_1e15cc;
        case 0x1e15d0u: goto label_1e15d0;
        case 0x1e15d4u: goto label_1e15d4;
        case 0x1e15d8u: goto label_1e15d8;
        case 0x1e15dcu: goto label_1e15dc;
        case 0x1e15e0u: goto label_1e15e0;
        case 0x1e15e4u: goto label_1e15e4;
        case 0x1e15e8u: goto label_1e15e8;
        case 0x1e15ecu: goto label_1e15ec;
        default: break;
    }

    ctx->pc = 0x1e1520u;

label_1e1520:
    // 0x1e1520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e1524:
    // 0x1e1524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e1528:
    // 0x1e1528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e152c:
    // 0x1e152c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1530:
    // 0x1e1530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1534:
    // 0x1e1534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1538:
    // 0x1e1538: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_1e153c:
    if (ctx->pc == 0x1E153Cu) {
        ctx->pc = 0x1E153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1538u;
        // 0x1e153c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1540u;
        goto label_1e1540;
    }
    ctx->pc = 0x1E1538u;
    {
        const bool branch_taken_0x1e1538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1538u;
        // 0x1e153c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1538) {
            ctx->pc = 0x1E15D4u;
            goto label_1e15d4;
        }
    }
    ctx->pc = 0x1E1540u;
label_1e1540:
    // 0x1e1540: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1e1544:
    // 0x1e1544: 0x2442c098  addiu       $v0, $v0, -0x3F68
    ctx->pc = 0x1e1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951064));
label_1e1548:
    // 0x1e1548: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e154c:
    // 0x1e154c: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x1e154cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e1550:
    // 0x1e1550: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_1e1554:
    if (ctx->pc == 0x1E1554u) {
        ctx->pc = 0x1E1558u;
        goto label_1e1558;
    }
    ctx->pc = 0x1E1550u;
    {
        const bool branch_taken_0x1e1550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1550) {
            ctx->pc = 0x1E1584u;
            goto label_1e1584;
        }
    }
    ctx->pc = 0x1E1558u;
label_1e1558:
    // 0x1e1558: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e1558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e155c:
    // 0x1e155c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e155cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e1560:
    // 0x1e1560: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1e1560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1e1564:
    // 0x1e1564: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1568:
    // 0x1e1568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e156c:
    // 0x1e156c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e156cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1570:
    // 0x1e1570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1574:
    // 0x1e1574: 0x40f809  jalr        $v0
label_1e1578:
    if (ctx->pc == 0x1E1578u) {
        ctx->pc = 0x1E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1574u;
        // 0x1e1578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E157Cu;
        goto label_1e157c;
    }
    ctx->pc = 0x1E1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E157Cu);
        ctx->pc = 0x1E1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1574u;
        // 0x1e1578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1574u, 0x1E157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E157Cu;
label_1e157c:
    // 0x1e157c: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
label_1e1580:
    if (ctx->pc == 0x1E1580u) {
        ctx->pc = 0x1E1584u;
        goto label_1e1584;
    }
    ctx->pc = 0x1E157Cu;
    {
        const bool branch_taken_0x1e157c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e157c) {
            ctx->pc = 0x1E1558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1558;
        }
    }
    ctx->pc = 0x1E1584u;
label_1e1584:
    // 0x1e1584: 0x0  nop
    ctx->pc = 0x1e1584u;
    // NOP
label_1e1588:
    // 0x1e1588: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x1e1588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1e158c:
    // 0x1e158c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1e1590:
    if (ctx->pc == 0x1E1590u) {
        ctx->pc = 0x1E1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E158Cu;
        // 0x1e1590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1594u;
        goto label_1e1594;
    }
    ctx->pc = 0x1E158Cu;
    {
        const bool branch_taken_0x1e158c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E158Cu;
        // 0x1e1590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e158c) {
            ctx->pc = 0x1E15A4u;
            goto label_1e15a4;
        }
    }
    ctx->pc = 0x1E1594u;
label_1e1594:
    // 0x1e1594: 0xc0482a4  jal         func_120A90
label_1e1598:
    if (ctx->pc == 0x1E1598u) {
        ctx->pc = 0x1E1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1594u;
        // 0x1e1598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E159Cu;
        goto label_1e159c;
    }
    ctx->pc = 0x1E1594u;
    SET_GPR_U32(ctx, 31, 0x1E159Cu);
    ctx->pc = 0x1E1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1594u;
    // 0x1e1598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x1E1594u, 0x1E159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E159Cu;
label_1e159c:
    // 0x1e159c: 0xc0401a4  jal         func_100690
label_1e15a0:
    if (ctx->pc == 0x1E15A0u) {
        ctx->pc = 0x1E15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E159Cu;
        // 0x1e15a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15A4u;
        goto label_1e15a4;
    }
    ctx->pc = 0x1E159Cu;
    SET_GPR_U32(ctx, 31, 0x1E15A4u);
    ctx->pc = 0x1E15A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E159Cu;
    // 0x1e15a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E159Cu, 0x1E15A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15A4u;
label_1e15a4:
    // 0x1e15a4: 0xc07fb18  jal         func_1FEC60
label_1e15a8:
    if (ctx->pc == 0x1E15A8u) {
        ctx->pc = 0x1E15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15A4u;
        // 0x1e15a8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15ACu;
        goto label_1e15ac;
    }
    ctx->pc = 0x1E15A4u;
    SET_GPR_U32(ctx, 31, 0x1E15ACu);
    ctx->pc = 0x1E15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15A4u;
    // 0x1e15a8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x1E15A4u, 0x1E15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15ACu;
label_1e15ac:
    // 0x1e15ac: 0xc07fb18  jal         func_1FEC60
label_1e15b0:
    if (ctx->pc == 0x1E15B0u) {
        ctx->pc = 0x1E15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15ACu;
        // 0x1e15b0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15B4u;
        goto label_1e15b4;
    }
    ctx->pc = 0x1E15ACu;
    SET_GPR_U32(ctx, 31, 0x1E15B4u);
    ctx->pc = 0x1E15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15ACu;
    // 0x1e15b0: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x1E15ACu, 0x1E15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15B4u;
label_1e15b4:
    // 0x1e15b4: 0xc07fb18  jal         func_1FEC60
label_1e15b8:
    if (ctx->pc == 0x1E15B8u) {
        ctx->pc = 0x1E15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15B4u;
        // 0x1e15b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15BCu;
        goto label_1e15bc;
    }
    ctx->pc = 0x1E15B4u;
    SET_GPR_U32(ctx, 31, 0x1E15BCu);
    ctx->pc = 0x1E15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15B4u;
    // 0x1e15b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x1E15B4u, 0x1E15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15BCu;
label_1e15bc:
    // 0x1e15bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e15bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e15c0:
    // 0x1e15c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e15c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e15c4:
    // 0x1e15c4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1e15c8:
    if (ctx->pc == 0x1E15C8u) {
        ctx->pc = 0x1E15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C4u;
        // 0x1e15c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15CCu;
        goto label_1e15cc;
    }
    ctx->pc = 0x1E15C4u;
    {
        const bool branch_taken_0x1e15c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C4u;
        // 0x1e15c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15c4) {
            ctx->pc = 0x1E15D8u;
            goto label_1e15d8;
        }
    }
    ctx->pc = 0x1E15CCu;
label_1e15cc:
    // 0x1e15cc: 0xc0401a4  jal         func_100690
label_1e15d0:
    if (ctx->pc == 0x1E15D0u) {
        ctx->pc = 0x1E15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15CCu;
        // 0x1e15d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15D4u;
        goto label_1e15d4;
    }
    ctx->pc = 0x1E15CCu;
    SET_GPR_U32(ctx, 31, 0x1E15D4u);
    ctx->pc = 0x1E15D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15CCu;
    // 0x1e15d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E15CCu, 0x1E15D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15D4u;
label_1e15d4:
    // 0x1e15d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e15d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e15d8:
    // 0x1e15d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e15d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e15dc:
    // 0x1e15dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e15dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e15e0:
    // 0x1e15e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e15e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e15e4:
    // 0x1e15e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e15e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e15e8:
    // 0x1e15e8: 0x3e00008  jr          $ra
label_1e15ec:
    if (ctx->pc == 0x1E15ECu) {
        ctx->pc = 0x1E15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15E8u;
        // 0x1e15ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15F0u;
        goto label_fallthrough_0x1e15e8;
    }
    ctx->pc = 0x1E15E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15E8u;
        // 0x1e15ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E15E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e15e8:
    ctx->pc = 0x1E15F0u;
}
