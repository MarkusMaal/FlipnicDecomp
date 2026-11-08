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

// Function: FUN_001e55d0
// Address: 0x1e55d0 - 0x1e5768
void FUN_001e55d0_0x1e55d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e55d0_0x1e55d0");
#endif

    switch (ctx->pc) {
        case 0x1e55d0u: goto label_1e55d0;
        case 0x1e55d4u: goto label_1e55d4;
        case 0x1e55d8u: goto label_1e55d8;
        case 0x1e55dcu: goto label_1e55dc;
        case 0x1e55e0u: goto label_1e55e0;
        case 0x1e55e4u: goto label_1e55e4;
        case 0x1e55e8u: goto label_1e55e8;
        case 0x1e55ecu: goto label_1e55ec;
        case 0x1e55f0u: goto label_1e55f0;
        case 0x1e55f4u: goto label_1e55f4;
        case 0x1e55f8u: goto label_1e55f8;
        case 0x1e55fcu: goto label_1e55fc;
        case 0x1e5600u: goto label_1e5600;
        case 0x1e5604u: goto label_1e5604;
        case 0x1e5608u: goto label_1e5608;
        case 0x1e560cu: goto label_1e560c;
        case 0x1e5610u: goto label_1e5610;
        case 0x1e5614u: goto label_1e5614;
        case 0x1e5618u: goto label_1e5618;
        case 0x1e561cu: goto label_1e561c;
        case 0x1e5620u: goto label_1e5620;
        case 0x1e5624u: goto label_1e5624;
        case 0x1e5628u: goto label_1e5628;
        case 0x1e562cu: goto label_1e562c;
        case 0x1e5630u: goto label_1e5630;
        case 0x1e5634u: goto label_1e5634;
        case 0x1e5638u: goto label_1e5638;
        case 0x1e563cu: goto label_1e563c;
        case 0x1e5640u: goto label_1e5640;
        case 0x1e5644u: goto label_1e5644;
        case 0x1e5648u: goto label_1e5648;
        case 0x1e564cu: goto label_1e564c;
        case 0x1e5650u: goto label_1e5650;
        case 0x1e5654u: goto label_1e5654;
        case 0x1e5658u: goto label_1e5658;
        case 0x1e565cu: goto label_1e565c;
        case 0x1e5660u: goto label_1e5660;
        case 0x1e5664u: goto label_1e5664;
        case 0x1e5668u: goto label_1e5668;
        case 0x1e566cu: goto label_1e566c;
        case 0x1e5670u: goto label_1e5670;
        case 0x1e5674u: goto label_1e5674;
        case 0x1e5678u: goto label_1e5678;
        case 0x1e567cu: goto label_1e567c;
        case 0x1e5680u: goto label_1e5680;
        case 0x1e5684u: goto label_1e5684;
        case 0x1e5688u: goto label_1e5688;
        case 0x1e568cu: goto label_1e568c;
        case 0x1e5690u: goto label_1e5690;
        case 0x1e5694u: goto label_1e5694;
        case 0x1e5698u: goto label_1e5698;
        case 0x1e569cu: goto label_1e569c;
        case 0x1e56a0u: goto label_1e56a0;
        case 0x1e56a4u: goto label_1e56a4;
        case 0x1e56a8u: goto label_1e56a8;
        case 0x1e56acu: goto label_1e56ac;
        case 0x1e56b0u: goto label_1e56b0;
        case 0x1e56b4u: goto label_1e56b4;
        case 0x1e56b8u: goto label_1e56b8;
        case 0x1e56bcu: goto label_1e56bc;
        case 0x1e56c0u: goto label_1e56c0;
        case 0x1e56c4u: goto label_1e56c4;
        case 0x1e56c8u: goto label_1e56c8;
        case 0x1e56ccu: goto label_1e56cc;
        case 0x1e56d0u: goto label_1e56d0;
        case 0x1e56d4u: goto label_1e56d4;
        case 0x1e56d8u: goto label_1e56d8;
        case 0x1e56dcu: goto label_1e56dc;
        case 0x1e56e0u: goto label_1e56e0;
        case 0x1e56e4u: goto label_1e56e4;
        case 0x1e56e8u: goto label_1e56e8;
        case 0x1e56ecu: goto label_1e56ec;
        case 0x1e56f0u: goto label_1e56f0;
        case 0x1e56f4u: goto label_1e56f4;
        case 0x1e56f8u: goto label_1e56f8;
        case 0x1e56fcu: goto label_1e56fc;
        case 0x1e5700u: goto label_1e5700;
        case 0x1e5704u: goto label_1e5704;
        case 0x1e5708u: goto label_1e5708;
        case 0x1e570cu: goto label_1e570c;
        case 0x1e5710u: goto label_1e5710;
        case 0x1e5714u: goto label_1e5714;
        case 0x1e5718u: goto label_1e5718;
        case 0x1e571cu: goto label_1e571c;
        case 0x1e5720u: goto label_1e5720;
        case 0x1e5724u: goto label_1e5724;
        case 0x1e5728u: goto label_1e5728;
        case 0x1e572cu: goto label_1e572c;
        case 0x1e5730u: goto label_1e5730;
        case 0x1e5734u: goto label_1e5734;
        case 0x1e5738u: goto label_1e5738;
        case 0x1e573cu: goto label_1e573c;
        case 0x1e5740u: goto label_1e5740;
        case 0x1e5744u: goto label_1e5744;
        case 0x1e5748u: goto label_1e5748;
        case 0x1e574cu: goto label_1e574c;
        case 0x1e5750u: goto label_1e5750;
        case 0x1e5754u: goto label_1e5754;
        case 0x1e5758u: goto label_1e5758;
        case 0x1e575cu: goto label_1e575c;
        case 0x1e5760u: goto label_1e5760;
        case 0x1e5764u: goto label_1e5764;
        default: break;
    }

    ctx->pc = 0x1e55d0u;

label_1e55d0:
    // 0x1e55d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e55d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e55d4:
    // 0x1e55d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e55d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e55d8:
    // 0x1e55d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e55d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e55dc:
    // 0x1e55dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e55dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e55e0:
    // 0x1e55e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e55e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e55e4:
    // 0x1e55e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e55e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e55e8:
    // 0x1e55e8: 0x10000054  b           . + 4 + (0x54 << 2)
label_1e55ec:
    if (ctx->pc == 0x1E55ECu) {
        ctx->pc = 0x1E55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55E8u;
        // 0x1e55ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55F0u;
        goto label_1e55f0;
    }
    ctx->pc = 0x1E55E8u;
    {
        const bool branch_taken_0x1e55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55E8u;
        // 0x1e55ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55e8) {
            ctx->pc = 0x1E573Cu;
            goto label_1e573c;
        }
    }
    ctx->pc = 0x1E55F0u;
label_1e55f0:
    // 0x1e55f0: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1e55f4:
    // 0x1e55f4: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1e55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
label_1e55f8:
    // 0x1e55f8: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e55f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e55fc:
    // 0x1e55fc: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1e55fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1e5600:
    // 0x1e5600: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5604:
    // 0x1e5604: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e5608:
    // 0x1e5608: 0x320f809  jalr        $t9
label_1e560c:
    if (ctx->pc == 0x1E560Cu) {
        ctx->pc = 0x1E560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5608u;
        // 0x1e560c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5610u;
        goto label_1e5610;
    }
    ctx->pc = 0x1E5608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5610u);
        ctx->pc = 0x1E560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5608u;
        // 0x1e560c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5608u, 0x1E5610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5610u;
label_1e5610:
    // 0x1e5610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5614:
    // 0x1e5614: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e5614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e5618:
    // 0x1e5618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e561c:
    // 0x1e561c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1e5620:
    if (ctx->pc == 0x1E5620u) {
        ctx->pc = 0x1E5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E561Cu;
        // 0x1e5620: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5624u;
        goto label_1e5624;
    }
    ctx->pc = 0x1E561Cu;
    {
        const bool branch_taken_0x1e561c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E561Cu;
        // 0x1e5620: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e561c) {
            ctx->pc = 0x1E5650u;
            goto label_1e5650;
        }
    }
    ctx->pc = 0x1E5624u;
label_1e5624:
    // 0x1e5624: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e5628:
    if (ctx->pc == 0x1E5628u) {
        ctx->pc = 0x1E5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5624u;
        // 0x1e5628: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E562Cu;
        goto label_1e562c;
    }
    ctx->pc = 0x1E5624u;
    {
        const bool branch_taken_0x1e5624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5624u;
        // 0x1e5628: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5624) {
            ctx->pc = 0x1E5650u;
            goto label_1e5650;
        }
    }
    ctx->pc = 0x1E562Cu;
label_1e562c:
    // 0x1e562c: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_1e5630:
    if (ctx->pc == 0x1E5630u) {
        ctx->pc = 0x1E5634u;
        goto label_1e5634;
    }
    ctx->pc = 0x1E562Cu;
    {
        const bool branch_taken_0x1e562c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e562c) {
            ctx->pc = 0x1E573Cu;
            goto label_1e573c;
        }
    }
    ctx->pc = 0x1E5634u;
label_1e5634:
    // 0x1e5634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5638:
    // 0x1e5638: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e563c:
    if (ctx->pc == 0x1E563Cu) {
        ctx->pc = 0x1E5640u;
        goto label_1e5640;
    }
    ctx->pc = 0x1E5638u;
    {
        const bool branch_taken_0x1e5638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5638) {
            ctx->pc = 0x1E5648u;
            goto label_1e5648;
        }
    }
    ctx->pc = 0x1E5640u;
label_1e5640:
    // 0x1e5640: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e5644:
    if (ctx->pc == 0x1E5644u) {
        ctx->pc = 0x1E5648u;
        goto label_1e5648;
    }
    ctx->pc = 0x1E5640u;
    {
        const bool branch_taken_0x1e5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5640) {
            ctx->pc = 0x1E573Cu;
            goto label_1e573c;
        }
    }
    ctx->pc = 0x1E5648u;
label_1e5648:
    // 0x1e5648: 0x10000041  b           . + 4 + (0x41 << 2)
label_1e564c:
    if (ctx->pc == 0x1E564Cu) {
        ctx->pc = 0x1E564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5648u;
        // 0x1e564c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5650u;
        goto label_1e5650;
    }
    ctx->pc = 0x1E5648u;
    {
        const bool branch_taken_0x1e5648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5648u;
        // 0x1e564c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5648) {
            ctx->pc = 0x1E5750u;
            goto label_1e5750;
        }
    }
    ctx->pc = 0x1E5650u;
label_1e5650:
    // 0x1e5650: 0x10000037  b           . + 4 + (0x37 << 2)
label_1e5654:
    if (ctx->pc == 0x1E5654u) {
        ctx->pc = 0x1E5654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5650u;
        // 0x1e5654: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5658u;
        goto label_1e5658;
    }
    ctx->pc = 0x1E5650u;
    {
        const bool branch_taken_0x1e5650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5650u;
        // 0x1e5654: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5650) {
            ctx->pc = 0x1E5730u;
            goto label_1e5730;
        }
    }
    ctx->pc = 0x1E5658u;
label_1e5658:
    // 0x1e5658: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e565c:
    // 0x1e565c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e5660:
    // 0x1e5660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e5664:
    // 0x1e5664: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
label_1e5668:
    if (ctx->pc == 0x1E5668u) {
        ctx->pc = 0x1E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5664u;
        // 0x1e5668: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E566Cu;
        goto label_1e566c;
    }
    ctx->pc = 0x1E5664u;
    {
        const bool branch_taken_0x1e5664 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5664u;
        // 0x1e5668: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5664) {
            ctx->pc = 0x1E56E8u;
            goto label_1e56e8;
        }
    }
    ctx->pc = 0x1E566Cu;
label_1e566c:
    // 0x1e566c: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e5670:
    // 0x1e5670: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e5670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e5674:
    // 0x1e5674: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e5678:
    // 0x1e5678: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e567c:
    // 0x1e567c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e5680:
    // 0x1e5680: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1e5684:
    if (ctx->pc == 0x1E5684u) {
        ctx->pc = 0x1E5688u;
        goto label_1e5688;
    }
    ctx->pc = 0x1E5680u;
    {
        const bool branch_taken_0x1e5680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5680) {
            ctx->pc = 0x1E56CCu;
            goto label_1e56cc;
        }
    }
    ctx->pc = 0x1E5688u;
label_1e5688:
    // 0x1e5688: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e5688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e568c:
    // 0x1e568c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e5690:
    // 0x1e5690: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5694:
    // 0x1e5694: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e5694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e5698:
    // 0x1e5698: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e5698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e569c:
    // 0x1e569c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e56a0:
    // 0x1e56a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e56a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e56a4:
    // 0x1e56a4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
label_1e56a8:
    if (ctx->pc == 0x1E56A8u) {
        ctx->pc = 0x1E56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56A4u;
        // 0x1e56a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E56ACu;
        goto label_1e56ac;
    }
    ctx->pc = 0x1E56A4u;
    {
        const bool branch_taken_0x1e56a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56A4u;
        // 0x1e56a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56a4) {
            ctx->pc = 0x1E56BCu;
            goto label_1e56bc;
        }
    }
    ctx->pc = 0x1E56ACu;
label_1e56ac:
    // 0x1e56ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e56acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e56b0:
    // 0x1e56b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e56b4:
    // 0x1e56b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e56b8:
    if (ctx->pc == 0x1E56B8u) {
        ctx->pc = 0x1E56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56B4u;
        // 0x1e56b8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E56BCu;
        goto label_1e56bc;
    }
    ctx->pc = 0x1E56B4u;
    {
        const bool branch_taken_0x1e56b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56B4u;
        // 0x1e56b8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56b4) {
            ctx->pc = 0x1E56C4u;
            goto label_1e56c4;
        }
    }
    ctx->pc = 0x1E56BCu;
label_1e56bc:
    // 0x1e56bc: 0xc0817ae  jal         func_205EB8
label_1e56c0:
    if (ctx->pc == 0x1E56C0u) {
        ctx->pc = 0x1E56C4u;
        goto label_1e56c4;
    }
    ctx->pc = 0x1E56BCu;
    SET_GPR_U32(ctx, 31, 0x1E56C4u);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E56BCu, 0x1E56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E56C4u;
label_1e56c4:
    // 0x1e56c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e56c8:
    if (ctx->pc == 0x1E56C8u) {
        ctx->pc = 0x1E56CCu;
        goto label_1e56cc;
    }
    ctx->pc = 0x1E56C4u;
    {
        const bool branch_taken_0x1e56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e56c4) {
            ctx->pc = 0x1E56DCu;
            goto label_1e56dc;
        }
    }
    ctx->pc = 0x1E56CCu;
label_1e56cc:
    // 0x1e56cc: 0x0  nop
    ctx->pc = 0x1e56ccu;
    // NOP
label_1e56d0:
    // 0x1e56d0: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1e56d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e56d4:
    // 0x1e56d4: 0xc0817ae  jal         func_205EB8
label_1e56d8:
    if (ctx->pc == 0x1E56D8u) {
        ctx->pc = 0x1E56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56D4u;
        // 0x1e56d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E56DCu;
        goto label_1e56dc;
    }
    ctx->pc = 0x1E56D4u;
    SET_GPR_U32(ctx, 31, 0x1E56DCu);
    ctx->pc = 0x1E56D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E56D4u;
    // 0x1e56d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E56D4u, 0x1E56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E56DCu;
label_1e56dc:
    // 0x1e56dc: 0x0  nop
    ctx->pc = 0x1e56dcu;
    // NOP
label_1e56e0:
    // 0x1e56e0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e56e4:
    if (ctx->pc == 0x1E56E4u) {
        ctx->pc = 0x1E56E8u;
        goto label_1e56e8;
    }
    ctx->pc = 0x1E56E0u;
    {
        const bool branch_taken_0x1e56e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e56e0) {
            ctx->pc = 0x1E5714u;
            goto label_1e5714;
        }
    }
    ctx->pc = 0x1E56E8u;
label_1e56e8:
    // 0x1e56e8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e56ec:
    // 0x1e56ec: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e56ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e56f0:
    // 0x1e56f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e56f4:
    // 0x1e56f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e56f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e56f8:
    // 0x1e56f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e56f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e56fc:
    // 0x1e56fc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e5700:
    // 0x1e5700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5704:
    // 0x1e5704: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e5708:
    // 0x1e5708: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e570c:
    // 0x1e570c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e570cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5710:
    // 0x1e5710: 0x0  nop
    ctx->pc = 0x1e5710u;
    // NOP
label_1e5714:
    // 0x1e5714: 0x0  nop
    ctx->pc = 0x1e5714u;
    // NOP
label_1e5718:
    // 0x1e5718: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e571c:
    // 0x1e571c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e5720:
    if (ctx->pc == 0x1E5720u) {
        ctx->pc = 0x1E5724u;
        goto label_1e5724;
    }
    ctx->pc = 0x1E571Cu;
    {
        const bool branch_taken_0x1e571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e571c) {
            ctx->pc = 0x1E572Cu;
            goto label_1e572c;
        }
    }
    ctx->pc = 0x1E5724u;
label_1e5724:
    // 0x1e5724: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e5728:
    if (ctx->pc == 0x1E5728u) {
        ctx->pc = 0x1E5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5724u;
        // 0x1e5728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E572Cu;
        goto label_1e572c;
    }
    ctx->pc = 0x1E5724u;
    {
        const bool branch_taken_0x1e5724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5724u;
        // 0x1e5728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5724) {
            ctx->pc = 0x1E5750u;
            goto label_1e5750;
        }
    }
    ctx->pc = 0x1E572Cu;
label_1e572c:
    // 0x1e572c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e5730:
    // 0x1e5730: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e5730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5734:
    // 0x1e5734: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_1e5738:
    if (ctx->pc == 0x1E5738u) {
        ctx->pc = 0x1E573Cu;
        goto label_1e573c;
    }
    ctx->pc = 0x1E5734u;
    {
        const bool branch_taken_0x1e5734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5734) {
            ctx->pc = 0x1E5658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5658;
        }
    }
    ctx->pc = 0x1E573Cu;
label_1e573c:
    // 0x1e573c: 0x0  nop
    ctx->pc = 0x1e573cu;
    // NOP
label_1e5740:
    // 0x1e5740: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1e5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1e5744:
    // 0x1e5744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5748:
    // 0x1e5748: 0x1062ffa9  beq         $v1, $v0, . + 4 + (-0x57 << 2)
label_1e574c:
    if (ctx->pc == 0x1E574Cu) {
        ctx->pc = 0x1E574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5748u;
        // 0x1e574c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5750u;
        goto label_1e5750;
    }
    ctx->pc = 0x1E5748u;
    {
        const bool branch_taken_0x1e5748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5748u;
        // 0x1e574c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5748) {
            ctx->pc = 0x1E55F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e55f0;
        }
    }
    ctx->pc = 0x1E5750u;
label_1e5750:
    // 0x1e5750: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5754:
    // 0x1e5754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5758:
    // 0x1e5758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e575c:
    // 0x1e575c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e575cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5760:
    // 0x1e5760: 0x3e00008  jr          $ra
label_1e5764:
    if (ctx->pc == 0x1E5764u) {
        ctx->pc = 0x1E5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5760u;
        // 0x1e5764: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5768u;
        goto label_fallthrough_0x1e5760;
    }
    ctx->pc = 0x1E5760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5760u;
        // 0x1e5764: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5760:
    ctx->pc = 0x1E5768u;
}
