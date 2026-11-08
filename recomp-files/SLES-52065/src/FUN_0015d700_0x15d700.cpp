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

// Function: FUN_0015d700
// Address: 0x15d700 - 0x15d818
void FUN_0015d700_0x15d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d700_0x15d700");
#endif

    switch (ctx->pc) {
        case 0x15d700u: goto label_15d700;
        case 0x15d704u: goto label_15d704;
        case 0x15d708u: goto label_15d708;
        case 0x15d70cu: goto label_15d70c;
        case 0x15d710u: goto label_15d710;
        case 0x15d714u: goto label_15d714;
        case 0x15d718u: goto label_15d718;
        case 0x15d71cu: goto label_15d71c;
        case 0x15d720u: goto label_15d720;
        case 0x15d724u: goto label_15d724;
        case 0x15d728u: goto label_15d728;
        case 0x15d72cu: goto label_15d72c;
        case 0x15d730u: goto label_15d730;
        case 0x15d734u: goto label_15d734;
        case 0x15d738u: goto label_15d738;
        case 0x15d73cu: goto label_15d73c;
        case 0x15d740u: goto label_15d740;
        case 0x15d744u: goto label_15d744;
        case 0x15d748u: goto label_15d748;
        case 0x15d74cu: goto label_15d74c;
        case 0x15d750u: goto label_15d750;
        case 0x15d754u: goto label_15d754;
        case 0x15d758u: goto label_15d758;
        case 0x15d75cu: goto label_15d75c;
        case 0x15d760u: goto label_15d760;
        case 0x15d764u: goto label_15d764;
        case 0x15d768u: goto label_15d768;
        case 0x15d76cu: goto label_15d76c;
        case 0x15d770u: goto label_15d770;
        case 0x15d774u: goto label_15d774;
        case 0x15d778u: goto label_15d778;
        case 0x15d77cu: goto label_15d77c;
        case 0x15d780u: goto label_15d780;
        case 0x15d784u: goto label_15d784;
        case 0x15d788u: goto label_15d788;
        case 0x15d78cu: goto label_15d78c;
        case 0x15d790u: goto label_15d790;
        case 0x15d794u: goto label_15d794;
        case 0x15d798u: goto label_15d798;
        case 0x15d79cu: goto label_15d79c;
        case 0x15d7a0u: goto label_15d7a0;
        case 0x15d7a4u: goto label_15d7a4;
        case 0x15d7a8u: goto label_15d7a8;
        case 0x15d7acu: goto label_15d7ac;
        case 0x15d7b0u: goto label_15d7b0;
        case 0x15d7b4u: goto label_15d7b4;
        case 0x15d7b8u: goto label_15d7b8;
        case 0x15d7bcu: goto label_15d7bc;
        case 0x15d7c0u: goto label_15d7c0;
        case 0x15d7c4u: goto label_15d7c4;
        case 0x15d7c8u: goto label_15d7c8;
        case 0x15d7ccu: goto label_15d7cc;
        case 0x15d7d0u: goto label_15d7d0;
        case 0x15d7d4u: goto label_15d7d4;
        case 0x15d7d8u: goto label_15d7d8;
        case 0x15d7dcu: goto label_15d7dc;
        case 0x15d7e0u: goto label_15d7e0;
        case 0x15d7e4u: goto label_15d7e4;
        case 0x15d7e8u: goto label_15d7e8;
        case 0x15d7ecu: goto label_15d7ec;
        case 0x15d7f0u: goto label_15d7f0;
        case 0x15d7f4u: goto label_15d7f4;
        case 0x15d7f8u: goto label_15d7f8;
        case 0x15d7fcu: goto label_15d7fc;
        case 0x15d800u: goto label_15d800;
        case 0x15d804u: goto label_15d804;
        case 0x15d808u: goto label_15d808;
        case 0x15d80cu: goto label_15d80c;
        case 0x15d810u: goto label_15d810;
        case 0x15d814u: goto label_15d814;
        default: break;
    }

    ctx->pc = 0x15d700u;

label_15d700:
    // 0x15d700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15d704:
    // 0x15d704: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15d708:
    // 0x15d708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15d70c:
    // 0x15d70c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d710:
    // 0x15d710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15d714:
    // 0x15d714: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15d714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d718:
    // 0x15d718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15d71c:
    // 0x15d71c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d720:
    // 0x15d720: 0x1000000b  b           . + 4 + (0xB << 2)
label_15d724:
    if (ctx->pc == 0x15D724u) {
        ctx->pc = 0x15D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D720u;
        // 0x15d724: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D728u;
        goto label_15d728;
    }
    ctx->pc = 0x15D720u;
    {
        const bool branch_taken_0x15d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D720u;
        // 0x15d724: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d720) {
            ctx->pc = 0x15D750u;
            goto label_15d750;
        }
    }
    ctx->pc = 0x15D728u;
label_15d728:
    // 0x15d728: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15d72c:
    // 0x15d72c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15d730:
    if (ctx->pc == 0x15D730u) {
        ctx->pc = 0x15D734u;
        goto label_15d734;
    }
    ctx->pc = 0x15D72Cu;
    {
        const bool branch_taken_0x15d72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d72c) {
            ctx->pc = 0x15D744u;
            goto label_15d744;
        }
    }
    ctx->pc = 0x15D734u;
label_15d734:
    // 0x15d734: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d738:
    // 0x15d738: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x15d738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_15d73c:
    // 0x15d73c: 0x320f809  jalr        $t9
label_15d740:
    if (ctx->pc == 0x15D740u) {
        ctx->pc = 0x15D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D73Cu;
        // 0x15d740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D744u;
        goto label_15d744;
    }
    ctx->pc = 0x15D73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D744u);
        ctx->pc = 0x15D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D73Cu;
        // 0x15d740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D73Cu, 0x15D744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D744u;
label_15d744:
    // 0x15d744: 0x0  nop
    ctx->pc = 0x15d744u;
    // NOP
label_15d748:
    // 0x15d748: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15d74c:
    // 0x15d74c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d750:
    // 0x15d750: 0x8e033dd8  lw          $v1, 0x3DD8($s0)
    ctx->pc = 0x15d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
label_15d754:
    // 0x15d754: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d758:
    // 0x15d758: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_15d75c:
    if (ctx->pc == 0x15D75Cu) {
        ctx->pc = 0x15D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D758u;
        // 0x15d75c: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D760u;
        goto label_15d760;
    }
    ctx->pc = 0x15D758u;
    {
        const bool branch_taken_0x15d758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D758u;
        // 0x15d75c: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d758) {
            ctx->pc = 0x15D728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d728;
        }
    }
    ctx->pc = 0x15D760u;
label_15d760:
    // 0x15d760: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d764:
    // 0x15d764: 0x1000000e  b           . + 4 + (0xE << 2)
label_15d768:
    if (ctx->pc == 0x15D768u) {
        ctx->pc = 0x15D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D764u;
        // 0x15d768: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D76Cu;
        goto label_15d76c;
    }
    ctx->pc = 0x15D764u;
    {
        const bool branch_taken_0x15d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D764u;
        // 0x15d768: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d764) {
            ctx->pc = 0x15D7A0u;
            goto label_15d7a0;
        }
    }
    ctx->pc = 0x15D76Cu;
label_15d76c:
    // 0x15d76c: 0x8c723de0  lw          $s2, 0x3DE0($v1)
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15840)));
label_15d770:
    // 0x15d770: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_15d774:
    if (ctx->pc == 0x15D774u) {
        ctx->pc = 0x15D778u;
        goto label_15d778;
    }
    ctx->pc = 0x15D770u;
    {
        const bool branch_taken_0x15d770 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d770) {
            ctx->pc = 0x15D798u;
            goto label_15d798;
        }
    }
    ctx->pc = 0x15D778u;
label_15d778:
    // 0x15d778: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x15d778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15d77c:
    // 0x15d77c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_15d780:
    if (ctx->pc == 0x15D780u) {
        ctx->pc = 0x15D784u;
        goto label_15d784;
    }
    ctx->pc = 0x15D77Cu;
    {
        const bool branch_taken_0x15d77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d77c) {
            ctx->pc = 0x15D78Cu;
            goto label_15d78c;
        }
    }
    ctx->pc = 0x15D784u;
label_15d784:
    // 0x15d784: 0xc04018c  jal         func_100630
label_15d788:
    if (ctx->pc == 0x15D788u) {
        ctx->pc = 0x15D78Cu;
        goto label_15d78c;
    }
    ctx->pc = 0x15D784u;
    SET_GPR_U32(ctx, 31, 0x15D78Cu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15D784u, 0x15D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D78Cu;
label_15d78c:
    // 0x15d78c: 0x0  nop
    ctx->pc = 0x15d78cu;
    // NOP
label_15d790:
    // 0x15d790: 0xc0401a4  jal         func_100690
label_15d794:
    if (ctx->pc == 0x15D794u) {
        ctx->pc = 0x15D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D790u;
        // 0x15d794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D798u;
        goto label_15d798;
    }
    ctx->pc = 0x15D790u;
    SET_GPR_U32(ctx, 31, 0x15D798u);
    ctx->pc = 0x15D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D790u;
    // 0x15d794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15D790u, 0x15D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D798u;
label_15d798:
    // 0x15d798: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x15d798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_15d79c:
    // 0x15d79c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d7a0:
    // 0x15d7a0: 0x8e033df0  lw          $v1, 0x3DF0($s0)
    ctx->pc = 0x15d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15856)));
label_15d7a4:
    // 0x15d7a4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d7a8:
    // 0x15d7a8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_15d7ac:
    if (ctx->pc == 0x15D7ACu) {
        ctx->pc = 0x15D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A8u;
        // 0x15d7ac: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7B0u;
        goto label_15d7b0;
    }
    ctx->pc = 0x15D7A8u;
    {
        const bool branch_taken_0x15d7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A8u;
        // 0x15d7ac: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7a8) {
            ctx->pc = 0x15D76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d76c;
        }
    }
    ctx->pc = 0x15D7B0u;
label_15d7b0:
    // 0x15d7b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d7b4:
    // 0x15d7b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_15d7b8:
    if (ctx->pc == 0x15D7B8u) {
        ctx->pc = 0x15D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B4u;
        // 0x15d7b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7BCu;
        goto label_15d7bc;
    }
    ctx->pc = 0x15D7B4u;
    {
        const bool branch_taken_0x15d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B4u;
        // 0x15d7b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7b4) {
            ctx->pc = 0x15D7E0u;
            goto label_15d7e0;
        }
    }
    ctx->pc = 0x15D7BCu;
label_15d7bc:
    // 0x15d7bc: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15d7c0:
    // 0x15d7c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15d7c4:
    if (ctx->pc == 0x15D7C4u) {
        ctx->pc = 0x15D7C8u;
        goto label_15d7c8;
    }
    ctx->pc = 0x15D7C0u;
    {
        const bool branch_taken_0x15d7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d7c0) {
            ctx->pc = 0x15D7D8u;
            goto label_15d7d8;
        }
    }
    ctx->pc = 0x15D7C8u;
label_15d7c8:
    // 0x15d7c8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d7cc:
    // 0x15d7cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_15d7d0:
    // 0x15d7d0: 0x320f809  jalr        $t9
label_15d7d4:
    if (ctx->pc == 0x15D7D4u) {
        ctx->pc = 0x15D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D0u;
        // 0x15d7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7D8u;
        goto label_15d7d8;
    }
    ctx->pc = 0x15D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D7D8u);
        ctx->pc = 0x15D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D0u;
        // 0x15d7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D7D0u, 0x15D7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D7D8u;
label_15d7d8:
    // 0x15d7d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15d7dc:
    // 0x15d7dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d7e0:
    // 0x15d7e0: 0x8e032cd4  lw          $v1, 0x2CD4($s0)
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
label_15d7e4:
    // 0x15d7e4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d7e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d7e8:
    // 0x15d7e8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_15d7ec:
    if (ctx->pc == 0x15D7ECu) {
        ctx->pc = 0x15D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7E8u;
        // 0x15d7ec: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7F0u;
        goto label_15d7f0;
    }
    ctx->pc = 0x15D7E8u;
    {
        const bool branch_taken_0x15d7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7E8u;
        // 0x15d7ec: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7e8) {
            ctx->pc = 0x15D7BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d7bc;
        }
    }
    ctx->pc = 0x15D7F0u;
label_15d7f0:
    // 0x15d7f0: 0xae003dd8  sw          $zero, 0x3DD8($s0)
    ctx->pc = 0x15d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15832), GPR_U32(ctx, 0));
label_15d7f4:
    // 0x15d7f4: 0xae003df0  sw          $zero, 0x3DF0($s0)
    ctx->pc = 0x15d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15856), GPR_U32(ctx, 0));
label_15d7f8:
    // 0x15d7f8: 0xae002cd4  sw          $zero, 0x2CD4($s0)
    ctx->pc = 0x15d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11476), GPR_U32(ctx, 0));
label_15d7fc:
    // 0x15d7fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15d800:
    // 0x15d800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d804:
    // 0x15d804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d808:
    // 0x15d808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d80c:
    // 0x15d80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d810:
    // 0x15d810: 0x3e00008  jr          $ra
label_15d814:
    if (ctx->pc == 0x15D814u) {
        ctx->pc = 0x15D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D810u;
        // 0x15d814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D818u;
        goto label_fallthrough_0x15d810;
    }
    ctx->pc = 0x15D810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D810u;
        // 0x15d814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d810:
    ctx->pc = 0x15D818u;
}
