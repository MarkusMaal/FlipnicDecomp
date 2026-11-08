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

// Function: FUN_0017e800
// Address: 0x17e800 - 0x17e8e0
void FUN_0017e800_0x17e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e800_0x17e800");
#endif

    switch (ctx->pc) {
        case 0x17e800u: goto label_17e800;
        case 0x17e804u: goto label_17e804;
        case 0x17e808u: goto label_17e808;
        case 0x17e80cu: goto label_17e80c;
        case 0x17e810u: goto label_17e810;
        case 0x17e814u: goto label_17e814;
        case 0x17e818u: goto label_17e818;
        case 0x17e81cu: goto label_17e81c;
        case 0x17e820u: goto label_17e820;
        case 0x17e824u: goto label_17e824;
        case 0x17e828u: goto label_17e828;
        case 0x17e82cu: goto label_17e82c;
        case 0x17e830u: goto label_17e830;
        case 0x17e834u: goto label_17e834;
        case 0x17e838u: goto label_17e838;
        case 0x17e83cu: goto label_17e83c;
        case 0x17e840u: goto label_17e840;
        case 0x17e844u: goto label_17e844;
        case 0x17e848u: goto label_17e848;
        case 0x17e84cu: goto label_17e84c;
        case 0x17e850u: goto label_17e850;
        case 0x17e854u: goto label_17e854;
        case 0x17e858u: goto label_17e858;
        case 0x17e85cu: goto label_17e85c;
        case 0x17e860u: goto label_17e860;
        case 0x17e864u: goto label_17e864;
        case 0x17e868u: goto label_17e868;
        case 0x17e86cu: goto label_17e86c;
        case 0x17e870u: goto label_17e870;
        case 0x17e874u: goto label_17e874;
        case 0x17e878u: goto label_17e878;
        case 0x17e87cu: goto label_17e87c;
        case 0x17e880u: goto label_17e880;
        case 0x17e884u: goto label_17e884;
        case 0x17e888u: goto label_17e888;
        case 0x17e88cu: goto label_17e88c;
        case 0x17e890u: goto label_17e890;
        case 0x17e894u: goto label_17e894;
        case 0x17e898u: goto label_17e898;
        case 0x17e89cu: goto label_17e89c;
        case 0x17e8a0u: goto label_17e8a0;
        case 0x17e8a4u: goto label_17e8a4;
        case 0x17e8a8u: goto label_17e8a8;
        case 0x17e8acu: goto label_17e8ac;
        case 0x17e8b0u: goto label_17e8b0;
        case 0x17e8b4u: goto label_17e8b4;
        case 0x17e8b8u: goto label_17e8b8;
        case 0x17e8bcu: goto label_17e8bc;
        case 0x17e8c0u: goto label_17e8c0;
        case 0x17e8c4u: goto label_17e8c4;
        case 0x17e8c8u: goto label_17e8c8;
        case 0x17e8ccu: goto label_17e8cc;
        case 0x17e8d0u: goto label_17e8d0;
        case 0x17e8d4u: goto label_17e8d4;
        case 0x17e8d8u: goto label_17e8d8;
        case 0x17e8dcu: goto label_17e8dc;
        default: break;
    }

    ctx->pc = 0x17e800u;

label_17e800:
    // 0x17e800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17e804:
    // 0x17e804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17e808:
    // 0x17e808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e80c:
    // 0x17e80c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17e810:
    // 0x17e810: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e814:
    // 0x17e814: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17e814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17e818:
    // 0x17e818: 0x8c861020  lw          $a2, 0x1020($a0)
    ctx->pc = 0x17e818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4128)));
label_17e81c:
    // 0x17e81c: 0x8c871024  lw          $a3, 0x1024($a0)
    ctx->pc = 0x17e81cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4132)));
label_17e820:
    // 0x17e820: 0xc05fb00  jal         func_17EC00
label_17e824:
    if (ctx->pc == 0x17E824u) {
        ctx->pc = 0x17E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E820u;
        // 0x17e824: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E828u;
        goto label_17e828;
    }
    ctx->pc = 0x17E820u;
    SET_GPR_U32(ctx, 31, 0x17E828u);
    ctx->pc = 0x17E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E820u;
    // 0x17e824: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E820u, 0x17E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E828u;
label_17e828:
    // 0x17e828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17e82c:
    if (ctx->pc == 0x17E82Cu) {
        ctx->pc = 0x17E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E828u;
        // 0x17e82c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E830u;
        goto label_17e830;
    }
    ctx->pc = 0x17E828u;
    {
        const bool branch_taken_0x17e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E828u;
        // 0x17e82c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e828) {
            ctx->pc = 0x17E838u;
            goto label_17e838;
        }
    }
    ctx->pc = 0x17E830u;
label_17e830:
    // 0x17e830: 0x10000026  b           . + 4 + (0x26 << 2)
label_17e834:
    if (ctx->pc == 0x17E834u) {
        ctx->pc = 0x17E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E830u;
        // 0x17e834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E838u;
        goto label_17e838;
    }
    ctx->pc = 0x17E830u;
    {
        const bool branch_taken_0x17e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E830u;
        // 0x17e834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e830) {
            ctx->pc = 0x17E8CCu;
            goto label_17e8cc;
        }
    }
    ctx->pc = 0x17E838u;
label_17e838:
    // 0x17e838: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
label_17e83c:
    if (ctx->pc == 0x17E83Cu) {
        ctx->pc = 0x17E840u;
        goto label_17e840;
    }
    ctx->pc = 0x17E838u;
    {
        const bool branch_taken_0x17e838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e838) {
            ctx->pc = 0x17E8A4u;
            goto label_17e8a4;
        }
    }
    ctx->pc = 0x17E840u;
label_17e840:
    // 0x17e840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e844:
    // 0x17e844: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
label_17e848:
    if (ctx->pc == 0x17E848u) {
        ctx->pc = 0x17E84Cu;
        goto label_17e84c;
    }
    ctx->pc = 0x17E844u;
    {
        const bool branch_taken_0x17e844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e844) {
            ctx->pc = 0x17E880u;
            goto label_17e880;
        }
    }
    ctx->pc = 0x17E84Cu;
label_17e84c:
    // 0x17e84c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_17e850:
    if (ctx->pc == 0x17E850u) {
        ctx->pc = 0x17E854u;
        goto label_17e854;
    }
    ctx->pc = 0x17E84Cu;
    {
        const bool branch_taken_0x17e84c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e84c) {
            ctx->pc = 0x17E85Cu;
            goto label_17e85c;
        }
    }
    ctx->pc = 0x17E854u;
label_17e854:
    // 0x17e854: 0x1000001d  b           . + 4 + (0x1D << 2)
label_17e858:
    if (ctx->pc == 0x17E858u) {
        ctx->pc = 0x17E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E854u;
        // 0x17e858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E85Cu;
        goto label_17e85c;
    }
    ctx->pc = 0x17E854u;
    {
        const bool branch_taken_0x17e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E854u;
        // 0x17e858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e854) {
            ctx->pc = 0x17E8CCu;
            goto label_17e8cc;
        }
    }
    ctx->pc = 0x17E85Cu;
label_17e85c:
    // 0x17e85c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e860:
    // 0x17e860: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17e864:
    if (ctx->pc == 0x17E864u) {
        ctx->pc = 0x17E868u;
        goto label_17e868;
    }
    ctx->pc = 0x17E860u;
    {
        const bool branch_taken_0x17e860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e860) {
            ctx->pc = 0x17E870u;
            goto label_17e870;
        }
    }
    ctx->pc = 0x17E868u;
label_17e868:
    // 0x17e868: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e86c:
    if (ctx->pc == 0x17E86Cu) {
        ctx->pc = 0x17E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E868u;
        // 0x17e86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E870u;
        goto label_17e870;
    }
    ctx->pc = 0x17E868u;
    {
        const bool branch_taken_0x17e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E868u;
        // 0x17e86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e868) {
            ctx->pc = 0x17E878u;
            goto label_17e878;
        }
    }
    ctx->pc = 0x17E870u;
label_17e870:
    // 0x17e870: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e874:
    // 0x17e874: 0x0  nop
    ctx->pc = 0x17e874u;
    // NOP
label_17e878:
    // 0x17e878: 0x10000015  b           . + 4 + (0x15 << 2)
label_17e87c:
    if (ctx->pc == 0x17E87Cu) {
        ctx->pc = 0x17E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E878u;
        // 0x17e87c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E880u;
        goto label_17e880;
    }
    ctx->pc = 0x17E878u;
    {
        const bool branch_taken_0x17e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E878u;
        // 0x17e87c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e878) {
            ctx->pc = 0x17E8D0u;
            goto label_17e8d0;
        }
    }
    ctx->pc = 0x17E880u;
label_17e880:
    // 0x17e880: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e884:
    // 0x17e884: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17e888:
    if (ctx->pc == 0x17E888u) {
        ctx->pc = 0x17E88Cu;
        goto label_17e88c;
    }
    ctx->pc = 0x17E884u;
    {
        const bool branch_taken_0x17e884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e884) {
            ctx->pc = 0x17E894u;
            goto label_17e894;
        }
    }
    ctx->pc = 0x17E88Cu;
label_17e88c:
    // 0x17e88c: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e890:
    if (ctx->pc == 0x17E890u) {
        ctx->pc = 0x17E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E88Cu;
        // 0x17e890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E894u;
        goto label_17e894;
    }
    ctx->pc = 0x17E88Cu;
    {
        const bool branch_taken_0x17e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E88Cu;
        // 0x17e890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e88c) {
            ctx->pc = 0x17E89Cu;
            goto label_17e89c;
        }
    }
    ctx->pc = 0x17E894u;
label_17e894:
    // 0x17e894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e898:
    // 0x17e898: 0x0  nop
    ctx->pc = 0x17e898u;
    // NOP
label_17e89c:
    // 0x17e89c: 0x1000000b  b           . + 4 + (0xB << 2)
label_17e8a0:
    if (ctx->pc == 0x17E8A0u) {
        ctx->pc = 0x17E8A4u;
        goto label_17e8a4;
    }
    ctx->pc = 0x17E89Cu;
    {
        const bool branch_taken_0x17e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e89c) {
            ctx->pc = 0x17E8CCu;
            goto label_17e8cc;
        }
    }
    ctx->pc = 0x17E8A4u;
label_17e8a4:
    // 0x17e8a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17e8a8:
    // 0x17e8a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e8ac:
    if (ctx->pc == 0x17E8ACu) {
        ctx->pc = 0x17E8B0u;
        goto label_17e8b0;
    }
    ctx->pc = 0x17E8A8u;
    {
        const bool branch_taken_0x17e8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e8a8) {
            ctx->pc = 0x17E8B8u;
            goto label_17e8b8;
        }
    }
    ctx->pc = 0x17E8B0u;
label_17e8b0:
    // 0x17e8b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_17e8b4:
    if (ctx->pc == 0x17E8B4u) {
        ctx->pc = 0x17E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8B0u;
        // 0x17e8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E8B8u;
        goto label_17e8b8;
    }
    ctx->pc = 0x17E8B0u;
    {
        const bool branch_taken_0x17e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8B0u;
        // 0x17e8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8b0) {
            ctx->pc = 0x17E8CCu;
            goto label_17e8cc;
        }
    }
    ctx->pc = 0x17E8B8u;
label_17e8b8:
    // 0x17e8b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17e8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e8bc:
    // 0x17e8bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e8c0:
    // 0x17e8c0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_17e8c4:
    // 0x17e8c4: 0x320f809  jalr        $t9
label_17e8c8:
    if (ctx->pc == 0x17E8C8u) {
        ctx->pc = 0x17E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8C4u;
        // 0x17e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E8CCu;
        goto label_17e8cc;
    }
    ctx->pc = 0x17E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E8CCu);
        ctx->pc = 0x17E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8C4u;
        // 0x17e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E8C4u, 0x17E8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E8CCu;
label_17e8cc:
    // 0x17e8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e8d0:
    // 0x17e8d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e8d4:
    // 0x17e8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e8d8:
    // 0x17e8d8: 0x3e00008  jr          $ra
label_17e8dc:
    if (ctx->pc == 0x17E8DCu) {
        ctx->pc = 0x17E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8D8u;
        // 0x17e8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E8E0u;
        goto label_fallthrough_0x17e8d8;
    }
    ctx->pc = 0x17E8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8D8u;
        // 0x17e8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e8d8:
    ctx->pc = 0x17E8E0u;
}
