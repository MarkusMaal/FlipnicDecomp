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

// Function: entry_00205624
// Address: 0x205624 - 0x2058f0
void entry_00205624_0x205624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205624_0x205624");
#endif

    switch (ctx->pc) {
        case 0x205660u: goto label_205660;
        case 0x205684u: goto label_205684;
        case 0x2056d4u: goto label_2056d4;
        case 0x205700u: goto label_205700;
        case 0x205740u: goto label_205740;
        case 0x205770u: goto label_205770;
        case 0x2057c0u: goto label_2057c0;
        case 0x205810u: goto label_205810;
        case 0x205854u: goto label_205854;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x2058d8u: goto label_2058d8;
        default: break;
    }

    ctx->pc = 0x205624u;

label_205624:
    // 0x205624: 0x5040ff1f  beql        $v0, $zero, . + 4 + (-0xE1 << 2)
label_205628:
    if (ctx->pc == 0x205628u) {
        ctx->pc = 0x205628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205624u;
        // 0x205628: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20562Cu;
        goto label_20562c;
    }
    ctx->pc = 0x205624u;
    {
        const bool branch_taken_0x205624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205624) {
            ctx->pc = 0x205628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205624u;
            // 0x205628: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x20562Cu;
label_20562c:
    // 0x20562c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20562cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_205630:
    // 0x205630: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x205630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_205634:
    // 0x205634: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x205634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_205638:
    // 0x205638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20563c:
    // 0x20563c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_205640:
    // 0x205640: 0x800008  jr          $a0
label_205644:
    if (ctx->pc == 0x205644u) {
        ctx->pc = 0x205648u;
        goto label_205648;
    }
    ctx->pc = 0x205640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x205648u;
label_205648:
    // 0x205648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20564c:
    // 0x20564c: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x20564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_205650:
    // 0x205650: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_205654:
    if (ctx->pc == 0x205654u) {
        ctx->pc = 0x205654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205650u;
        // 0x205654: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205658u;
        goto label_205658;
    }
    ctx->pc = 0x205650u;
    {
        const bool branch_taken_0x205650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205650u;
        // 0x205654: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205650) {
            ctx->pc = 0x2056BCu;
            goto label_2056bc;
        }
    }
    ctx->pc = 0x205658u;
label_205658:
    // 0x205658: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x205658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20565c:
    // 0x20565c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x20565cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205660:
    // 0x205660: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x205660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_205664:
    // 0x205664: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_205668:
    if (ctx->pc == 0x205668u) {
        ctx->pc = 0x205668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205664u;
        // 0x205668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20566Cu;
        goto label_20566c;
    }
    ctx->pc = 0x205664u;
    {
        const bool branch_taken_0x205664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205664u;
        // 0x205668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205664) {
            ctx->pc = 0x20569Cu;
            goto label_20569c;
        }
    }
    ctx->pc = 0x20566Cu;
label_20566c:
    // 0x20566c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205670:
    // 0x205670: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x205670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_205674:
    // 0x205674: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x205674u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_205678:
    // 0x205678: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x205678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20567c:
    // 0x20567c: 0xc080432  jal         func_2010C8
label_205680:
    if (ctx->pc == 0x205680u) {
        ctx->pc = 0x205680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20567Cu;
        // 0x205680: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205684u;
        goto label_205684;
    }
    ctx->pc = 0x20567Cu;
    SET_GPR_U32(ctx, 31, 0x205684u);
    ctx->pc = 0x205680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20567Cu;
    // 0x205680: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x20567Cu, 0x205684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205684u;
label_205684:
    // 0x205684: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_205688:
    if (ctx->pc == 0x205688u) {
        ctx->pc = 0x205688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205684u;
        // 0x205688: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20568Cu;
        goto label_20568c;
    }
    ctx->pc = 0x205684u;
    {
        const bool branch_taken_0x205684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205684) {
            ctx->pc = 0x205688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205684u;
            // 0x205688: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205660;
        }
    }
    ctx->pc = 0x20568Cu;
label_20568c:
    // 0x20568c: 0x122001a2  beqz        $s1, . + 4 + (0x1A2 << 2)
label_205690:
    if (ctx->pc == 0x205690u) {
        ctx->pc = 0x205690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20568Cu;
        // 0x205690: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205694u;
        goto label_205694;
    }
    ctx->pc = 0x20568Cu;
    {
        const bool branch_taken_0x20568c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x205690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20568Cu;
        // 0x205690: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20568c) {
            ctx->pc = 0x205D18u;
            return;
        }
    }
    ctx->pc = 0x205694u;
label_205694:
    // 0x205694: 0x1000ff03  b           . + 4 + (-0xFD << 2)
label_205698:
    if (ctx->pc == 0x205698u) {
        ctx->pc = 0x205698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205694u;
        // 0x205698: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20569Cu;
        goto label_20569c;
    }
    ctx->pc = 0x205694u;
    {
        const bool branch_taken_0x205694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205694u;
        // 0x205698: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205694) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x20569Cu;
label_20569c:
    // 0x20569c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2056a0:
    // 0x2056a0: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x2056a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2056a4:
    // 0x2056a4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2056a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2056a8:
    // 0x2056a8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2056ac:
    // 0x2056ac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2056b0:
    // 0x2056b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2056b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2056b4:
    // 0x2056b4: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_2056b8:
    if (ctx->pc == 0x2056B8u) {
        ctx->pc = 0x2056B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056B4u;
        // 0x2056b8: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056BCu;
        goto label_2056bc;
    }
    ctx->pc = 0x2056B4u;
    {
        const bool branch_taken_0x2056b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056B4u;
        // 0x2056b8: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056b4) {
            ctx->pc = 0x2052A0u;
            return;
        }
    }
    ctx->pc = 0x2056BCu;
label_2056bc:
    // 0x2056bc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2056bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2056c0:
    // 0x2056c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2056c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2056c4:
    // 0x2056c4: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x2056c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2056c8:
    // 0x2056c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2056c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2056cc:
    // 0x2056cc: 0xc07f5e2  jal         func_1FD788
label_2056d0:
    if (ctx->pc == 0x2056D0u) {
        ctx->pc = 0x2056D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056CCu;
        // 0x2056d0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056D4u;
        goto label_2056d4;
    }
    ctx->pc = 0x2056CCu;
    SET_GPR_U32(ctx, 31, 0x2056D4u);
    ctx->pc = 0x2056D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056CCu;
    // 0x2056d0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD788u, 0x2056CCu, 0x2056D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056D4u;
label_2056d4:
    // 0x2056d4: 0x10400190  beqz        $v0, . + 4 + (0x190 << 2)
label_2056d8:
    if (ctx->pc == 0x2056D8u) {
        ctx->pc = 0x2056D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056D4u;
        // 0x2056d8: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056DCu;
        goto label_2056dc;
    }
    ctx->pc = 0x2056D4u;
    {
        const bool branch_taken_0x2056d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056D4u;
        // 0x2056d8: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056d4) {
            ctx->pc = 0x205D18u;
            return;
        }
    }
    ctx->pc = 0x2056DCu;
label_2056dc:
    // 0x2056dc: 0x1000fef0  b           . + 4 + (-0x110 << 2)
label_2056e0:
    if (ctx->pc == 0x2056E0u) {
        ctx->pc = 0x2056E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056DCu;
        // 0x2056e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056E4u;
        goto label_2056e4;
    }
    ctx->pc = 0x2056DCu;
    {
        const bool branch_taken_0x2056dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056DCu;
        // 0x2056e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056dc) {
            ctx->pc = 0x2052A0u;
            return;
        }
    }
    ctx->pc = 0x2056E4u;
label_2056e4:
    // 0x2056e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2056e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2056e8:
    // 0x2056e8: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x2056e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2056ec:
    // 0x2056ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2056ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2056f0:
    // 0x2056f0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2056f4:
    if (ctx->pc == 0x2056F4u) {
        ctx->pc = 0x2056F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056F0u;
        // 0x2056f4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056F8u;
        goto label_2056f8;
    }
    ctx->pc = 0x2056F0u;
    {
        const bool branch_taken_0x2056f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056F0u;
        // 0x2056f4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056f0) {
            ctx->pc = 0x205760u;
            goto label_205760;
        }
    }
    ctx->pc = 0x2056F8u;
label_2056f8:
    // 0x2056f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2056f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2056fc:
    // 0x2056fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205700:
    // 0x205700: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x205700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_205704:
    // 0x205704: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x205704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_205708:
    // 0x205708: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x205708u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20570c:
    // 0x20570c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_205710:
    if (ctx->pc == 0x205710u) {
        ctx->pc = 0x205710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20570Cu;
        // 0x205710: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205714u;
        goto label_205714;
    }
    ctx->pc = 0x20570Cu;
    {
        const bool branch_taken_0x20570c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20570Cu;
        // 0x205710: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20570c) {
            ctx->pc = 0x205750u;
            goto label_205750;
        }
    }
    ctx->pc = 0x205714u;
label_205714:
    // 0x205714: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205718:
    // 0x205718: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x205718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20571c:
    // 0x20571c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20571cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205720:
    // 0x205720: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_205724:
    // 0x205724: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_205728:
    // 0x205728: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_20572c:
    if (ctx->pc == 0x20572Cu) {
        ctx->pc = 0x20572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205728u;
        // 0x20572c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205730u;
        goto label_205730;
    }
    ctx->pc = 0x205728u;
    {
        const bool branch_taken_0x205728 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205728u;
        // 0x20572c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205728) {
            ctx->pc = 0x205750u;
            goto label_205750;
        }
    }
    ctx->pc = 0x205730u;
label_205730:
    // 0x205730: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_205734:
    if (ctx->pc == 0x205734u) {
        ctx->pc = 0x205734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205730u;
        // 0x205734: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205738u;
        goto label_205738;
    }
    ctx->pc = 0x205730u;
    {
        const bool branch_taken_0x205730 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x205730) {
            ctx->pc = 0x205734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205730u;
            // 0x205734: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205700;
        }
    }
    ctx->pc = 0x205738u;
label_205738:
    // 0x205738: 0xc080432  jal         func_2010C8
label_20573c:
    if (ctx->pc == 0x20573Cu) {
        ctx->pc = 0x20573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205738u;
        // 0x20573c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205740u;
        goto label_205740;
    }
    ctx->pc = 0x205738u;
    SET_GPR_U32(ctx, 31, 0x205740u);
    ctx->pc = 0x20573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205738u;
    // 0x20573c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205738u, 0x205740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205740u;
label_205740:
    // 0x205740: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_205744:
    if (ctx->pc == 0x205744u) {
        ctx->pc = 0x205744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205740u;
        // 0x205744: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205748u;
        goto label_205748;
    }
    ctx->pc = 0x205740u;
    {
        const bool branch_taken_0x205740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205740) {
            ctx->pc = 0x205744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205740u;
            // 0x205744: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205700;
        }
    }
    ctx->pc = 0x205748u;
label_205748:
    // 0x205748: 0x12000174  beqz        $s0, . + 4 + (0x174 << 2)
label_20574c:
    if (ctx->pc == 0x20574Cu) {
        ctx->pc = 0x20574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205748u;
        // 0x20574c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205750u;
        goto label_205750;
    }
    ctx->pc = 0x205748u;
    {
        const bool branch_taken_0x205748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205748u;
        // 0x20574c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205748) {
            ctx->pc = 0x205D1Cu;
            return;
        }
    }
    ctx->pc = 0x205750u;
label_205750:
    // 0x205750: 0x12000174  beqz        $s0, . + 4 + (0x174 << 2)
label_205754:
    if (ctx->pc == 0x205754u) {
        ctx->pc = 0x205754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205750u;
        // 0x205754: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205758u;
        goto label_205758;
    }
    ctx->pc = 0x205750u;
    {
        const bool branch_taken_0x205750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205750u;
        // 0x205754: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205750) {
            ctx->pc = 0x205D24u;
            return;
        }
    }
    ctx->pc = 0x205758u;
label_205758:
    // 0x205758: 0x1000fed2  b           . + 4 + (-0x12E << 2)
label_20575c:
    if (ctx->pc == 0x20575Cu) {
        ctx->pc = 0x20575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205758u;
        // 0x20575c: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205760u;
        goto label_205760;
    }
    ctx->pc = 0x205758u;
    {
        const bool branch_taken_0x205758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205758u;
        // 0x20575c: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205758) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x205760u;
label_205760:
    // 0x205760: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205760u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205764:
    // 0x205764: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205768:
    // 0x205768: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x205768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20576c:
    // 0x20576c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205770:
    // 0x205770: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x205770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_205774:
    // 0x205774: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_205778:
    // 0x205778: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x205778u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20577c:
    // 0x20577c: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_205780:
    if (ctx->pc == 0x205780u) {
        ctx->pc = 0x205780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20577Cu;
        // 0x205780: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205784u;
        goto label_205784;
    }
    ctx->pc = 0x20577Cu;
    {
        const bool branch_taken_0x20577c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20577c) {
            ctx->pc = 0x205780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20577Cu;
            // 0x205780: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2057D4u;
            goto label_2057d4;
        }
    }
    ctx->pc = 0x205784u;
label_205784:
    // 0x205784: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205788:
    // 0x205788: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x205788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20578c:
    // 0x20578c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x20578cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_205790:
    // 0x205790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_205794:
    // 0x205794: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x205794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_205798:
    // 0x205798: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x205798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_20579c:
    // 0x20579c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x20579cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2057a0:
    // 0x2057a0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2057a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2057a4:
    // 0x2057a4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2057a8:
    if (ctx->pc == 0x2057A8u) {
        ctx->pc = 0x2057A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057A4u;
        // 0x2057a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057ACu;
        goto label_2057ac;
    }
    ctx->pc = 0x2057A4u;
    {
        const bool branch_taken_0x2057a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057A4u;
        // 0x2057a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057a4) {
            ctx->pc = 0x2057D0u;
            goto label_2057d0;
        }
    }
    ctx->pc = 0x2057ACu;
label_2057ac:
    // 0x2057ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2057b0:
    // 0x2057b0: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_2057b4:
    if (ctx->pc == 0x2057B4u) {
        ctx->pc = 0x2057B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B0u;
        // 0x2057b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057B8u;
        goto label_2057b8;
    }
    ctx->pc = 0x2057B0u;
    {
        const bool branch_taken_0x2057b0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2057b0) {
            ctx->pc = 0x2057B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2057B0u;
            // 0x2057b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205770;
        }
    }
    ctx->pc = 0x2057B8u;
label_2057b8:
    // 0x2057b8: 0xc080432  jal         func_2010C8
label_2057bc:
    if (ctx->pc == 0x2057BCu) {
        ctx->pc = 0x2057BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B8u;
        // 0x2057bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057C0u;
        goto label_2057c0;
    }
    ctx->pc = 0x2057B8u;
    SET_GPR_U32(ctx, 31, 0x2057C0u);
    ctx->pc = 0x2057BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2057B8u;
    // 0x2057bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x2057B8u, 0x2057C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2057C0u;
label_2057c0:
    // 0x2057c0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_2057c4:
    if (ctx->pc == 0x2057C4u) {
        ctx->pc = 0x2057C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057C0u;
        // 0x2057c4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057C8u;
        goto label_2057c8;
    }
    ctx->pc = 0x2057C0u;
    {
        const bool branch_taken_0x2057c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057c0) {
            ctx->pc = 0x2057C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2057C0u;
            // 0x2057c4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205770;
        }
    }
    ctx->pc = 0x2057C8u;
label_2057c8:
    // 0x2057c8: 0x12300154  beq         $s1, $s0, . + 4 + (0x154 << 2)
label_2057cc:
    if (ctx->pc == 0x2057CCu) {
        ctx->pc = 0x2057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057C8u;
        // 0x2057cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057D0u;
        goto label_2057d0;
    }
    ctx->pc = 0x2057C8u;
    {
        const bool branch_taken_0x2057c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057C8u;
        // 0x2057cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057c8) {
            ctx->pc = 0x205D1Cu;
            return;
        }
    }
    ctx->pc = 0x2057D0u;
label_2057d0:
    // 0x2057d0: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x2057d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2057d4:
    // 0x2057d4: 0x12000153  beqz        $s0, . + 4 + (0x153 << 2)
label_2057d8:
    if (ctx->pc == 0x2057D8u) {
        ctx->pc = 0x2057D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057D4u;
        // 0x2057d8: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057DCu;
        goto label_2057dc;
    }
    ctx->pc = 0x2057D4u;
    {
        const bool branch_taken_0x2057d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057D4u;
        // 0x2057d8: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057d4) {
            ctx->pc = 0x205D24u;
            return;
        }
    }
    ctx->pc = 0x2057DCu;
label_2057dc:
    // 0x2057dc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2057dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2057e0:
    // 0x2057e0: 0x1000feaf  b           . + 4 + (-0x151 << 2)
label_2057e4:
    if (ctx->pc == 0x2057E4u) {
        ctx->pc = 0x2057E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057E0u;
        // 0x2057e4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057E8u;
        goto label_2057e8;
    }
    ctx->pc = 0x2057E0u;
    {
        const bool branch_taken_0x2057e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057E0u;
        // 0x2057e4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057e0) {
            ctx->pc = 0x2052A0u;
            return;
        }
    }
    ctx->pc = 0x2057E8u;
label_2057e8:
    // 0x2057e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2057ec:
    // 0x2057ec: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x2057ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2057f0:
    // 0x2057f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2057f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2057f4:
    // 0x2057f4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2057f8:
    if (ctx->pc == 0x2057F8u) {
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057FCu;
        goto label_2057fc;
    }
    ctx->pc = 0x2057F4u;
    {
        const bool branch_taken_0x2057f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057f4) {
            ctx->pc = 0x205864u;
            goto label_205864;
        }
    }
    ctx->pc = 0x2057FCu;
label_2057fc:
    // 0x2057fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2057fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_205800:
    // 0x205800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205804:
    // 0x205804: 0x24514dd1  addiu       $s1, $v0, 0x4DD1
    ctx->pc = 0x205804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
label_205808:
    // 0x205808: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20580c:
    // 0x20580c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205810:
    // 0x205810: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x205810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_205814:
    // 0x205814: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x205814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_205818:
    // 0x205818: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x205818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20581c:
    // 0x20581c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x20581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_205820:
    // 0x205820: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_205824:
    if (ctx->pc == 0x205824u) {
        ctx->pc = 0x205824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205820u;
        // 0x205824: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205828u;
        goto label_205828;
    }
    ctx->pc = 0x205820u;
    {
        const bool branch_taken_0x205820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205820u;
        // 0x205824: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205820) {
            ctx->pc = 0x20585Cu;
            goto label_20585c;
        }
    }
    ctx->pc = 0x205828u;
label_205828:
    // 0x205828: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x205828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20582c:
    // 0x20582c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20582cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_205830:
    // 0x205830: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205834:
    // 0x205834: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_205838:
    // 0x205838: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_20583c:
    // 0x20583c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_205840:
    if (ctx->pc == 0x205840u) {
        ctx->pc = 0x205840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20583Cu;
        // 0x205840: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205844u;
        goto label_205844;
    }
    ctx->pc = 0x20583Cu;
    {
        const bool branch_taken_0x20583c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x205840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20583Cu;
        // 0x205840: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20583c) {
            ctx->pc = 0x20585Cu;
            goto label_20585c;
        }
    }
    ctx->pc = 0x205844u;
label_205844:
    // 0x205844: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
label_205848:
    if (ctx->pc == 0x205848u) {
        ctx->pc = 0x205848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205844u;
        // 0x205848: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20584Cu;
        goto label_20584c;
    }
    ctx->pc = 0x205844u;
    {
        const bool branch_taken_0x205844 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x205844) {
            ctx->pc = 0x205848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205844u;
            // 0x205848: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205810;
        }
    }
    ctx->pc = 0x20584Cu;
label_20584c:
    // 0x20584c: 0xc080432  jal         func_2010C8
label_205850:
    if (ctx->pc == 0x205850u) {
        ctx->pc = 0x205850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20584Cu;
        // 0x205850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205854u;
        goto label_205854;
    }
    ctx->pc = 0x20584Cu;
    SET_GPR_U32(ctx, 31, 0x205854u);
    ctx->pc = 0x205850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20584Cu;
    // 0x205850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x20584Cu, 0x205854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205854u;
label_205854:
    // 0x205854: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_205858:
    if (ctx->pc == 0x205858u) {
        ctx->pc = 0x205858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205854u;
        // 0x205858: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20585Cu;
        goto label_20585c;
    }
    ctx->pc = 0x205854u;
    {
        const bool branch_taken_0x205854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205854) {
            ctx->pc = 0x205858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205854u;
            // 0x205858: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205810;
        }
    }
    ctx->pc = 0x20585Cu;
label_20585c:
    // 0x20585c: 0x1000fe91  b           . + 4 + (-0x16F << 2)
label_205860:
    if (ctx->pc == 0x205860u) {
        ctx->pc = 0x205860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20585Cu;
        // 0x205860: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205864u;
        goto label_205864;
    }
    ctx->pc = 0x20585Cu;
    {
        const bool branch_taken_0x20585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20585Cu;
        // 0x205860: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20585c) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x205864u;
label_205864:
    // 0x205864: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205864u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205868:
    // 0x205868: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_20586c:
    // 0x20586c: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x20586cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205870:
    // 0x205870: 0x24464dd1  addiu       $a2, $v0, 0x4DD1
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
label_205874:
    // 0x205874: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x205874u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_205878:
    // 0x205878: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20587c:
    // 0x20587c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x20587cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205880:
    // 0x205880: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x205880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205884:
    // 0x205884: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x205884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_205888:
    // 0x205888: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x205888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20588c:
    // 0x20588c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x20588cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205890:
    // 0x205890: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x205890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_205894:
    // 0x205894: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_205898:
    if (ctx->pc == 0x205898u) {
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20589Cu;
        goto label_20589c;
    }
    ctx->pc = 0x205894u;
    {
        const bool branch_taken_0x205894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205894) {
            ctx->pc = 0x2058E0u;
            goto label_2058e0;
        }
    }
    ctx->pc = 0x20589Cu;
label_20589c:
    // 0x20589c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x20589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2058a0:
    // 0x2058a0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2058a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2058a4:
    // 0x2058a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2058a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2058a8:
    // 0x2058a8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2058a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2058ac:
    // 0x2058ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2058acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2058b0:
    // 0x2058b0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2058b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2058b4:
    // 0x2058b4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2058b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2058b8:
    // 0x2058b8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2058bc:
    if (ctx->pc == 0x2058BCu) {
        ctx->pc = 0x2058BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B8u;
        // 0x2058bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058C0u;
        goto label_2058c0;
    }
    ctx->pc = 0x2058B8u;
    {
        const bool branch_taken_0x2058b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B8u;
        // 0x2058bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058b8) {
            ctx->pc = 0x2058E0u;
            goto label_2058e0;
        }
    }
    ctx->pc = 0x2058C0u;
label_2058c0:
    // 0x2058c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2058c4:
    // 0x2058c4: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_2058c8:
    if (ctx->pc == 0x2058C8u) {
        ctx->pc = 0x2058C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058C4u;
        // 0x2058c8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058CCu;
        goto label_2058cc;
    }
    ctx->pc = 0x2058C4u;
    {
        const bool branch_taken_0x2058c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2058c4) {
            ctx->pc = 0x2058C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058C4u;
            // 0x2058c8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205884;
        }
    }
    ctx->pc = 0x2058CCu;
label_2058cc:
    // 0x2058cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2058ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2058d0:
    // 0x2058d0: 0xc080432  jal         func_2010C8
label_2058d4:
    if (ctx->pc == 0x2058D4u) {
        ctx->pc = 0x2058D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D0u;
        // 0x2058d4: 0x7fa60270  sq          $a2, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058D8u;
        goto label_2058d8;
    }
    ctx->pc = 0x2058D0u;
    SET_GPR_U32(ctx, 31, 0x2058D8u);
    ctx->pc = 0x2058D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058D0u;
    // 0x2058d4: 0x7fa60270  sq          $a2, 0x270($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x2058D0u, 0x2058D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058D8u;
label_2058d8:
    // 0x2058d8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_2058dc:
    if (ctx->pc == 0x2058DCu) {
        ctx->pc = 0x2058DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D8u;
        // 0x2058dc: 0x7ba60270  lq          $a2, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058E0u;
        goto label_2058e0;
    }
    ctx->pc = 0x2058D8u;
    {
        const bool branch_taken_0x2058d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D8u;
        // 0x2058dc: 0x7ba60270  lq          $a2, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058d8) {
            ctx->pc = 0x205880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205880;
        }
    }
    ctx->pc = 0x2058E0u;
label_2058e0:
    // 0x2058e0: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2058e4:
    // 0x2058e4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2058e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2058e8:
    // 0x2058e8: 0x1000fe6e  b           . + 4 + (-0x192 << 2)
label_2058ec:
    if (ctx->pc == 0x2058ECu) {
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058F0u;
        goto label_fallthrough_0x2058e8;
    }
    ctx->pc = 0x2058E8u;
    {
        const bool branch_taken_0x2058e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058e8) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
label_fallthrough_0x2058e8:
    ctx->pc = 0x2058F0u;
}
