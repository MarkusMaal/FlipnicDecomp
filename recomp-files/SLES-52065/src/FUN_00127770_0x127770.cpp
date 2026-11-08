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

// Function: FUN_00127770
// Address: 0x127770 - 0x1278c4
void FUN_00127770_0x127770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127770_0x127770");
#endif

    switch (ctx->pc) {
        case 0x127770u: goto label_127770;
        case 0x127774u: goto label_127774;
        case 0x127778u: goto label_127778;
        case 0x12777cu: goto label_12777c;
        case 0x127780u: goto label_127780;
        case 0x127784u: goto label_127784;
        case 0x127788u: goto label_127788;
        case 0x12778cu: goto label_12778c;
        case 0x127790u: goto label_127790;
        case 0x127794u: goto label_127794;
        case 0x127798u: goto label_127798;
        case 0x12779cu: goto label_12779c;
        case 0x1277a0u: goto label_1277a0;
        case 0x1277a4u: goto label_1277a4;
        case 0x1277a8u: goto label_1277a8;
        case 0x1277acu: goto label_1277ac;
        case 0x1277b0u: goto label_1277b0;
        case 0x1277b4u: goto label_1277b4;
        case 0x1277b8u: goto label_1277b8;
        case 0x1277bcu: goto label_1277bc;
        case 0x1277c0u: goto label_1277c0;
        case 0x1277c4u: goto label_1277c4;
        case 0x1277c8u: goto label_1277c8;
        case 0x1277ccu: goto label_1277cc;
        case 0x1277d0u: goto label_1277d0;
        case 0x1277d4u: goto label_1277d4;
        case 0x1277d8u: goto label_1277d8;
        case 0x1277dcu: goto label_1277dc;
        case 0x1277e0u: goto label_1277e0;
        case 0x1277e4u: goto label_1277e4;
        case 0x1277e8u: goto label_1277e8;
        case 0x1277ecu: goto label_1277ec;
        case 0x1277f0u: goto label_1277f0;
        case 0x1277f4u: goto label_1277f4;
        case 0x1277f8u: goto label_1277f8;
        case 0x1277fcu: goto label_1277fc;
        case 0x127800u: goto label_127800;
        case 0x127804u: goto label_127804;
        case 0x127808u: goto label_127808;
        case 0x12780cu: goto label_12780c;
        case 0x127810u: goto label_127810;
        case 0x127814u: goto label_127814;
        case 0x127818u: goto label_127818;
        case 0x12781cu: goto label_12781c;
        case 0x127820u: goto label_127820;
        case 0x127824u: goto label_127824;
        case 0x127828u: goto label_127828;
        case 0x12782cu: goto label_12782c;
        case 0x127830u: goto label_127830;
        case 0x127834u: goto label_127834;
        case 0x127838u: goto label_127838;
        case 0x12783cu: goto label_12783c;
        case 0x127840u: goto label_127840;
        case 0x127844u: goto label_127844;
        case 0x127848u: goto label_127848;
        case 0x12784cu: goto label_12784c;
        case 0x127850u: goto label_127850;
        case 0x127854u: goto label_127854;
        case 0x127858u: goto label_127858;
        case 0x12785cu: goto label_12785c;
        case 0x127860u: goto label_127860;
        case 0x127864u: goto label_127864;
        case 0x127868u: goto label_127868;
        case 0x12786cu: goto label_12786c;
        case 0x127870u: goto label_127870;
        case 0x127874u: goto label_127874;
        case 0x127878u: goto label_127878;
        case 0x12787cu: goto label_12787c;
        case 0x127880u: goto label_127880;
        case 0x127884u: goto label_127884;
        case 0x127888u: goto label_127888;
        case 0x12788cu: goto label_12788c;
        case 0x127890u: goto label_127890;
        case 0x127894u: goto label_127894;
        case 0x127898u: goto label_127898;
        case 0x12789cu: goto label_12789c;
        case 0x1278a0u: goto label_1278a0;
        case 0x1278a4u: goto label_1278a4;
        case 0x1278a8u: goto label_1278a8;
        case 0x1278acu: goto label_1278ac;
        case 0x1278b0u: goto label_1278b0;
        case 0x1278b4u: goto label_1278b4;
        case 0x1278b8u: goto label_1278b8;
        case 0x1278bcu: goto label_1278bc;
        case 0x1278c0u: goto label_1278c0;
        default: break;
    }

    ctx->pc = 0x127770u;

label_127770:
    // 0x127770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_127774:
    // 0x127774: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x127774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_127778:
    // 0x127778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x127778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12777c:
    // 0x12777c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_127780:
    // 0x127780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127784:
    // 0x127784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_127788:
    // 0x127788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12778c:
    // 0x12778c: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
label_127790:
    if (ctx->pc == 0x127790u) {
        ctx->pc = 0x127790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12778Cu;
        // 0x127790: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127794u;
        goto label_127794;
    }
    ctx->pc = 0x12778Cu;
    {
        const bool branch_taken_0x12778c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x127790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12778Cu;
        // 0x127790: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12778c) {
            ctx->pc = 0x1278A4u;
            goto label_1278a4;
        }
    }
    ctx->pc = 0x127794u;
label_127794:
    // 0x127794: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_127798:
    // 0x127798: 0x244289f0  addiu       $v0, $v0, -0x7610
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937072));
label_12779c:
    // 0x12779c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1277a0:
    // 0x1277a0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1277a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1277a4:
    // 0x1277a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1277a8:
    if (ctx->pc == 0x1277A8u) {
        ctx->pc = 0x1277ACu;
        goto label_1277ac;
    }
    ctx->pc = 0x1277A4u;
    {
        const bool branch_taken_0x1277a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277a4) {
            ctx->pc = 0x1277BCu;
            goto label_1277bc;
        }
    }
    ctx->pc = 0x1277ACu;
label_1277ac:
    // 0x1277ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1277b0:
    // 0x1277b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1277b4:
    // 0x1277b4: 0x320f809  jalr        $t9
label_1277b8:
    if (ctx->pc == 0x1277B8u) {
        ctx->pc = 0x1277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277B4u;
        // 0x1277b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277BCu;
        goto label_1277bc;
    }
    ctx->pc = 0x1277B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1277BCu);
        ctx->pc = 0x1277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277B4u;
        // 0x1277b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1277B4u, 0x1277BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1277BCu;
label_1277bc:
    // 0x1277bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1277bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1277c0:
    // 0x1277c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1277c4:
    if (ctx->pc == 0x1277C4u) {
        ctx->pc = 0x1277C8u;
        goto label_1277c8;
    }
    ctx->pc = 0x1277C0u;
    {
        const bool branch_taken_0x1277c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277c0) {
            ctx->pc = 0x1277D8u;
            goto label_1277d8;
        }
    }
    ctx->pc = 0x1277C8u;
label_1277c8:
    // 0x1277c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1277cc:
    // 0x1277cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1277ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1277d0:
    // 0x1277d0: 0x320f809  jalr        $t9
label_1277d4:
    if (ctx->pc == 0x1277D4u) {
        ctx->pc = 0x1277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277D0u;
        // 0x1277d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277D8u;
        goto label_1277d8;
    }
    ctx->pc = 0x1277D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1277D8u);
        ctx->pc = 0x1277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277D0u;
        // 0x1277d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1277D0u, 0x1277D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1277D8u;
label_1277d8:
    // 0x1277d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1277dc:
    // 0x1277dc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1277e0:
    if (ctx->pc == 0x1277E0u) {
        ctx->pc = 0x1277E4u;
        goto label_1277e4;
    }
    ctx->pc = 0x1277DCu;
    {
        const bool branch_taken_0x1277dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277dc) {
            ctx->pc = 0x1277F4u;
            goto label_1277f4;
        }
    }
    ctx->pc = 0x1277E4u;
label_1277e4:
    // 0x1277e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1277e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1277e8:
    // 0x1277e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1277e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1277ec:
    // 0x1277ec: 0x320f809  jalr        $t9
label_1277f0:
    if (ctx->pc == 0x1277F0u) {
        ctx->pc = 0x1277F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277ECu;
        // 0x1277f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1277F4u;
        goto label_1277f4;
    }
    ctx->pc = 0x1277ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1277F4u);
        ctx->pc = 0x1277F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277ECu;
        // 0x1277f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1277ECu, 0x1277F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1277F4u;
label_1277f4:
    // 0x1277f4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1277f8:
    // 0x1277f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1277fc:
    if (ctx->pc == 0x1277FCu) {
        ctx->pc = 0x127800u;
        goto label_127800;
    }
    ctx->pc = 0x1277F8u;
    {
        const bool branch_taken_0x1277f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277f8) {
            ctx->pc = 0x127810u;
            goto label_127810;
        }
    }
    ctx->pc = 0x127800u;
label_127800:
    // 0x127800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127804:
    // 0x127804: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127808:
    // 0x127808: 0x320f809  jalr        $t9
label_12780c:
    if (ctx->pc == 0x12780Cu) {
        ctx->pc = 0x12780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127808u;
        // 0x12780c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127810u;
        goto label_127810;
    }
    ctx->pc = 0x127808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127810u);
        ctx->pc = 0x12780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127808u;
        // 0x12780c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127808u, 0x127810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127810u;
label_127810:
    // 0x127810: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_127814:
    // 0x127814: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_127818:
    if (ctx->pc == 0x127818u) {
        ctx->pc = 0x12781Cu;
        goto label_12781c;
    }
    ctx->pc = 0x127814u;
    {
        const bool branch_taken_0x127814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127814) {
            ctx->pc = 0x12782Cu;
            goto label_12782c;
        }
    }
    ctx->pc = 0x12781Cu;
label_12781c:
    // 0x12781c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127820:
    // 0x127820: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127824:
    // 0x127824: 0x320f809  jalr        $t9
label_127828:
    if (ctx->pc == 0x127828u) {
        ctx->pc = 0x127828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127824u;
        // 0x127828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12782Cu;
        goto label_12782c;
    }
    ctx->pc = 0x127824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12782Cu);
        ctx->pc = 0x127828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127824u;
        // 0x127828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127824u, 0x12782Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12782Cu;
label_12782c:
    // 0x12782c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_127830:
    // 0x127830: 0x8e120034  lw          $s2, 0x34($s0)
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_127834:
    // 0x127834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_127838:
    // 0x127838: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_12783c:
    // 0x12783c: 0x1251000b  beq         $s2, $s1, . + 4 + (0xB << 2)
label_127840:
    if (ctx->pc == 0x127840u) {
        ctx->pc = 0x127844u;
        goto label_127844;
    }
    ctx->pc = 0x12783Cu;
    {
        const bool branch_taken_0x12783c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x12783c) {
            ctx->pc = 0x12786Cu;
            goto label_12786c;
        }
    }
    ctx->pc = 0x127844u;
label_127844:
    // 0x127844: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x127844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_127848:
    // 0x127848: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_12784c:
    if (ctx->pc == 0x12784Cu) {
        ctx->pc = 0x127850u;
        goto label_127850;
    }
    ctx->pc = 0x127848u;
    {
        const bool branch_taken_0x127848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127848) {
            ctx->pc = 0x127860u;
            goto label_127860;
        }
    }
    ctx->pc = 0x127850u;
label_127850:
    // 0x127850: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127854:
    // 0x127854: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127858:
    // 0x127858: 0x320f809  jalr        $t9
label_12785c:
    if (ctx->pc == 0x12785Cu) {
        ctx->pc = 0x12785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127858u;
        // 0x12785c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127860u;
        goto label_127860;
    }
    ctx->pc = 0x127858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127860u);
        ctx->pc = 0x12785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127858u;
        // 0x12785c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127858u, 0x127860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127860u;
label_127860:
    // 0x127860: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x127860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_127864:
    // 0x127864: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
label_127868:
    if (ctx->pc == 0x127868u) {
        ctx->pc = 0x12786Cu;
        goto label_12786c;
    }
    ctx->pc = 0x127864u;
    {
        const bool branch_taken_0x127864 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x127864) {
            ctx->pc = 0x127844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127844;
        }
    }
    ctx->pc = 0x12786Cu;
label_12786c:
    // 0x12786c: 0x0  nop
    ctx->pc = 0x12786cu;
    // NOP
label_127870:
    // 0x127870: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x127870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_127874:
    // 0x127874: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_127878:
    if (ctx->pc == 0x127878u) {
        ctx->pc = 0x127878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127874u;
        // 0x127878: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12787Cu;
        goto label_12787c;
    }
    ctx->pc = 0x127874u;
    {
        const bool branch_taken_0x127874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127874u;
        // 0x127878: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127874) {
            ctx->pc = 0x12788Cu;
            goto label_12788c;
        }
    }
    ctx->pc = 0x12787Cu;
label_12787c:
    // 0x12787c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_127880:
    if (ctx->pc == 0x127880u) {
        ctx->pc = 0x127880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12787Cu;
        // 0x127880: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127884u;
        goto label_127884;
    }
    ctx->pc = 0x12787Cu;
    {
        const bool branch_taken_0x12787c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12787Cu;
        // 0x127880: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12787c) {
            ctx->pc = 0x127890u;
            goto label_127890;
        }
    }
    ctx->pc = 0x127884u;
label_127884:
    // 0x127884: 0xc048414  jal         func_121050
label_127888:
    if (ctx->pc == 0x127888u) {
        ctx->pc = 0x127888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127884u;
        // 0x127888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12788Cu;
        goto label_12788c;
    }
    ctx->pc = 0x127884u;
    SET_GPR_U32(ctx, 31, 0x12788Cu);
    ctx->pc = 0x127888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127884u;
    // 0x127888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x127884u, 0x12788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12788Cu;
label_12788c:
    // 0x12788c: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x12788cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
label_127890:
    // 0x127890: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x127890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_127894:
    // 0x127894: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_127898:
    if (ctx->pc == 0x127898u) {
        ctx->pc = 0x127898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127894u;
        // 0x127898: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12789Cu;
        goto label_12789c;
    }
    ctx->pc = 0x127894u;
    {
        const bool branch_taken_0x127894 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x127898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127894u;
        // 0x127898: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127894) {
            ctx->pc = 0x1278A8u;
            goto label_1278a8;
        }
    }
    ctx->pc = 0x12789Cu;
label_12789c:
    // 0x12789c: 0xc0401a4  jal         func_100690
label_1278a0:
    if (ctx->pc == 0x1278A0u) {
        ctx->pc = 0x1278A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12789Cu;
        // 0x1278a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278A4u;
        goto label_1278a4;
    }
    ctx->pc = 0x12789Cu;
    SET_GPR_U32(ctx, 31, 0x1278A4u);
    ctx->pc = 0x1278A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12789Cu;
    // 0x1278a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12789Cu, 0x1278A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278A4u;
label_1278a4:
    // 0x1278a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1278a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1278a8:
    // 0x1278a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1278a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1278ac:
    // 0x1278ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1278acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1278b0:
    // 0x1278b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1278b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1278b4:
    // 0x1278b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1278b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1278b8:
    // 0x1278b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1278b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1278bc:
    // 0x1278bc: 0x3e00008  jr          $ra
label_1278c0:
    if (ctx->pc == 0x1278C0u) {
        ctx->pc = 0x1278C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278BCu;
        // 0x1278c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1278C4u;
        goto label_fallthrough_0x1278bc;
    }
    ctx->pc = 0x1278BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1278C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278BCu;
        // 0x1278c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1278BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1278bc:
    ctx->pc = 0x1278C4u;
}
