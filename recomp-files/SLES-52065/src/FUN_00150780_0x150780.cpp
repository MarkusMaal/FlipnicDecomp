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

// Function: FUN_00150780
// Address: 0x150780 - 0x1508ec
void FUN_00150780_0x150780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150780_0x150780");
#endif

    switch (ctx->pc) {
        case 0x1507b4u: goto label_1507b4;
        case 0x1507c0u: goto label_1507c0;
        case 0x1507dcu: goto label_1507dc;
        case 0x15080cu: goto label_15080c;
        case 0x150864u: goto label_150864;
        case 0x150870u: goto label_150870;
        case 0x15089cu: goto label_15089c;
        case 0x1508b0u: goto label_1508b0;
        case 0x1508bcu: goto label_1508bc;
        case 0x1508d4u: goto label_1508d4;
        default: break;
    }

    ctx->pc = 0x150780u;

    // 0x150780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x150784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x150788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15078c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150794: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x150794u;
    {
        const bool branch_taken_0x150794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x150798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150794u;
        // 0x150798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150794) {
            ctx->pc = 0x1508D4u;
            goto label_1508d4;
        }
    }
    ctx->pc = 0x15079Cu;
    // 0x15079c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1507a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1507a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1507a4: 0x24429470  addiu       $v0, $v0, -0x6B90
    ctx->pc = 0x1507a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939760));
    // 0x1507a8: 0x24847430  addiu       $a0, $a0, 0x7430
    ctx->pc = 0x1507a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29744));
    // 0x1507ac: 0xc04c554  jal         func_131550
    ctx->pc = 0x1507ACu;
    SET_GPR_U32(ctx, 31, 0x1507B4u);
    ctx->pc = 0x1507B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507ACu;
    // 0x1507b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1507ACu, 0x1507B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507B4u;
label_1507b4:
    // 0x1507b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1507b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1507b8: 0xc04c54c  jal         func_131530
    ctx->pc = 0x1507B8u;
    SET_GPR_U32(ctx, 31, 0x1507C0u);
    ctx->pc = 0x1507BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507B8u;
    // 0x1507bc: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1507B8u, 0x1507C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507C0u;
label_1507c0:
    // 0x1507c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1507c4: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x1507c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1507c8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1507c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1507cc: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x1507ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x1507d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1507d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507d4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1507D4u;
    {
        const bool branch_taken_0x1507d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507D4u;
        // 0x1507d8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507d4) {
            ctx->pc = 0x150854u;
            goto label_150854;
        }
    }
    ctx->pc = 0x1507DCu;
label_1507dc:
    // 0x1507dc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1507dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1507e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1507e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1507e4: 0x14510018  bne         $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1507E4u;
    {
        const bool branch_taken_0x1507e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1507e4) {
            ctx->pc = 0x150848u;
            goto label_150848;
        }
    }
    ctx->pc = 0x1507ECu;
    // 0x1507ec: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1507ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x1507f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1507f4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1507f8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1507f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1507fc: 0x24a57430  addiu       $a1, $a1, 0x7430
    ctx->pc = 0x1507fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29744));
    // 0x150800: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150804: 0xc04c91c  jal         func_132470
    ctx->pc = 0x150804u;
    SET_GPR_U32(ctx, 31, 0x15080Cu);
    ctx->pc = 0x150808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150804u;
    // 0x150808: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132470u, 0x150804u, 0x15080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15080Cu;
label_15080c:
    // 0x15080c: 0x8f8285e4  lw          $v0, -0x7A1C($gp)
    ctx->pc = 0x15080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
    // 0x150810: 0x1451001b  bne         $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x150810u;
    {
        const bool branch_taken_0x150810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x150814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150810u;
        // 0x150814: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150810) {
            ctx->pc = 0x150880u;
            goto label_150880;
        }
    }
    ctx->pc = 0x150818u;
    // 0x150818: 0x8c227430  lw          $v0, 0x7430($at)
    ctx->pc = 0x150818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29744)));
    // 0x15081c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15081Cu;
    {
        const bool branch_taken_0x15081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15081c) {
            ctx->pc = 0x15082Cu;
            goto label_15082c;
        }
    }
    ctx->pc = 0x150824u;
    // 0x150824: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x150824u;
    {
        const bool branch_taken_0x150824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150824u;
        // 0x150828: 0xaf8085e4  sw          $zero, -0x7A1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150824) {
            ctx->pc = 0x150880u;
            goto label_150880;
        }
    }
    ctx->pc = 0x15082Cu;
label_15082c:
    // 0x15082c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x15082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x150830: 0x8c227438  lw          $v0, 0x7438($at)
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x367438u));
    // 0x150834: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x150834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x150838: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x150838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15083c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150840: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x150840u;
    {
        const bool branch_taken_0x150840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150840u;
        // 0x150844: 0xaf8285e4  sw          $v0, -0x7A1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150840) {
            ctx->pc = 0x150880u;
            goto label_150880;
        }
    }
    ctx->pc = 0x150848u;
label_150848:
    // 0x150848: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15084c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150850: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x150850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_150854:
    // 0x150854: 0x0  nop
    ctx->pc = 0x150854u;
    // NOP
    // 0x150858: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15085c: 0xc04c554  jal         func_131550
    ctx->pc = 0x15085Cu;
    SET_GPR_U32(ctx, 31, 0x150864u);
    ctx->pc = 0x150860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15085Cu;
    // 0x150860: 0x24847430  addiu       $a0, $a0, 0x7430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x15085Cu, 0x150864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150864u;
label_150864:
    // 0x150864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150868: 0xc04c550  jal         func_131540
    ctx->pc = 0x150868u;
    SET_GPR_U32(ctx, 31, 0x150870u);
    ctx->pc = 0x15086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150868u;
    // 0x15086c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x150868u, 0x150870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150870u;
label_150870:
    // 0x150870: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x150870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150874: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x150874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x150878: 0x1462ffd8  bne         $v1, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x150878u;
    {
        const bool branch_taken_0x150878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150878) {
            ctx->pc = 0x1507DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1507dc;
        }
    }
    ctx->pc = 0x150880u;
label_150880:
    // 0x150880: 0x262401b8  addiu       $a0, $s1, 0x1B8
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
    // 0x150884: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x150884u;
    {
        const bool branch_taken_0x150884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150884) {
            ctx->pc = 0x1508B0u;
            goto label_1508b0;
        }
    }
    ctx->pc = 0x15088Cu;
    // 0x15088c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15088Cu;
    {
        const bool branch_taken_0x15088c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15088c) {
            ctx->pc = 0x1508B0u;
            goto label_1508b0;
        }
    }
    ctx->pc = 0x150894u;
    // 0x150894: 0xc05426c  jal         func_1509B0
    ctx->pc = 0x150894u;
    SET_GPR_U32(ctx, 31, 0x15089Cu);
    ctx->pc = 0x1509B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509B0u, 0x150894u, 0x15089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15089Cu;
label_15089c:
    // 0x15089c: 0x262401bc  addiu       $a0, $s1, 0x1BC
    ctx->pc = 0x15089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x1508a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1508A0u;
    {
        const bool branch_taken_0x1508a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508A0u;
        // 0x1508a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508a0) {
            ctx->pc = 0x1508B0u;
            goto label_1508b0;
        }
    }
    ctx->pc = 0x1508A8u;
    // 0x1508a8: 0xc04f118  jal         func_13C460
    ctx->pc = 0x1508A8u;
    SET_GPR_U32(ctx, 31, 0x1508B0u);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1508A8u, 0x1508B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508B0u;
label_1508b0:
    // 0x1508b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1508b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508b4: 0xc053cf4  jal         func_14F3D0
    ctx->pc = 0x1508B4u;
    SET_GPR_U32(ctx, 31, 0x1508BCu);
    ctx->pc = 0x1508B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508B4u;
    // 0x1508b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F3D0u, 0x1508B4u, 0x1508BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508BCu;
label_1508bc:
    // 0x1508bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1508bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1508c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1508c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1508c4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1508C4u;
    {
        const bool branch_taken_0x1508c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1508C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508C4u;
        // 0x1508c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508c4) {
            ctx->pc = 0x1508D8u;
            goto label_1508d8;
        }
    }
    ctx->pc = 0x1508CCu;
    // 0x1508cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1508CCu;
    SET_GPR_U32(ctx, 31, 0x1508D4u);
    ctx->pc = 0x1508D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508CCu;
    // 0x1508d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1508CCu, 0x1508D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508D4u;
label_1508d4:
    // 0x1508d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1508d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1508d8:
    // 0x1508d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1508d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1508dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1508dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1508e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1508e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1508e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1508E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1508E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508E4u;
        // 0x1508e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1508E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1508ECu;
}
