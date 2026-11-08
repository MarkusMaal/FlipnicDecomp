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

// Function: FUN_0012b610
// Address: 0x12b610 - 0x12b8e4
void FUN_0012b610_0x12b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b610_0x12b610");
#endif

    switch (ctx->pc) {
        case 0x12b610u: goto label_12b610;
        case 0x12b614u: goto label_12b614;
        case 0x12b618u: goto label_12b618;
        case 0x12b61cu: goto label_12b61c;
        case 0x12b620u: goto label_12b620;
        case 0x12b624u: goto label_12b624;
        case 0x12b628u: goto label_12b628;
        case 0x12b62cu: goto label_12b62c;
        case 0x12b630u: goto label_12b630;
        case 0x12b634u: goto label_12b634;
        case 0x12b638u: goto label_12b638;
        case 0x12b63cu: goto label_12b63c;
        case 0x12b640u: goto label_12b640;
        case 0x12b644u: goto label_12b644;
        case 0x12b648u: goto label_12b648;
        case 0x12b64cu: goto label_12b64c;
        case 0x12b650u: goto label_12b650;
        case 0x12b654u: goto label_12b654;
        case 0x12b658u: goto label_12b658;
        case 0x12b65cu: goto label_12b65c;
        case 0x12b660u: goto label_12b660;
        case 0x12b664u: goto label_12b664;
        case 0x12b668u: goto label_12b668;
        case 0x12b66cu: goto label_12b66c;
        case 0x12b670u: goto label_12b670;
        case 0x12b674u: goto label_12b674;
        case 0x12b678u: goto label_12b678;
        case 0x12b67cu: goto label_12b67c;
        case 0x12b680u: goto label_12b680;
        case 0x12b684u: goto label_12b684;
        case 0x12b688u: goto label_12b688;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b690u: goto label_12b690;
        case 0x12b694u: goto label_12b694;
        case 0x12b698u: goto label_12b698;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6acu: goto label_12b6ac;
        case 0x12b6b0u: goto label_12b6b0;
        case 0x12b6b4u: goto label_12b6b4;
        case 0x12b6b8u: goto label_12b6b8;
        case 0x12b6bcu: goto label_12b6bc;
        case 0x12b6c0u: goto label_12b6c0;
        case 0x12b6c4u: goto label_12b6c4;
        case 0x12b6c8u: goto label_12b6c8;
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6d0u: goto label_12b6d0;
        case 0x12b6d4u: goto label_12b6d4;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b6dcu: goto label_12b6dc;
        case 0x12b6e0u: goto label_12b6e0;
        case 0x12b6e4u: goto label_12b6e4;
        case 0x12b6e8u: goto label_12b6e8;
        case 0x12b6ecu: goto label_12b6ec;
        case 0x12b6f0u: goto label_12b6f0;
        case 0x12b6f4u: goto label_12b6f4;
        case 0x12b6f8u: goto label_12b6f8;
        case 0x12b6fcu: goto label_12b6fc;
        case 0x12b700u: goto label_12b700;
        case 0x12b704u: goto label_12b704;
        case 0x12b708u: goto label_12b708;
        case 0x12b70cu: goto label_12b70c;
        case 0x12b710u: goto label_12b710;
        case 0x12b714u: goto label_12b714;
        case 0x12b718u: goto label_12b718;
        case 0x12b71cu: goto label_12b71c;
        case 0x12b720u: goto label_12b720;
        case 0x12b724u: goto label_12b724;
        case 0x12b728u: goto label_12b728;
        case 0x12b72cu: goto label_12b72c;
        case 0x12b730u: goto label_12b730;
        case 0x12b734u: goto label_12b734;
        case 0x12b738u: goto label_12b738;
        case 0x12b73cu: goto label_12b73c;
        case 0x12b740u: goto label_12b740;
        case 0x12b744u: goto label_12b744;
        case 0x12b748u: goto label_12b748;
        case 0x12b74cu: goto label_12b74c;
        case 0x12b750u: goto label_12b750;
        case 0x12b754u: goto label_12b754;
        case 0x12b758u: goto label_12b758;
        case 0x12b75cu: goto label_12b75c;
        case 0x12b760u: goto label_12b760;
        case 0x12b764u: goto label_12b764;
        case 0x12b768u: goto label_12b768;
        case 0x12b76cu: goto label_12b76c;
        case 0x12b770u: goto label_12b770;
        case 0x12b774u: goto label_12b774;
        case 0x12b778u: goto label_12b778;
        case 0x12b77cu: goto label_12b77c;
        case 0x12b780u: goto label_12b780;
        case 0x12b784u: goto label_12b784;
        case 0x12b788u: goto label_12b788;
        case 0x12b78cu: goto label_12b78c;
        case 0x12b790u: goto label_12b790;
        case 0x12b794u: goto label_12b794;
        case 0x12b798u: goto label_12b798;
        case 0x12b79cu: goto label_12b79c;
        case 0x12b7a0u: goto label_12b7a0;
        case 0x12b7a4u: goto label_12b7a4;
        case 0x12b7a8u: goto label_12b7a8;
        case 0x12b7acu: goto label_12b7ac;
        case 0x12b7b0u: goto label_12b7b0;
        case 0x12b7b4u: goto label_12b7b4;
        case 0x12b7b8u: goto label_12b7b8;
        case 0x12b7bcu: goto label_12b7bc;
        case 0x12b7c0u: goto label_12b7c0;
        case 0x12b7c4u: goto label_12b7c4;
        case 0x12b7c8u: goto label_12b7c8;
        case 0x12b7ccu: goto label_12b7cc;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b7d4u: goto label_12b7d4;
        case 0x12b7d8u: goto label_12b7d8;
        case 0x12b7dcu: goto label_12b7dc;
        case 0x12b7e0u: goto label_12b7e0;
        case 0x12b7e4u: goto label_12b7e4;
        case 0x12b7e8u: goto label_12b7e8;
        case 0x12b7ecu: goto label_12b7ec;
        case 0x12b7f0u: goto label_12b7f0;
        case 0x12b7f4u: goto label_12b7f4;
        case 0x12b7f8u: goto label_12b7f8;
        case 0x12b7fcu: goto label_12b7fc;
        case 0x12b800u: goto label_12b800;
        case 0x12b804u: goto label_12b804;
        case 0x12b808u: goto label_12b808;
        case 0x12b80cu: goto label_12b80c;
        case 0x12b810u: goto label_12b810;
        case 0x12b814u: goto label_12b814;
        case 0x12b818u: goto label_12b818;
        case 0x12b81cu: goto label_12b81c;
        case 0x12b820u: goto label_12b820;
        case 0x12b824u: goto label_12b824;
        case 0x12b828u: goto label_12b828;
        case 0x12b82cu: goto label_12b82c;
        case 0x12b830u: goto label_12b830;
        case 0x12b834u: goto label_12b834;
        case 0x12b838u: goto label_12b838;
        case 0x12b83cu: goto label_12b83c;
        case 0x12b840u: goto label_12b840;
        case 0x12b844u: goto label_12b844;
        case 0x12b848u: goto label_12b848;
        case 0x12b84cu: goto label_12b84c;
        case 0x12b850u: goto label_12b850;
        case 0x12b854u: goto label_12b854;
        case 0x12b858u: goto label_12b858;
        case 0x12b85cu: goto label_12b85c;
        case 0x12b860u: goto label_12b860;
        case 0x12b864u: goto label_12b864;
        case 0x12b868u: goto label_12b868;
        case 0x12b86cu: goto label_12b86c;
        case 0x12b870u: goto label_12b870;
        case 0x12b874u: goto label_12b874;
        case 0x12b878u: goto label_12b878;
        case 0x12b87cu: goto label_12b87c;
        case 0x12b880u: goto label_12b880;
        case 0x12b884u: goto label_12b884;
        case 0x12b888u: goto label_12b888;
        case 0x12b88cu: goto label_12b88c;
        case 0x12b890u: goto label_12b890;
        case 0x12b894u: goto label_12b894;
        case 0x12b898u: goto label_12b898;
        case 0x12b89cu: goto label_12b89c;
        case 0x12b8a0u: goto label_12b8a0;
        case 0x12b8a4u: goto label_12b8a4;
        case 0x12b8a8u: goto label_12b8a8;
        case 0x12b8acu: goto label_12b8ac;
        case 0x12b8b0u: goto label_12b8b0;
        case 0x12b8b4u: goto label_12b8b4;
        case 0x12b8b8u: goto label_12b8b8;
        case 0x12b8bcu: goto label_12b8bc;
        case 0x12b8c0u: goto label_12b8c0;
        case 0x12b8c4u: goto label_12b8c4;
        case 0x12b8c8u: goto label_12b8c8;
        case 0x12b8ccu: goto label_12b8cc;
        case 0x12b8d0u: goto label_12b8d0;
        case 0x12b8d4u: goto label_12b8d4;
        case 0x12b8d8u: goto label_12b8d8;
        case 0x12b8dcu: goto label_12b8dc;
        case 0x12b8e0u: goto label_12b8e0;
        default: break;
    }

    ctx->pc = 0x12b610u;

label_12b610:
    // 0x12b610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_12b614:
    // 0x12b614: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12b618:
    // 0x12b618: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_12b61c:
    // 0x12b61c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12b61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12b620:
    // 0x12b620: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12b620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12b624:
    // 0x12b624: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12b624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12b628:
    // 0x12b628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12b62c:
    // 0x12b62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12b630:
    // 0x12b630: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x12b630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_12b634:
    // 0x12b634: 0x1462008b  bne         $v1, $v0, . + 4 + (0x8B << 2)
label_12b638:
    if (ctx->pc == 0x12B638u) {
        ctx->pc = 0x12B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B634u;
        // 0x12b638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B63Cu;
        goto label_12b63c;
    }
    ctx->pc = 0x12B634u;
    {
        const bool branch_taken_0x12b634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B634u;
        // 0x12b638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b634) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B63Cu;
label_12b63c:
    // 0x12b63c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b640:
    // 0x12b640: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b644:
    // 0x12b644: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12b644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b648:
    // 0x12b648: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x12b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_12b64c:
    // 0x12b64c: 0xc04aa64  jal         func_12A990
label_12b650:
    if (ctx->pc == 0x12B650u) {
        ctx->pc = 0x12B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B64Cu;
        // 0x12b650: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B654u;
        goto label_12b654;
    }
    ctx->pc = 0x12B64Cu;
    SET_GPR_U32(ctx, 31, 0x12B654u);
    ctx->pc = 0x12B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B64Cu;
    // 0x12b650: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A990u, 0x12B64Cu, 0x12B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B654u;
label_12b654:
    // 0x12b654: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_12b658:
    if (ctx->pc == 0x12B658u) {
        ctx->pc = 0x12B65Cu;
        goto label_12b65c;
    }
    ctx->pc = 0x12B654u;
    {
        const bool branch_taken_0x12b654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b654) {
            ctx->pc = 0x12B660u;
            goto label_12b660;
        }
    }
    ctx->pc = 0x12B65Cu;
label_12b65c:
    // 0x12b65c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b660:
    // 0x12b660: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12b660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12b664:
    // 0x12b664: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x12b664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b668:
    // 0x12b668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_12b66c:
    if (ctx->pc == 0x12B66Cu) {
        ctx->pc = 0x12B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B668u;
        // 0x12b66c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B670u;
        goto label_12b670;
    }
    ctx->pc = 0x12B668u;
    {
        const bool branch_taken_0x12b668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B668u;
        // 0x12b66c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b668) {
            ctx->pc = 0x12B648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b648;
        }
    }
    ctx->pc = 0x12B670u;
label_12b670:
    // 0x12b670: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12b674:
    // 0x12b674: 0x12220027  beq         $s1, $v0, . + 4 + (0x27 << 2)
label_12b678:
    if (ctx->pc == 0x12B678u) {
        ctx->pc = 0x12B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B674u;
        // 0x12b678: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B67Cu;
        goto label_12b67c;
    }
    ctx->pc = 0x12B674u;
    {
        const bool branch_taken_0x12b674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B674u;
        // 0x12b678: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b674) {
            ctx->pc = 0x12B714u;
            goto label_12b714;
        }
    }
    ctx->pc = 0x12B67Cu;
label_12b67c:
    // 0x12b67c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_12b680:
    if (ctx->pc == 0x12B680u) {
        ctx->pc = 0x12B684u;
        goto label_12b684;
    }
    ctx->pc = 0x12B67Cu;
    {
        const bool branch_taken_0x12b67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b67c) {
            ctx->pc = 0x12B68Cu;
            goto label_12b68c;
        }
    }
    ctx->pc = 0x12B684u;
label_12b684:
    // 0x12b684: 0x10000077  b           . + 4 + (0x77 << 2)
label_12b688:
    if (ctx->pc == 0x12B688u) {
        ctx->pc = 0x12B68Cu;
        goto label_12b68c;
    }
    ctx->pc = 0x12B684u;
    {
        const bool branch_taken_0x12b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b684) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B68Cu;
label_12b68c:
    // 0x12b68c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b690:
    // 0x12b690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b694:
    // 0x12b694: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12b694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b698:
    // 0x12b698: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12b69c:
    // 0x12b69c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12b6a0:
    // 0x12b6a0: 0xc04aa64  jal         func_12A990
label_12b6a4:
    if (ctx->pc == 0x12B6A4u) {
        ctx->pc = 0x12B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6A0u;
        // 0x12b6a4: 0x2454000c  addiu       $s4, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6A8u;
        goto label_12b6a8;
    }
    ctx->pc = 0x12B6A0u;
    SET_GPR_U32(ctx, 31, 0x12B6A8u);
    ctx->pc = 0x12B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B6A0u;
    // 0x12b6a4: 0x2454000c  addiu       $s4, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A990u, 0x12B6A0u, 0x12B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6A8u;
label_12b6a8:
    // 0x12b6a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_12b6ac:
    if (ctx->pc == 0x12B6ACu) {
        ctx->pc = 0x12B6B0u;
        goto label_12b6b0;
    }
    ctx->pc = 0x12B6A8u;
    {
        const bool branch_taken_0x12b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b6a8) {
            ctx->pc = 0x12B6C4u;
            goto label_12b6c4;
        }
    }
    ctx->pc = 0x12B6B0u;
label_12b6b0:
    // 0x12b6b0: 0xc04aa68  jal         func_12A9A0
label_12b6b4:
    if (ctx->pc == 0x12B6B4u) {
        ctx->pc = 0x12B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6B0u;
        // 0x12b6b4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6B8u;
        goto label_12b6b8;
    }
    ctx->pc = 0x12B6B0u;
    SET_GPR_U32(ctx, 31, 0x12B6B8u);
    ctx->pc = 0x12B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B6B0u;
    // 0x12b6b4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9A0u, 0x12B6B0u, 0x12B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6B8u;
label_12b6b8:
    // 0x12b6b8: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x12b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_12b6bc:
    // 0x12b6bc: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x12b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_12b6c0:
    // 0x12b6c0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x12b6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_12b6c4:
    // 0x12b6c4: 0x0  nop
    ctx->pc = 0x12b6c4u;
    // NOP
label_12b6c8:
    // 0x12b6c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b6cc:
    // 0x12b6cc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x12b6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b6d0:
    // 0x12b6d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_12b6d4:
    if (ctx->pc == 0x12B6D4u) {
        ctx->pc = 0x12B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D0u;
        // 0x12b6d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6D8u;
        goto label_12b6d8;
    }
    ctx->pc = 0x12B6D0u;
    {
        const bool branch_taken_0x12b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D0u;
        // 0x12b6d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6d0) {
            ctx->pc = 0x12B698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b698;
        }
    }
    ctx->pc = 0x12B6D8u;
label_12b6d8:
    // 0x12b6d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12b6dc:
    // 0x12b6dc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x12b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_12b6e0:
    // 0x12b6e0: 0x10640060  beq         $v1, $a0, . + 4 + (0x60 << 2)
label_12b6e4:
    if (ctx->pc == 0x12B6E4u) {
        ctx->pc = 0x12B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6E0u;
        // 0x12b6e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6E8u;
        goto label_12b6e8;
    }
    ctx->pc = 0x12B6E0u;
    {
        const bool branch_taken_0x12b6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x12B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6E0u;
        // 0x12b6e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6e0) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B6E8u;
label_12b6e8:
    // 0x12b6e8: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
label_12b6ec:
    if (ctx->pc == 0x12B6ECu) {
        ctx->pc = 0x12B6F0u;
        goto label_12b6f0;
    }
    ctx->pc = 0x12B6E8u;
    {
        const bool branch_taken_0x12b6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b6e8) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B6F0u;
label_12b6f0:
    // 0x12b6f0: 0x1082005c  beq         $a0, $v0, . + 4 + (0x5C << 2)
label_12b6f4:
    if (ctx->pc == 0x12B6F4u) {
        ctx->pc = 0x12B6F8u;
        goto label_12b6f8;
    }
    ctx->pc = 0x12B6F0u;
    {
        const bool branch_taken_0x12b6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b6f0) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B6F8u;
label_12b6f8:
    // 0x12b6f8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x12b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_12b6fc:
    // 0x12b6fc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_12b700:
    // 0x12b700: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12b704:
    // 0x12b704: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x12b704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_12b708:
    // 0x12b708: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x12b708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_12b70c:
    // 0x12b70c: 0x10000055  b           . + 4 + (0x55 << 2)
label_12b710:
    if (ctx->pc == 0x12B710u) {
        ctx->pc = 0x12B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B70Cu;
        // 0x12b710: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B714u;
        goto label_12b714;
    }
    ctx->pc = 0x12B70Cu;
    {
        const bool branch_taken_0x12b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B70Cu;
        // 0x12b710: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b70c) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B714u;
label_12b714:
    // 0x12b714: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x12b714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_12b718:
    // 0x12b718: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_12b71c:
    // 0x12b71c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_12b720:
    // 0x12b720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b724:
    // 0x12b724: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b728:
    // 0x12b728: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12b72c:
    // 0x12b72c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x12b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_12b730:
    // 0x12b730: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x12b730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_12b734:
    // 0x12b734: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x12b734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_12b738:
    // 0x12b738: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12b73c:
    // 0x12b73c: 0xc04aa68  jal         func_12A9A0
label_12b740:
    if (ctx->pc == 0x12B740u) {
        ctx->pc = 0x12B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B73Cu;
        // 0x12b740: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B744u;
        goto label_12b744;
    }
    ctx->pc = 0x12B73Cu;
    SET_GPR_U32(ctx, 31, 0x12B744u);
    ctx->pc = 0x12B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B73Cu;
    // 0x12b740: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9A0u, 0x12B73Cu, 0x12B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B744u;
label_12b744:
    // 0x12b744: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_12b748:
    // 0x12b748: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b74c:
    // 0x12b74c: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x12b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_12b750:
    // 0x12b750: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x12b750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b754:
    // 0x12b754: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_12b758:
    if (ctx->pc == 0x12B758u) {
        ctx->pc = 0x12B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B754u;
        // 0x12b758: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B75Cu;
        goto label_12b75c;
    }
    ctx->pc = 0x12B754u;
    {
        const bool branch_taken_0x12b754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B754u;
        // 0x12b758: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b754) {
            ctx->pc = 0x12B738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b738;
        }
    }
    ctx->pc = 0x12B75Cu;
label_12b75c:
    // 0x12b75c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x12b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_12b760:
    // 0x12b760: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12b764:
    // 0x12b764: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_12b768:
    if (ctx->pc == 0x12B768u) {
        ctx->pc = 0x12B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B764u;
        // 0x12b768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B76Cu;
        goto label_12b76c;
    }
    ctx->pc = 0x12B764u;
    {
        const bool branch_taken_0x12b764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B764u;
        // 0x12b768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b764) {
            ctx->pc = 0x12B788u;
            goto label_12b788;
        }
    }
    ctx->pc = 0x12B76Cu;
label_12b76c:
    // 0x12b76c: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x12b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_12b770:
    // 0x12b770: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_12b774:
    if (ctx->pc == 0x12B774u) {
        ctx->pc = 0x12B778u;
        goto label_12b778;
    }
    ctx->pc = 0x12B770u;
    {
        const bool branch_taken_0x12b770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12b770) {
            ctx->pc = 0x12B784u;
            goto label_12b784;
        }
    }
    ctx->pc = 0x12B778u;
label_12b778:
    // 0x12b778: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_12b77c:
    // 0x12b77c: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
label_12b780:
    if (ctx->pc == 0x12B780u) {
        ctx->pc = 0x12B784u;
        goto label_12b784;
    }
    ctx->pc = 0x12B77Cu;
    {
        const bool branch_taken_0x12b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12b77c) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B784u;
label_12b784:
    // 0x12b784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b788:
    // 0x12b788: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b78c:
    // 0x12b78c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12b790:
    // 0x12b790: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x12b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_12b794:
    // 0x12b794: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x12b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_12b798:
    // 0x12b798: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_12b79c:
    if (ctx->pc == 0x12B79Cu) {
        ctx->pc = 0x12B7A0u;
        goto label_12b7a0;
    }
    ctx->pc = 0x12B798u;
    {
        const bool branch_taken_0x12b798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12b798) {
            ctx->pc = 0x12B7ACu;
            goto label_12b7ac;
        }
    }
    ctx->pc = 0x12B7A0u;
label_12b7a0:
    // 0x12b7a0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_12b7a4:
    // 0x12b7a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12b7a8:
    // 0x12b7a8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x12b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_12b7ac:
    // 0x12b7ac: 0x0  nop
    ctx->pc = 0x12b7acu;
    // NOP
label_12b7b0:
    // 0x12b7b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12b7b4:
    // 0x12b7b4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x12b7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b7b8:
    // 0x12b7b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_12b7bc:
    if (ctx->pc == 0x12B7BCu) {
        ctx->pc = 0x12B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B8u;
        // 0x12b7bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7C0u;
        goto label_12b7c0;
    }
    ctx->pc = 0x12B7B8u;
    {
        const bool branch_taken_0x12b7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B8u;
        // 0x12b7bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7b8) {
            ctx->pc = 0x12B790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b790;
        }
    }
    ctx->pc = 0x12B7C0u;
label_12b7c0:
    // 0x12b7c0: 0x8e0d002c  lw          $t5, 0x2C($s0)
    ctx->pc = 0x12b7c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_12b7c4:
    // 0x12b7c4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12b7c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b7c8:
    // 0x12b7c8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12b7c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b7cc:
    // 0x12b7cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12b7d0:
    // 0x12b7d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x12b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b7d4:
    // 0x12b7d4: 0x8da30014  lw          $v1, 0x14($t5)
    ctx->pc = 0x12b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
label_12b7d8:
    // 0x12b7d8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_12b7dc:
    if (ctx->pc == 0x12B7DCu) {
        ctx->pc = 0x12B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D8u;
        // 0x12b7dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B7E0u;
        goto label_12b7e0;
    }
    ctx->pc = 0x12B7D8u;
    {
        const bool branch_taken_0x12b7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D8u;
        // 0x12b7dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7d8) {
            ctx->pc = 0x12B854u;
            goto label_12b854;
        }
    }
    ctx->pc = 0x12B7E0u;
label_12b7e0:
    // 0x12b7e0: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
label_12b7e4:
    // 0x12b7e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b7e8:
    // 0x12b7e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12b7e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b7ec:
    // 0x12b7ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12b7ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b7f0:
    // 0x12b7f0: 0x4c4021  addu        $t0, $v0, $t4
    ctx->pc = 0x12b7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_12b7f4:
    // 0x12b7f4: 0x0  nop
    ctx->pc = 0x12b7f4u;
    // NOP
label_12b7f8:
    // 0x12b7f8: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_12b7fc:
    // 0x12b7fc: 0x80470001  lb          $a3, 0x1($v0)
    ctx->pc = 0x12b7fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_12b800:
    // 0x12b800: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
label_12b804:
    if (ctx->pc == 0x12B804u) {
        ctx->pc = 0x12B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B800u;
        // 0x12b804: 0x17d1021  addu        $v0, $t3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B808u;
        goto label_12b808;
    }
    ctx->pc = 0x12B800u;
    {
        const bool branch_taken_0x12b800 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x12B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B800u;
        // 0x12b804: 0x17d1021  addu        $v0, $t3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b800) {
            ctx->pc = 0x12B824u;
            goto label_12b824;
        }
    }
    ctx->pc = 0x12B808u;
label_12b808:
    // 0x12b808: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x12b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_12b80c:
    // 0x12b80c: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
label_12b810:
    if (ctx->pc == 0x12B810u) {
        ctx->pc = 0x12B814u;
        goto label_12b814;
    }
    ctx->pc = 0x12B80Cu;
    {
        const bool branch_taken_0x12b80c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b80c) {
            ctx->pc = 0x12B824u;
            goto label_12b824;
        }
    }
    ctx->pc = 0x12B814u;
label_12b814:
    // 0x12b814: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_12b818:
    if (ctx->pc == 0x12B818u) {
        ctx->pc = 0x12B81Cu;
        goto label_12b81c;
    }
    ctx->pc = 0x12B814u;
    {
        const bool branch_taken_0x12b814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12b814) {
            ctx->pc = 0x12B824u;
            goto label_12b824;
        }
    }
    ctx->pc = 0x12B81Cu;
label_12b81c:
    // 0x12b81c: 0x10000006  b           . + 4 + (0x6 << 2)
label_12b820:
    if (ctx->pc == 0x12B820u) {
        ctx->pc = 0x12B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B81Cu;
        // 0x12b820: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B824u;
        goto label_12b824;
    }
    ctx->pc = 0x12B81Cu;
    {
        const bool branch_taken_0x12b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B81Cu;
        // 0x12b820: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b81c) {
            ctx->pc = 0x12B838u;
            goto label_12b838;
        }
    }
    ctx->pc = 0x12B824u;
label_12b824:
    // 0x12b824: 0x0  nop
    ctx->pc = 0x12b824u;
    // NOP
label_12b828:
    // 0x12b828: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_12b82c:
    // 0x12b82c: 0x29420003  slti        $v0, $t2, 0x3
    ctx->pc = 0x12b82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b830:
    // 0x12b830: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_12b834:
    if (ctx->pc == 0x12B834u) {
        ctx->pc = 0x12B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B830u;
        // 0x12b834: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B838u;
        goto label_12b838;
    }
    ctx->pc = 0x12B830u;
    {
        const bool branch_taken_0x12b830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B830u;
        // 0x12b834: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b830) {
            ctx->pc = 0x12B7F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b7f4;
        }
    }
    ctx->pc = 0x12B838u;
label_12b838:
    // 0x12b838: 0x15240004  bne         $t1, $a0, . + 4 + (0x4 << 2)
label_12b83c:
    if (ctx->pc == 0x12B83Cu) {
        ctx->pc = 0x12B840u;
        goto label_12b840;
    }
    ctx->pc = 0x12B838u;
    {
        const bool branch_taken_0x12b838 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        if (branch_taken_0x12b838) {
            ctx->pc = 0x12B84Cu;
            goto label_12b84c;
        }
    }
    ctx->pc = 0x12B840u;
label_12b840:
    // 0x12b840: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_12b844:
    // 0x12b844: 0x10000007  b           . + 4 + (0x7 << 2)
label_12b848:
    if (ctx->pc == 0x12B848u) {
        ctx->pc = 0x12B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B844u;
        // 0x12b848: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B84Cu;
        goto label_12b84c;
    }
    ctx->pc = 0x12B844u;
    {
        const bool branch_taken_0x12b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B844u;
        // 0x12b848: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b844) {
            ctx->pc = 0x12B864u;
            goto label_12b864;
        }
    }
    ctx->pc = 0x12B84Cu;
label_12b84c:
    // 0x12b84c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12b84cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_12b850:
    // 0x12b850: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12b850u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_12b854:
    // 0x12b854: 0x0  nop
    ctx->pc = 0x12b854u;
    // NOP
label_12b858:
    // 0x12b858: 0x1c3102a  slt         $v0, $t6, $v1
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_12b85c:
    // 0x12b85c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_12b860:
    if (ctx->pc == 0x12B860u) {
        ctx->pc = 0x12B864u;
        goto label_12b864;
    }
    ctx->pc = 0x12B85Cu;
    {
        const bool branch_taken_0x12b85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b85c) {
            ctx->pc = 0x12B7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b7e0;
        }
    }
    ctx->pc = 0x12B864u;
label_12b864:
    // 0x12b864: 0x0  nop
    ctx->pc = 0x12b864u;
    // NOP
label_12b868:
    // 0x12b868: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b86c:
    // 0x12b86c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b870:
    // 0x12b870: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12b874:
    // 0x12b874: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12b878:
    // 0x12b878: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b87c:
    // 0x12b87c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x12b87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_12b880:
    // 0x12b880: 0x320f809  jalr        $t9
label_12b884:
    if (ctx->pc == 0x12B884u) {
        ctx->pc = 0x12B888u;
        goto label_12b888;
    }
    ctx->pc = 0x12B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B880u, 0x12B888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B888u;
label_12b888:
    // 0x12b888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b88c:
    // 0x12b88c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x12b88cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b890:
    // 0x12b890: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_12b894:
    if (ctx->pc == 0x12B894u) {
        ctx->pc = 0x12B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B890u;
        // 0x12b894: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B898u;
        goto label_12b898;
    }
    ctx->pc = 0x12B890u;
    {
        const bool branch_taken_0x12b890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B890u;
        // 0x12b894: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b890) {
            ctx->pc = 0x12B870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b870;
        }
    }
    ctx->pc = 0x12B898u;
label_12b898:
    // 0x12b898: 0x83838480  lb          $v1, -0x7B80($gp)
    ctx->pc = 0x12b898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935680)));
label_12b89c:
    // 0x12b89c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_12b8a0:
    if (ctx->pc == 0x12B8A0u) {
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8A4u;
        goto label_12b8a4;
    }
    ctx->pc = 0x12B89Cu;
    {
        const bool branch_taken_0x12b89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b89c) {
            ctx->pc = 0x12B8ACu;
            goto label_12b8ac;
        }
    }
    ctx->pc = 0x12B8A4u;
label_12b8a4:
    // 0x12b8a4: 0xaf80847c  sw          $zero, -0x7B84($gp)
    ctx->pc = 0x12b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 0));
label_12b8a8:
    // 0x12b8a8: 0xa3838480  sb          $v1, -0x7B80($gp)
    ctx->pc = 0x12b8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935680), (uint8_t)GPR_U32(ctx, 3));
label_12b8ac:
    // 0x12b8ac: 0x8f83847c  lw          $v1, -0x7B84($gp)
    ctx->pc = 0x12b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
label_12b8b0:
    // 0x12b8b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_12b8b4:
    if (ctx->pc == 0x12B8B4u) {
        ctx->pc = 0x12B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B0u;
        // 0x12b8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8B8u;
        goto label_12b8b8;
    }
    ctx->pc = 0x12B8B0u;
    {
        const bool branch_taken_0x12b8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B0u;
        // 0x12b8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8b0) {
            ctx->pc = 0x12B8C4u;
            goto label_12b8c4;
        }
    }
    ctx->pc = 0x12B8B8u;
label_12b8b8:
    // 0x12b8b8: 0xc04ae40  jal         func_12B900
label_12b8bc:
    if (ctx->pc == 0x12B8BCu) {
        ctx->pc = 0x12B8C0u;
        goto label_12b8c0;
    }
    ctx->pc = 0x12B8B8u;
    SET_GPR_U32(ctx, 31, 0x12B8C0u);
    ctx->pc = 0x12B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B900u, 0x12B8B8u, 0x12B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8C0u;
label_12b8c0:
    // 0x12b8c0: 0xaf80847c  sw          $zero, -0x7B84($gp)
    ctx->pc = 0x12b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 0));
label_12b8c4:
    // 0x12b8c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12b8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12b8c8:
    // 0x12b8c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12b8c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12b8cc:
    // 0x12b8cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12b8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12b8d0:
    // 0x12b8d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12b8d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b8d4:
    // 0x12b8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b8d8:
    // 0x12b8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12b8dc:
    // 0x12b8dc: 0x3e00008  jr          $ra
label_12b8e0:
    if (ctx->pc == 0x12B8E0u) {
        ctx->pc = 0x12B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8DCu;
        // 0x12b8e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8E4u;
        goto label_fallthrough_0x12b8dc;
    }
    ctx->pc = 0x12B8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8DCu;
        // 0x12b8e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b8dc:
    ctx->pc = 0x12B8E4u;
}
