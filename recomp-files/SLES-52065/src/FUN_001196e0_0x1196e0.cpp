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

// Function: FUN_001196e0
// Address: 0x1196e0 - 0x1197c0
void FUN_001196e0_0x1196e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001196e0_0x1196e0");
#endif

    switch (ctx->pc) {
        case 0x1196e0u: goto label_1196e0;
        case 0x1196e4u: goto label_1196e4;
        case 0x1196e8u: goto label_1196e8;
        case 0x1196ecu: goto label_1196ec;
        case 0x1196f0u: goto label_1196f0;
        case 0x1196f4u: goto label_1196f4;
        case 0x1196f8u: goto label_1196f8;
        case 0x1196fcu: goto label_1196fc;
        case 0x119700u: goto label_119700;
        case 0x119704u: goto label_119704;
        case 0x119708u: goto label_119708;
        case 0x11970cu: goto label_11970c;
        case 0x119710u: goto label_119710;
        case 0x119714u: goto label_119714;
        case 0x119718u: goto label_119718;
        case 0x11971cu: goto label_11971c;
        case 0x119720u: goto label_119720;
        case 0x119724u: goto label_119724;
        case 0x119728u: goto label_119728;
        case 0x11972cu: goto label_11972c;
        case 0x119730u: goto label_119730;
        case 0x119734u: goto label_119734;
        case 0x119738u: goto label_119738;
        case 0x11973cu: goto label_11973c;
        case 0x119740u: goto label_119740;
        case 0x119744u: goto label_119744;
        case 0x119748u: goto label_119748;
        case 0x11974cu: goto label_11974c;
        case 0x119750u: goto label_119750;
        case 0x119754u: goto label_119754;
        case 0x119758u: goto label_119758;
        case 0x11975cu: goto label_11975c;
        case 0x119760u: goto label_119760;
        case 0x119764u: goto label_119764;
        case 0x119768u: goto label_119768;
        case 0x11976cu: goto label_11976c;
        case 0x119770u: goto label_119770;
        case 0x119774u: goto label_119774;
        case 0x119778u: goto label_119778;
        case 0x11977cu: goto label_11977c;
        case 0x119780u: goto label_119780;
        case 0x119784u: goto label_119784;
        case 0x119788u: goto label_119788;
        case 0x11978cu: goto label_11978c;
        case 0x119790u: goto label_119790;
        case 0x119794u: goto label_119794;
        case 0x119798u: goto label_119798;
        case 0x11979cu: goto label_11979c;
        case 0x1197a0u: goto label_1197a0;
        case 0x1197a4u: goto label_1197a4;
        case 0x1197a8u: goto label_1197a8;
        case 0x1197acu: goto label_1197ac;
        case 0x1197b0u: goto label_1197b0;
        case 0x1197b4u: goto label_1197b4;
        case 0x1197b8u: goto label_1197b8;
        case 0x1197bcu: goto label_1197bc;
        default: break;
    }

    ctx->pc = 0x1196e0u;

label_1196e0:
    // 0x1196e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1196e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1196e4:
    // 0x1196e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1196e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1196e8:
    // 0x1196e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1196e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1196ec:
    // 0x1196ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1196ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1196f0:
    // 0x1196f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1196f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1196f4:
    // 0x1196f4: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x1196f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_1196f8:
    // 0x1196f8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1196fc:
    if (ctx->pc == 0x1196FCu) {
        ctx->pc = 0x1196FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196F8u;
        // 0x1196fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119700u;
        goto label_119700;
    }
    ctx->pc = 0x1196F8u;
    {
        const bool branch_taken_0x1196f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196F8u;
        // 0x1196fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196f8) {
            ctx->pc = 0x119754u;
            goto label_119754;
        }
    }
    ctx->pc = 0x119700u;
label_119700:
    // 0x119700: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x119700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_119704:
    // 0x119704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_119708:
    // 0x119708: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x119708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_11970c:
    // 0x11970c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_119710:
    // 0x119710: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_119714:
    // 0x119714: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_119718:
    // 0x119718: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11971c:
    // 0x11971c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_119720:
    if (ctx->pc == 0x119720u) {
        ctx->pc = 0x119724u;
        goto label_119724;
    }
    ctx->pc = 0x11971Cu;
    {
        const bool branch_taken_0x11971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11971c) {
            ctx->pc = 0x119774u;
            goto label_119774;
        }
    }
    ctx->pc = 0x119724u;
label_119724:
    // 0x119724: 0x10000013  b           . + 4 + (0x13 << 2)
label_119728:
    if (ctx->pc == 0x119728u) {
        ctx->pc = 0x119728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119724u;
        // 0x119728: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11972Cu;
        goto label_11972c;
    }
    ctx->pc = 0x119724u;
    {
        const bool branch_taken_0x119724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119724u;
        // 0x119728: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119724) {
            ctx->pc = 0x119774u;
            goto label_119774;
        }
    }
    ctx->pc = 0x11972Cu;
label_11972c:
    // 0x11972c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x11972cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_119730:
    // 0x119730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_119734:
    // 0x119734: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x119734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_119738:
    // 0x119738: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x119738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11973c:
    // 0x11973c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x11973cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_119740:
    // 0x119740: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_119744:
    // 0x119744: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_119748:
    // 0x119748: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_11974c:
    if (ctx->pc == 0x11974Cu) {
        ctx->pc = 0x119750u;
        goto label_119750;
    }
    ctx->pc = 0x119748u;
    {
        const bool branch_taken_0x119748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119748) {
            ctx->pc = 0x119754u;
            goto label_119754;
        }
    }
    ctx->pc = 0x119750u;
label_119750:
    // 0x119750: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x119750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_119754:
    // 0x119754: 0x0  nop
    ctx->pc = 0x119754u;
    // NOP
label_119758:
    // 0x119758: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x119758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_11975c:
    // 0x11975c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_119760:
    // 0x119760: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x119760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119764:
    // 0x119764: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x119764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_119768:
    // 0x119768: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_11976c:
    if (ctx->pc == 0x11976Cu) {
        ctx->pc = 0x11976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119768u;
        // 0x11976c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119770u;
        goto label_119770;
    }
    ctx->pc = 0x119768u;
    {
        const bool branch_taken_0x119768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119768u;
        // 0x11976c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119768) {
            ctx->pc = 0x11972Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11972c;
        }
    }
    ctx->pc = 0x119770u;
label_119770:
    // 0x119770: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x119770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_119774:
    // 0x119774: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x119774u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_119778:
    // 0x119778: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x119778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11977c:
    // 0x11977c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_119780:
    // 0x119780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119784:
    // 0x119784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119788:
    // 0x119788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11978c:
    // 0x11978c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11978cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119790:
    // 0x119790: 0x320f809  jalr        $t9
label_119794:
    if (ctx->pc == 0x119794u) {
        ctx->pc = 0x119794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119790u;
        // 0x119794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119798u;
        goto label_119798;
    }
    ctx->pc = 0x119790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119798u);
        ctx->pc = 0x119794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119790u;
        // 0x119794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119790u, 0x119798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119798u;
label_119798:
    // 0x119798: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11979c:
    // 0x11979c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1197a0:
    // 0x1197a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1197a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1197a4:
    // 0x1197a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1197a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1197a8:
    // 0x1197a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1197a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1197ac:
    // 0x1197ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1197acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1197b0:
    // 0x1197b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1197b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1197b4:
    // 0x1197b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1197b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1197b8:
    // 0x1197b8: 0x3e00008  jr          $ra
label_1197bc:
    if (ctx->pc == 0x1197BCu) {
        ctx->pc = 0x1197BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197B8u;
        // 0x1197bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1197C0u;
        goto label_fallthrough_0x1197b8;
    }
    ctx->pc = 0x1197B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1197BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197B8u;
        // 0x1197bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1197B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1197b8:
    ctx->pc = 0x1197C0u;
}
