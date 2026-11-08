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

// Function: FUN_00113770
// Address: 0x113770 - 0x1138b0
void FUN_00113770_0x113770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113770_0x113770");
#endif

    switch (ctx->pc) {
        case 0x113770u: goto label_113770;
        case 0x113774u: goto label_113774;
        case 0x113778u: goto label_113778;
        case 0x11377cu: goto label_11377c;
        case 0x113780u: goto label_113780;
        case 0x113784u: goto label_113784;
        case 0x113788u: goto label_113788;
        case 0x11378cu: goto label_11378c;
        case 0x113790u: goto label_113790;
        case 0x113794u: goto label_113794;
        case 0x113798u: goto label_113798;
        case 0x11379cu: goto label_11379c;
        case 0x1137a0u: goto label_1137a0;
        case 0x1137a4u: goto label_1137a4;
        case 0x1137a8u: goto label_1137a8;
        case 0x1137acu: goto label_1137ac;
        case 0x1137b0u: goto label_1137b0;
        case 0x1137b4u: goto label_1137b4;
        case 0x1137b8u: goto label_1137b8;
        case 0x1137bcu: goto label_1137bc;
        case 0x1137c0u: goto label_1137c0;
        case 0x1137c4u: goto label_1137c4;
        case 0x1137c8u: goto label_1137c8;
        case 0x1137ccu: goto label_1137cc;
        case 0x1137d0u: goto label_1137d0;
        case 0x1137d4u: goto label_1137d4;
        case 0x1137d8u: goto label_1137d8;
        case 0x1137dcu: goto label_1137dc;
        case 0x1137e0u: goto label_1137e0;
        case 0x1137e4u: goto label_1137e4;
        case 0x1137e8u: goto label_1137e8;
        case 0x1137ecu: goto label_1137ec;
        case 0x1137f0u: goto label_1137f0;
        case 0x1137f4u: goto label_1137f4;
        case 0x1137f8u: goto label_1137f8;
        case 0x1137fcu: goto label_1137fc;
        case 0x113800u: goto label_113800;
        case 0x113804u: goto label_113804;
        case 0x113808u: goto label_113808;
        case 0x11380cu: goto label_11380c;
        case 0x113810u: goto label_113810;
        case 0x113814u: goto label_113814;
        case 0x113818u: goto label_113818;
        case 0x11381cu: goto label_11381c;
        case 0x113820u: goto label_113820;
        case 0x113824u: goto label_113824;
        case 0x113828u: goto label_113828;
        case 0x11382cu: goto label_11382c;
        case 0x113830u: goto label_113830;
        case 0x113834u: goto label_113834;
        case 0x113838u: goto label_113838;
        case 0x11383cu: goto label_11383c;
        case 0x113840u: goto label_113840;
        case 0x113844u: goto label_113844;
        case 0x113848u: goto label_113848;
        case 0x11384cu: goto label_11384c;
        case 0x113850u: goto label_113850;
        case 0x113854u: goto label_113854;
        case 0x113858u: goto label_113858;
        case 0x11385cu: goto label_11385c;
        case 0x113860u: goto label_113860;
        case 0x113864u: goto label_113864;
        case 0x113868u: goto label_113868;
        case 0x11386cu: goto label_11386c;
        case 0x113870u: goto label_113870;
        case 0x113874u: goto label_113874;
        case 0x113878u: goto label_113878;
        case 0x11387cu: goto label_11387c;
        case 0x113880u: goto label_113880;
        case 0x113884u: goto label_113884;
        case 0x113888u: goto label_113888;
        case 0x11388cu: goto label_11388c;
        case 0x113890u: goto label_113890;
        case 0x113894u: goto label_113894;
        case 0x113898u: goto label_113898;
        case 0x11389cu: goto label_11389c;
        case 0x1138a0u: goto label_1138a0;
        case 0x1138a4u: goto label_1138a4;
        case 0x1138a8u: goto label_1138a8;
        case 0x1138acu: goto label_1138ac;
        default: break;
    }

    ctx->pc = 0x113770u;

label_113770:
    // 0x113770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_113774:
    // 0x113774: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x113774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_113778:
    // 0x113778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x113778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11377c:
    // 0x11377c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_113780:
    // 0x113780: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x113780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_113784:
    // 0x113784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x113784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_113788:
    // 0x113788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11378c:
    // 0x11378c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_113790:
    // 0x113790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_113794:
    // 0x113794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x113794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_113798:
    // 0x113798: 0x1000000e  b           . + 4 + (0xE << 2)
label_11379c:
    if (ctx->pc == 0x11379Cu) {
        ctx->pc = 0x11379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113798u;
        // 0x11379c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1137A0u;
        goto label_1137a0;
    }
    ctx->pc = 0x113798u;
    {
        const bool branch_taken_0x113798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113798u;
        // 0x11379c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113798) {
            ctx->pc = 0x1137D4u;
            goto label_1137d4;
        }
    }
    ctx->pc = 0x1137A0u;
label_1137a0:
    // 0x1137a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1137a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1137a4:
    // 0x1137a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1137a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1137a8:
    // 0x1137a8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1137a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1137ac:
    // 0x1137ac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1137acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1137b0:
    // 0x1137b0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1137b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1137b4:
    // 0x1137b4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1137b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1137b8:
    // 0x1137b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1137b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1137bc:
    // 0x1137bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1137bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1137c0:
    // 0x1137c0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1137c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1137c4:
    // 0x1137c4: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x1137c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
label_1137c8:
    // 0x1137c8: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1137c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_1137cc:
    // 0x1137cc: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x1137ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
label_1137d0:
    // 0x1137d0: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1137d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_1137d4:
    // 0x1137d4: 0x0  nop
    ctx->pc = 0x1137d4u;
    // NOP
label_1137d8:
    // 0x1137d8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1137d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1137dc:
    // 0x1137dc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1137dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1137e0:
    // 0x1137e0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1137e4:
    if (ctx->pc == 0x1137E4u) {
        ctx->pc = 0x1137E8u;
        goto label_1137e8;
    }
    ctx->pc = 0x1137E0u;
    {
        const bool branch_taken_0x1137e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1137e0) {
            ctx->pc = 0x1137A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1137a0;
        }
    }
    ctx->pc = 0x1137E8u;
label_1137e8:
    // 0x1137e8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1137e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1137ec:
    // 0x1137ec: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1137ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1137f0:
    // 0x1137f0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1137f4:
    if (ctx->pc == 0x1137F4u) {
        ctx->pc = 0x1137F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137F0u;
        // 0x1137f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1137F8u;
        goto label_1137f8;
    }
    ctx->pc = 0x1137F0u;
    {
        const bool branch_taken_0x1137f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137F0u;
        // 0x1137f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137f0) {
            ctx->pc = 0x113840u;
            goto label_113840;
        }
    }
    ctx->pc = 0x1137F8u;
label_1137f8:
    // 0x1137f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1137f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1137fc:
    // 0x1137fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1137fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_113800:
    // 0x113800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_113804:
    // 0x113804: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113808:
    // 0x113808: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x113808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_11380c:
    // 0x11380c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11380cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113810:
    // 0x113810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_113814:
    // 0x113814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113818:
    // 0x113818: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x113818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11381c:
    // 0x11381c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113820:
    // 0x113820: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x113820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_113824:
    // 0x113824: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x113824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_113828:
    // 0x113828: 0x320f809  jalr        $t9
label_11382c:
    if (ctx->pc == 0x11382Cu) {
        ctx->pc = 0x11382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113828u;
        // 0x11382c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113830u;
        goto label_113830;
    }
    ctx->pc = 0x113828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113830u);
        ctx->pc = 0x11382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113828u;
        // 0x11382c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113828u, 0x113830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113830u;
label_113830:
    // 0x113830: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_113834:
    // 0x113834: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x113834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_113838:
    // 0x113838: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11383c:
    if (ctx->pc == 0x11383Cu) {
        ctx->pc = 0x11383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113838u;
        // 0x11383c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113840u;
        goto label_113840;
    }
    ctx->pc = 0x113838u;
    {
        const bool branch_taken_0x113838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113838u;
        // 0x11383c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113838) {
            ctx->pc = 0x1137FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1137fc;
        }
    }
    ctx->pc = 0x113840u;
label_113840:
    // 0x113840: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x113840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113844:
    // 0x113844: 0x1000000d  b           . + 4 + (0xD << 2)
label_113848:
    if (ctx->pc == 0x113848u) {
        ctx->pc = 0x113848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113844u;
        // 0x113848: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11384Cu;
        goto label_11384c;
    }
    ctx->pc = 0x113844u;
    {
        const bool branch_taken_0x113844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113844u;
        // 0x113848: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113844) {
            ctx->pc = 0x11387Cu;
            goto label_11387c;
        }
    }
    ctx->pc = 0x11384Cu;
label_11384c:
    // 0x11384c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11384cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_113850:
    // 0x113850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113854:
    // 0x113854: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113858:
    // 0x113858: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x113858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_11385c:
    // 0x11385c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11385cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113860:
    // 0x113860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_113864:
    // 0x113864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113868:
    // 0x113868: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x113868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11386c:
    // 0x11386c: 0xc043da0  jal         func_10F680
label_113870:
    if (ctx->pc == 0x113870u) {
        ctx->pc = 0x113870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11386Cu;
        // 0x113870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113874u;
        goto label_113874;
    }
    ctx->pc = 0x11386Cu;
    SET_GPR_U32(ctx, 31, 0x113874u);
    ctx->pc = 0x113870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11386Cu;
    // 0x113870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x11386Cu, 0x113874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113874u;
label_113874:
    // 0x113874: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_113878:
    // 0x113878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11387c:
    // 0x11387c: 0x0  nop
    ctx->pc = 0x11387cu;
    // NOP
label_113880:
    // 0x113880: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x113880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_113884:
    // 0x113884: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x113884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_113888:
    // 0x113888: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11388c:
    if (ctx->pc == 0x11388Cu) {
        ctx->pc = 0x113890u;
        goto label_113890;
    }
    ctx->pc = 0x113888u;
    {
        const bool branch_taken_0x113888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113888) {
            ctx->pc = 0x11384Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11384c;
        }
    }
    ctx->pc = 0x113890u;
label_113890:
    // 0x113890: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x113890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_113894:
    // 0x113894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x113894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_113898:
    // 0x113898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x113898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11389c:
    // 0x11389c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11389cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1138a0:
    // 0x1138a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1138a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1138a4:
    // 0x1138a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1138a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1138a8:
    // 0x1138a8: 0x3e00008  jr          $ra
label_1138ac:
    if (ctx->pc == 0x1138ACu) {
        ctx->pc = 0x1138ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138A8u;
        // 0x1138ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1138B0u;
        goto label_fallthrough_0x1138a8;
    }
    ctx->pc = 0x1138A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1138ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138A8u;
        // 0x1138ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1138A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1138a8:
    ctx->pc = 0x1138B0u;
}
