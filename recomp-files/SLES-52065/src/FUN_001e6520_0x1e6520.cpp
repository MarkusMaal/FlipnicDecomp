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

// Function: FUN_001e6520
// Address: 0x1e6520 - 0x1e66b8
void FUN_001e6520_0x1e6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6520_0x1e6520");
#endif

    switch (ctx->pc) {
        case 0x1e6520u: goto label_1e6520;
        case 0x1e6524u: goto label_1e6524;
        case 0x1e6528u: goto label_1e6528;
        case 0x1e652cu: goto label_1e652c;
        case 0x1e6530u: goto label_1e6530;
        case 0x1e6534u: goto label_1e6534;
        case 0x1e6538u: goto label_1e6538;
        case 0x1e653cu: goto label_1e653c;
        case 0x1e6540u: goto label_1e6540;
        case 0x1e6544u: goto label_1e6544;
        case 0x1e6548u: goto label_1e6548;
        case 0x1e654cu: goto label_1e654c;
        case 0x1e6550u: goto label_1e6550;
        case 0x1e6554u: goto label_1e6554;
        case 0x1e6558u: goto label_1e6558;
        case 0x1e655cu: goto label_1e655c;
        case 0x1e6560u: goto label_1e6560;
        case 0x1e6564u: goto label_1e6564;
        case 0x1e6568u: goto label_1e6568;
        case 0x1e656cu: goto label_1e656c;
        case 0x1e6570u: goto label_1e6570;
        case 0x1e6574u: goto label_1e6574;
        case 0x1e6578u: goto label_1e6578;
        case 0x1e657cu: goto label_1e657c;
        case 0x1e6580u: goto label_1e6580;
        case 0x1e6584u: goto label_1e6584;
        case 0x1e6588u: goto label_1e6588;
        case 0x1e658cu: goto label_1e658c;
        case 0x1e6590u: goto label_1e6590;
        case 0x1e6594u: goto label_1e6594;
        case 0x1e6598u: goto label_1e6598;
        case 0x1e659cu: goto label_1e659c;
        case 0x1e65a0u: goto label_1e65a0;
        case 0x1e65a4u: goto label_1e65a4;
        case 0x1e65a8u: goto label_1e65a8;
        case 0x1e65acu: goto label_1e65ac;
        case 0x1e65b0u: goto label_1e65b0;
        case 0x1e65b4u: goto label_1e65b4;
        case 0x1e65b8u: goto label_1e65b8;
        case 0x1e65bcu: goto label_1e65bc;
        case 0x1e65c0u: goto label_1e65c0;
        case 0x1e65c4u: goto label_1e65c4;
        case 0x1e65c8u: goto label_1e65c8;
        case 0x1e65ccu: goto label_1e65cc;
        case 0x1e65d0u: goto label_1e65d0;
        case 0x1e65d4u: goto label_1e65d4;
        case 0x1e65d8u: goto label_1e65d8;
        case 0x1e65dcu: goto label_1e65dc;
        case 0x1e65e0u: goto label_1e65e0;
        case 0x1e65e4u: goto label_1e65e4;
        case 0x1e65e8u: goto label_1e65e8;
        case 0x1e65ecu: goto label_1e65ec;
        case 0x1e65f0u: goto label_1e65f0;
        case 0x1e65f4u: goto label_1e65f4;
        case 0x1e65f8u: goto label_1e65f8;
        case 0x1e65fcu: goto label_1e65fc;
        case 0x1e6600u: goto label_1e6600;
        case 0x1e6604u: goto label_1e6604;
        case 0x1e6608u: goto label_1e6608;
        case 0x1e660cu: goto label_1e660c;
        case 0x1e6610u: goto label_1e6610;
        case 0x1e6614u: goto label_1e6614;
        case 0x1e6618u: goto label_1e6618;
        case 0x1e661cu: goto label_1e661c;
        case 0x1e6620u: goto label_1e6620;
        case 0x1e6624u: goto label_1e6624;
        case 0x1e6628u: goto label_1e6628;
        case 0x1e662cu: goto label_1e662c;
        case 0x1e6630u: goto label_1e6630;
        case 0x1e6634u: goto label_1e6634;
        case 0x1e6638u: goto label_1e6638;
        case 0x1e663cu: goto label_1e663c;
        case 0x1e6640u: goto label_1e6640;
        case 0x1e6644u: goto label_1e6644;
        case 0x1e6648u: goto label_1e6648;
        case 0x1e664cu: goto label_1e664c;
        case 0x1e6650u: goto label_1e6650;
        case 0x1e6654u: goto label_1e6654;
        case 0x1e6658u: goto label_1e6658;
        case 0x1e665cu: goto label_1e665c;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6664u: goto label_1e6664;
        case 0x1e6668u: goto label_1e6668;
        case 0x1e666cu: goto label_1e666c;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e6674u: goto label_1e6674;
        case 0x1e6678u: goto label_1e6678;
        case 0x1e667cu: goto label_1e667c;
        case 0x1e6680u: goto label_1e6680;
        case 0x1e6684u: goto label_1e6684;
        case 0x1e6688u: goto label_1e6688;
        case 0x1e668cu: goto label_1e668c;
        case 0x1e6690u: goto label_1e6690;
        case 0x1e6694u: goto label_1e6694;
        case 0x1e6698u: goto label_1e6698;
        case 0x1e669cu: goto label_1e669c;
        case 0x1e66a0u: goto label_1e66a0;
        case 0x1e66a4u: goto label_1e66a4;
        case 0x1e66a8u: goto label_1e66a8;
        case 0x1e66acu: goto label_1e66ac;
        case 0x1e66b0u: goto label_1e66b0;
        case 0x1e66b4u: goto label_1e66b4;
        default: break;
    }

    ctx->pc = 0x1e6520u;

label_1e6520:
    // 0x1e6520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e6524:
    // 0x1e6524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e6528:
    // 0x1e6528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e652c:
    // 0x1e652c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6530:
    // 0x1e6530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e6530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6534:
    // 0x1e6534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6538:
    // 0x1e6538: 0x10000054  b           . + 4 + (0x54 << 2)
label_1e653c:
    if (ctx->pc == 0x1E653Cu) {
        ctx->pc = 0x1E653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6538u;
        // 0x1e653c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6540u;
        goto label_1e6540;
    }
    ctx->pc = 0x1E6538u;
    {
        const bool branch_taken_0x1e6538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6538u;
        // 0x1e653c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6538) {
            ctx->pc = 0x1E668Cu;
            goto label_1e668c;
        }
    }
    ctx->pc = 0x1E6540u;
label_1e6540:
    // 0x1e6540: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x1e6540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1e6544:
    // 0x1e6544: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1e6544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
label_1e6548:
    // 0x1e6548: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e6548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e654c:
    // 0x1e654c: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1e654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1e6550:
    // 0x1e6550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6554:
    // 0x1e6554: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e6554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e6558:
    // 0x1e6558: 0x320f809  jalr        $t9
label_1e655c:
    if (ctx->pc == 0x1E655Cu) {
        ctx->pc = 0x1E655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6558u;
        // 0x1e655c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6560u;
        goto label_1e6560;
    }
    ctx->pc = 0x1E6558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6560u);
        ctx->pc = 0x1E655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6558u;
        // 0x1e655c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6558u, 0x1E6560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6560u;
label_1e6560:
    // 0x1e6560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6564:
    // 0x1e6564: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e6564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e6568:
    // 0x1e6568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e656c:
    // 0x1e656c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1e6570:
    if (ctx->pc == 0x1E6570u) {
        ctx->pc = 0x1E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E656Cu;
        // 0x1e6570: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6574u;
        goto label_1e6574;
    }
    ctx->pc = 0x1E656Cu;
    {
        const bool branch_taken_0x1e656c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E656Cu;
        // 0x1e6570: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e656c) {
            ctx->pc = 0x1E65A0u;
            goto label_1e65a0;
        }
    }
    ctx->pc = 0x1E6574u;
label_1e6574:
    // 0x1e6574: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e6578:
    if (ctx->pc == 0x1E6578u) {
        ctx->pc = 0x1E6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6574u;
        // 0x1e6578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E657Cu;
        goto label_1e657c;
    }
    ctx->pc = 0x1E6574u;
    {
        const bool branch_taken_0x1e6574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6574u;
        // 0x1e6578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6574) {
            ctx->pc = 0x1E65A0u;
            goto label_1e65a0;
        }
    }
    ctx->pc = 0x1E657Cu;
label_1e657c:
    // 0x1e657c: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_1e6580:
    if (ctx->pc == 0x1E6580u) {
        ctx->pc = 0x1E6584u;
        goto label_1e6584;
    }
    ctx->pc = 0x1E657Cu;
    {
        const bool branch_taken_0x1e657c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e657c) {
            ctx->pc = 0x1E668Cu;
            goto label_1e668c;
        }
    }
    ctx->pc = 0x1E6584u;
label_1e6584:
    // 0x1e6584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6588:
    // 0x1e6588: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e658c:
    if (ctx->pc == 0x1E658Cu) {
        ctx->pc = 0x1E6590u;
        goto label_1e6590;
    }
    ctx->pc = 0x1E6588u;
    {
        const bool branch_taken_0x1e6588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6588) {
            ctx->pc = 0x1E6598u;
            goto label_1e6598;
        }
    }
    ctx->pc = 0x1E6590u;
label_1e6590:
    // 0x1e6590: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e6594:
    if (ctx->pc == 0x1E6594u) {
        ctx->pc = 0x1E6598u;
        goto label_1e6598;
    }
    ctx->pc = 0x1E6590u;
    {
        const bool branch_taken_0x1e6590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6590) {
            ctx->pc = 0x1E668Cu;
            goto label_1e668c;
        }
    }
    ctx->pc = 0x1E6598u;
label_1e6598:
    // 0x1e6598: 0x10000041  b           . + 4 + (0x41 << 2)
label_1e659c:
    if (ctx->pc == 0x1E659Cu) {
        ctx->pc = 0x1E659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6598u;
        // 0x1e659c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65A0u;
        goto label_1e65a0;
    }
    ctx->pc = 0x1E6598u;
    {
        const bool branch_taken_0x1e6598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6598u;
        // 0x1e659c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6598) {
            ctx->pc = 0x1E66A0u;
            goto label_1e66a0;
        }
    }
    ctx->pc = 0x1E65A0u;
label_1e65a0:
    // 0x1e65a0: 0x10000037  b           . + 4 + (0x37 << 2)
label_1e65a4:
    if (ctx->pc == 0x1E65A4u) {
        ctx->pc = 0x1E65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65A0u;
        // 0x1e65a4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65A8u;
        goto label_1e65a8;
    }
    ctx->pc = 0x1E65A0u;
    {
        const bool branch_taken_0x1e65a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65A0u;
        // 0x1e65a4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65a0) {
            ctx->pc = 0x1E6680u;
            goto label_1e6680;
        }
    }
    ctx->pc = 0x1E65A8u;
label_1e65a8:
    // 0x1e65a8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e65ac:
    // 0x1e65ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e65acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e65b0:
    // 0x1e65b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e65b4:
    // 0x1e65b4: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
label_1e65b8:
    if (ctx->pc == 0x1E65B8u) {
        ctx->pc = 0x1E65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65B4u;
        // 0x1e65b8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65BCu;
        goto label_1e65bc;
    }
    ctx->pc = 0x1E65B4u;
    {
        const bool branch_taken_0x1e65b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65B4u;
        // 0x1e65b8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65b4) {
            ctx->pc = 0x1E6638u;
            goto label_1e6638;
        }
    }
    ctx->pc = 0x1E65BCu;
label_1e65bc:
    // 0x1e65bc: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e65c0:
    // 0x1e65c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e65c4:
    // 0x1e65c4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e65c8:
    // 0x1e65c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e65c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e65cc:
    // 0x1e65cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e65d0:
    // 0x1e65d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1e65d4:
    if (ctx->pc == 0x1E65D4u) {
        ctx->pc = 0x1E65D8u;
        goto label_1e65d8;
    }
    ctx->pc = 0x1E65D0u;
    {
        const bool branch_taken_0x1e65d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e65d0) {
            ctx->pc = 0x1E661Cu;
            goto label_1e661c;
        }
    }
    ctx->pc = 0x1E65D8u;
label_1e65d8:
    // 0x1e65d8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e65d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e65dc:
    // 0x1e65dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e65e0:
    // 0x1e65e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e65e4:
    // 0x1e65e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e65e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e65e8:
    // 0x1e65e8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e65ec:
    // 0x1e65ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e65f0:
    // 0x1e65f0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e65f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e65f4:
    // 0x1e65f4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
label_1e65f8:
    if (ctx->pc == 0x1E65F8u) {
        ctx->pc = 0x1E65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65F4u;
        // 0x1e65f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65FCu;
        goto label_1e65fc;
    }
    ctx->pc = 0x1E65F4u;
    {
        const bool branch_taken_0x1e65f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65F4u;
        // 0x1e65f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65f4) {
            ctx->pc = 0x1E660Cu;
            goto label_1e660c;
        }
    }
    ctx->pc = 0x1E65FCu;
label_1e65fc:
    // 0x1e65fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e6600:
    // 0x1e6600: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e6600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e6604:
    // 0x1e6604: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6608:
    if (ctx->pc == 0x1E6608u) {
        ctx->pc = 0x1E6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6604u;
        // 0x1e6608: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E660Cu;
        goto label_1e660c;
    }
    ctx->pc = 0x1E6604u;
    {
        const bool branch_taken_0x1e6604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6604u;
        // 0x1e6608: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6604) {
            ctx->pc = 0x1E6614u;
            goto label_1e6614;
        }
    }
    ctx->pc = 0x1E660Cu;
label_1e660c:
    // 0x1e660c: 0xc0817ae  jal         func_205EB8
label_1e6610:
    if (ctx->pc == 0x1E6610u) {
        ctx->pc = 0x1E6614u;
        goto label_1e6614;
    }
    ctx->pc = 0x1E660Cu;
    SET_GPR_U32(ctx, 31, 0x1E6614u);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E660Cu, 0x1E6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6614u;
label_1e6614:
    // 0x1e6614: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e6618:
    if (ctx->pc == 0x1E6618u) {
        ctx->pc = 0x1E661Cu;
        goto label_1e661c;
    }
    ctx->pc = 0x1E6614u;
    {
        const bool branch_taken_0x1e6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6614) {
            ctx->pc = 0x1E662Cu;
            goto label_1e662c;
        }
    }
    ctx->pc = 0x1E661Cu;
label_1e661c:
    // 0x1e661c: 0x0  nop
    ctx->pc = 0x1e661cu;
    // NOP
label_1e6620:
    // 0x1e6620: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1e6620u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e6624:
    // 0x1e6624: 0xc0817ae  jal         func_205EB8
label_1e6628:
    if (ctx->pc == 0x1E6628u) {
        ctx->pc = 0x1E6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6624u;
        // 0x1e6628: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E662Cu;
        goto label_1e662c;
    }
    ctx->pc = 0x1E6624u;
    SET_GPR_U32(ctx, 31, 0x1E662Cu);
    ctx->pc = 0x1E6628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6624u;
    // 0x1e6628: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E6624u, 0x1E662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E662Cu;
label_1e662c:
    // 0x1e662c: 0x0  nop
    ctx->pc = 0x1e662cu;
    // NOP
label_1e6630:
    // 0x1e6630: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e6634:
    if (ctx->pc == 0x1E6634u) {
        ctx->pc = 0x1E6638u;
        goto label_1e6638;
    }
    ctx->pc = 0x1E6630u;
    {
        const bool branch_taken_0x1e6630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6630) {
            ctx->pc = 0x1E6664u;
            goto label_1e6664;
        }
    }
    ctx->pc = 0x1E6638u;
label_1e6638:
    // 0x1e6638: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e6638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e663c:
    // 0x1e663c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e663cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e6640:
    // 0x1e6640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6644:
    // 0x1e6644: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e6644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e6648:
    // 0x1e6648: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e6648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e664c:
    // 0x1e664c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e664cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e6650:
    // 0x1e6650: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6654:
    // 0x1e6654: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e6654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e6658:
    // 0x1e6658: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e665c:
    // 0x1e665c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e665cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6660:
    // 0x1e6660: 0x0  nop
    ctx->pc = 0x1e6660u;
    // NOP
label_1e6664:
    // 0x1e6664: 0x0  nop
    ctx->pc = 0x1e6664u;
    // NOP
label_1e6668:
    // 0x1e6668: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e666c:
    // 0x1e666c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e6670:
    if (ctx->pc == 0x1E6670u) {
        ctx->pc = 0x1E6674u;
        goto label_1e6674;
    }
    ctx->pc = 0x1E666Cu;
    {
        const bool branch_taken_0x1e666c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e666c) {
            ctx->pc = 0x1E667Cu;
            goto label_1e667c;
        }
    }
    ctx->pc = 0x1E6674u;
label_1e6674:
    // 0x1e6674: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e6678:
    if (ctx->pc == 0x1E6678u) {
        ctx->pc = 0x1E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6674u;
        // 0x1e6678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E667Cu;
        goto label_1e667c;
    }
    ctx->pc = 0x1E6674u;
    {
        const bool branch_taken_0x1e6674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6674u;
        // 0x1e6678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6674) {
            ctx->pc = 0x1E66A0u;
            goto label_1e66a0;
        }
    }
    ctx->pc = 0x1E667Cu;
label_1e667c:
    // 0x1e667c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e6680:
    // 0x1e6680: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e6680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e6684:
    // 0x1e6684: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_1e6688:
    if (ctx->pc == 0x1E6688u) {
        ctx->pc = 0x1E668Cu;
        goto label_1e668c;
    }
    ctx->pc = 0x1E6684u;
    {
        const bool branch_taken_0x1e6684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6684) {
            ctx->pc = 0x1E65A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e65a8;
        }
    }
    ctx->pc = 0x1E668Cu;
label_1e668c:
    // 0x1e668c: 0x0  nop
    ctx->pc = 0x1e668cu;
    // NOP
label_1e6690:
    // 0x1e6690: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1e6690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1e6694:
    // 0x1e6694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6698:
    // 0x1e6698: 0x1062ffa9  beq         $v1, $v0, . + 4 + (-0x57 << 2)
label_1e669c:
    if (ctx->pc == 0x1E669Cu) {
        ctx->pc = 0x1E669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6698u;
        // 0x1e669c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E66A0u;
        goto label_1e66a0;
    }
    ctx->pc = 0x1E6698u;
    {
        const bool branch_taken_0x1e6698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6698u;
        // 0x1e669c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6698) {
            ctx->pc = 0x1E6540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6540;
        }
    }
    ctx->pc = 0x1E66A0u;
label_1e66a0:
    // 0x1e66a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e66a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e66a4:
    // 0x1e66a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e66a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e66a8:
    // 0x1e66a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e66a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e66ac:
    // 0x1e66ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e66acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e66b0:
    // 0x1e66b0: 0x3e00008  jr          $ra
label_1e66b4:
    if (ctx->pc == 0x1E66B4u) {
        ctx->pc = 0x1E66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66B0u;
        // 0x1e66b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E66B8u;
        goto label_fallthrough_0x1e66b0;
    }
    ctx->pc = 0x1E66B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66B0u;
        // 0x1e66b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E66B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e66b0:
    ctx->pc = 0x1E66B8u;
}
