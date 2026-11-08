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

// Function: FUN_00135550
// Address: 0x135550 - 0x135674
void FUN_00135550_0x135550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135550_0x135550");
#endif

    switch (ctx->pc) {
        case 0x135550u: goto label_135550;
        case 0x135554u: goto label_135554;
        case 0x135558u: goto label_135558;
        case 0x13555cu: goto label_13555c;
        case 0x135560u: goto label_135560;
        case 0x135564u: goto label_135564;
        case 0x135568u: goto label_135568;
        case 0x13556cu: goto label_13556c;
        case 0x135570u: goto label_135570;
        case 0x135574u: goto label_135574;
        case 0x135578u: goto label_135578;
        case 0x13557cu: goto label_13557c;
        case 0x135580u: goto label_135580;
        case 0x135584u: goto label_135584;
        case 0x135588u: goto label_135588;
        case 0x13558cu: goto label_13558c;
        case 0x135590u: goto label_135590;
        case 0x135594u: goto label_135594;
        case 0x135598u: goto label_135598;
        case 0x13559cu: goto label_13559c;
        case 0x1355a0u: goto label_1355a0;
        case 0x1355a4u: goto label_1355a4;
        case 0x1355a8u: goto label_1355a8;
        case 0x1355acu: goto label_1355ac;
        case 0x1355b0u: goto label_1355b0;
        case 0x1355b4u: goto label_1355b4;
        case 0x1355b8u: goto label_1355b8;
        case 0x1355bcu: goto label_1355bc;
        case 0x1355c0u: goto label_1355c0;
        case 0x1355c4u: goto label_1355c4;
        case 0x1355c8u: goto label_1355c8;
        case 0x1355ccu: goto label_1355cc;
        case 0x1355d0u: goto label_1355d0;
        case 0x1355d4u: goto label_1355d4;
        case 0x1355d8u: goto label_1355d8;
        case 0x1355dcu: goto label_1355dc;
        case 0x1355e0u: goto label_1355e0;
        case 0x1355e4u: goto label_1355e4;
        case 0x1355e8u: goto label_1355e8;
        case 0x1355ecu: goto label_1355ec;
        case 0x1355f0u: goto label_1355f0;
        case 0x1355f4u: goto label_1355f4;
        case 0x1355f8u: goto label_1355f8;
        case 0x1355fcu: goto label_1355fc;
        case 0x135600u: goto label_135600;
        case 0x135604u: goto label_135604;
        case 0x135608u: goto label_135608;
        case 0x13560cu: goto label_13560c;
        case 0x135610u: goto label_135610;
        case 0x135614u: goto label_135614;
        case 0x135618u: goto label_135618;
        case 0x13561cu: goto label_13561c;
        case 0x135620u: goto label_135620;
        case 0x135624u: goto label_135624;
        case 0x135628u: goto label_135628;
        case 0x13562cu: goto label_13562c;
        case 0x135630u: goto label_135630;
        case 0x135634u: goto label_135634;
        case 0x135638u: goto label_135638;
        case 0x13563cu: goto label_13563c;
        case 0x135640u: goto label_135640;
        case 0x135644u: goto label_135644;
        case 0x135648u: goto label_135648;
        case 0x13564cu: goto label_13564c;
        case 0x135650u: goto label_135650;
        case 0x135654u: goto label_135654;
        case 0x135658u: goto label_135658;
        case 0x13565cu: goto label_13565c;
        case 0x135660u: goto label_135660;
        case 0x135664u: goto label_135664;
        case 0x135668u: goto label_135668;
        case 0x13566cu: goto label_13566c;
        case 0x135670u: goto label_135670;
        default: break;
    }

    ctx->pc = 0x135550u;

label_135550:
    // 0x135550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x135550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_135554:
    // 0x135554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_135558:
    // 0x135558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13555c:
    // 0x13555c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_135560:
    // 0x135560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_135564:
    // 0x135564: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x135564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135568:
    // 0x135568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13556c:
    // 0x13556c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13556cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_135570:
    // 0x135570: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_135574:
    if (ctx->pc == 0x135574u) {
        ctx->pc = 0x135574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135570u;
        // 0x135574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135578u;
        goto label_135578;
    }
    ctx->pc = 0x135570u;
    {
        const bool branch_taken_0x135570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x135574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135570u;
        // 0x135574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135570) {
            ctx->pc = 0x135590u;
            goto label_135590;
        }
    }
    ctx->pc = 0x135578u;
label_135578:
    // 0x135578: 0xc080874  jal         func_2021D0
label_13557c:
    if (ctx->pc == 0x13557Cu) {
        ctx->pc = 0x13557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135578u;
        // 0x13557c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135580u;
        goto label_135580;
    }
    ctx->pc = 0x135578u;
    SET_GPR_U32(ctx, 31, 0x135580u);
    ctx->pc = 0x13557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135578u;
    // 0x13557c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x135578u, 0x135580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135580u;
label_135580:
    // 0x135580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_135584:
    if (ctx->pc == 0x135584u) {
        ctx->pc = 0x135588u;
        goto label_135588;
    }
    ctx->pc = 0x135580u;
    {
        const bool branch_taken_0x135580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135580) {
            ctx->pc = 0x135590u;
            goto label_135590;
        }
    }
    ctx->pc = 0x135588u;
label_135588:
    // 0x135588: 0x10000034  b           . + 4 + (0x34 << 2)
label_13558c:
    if (ctx->pc == 0x13558Cu) {
        ctx->pc = 0x13558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135588u;
        // 0x13558c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135590u;
        goto label_135590;
    }
    ctx->pc = 0x135588u;
    {
        const bool branch_taken_0x135588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135588u;
        // 0x13558c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135588) {
            ctx->pc = 0x13565Cu;
            goto label_13565c;
        }
    }
    ctx->pc = 0x135590u;
label_135590:
    // 0x135590: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x135590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_135594:
    // 0x135594: 0xc0806b0  jal         func_201AC0
label_135598:
    if (ctx->pc == 0x135598u) {
        ctx->pc = 0x135598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135594u;
        // 0x135598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13559Cu;
        goto label_13559c;
    }
    ctx->pc = 0x135594u;
    SET_GPR_U32(ctx, 31, 0x13559Cu);
    ctx->pc = 0x135598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135594u;
    // 0x135598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x135594u, 0x13559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13559Cu;
label_13559c:
    // 0x13559c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1355a0:
    if (ctx->pc == 0x1355A0u) {
        ctx->pc = 0x1355A4u;
        goto label_1355a4;
    }
    ctx->pc = 0x13559Cu;
    {
        const bool branch_taken_0x13559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13559c) {
            ctx->pc = 0x1355ACu;
            goto label_1355ac;
        }
    }
    ctx->pc = 0x1355A4u;
label_1355a4:
    // 0x1355a4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1355a8:
    if (ctx->pc == 0x1355A8u) {
        ctx->pc = 0x1355A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355A4u;
        // 0x1355a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1355ACu;
        goto label_1355ac;
    }
    ctx->pc = 0x1355A4u;
    {
        const bool branch_taken_0x1355a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355A4u;
        // 0x1355a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355a4) {
            ctx->pc = 0x13565Cu;
            goto label_13565c;
        }
    }
    ctx->pc = 0x1355ACu;
label_1355ac:
    // 0x1355ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1355acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1355b0:
    // 0x1355b0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1355b4:
    if (ctx->pc == 0x1355B4u) {
        ctx->pc = 0x1355B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355B0u;
        // 0x1355b4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1355B8u;
        goto label_1355b8;
    }
    ctx->pc = 0x1355B0u;
    {
        const bool branch_taken_0x1355b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1355B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355B0u;
        // 0x1355b4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355b0) {
            ctx->pc = 0x1355C0u;
            goto label_1355c0;
        }
    }
    ctx->pc = 0x1355B8u;
label_1355b8:
    // 0x1355b8: 0x10000028  b           . + 4 + (0x28 << 2)
label_1355bc:
    if (ctx->pc == 0x1355BCu) {
        ctx->pc = 0x1355BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355B8u;
        // 0x1355bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1355C0u;
        goto label_1355c0;
    }
    ctx->pc = 0x1355B8u;
    {
        const bool branch_taken_0x1355b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355B8u;
        // 0x1355bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355b8) {
            ctx->pc = 0x13565Cu;
            goto label_13565c;
        }
    }
    ctx->pc = 0x1355C0u;
label_1355c0:
    // 0x1355c0: 0xc04c554  jal         func_131550
label_1355c4:
    if (ctx->pc == 0x1355C4u) {
        ctx->pc = 0x1355C8u;
        goto label_1355c8;
    }
    ctx->pc = 0x1355C0u;
    SET_GPR_U32(ctx, 31, 0x1355C8u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1355C0u, 0x1355C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355C8u;
label_1355c8:
    // 0x1355c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1355c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1355cc:
    // 0x1355cc: 0xc04c54c  jal         func_131530
label_1355d0:
    if (ctx->pc == 0x1355D0u) {
        ctx->pc = 0x1355D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355CCu;
        // 0x1355d0: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1355D4u;
        goto label_1355d4;
    }
    ctx->pc = 0x1355CCu;
    SET_GPR_U32(ctx, 31, 0x1355D4u);
    ctx->pc = 0x1355D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355CCu;
    // 0x1355d0: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1355CCu, 0x1355D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355D4u;
label_1355d4:
    // 0x1355d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1355d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1355d8:
    // 0x1355d8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1355d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_1355dc:
    // 0x1355dc: 0xc04c554  jal         func_131550
label_1355e0:
    if (ctx->pc == 0x1355E0u) {
        ctx->pc = 0x1355E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355DCu;
        // 0x1355e0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1355E4u;
        goto label_1355e4;
    }
    ctx->pc = 0x1355DCu;
    SET_GPR_U32(ctx, 31, 0x1355E4u);
    ctx->pc = 0x1355E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355DCu;
    // 0x1355e0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1355DCu, 0x1355E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355E4u;
label_1355e4:
    // 0x1355e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1355e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1355e8:
    // 0x1355e8: 0xc04c550  jal         func_131540
label_1355ec:
    if (ctx->pc == 0x1355ECu) {
        ctx->pc = 0x1355ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355E8u;
        // 0x1355ec: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1355F0u;
        goto label_1355f0;
    }
    ctx->pc = 0x1355E8u;
    SET_GPR_U32(ctx, 31, 0x1355F0u);
    ctx->pc = 0x1355ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355E8u;
    // 0x1355ec: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1355E8u, 0x1355F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355F0u;
label_1355f0:
    // 0x1355f0: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x1355f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1355f4:
    // 0x1355f4: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x1355f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1355f8:
    // 0x1355f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1355f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1355fc:
    // 0x1355fc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1355fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135600:
    // 0x135600: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x135600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_135604:
    // 0x135604: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_135608:
    // 0x135608: 0x10500012  beq         $v0, $s0, . + 4 + (0x12 << 2)
label_13560c:
    if (ctx->pc == 0x13560Cu) {
        ctx->pc = 0x135610u;
        goto label_135610;
    }
    ctx->pc = 0x135608u;
    {
        const bool branch_taken_0x135608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x135608) {
            ctx->pc = 0x135654u;
            goto label_135654;
        }
    }
    ctx->pc = 0x135610u;
label_135610:
    // 0x135610: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_135614:
    // 0x135614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x135614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135618:
    // 0x135618: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13561c:
    // 0x13561c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13561cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135620:
    // 0x135620: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x135620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_135624:
    // 0x135624: 0x320f809  jalr        $t9
label_135628:
    if (ctx->pc == 0x135628u) {
        ctx->pc = 0x135628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135624u;
        // 0x135628: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13562Cu;
        goto label_13562c;
    }
    ctx->pc = 0x135624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13562Cu);
        ctx->pc = 0x135628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135624u;
        // 0x135628: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135624u, 0x13562Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13562Cu;
label_13562c:
    // 0x13562c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_135630:
    if (ctx->pc == 0x135630u) {
        ctx->pc = 0x135634u;
        goto label_135634;
    }
    ctx->pc = 0x13562Cu;
    {
        const bool branch_taken_0x13562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13562c) {
            ctx->pc = 0x13563Cu;
            goto label_13563c;
        }
    }
    ctx->pc = 0x135634u;
label_135634:
    // 0x135634: 0x1000000a  b           . + 4 + (0xA << 2)
label_135638:
    if (ctx->pc == 0x135638u) {
        ctx->pc = 0x135638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135634u;
        // 0x135638: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13563Cu;
        goto label_13563c;
    }
    ctx->pc = 0x135634u;
    {
        const bool branch_taken_0x135634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135634u;
        // 0x135638: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135634) {
            ctx->pc = 0x135660u;
            goto label_135660;
        }
    }
    ctx->pc = 0x13563Cu;
label_13563c:
    // 0x13563c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_135640:
    // 0x135640: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x135640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135644:
    // 0x135644: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x135644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_135648:
    // 0x135648: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13564c:
    // 0x13564c: 0x1450fff0  bne         $v0, $s0, . + 4 + (-0x10 << 2)
label_135650:
    if (ctx->pc == 0x135650u) {
        ctx->pc = 0x135654u;
        goto label_135654;
    }
    ctx->pc = 0x13564Cu;
    {
        const bool branch_taken_0x13564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x13564c) {
            ctx->pc = 0x135610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135610;
        }
    }
    ctx->pc = 0x135654u;
label_135654:
    // 0x135654: 0x0  nop
    ctx->pc = 0x135654u;
    // NOP
label_135658:
    // 0x135658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x135658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13565c:
    // 0x13565c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13565cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_135660:
    // 0x135660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_135664:
    // 0x135664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_135668:
    // 0x135668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13566c:
    // 0x13566c: 0x3e00008  jr          $ra
label_135670:
    if (ctx->pc == 0x135670u) {
        ctx->pc = 0x135670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13566Cu;
        // 0x135670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135674u;
        goto label_fallthrough_0x13566c;
    }
    ctx->pc = 0x13566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13566Cu;
        // 0x135670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13566c:
    ctx->pc = 0x135674u;
}
