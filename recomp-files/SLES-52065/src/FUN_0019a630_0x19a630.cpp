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

// Function: FUN_0019a630
// Address: 0x19a630 - 0x19a768
void FUN_0019a630_0x19a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a630_0x19a630");
#endif

    switch (ctx->pc) {
        case 0x19a630u: goto label_19a630;
        case 0x19a634u: goto label_19a634;
        case 0x19a638u: goto label_19a638;
        case 0x19a63cu: goto label_19a63c;
        case 0x19a640u: goto label_19a640;
        case 0x19a644u: goto label_19a644;
        case 0x19a648u: goto label_19a648;
        case 0x19a64cu: goto label_19a64c;
        case 0x19a650u: goto label_19a650;
        case 0x19a654u: goto label_19a654;
        case 0x19a658u: goto label_19a658;
        case 0x19a65cu: goto label_19a65c;
        case 0x19a660u: goto label_19a660;
        case 0x19a664u: goto label_19a664;
        case 0x19a668u: goto label_19a668;
        case 0x19a66cu: goto label_19a66c;
        case 0x19a670u: goto label_19a670;
        case 0x19a674u: goto label_19a674;
        case 0x19a678u: goto label_19a678;
        case 0x19a67cu: goto label_19a67c;
        case 0x19a680u: goto label_19a680;
        case 0x19a684u: goto label_19a684;
        case 0x19a688u: goto label_19a688;
        case 0x19a68cu: goto label_19a68c;
        case 0x19a690u: goto label_19a690;
        case 0x19a694u: goto label_19a694;
        case 0x19a698u: goto label_19a698;
        case 0x19a69cu: goto label_19a69c;
        case 0x19a6a0u: goto label_19a6a0;
        case 0x19a6a4u: goto label_19a6a4;
        case 0x19a6a8u: goto label_19a6a8;
        case 0x19a6acu: goto label_19a6ac;
        case 0x19a6b0u: goto label_19a6b0;
        case 0x19a6b4u: goto label_19a6b4;
        case 0x19a6b8u: goto label_19a6b8;
        case 0x19a6bcu: goto label_19a6bc;
        case 0x19a6c0u: goto label_19a6c0;
        case 0x19a6c4u: goto label_19a6c4;
        case 0x19a6c8u: goto label_19a6c8;
        case 0x19a6ccu: goto label_19a6cc;
        case 0x19a6d0u: goto label_19a6d0;
        case 0x19a6d4u: goto label_19a6d4;
        case 0x19a6d8u: goto label_19a6d8;
        case 0x19a6dcu: goto label_19a6dc;
        case 0x19a6e0u: goto label_19a6e0;
        case 0x19a6e4u: goto label_19a6e4;
        case 0x19a6e8u: goto label_19a6e8;
        case 0x19a6ecu: goto label_19a6ec;
        case 0x19a6f0u: goto label_19a6f0;
        case 0x19a6f4u: goto label_19a6f4;
        case 0x19a6f8u: goto label_19a6f8;
        case 0x19a6fcu: goto label_19a6fc;
        case 0x19a700u: goto label_19a700;
        case 0x19a704u: goto label_19a704;
        case 0x19a708u: goto label_19a708;
        case 0x19a70cu: goto label_19a70c;
        case 0x19a710u: goto label_19a710;
        case 0x19a714u: goto label_19a714;
        case 0x19a718u: goto label_19a718;
        case 0x19a71cu: goto label_19a71c;
        case 0x19a720u: goto label_19a720;
        case 0x19a724u: goto label_19a724;
        case 0x19a728u: goto label_19a728;
        case 0x19a72cu: goto label_19a72c;
        case 0x19a730u: goto label_19a730;
        case 0x19a734u: goto label_19a734;
        case 0x19a738u: goto label_19a738;
        case 0x19a73cu: goto label_19a73c;
        case 0x19a740u: goto label_19a740;
        case 0x19a744u: goto label_19a744;
        case 0x19a748u: goto label_19a748;
        case 0x19a74cu: goto label_19a74c;
        case 0x19a750u: goto label_19a750;
        case 0x19a754u: goto label_19a754;
        case 0x19a758u: goto label_19a758;
        case 0x19a75cu: goto label_19a75c;
        case 0x19a760u: goto label_19a760;
        case 0x19a764u: goto label_19a764;
        default: break;
    }

    ctx->pc = 0x19a630u;

label_19a630:
    // 0x19a630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19a634:
    // 0x19a634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19a638:
    // 0x19a638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19a63c:
    // 0x19a63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19a640:
    // 0x19a640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a644:
    // 0x19a644: 0xc067f08  jal         func_19FC20
label_19a648:
    if (ctx->pc == 0x19A648u) {
        ctx->pc = 0x19A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A644u;
        // 0x19a648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A64Cu;
        goto label_19a64c;
    }
    ctx->pc = 0x19A644u;
    SET_GPR_U32(ctx, 31, 0x19A64Cu);
    ctx->pc = 0x19A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A644u;
    // 0x19a648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19A644u, 0x19A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A64Cu;
label_19a64c:
    // 0x19a64c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a650:
    // 0x19a650: 0xc067f0c  jal         func_19FC30
label_19a654:
    if (ctx->pc == 0x19A654u) {
        ctx->pc = 0x19A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A650u;
        // 0x19a654: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A658u;
        goto label_19a658;
    }
    ctx->pc = 0x19A650u;
    SET_GPR_U32(ctx, 31, 0x19A658u);
    ctx->pc = 0x19A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A650u;
    // 0x19a654: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x19A650u, 0x19A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A658u;
label_19a658:
    // 0x19a658: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19a658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19a65c:
    // 0x19a65c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_19a660:
    if (ctx->pc == 0x19A660u) {
        ctx->pc = 0x19A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A65Cu;
        // 0x19a660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A664u;
        goto label_19a664;
    }
    ctx->pc = 0x19A65Cu;
    {
        const bool branch_taken_0x19a65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A65Cu;
        // 0x19a660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a65c) {
            ctx->pc = 0x19A6A0u;
            goto label_19a6a0;
        }
    }
    ctx->pc = 0x19A664u;
label_19a664:
    // 0x19a664: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a668:
    // 0x19a668: 0x10000005  b           . + 4 + (0x5 << 2)
label_19a66c:
    if (ctx->pc == 0x19A66Cu) {
        ctx->pc = 0x19A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A668u;
        // 0x19a66c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A670u;
        goto label_19a670;
    }
    ctx->pc = 0x19A668u;
    {
        const bool branch_taken_0x19a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A668u;
        // 0x19a66c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a668) {
            ctx->pc = 0x19A680u;
            goto label_19a680;
        }
    }
    ctx->pc = 0x19A670u;
label_19a670:
    // 0x19a670: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x19a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19a674:
    // 0x19a674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a678:
    // 0x19a678: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x19a678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_19a67c:
    // 0x19a67c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19a680:
    // 0x19a680: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x19a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_19a684:
    // 0x19a684: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19a684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19a688:
    // 0x19a688: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19a68c:
    if (ctx->pc == 0x19A68Cu) {
        ctx->pc = 0x19A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A688u;
        // 0x19a68c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A690u;
        goto label_19a690;
    }
    ctx->pc = 0x19A688u;
    {
        const bool branch_taken_0x19a688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A688u;
        // 0x19a68c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a688) {
            ctx->pc = 0x19A674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a674;
        }
    }
    ctx->pc = 0x19A690u;
label_19a690:
    // 0x19a690: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a694:
    // 0x19a694: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x19a694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_19a698:
    // 0x19a698: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19a698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19a69c:
    // 0x19a69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a6a0:
    // 0x19a6a0: 0xc063dd4  jal         func_18F750
label_19a6a4:
    if (ctx->pc == 0x19A6A4u) {
        ctx->pc = 0x19A6A8u;
        goto label_19a6a8;
    }
    ctx->pc = 0x19A6A0u;
    SET_GPR_U32(ctx, 31, 0x19A6A8u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A6A0u, 0x19A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6A8u;
label_19a6a8:
    // 0x19a6a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a6ac:
    // 0x19a6ac: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_19a6b0:
    if (ctx->pc == 0x19A6B0u) {
        ctx->pc = 0x19A6B4u;
        goto label_19a6b4;
    }
    ctx->pc = 0x19A6ACu;
    {
        const bool branch_taken_0x19a6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a6ac) {
            ctx->pc = 0x19A718u;
            goto label_19a718;
        }
    }
    ctx->pc = 0x19A6B4u;
label_19a6b4:
    // 0x19a6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a6b8:
    // 0x19a6b8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_19a6bc:
    if (ctx->pc == 0x19A6BCu) {
        ctx->pc = 0x19A6C0u;
        goto label_19a6c0;
    }
    ctx->pc = 0x19A6B8u;
    {
        const bool branch_taken_0x19a6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a6b8) {
            ctx->pc = 0x19A6ECu;
            goto label_19a6ec;
        }
    }
    ctx->pc = 0x19A6C0u;
label_19a6c0:
    // 0x19a6c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19a6c4:
    if (ctx->pc == 0x19A6C4u) {
        ctx->pc = 0x19A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6C0u;
        // 0x19a6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6C8u;
        goto label_19a6c8;
    }
    ctx->pc = 0x19A6C0u;
    {
        const bool branch_taken_0x19a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6C0u;
        // 0x19a6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6c0) {
            ctx->pc = 0x19A6D4u;
            goto label_19a6d4;
        }
    }
    ctx->pc = 0x19A6C8u;
label_19a6c8:
    // 0x19a6c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_19a6cc:
    if (ctx->pc == 0x19A6CCu) {
        ctx->pc = 0x19A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6C8u;
        // 0x19a6cc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6D0u;
        goto label_19a6d0;
    }
    ctx->pc = 0x19A6C8u;
    {
        const bool branch_taken_0x19a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6C8u;
        // 0x19a6cc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6c8) {
            ctx->pc = 0x19A730u;
            goto label_19a730;
        }
    }
    ctx->pc = 0x19A6D0u;
label_19a6d0:
    // 0x19a6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a6d4:
    // 0x19a6d4: 0xc0667bc  jal         func_199EF0
label_19a6d8:
    if (ctx->pc == 0x19A6D8u) {
        ctx->pc = 0x19A6DCu;
        goto label_19a6dc;
    }
    ctx->pc = 0x19A6D4u;
    SET_GPR_U32(ctx, 31, 0x19A6DCu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19A6D4u, 0x19A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6DCu;
label_19a6dc:
    // 0x19a6dc: 0xc063e14  jal         func_18F850
label_19a6e0:
    if (ctx->pc == 0x19A6E0u) {
        ctx->pc = 0x19A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6DCu;
        // 0x19a6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6E4u;
        goto label_19a6e4;
    }
    ctx->pc = 0x19A6DCu;
    SET_GPR_U32(ctx, 31, 0x19A6E4u);
    ctx->pc = 0x19A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6DCu;
    // 0x19a6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19A6DCu, 0x19A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6E4u;
label_19a6e4:
    // 0x19a6e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_19a6e8:
    if (ctx->pc == 0x19A6E8u) {
        ctx->pc = 0x19A6ECu;
        goto label_19a6ec;
    }
    ctx->pc = 0x19A6E4u;
    {
        const bool branch_taken_0x19a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6e4) {
            ctx->pc = 0x19A72Cu;
            goto label_19a72c;
        }
    }
    ctx->pc = 0x19A6ECu;
label_19a6ec:
    // 0x19a6ec: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19a6f0:
    // 0x19a6f0: 0x8c452840  lw          $a1, 0x2840($v0)
    ctx->pc = 0x19a6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10304)));
label_19a6f4:
    // 0x19a6f4: 0xc0667e0  jal         func_199F80
label_19a6f8:
    if (ctx->pc == 0x19A6F8u) {
        ctx->pc = 0x19A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6F4u;
        // 0x19a6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6FCu;
        goto label_19a6fc;
    }
    ctx->pc = 0x19A6F4u;
    SET_GPR_U32(ctx, 31, 0x19A6FCu);
    ctx->pc = 0x19A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6F4u;
    // 0x19a6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A6F4u, 0x19A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6FCu;
label_19a6fc:
    // 0x19a6fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19a700:
    if (ctx->pc == 0x19A700u) {
        ctx->pc = 0x19A704u;
        goto label_19a704;
    }
    ctx->pc = 0x19A6FCu;
    {
        const bool branch_taken_0x19a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6fc) {
            ctx->pc = 0x19A72Cu;
            goto label_19a72c;
        }
    }
    ctx->pc = 0x19A704u;
label_19a704:
    // 0x19a704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a708:
    // 0x19a708: 0xc063e08  jal         func_18F820
label_19a70c:
    if (ctx->pc == 0x19A70Cu) {
        ctx->pc = 0x19A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A708u;
        // 0x19a70c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A710u;
        goto label_19a710;
    }
    ctx->pc = 0x19A708u;
    SET_GPR_U32(ctx, 31, 0x19A710u);
    ctx->pc = 0x19A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A708u;
    // 0x19a70c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A708u, 0x19A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A710u;
label_19a710:
    // 0x19a710: 0x10000006  b           . + 4 + (0x6 << 2)
label_19a714:
    if (ctx->pc == 0x19A714u) {
        ctx->pc = 0x19A718u;
        goto label_19a718;
    }
    ctx->pc = 0x19A710u;
    {
        const bool branch_taken_0x19a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a710) {
            ctx->pc = 0x19A72Cu;
            goto label_19a72c;
        }
    }
    ctx->pc = 0x19A718u;
label_19a718:
    // 0x19a718: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a71c:
    // 0x19a71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a720:
    // 0x19a720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a724:
    // 0x19a724: 0xc063e08  jal         func_18F820
label_19a728:
    if (ctx->pc == 0x19A728u) {
        ctx->pc = 0x19A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A724u;
        // 0x19a728: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A72Cu;
        goto label_19a72c;
    }
    ctx->pc = 0x19A724u;
    SET_GPR_U32(ctx, 31, 0x19A72Cu);
    ctx->pc = 0x19A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A724u;
    // 0x19a728: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A724u, 0x19A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A72Cu;
label_19a72c:
    // 0x19a72c: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_19a730:
    // 0x19a730: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19a734:
    if (ctx->pc == 0x19A734u) {
        ctx->pc = 0x19A738u;
        goto label_19a738;
    }
    ctx->pc = 0x19A730u;
    {
        const bool branch_taken_0x19a730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a730) {
            ctx->pc = 0x19A754u;
            goto label_19a754;
        }
    }
    ctx->pc = 0x19A738u;
label_19a738:
    // 0x19a738: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19a73c:
    if (ctx->pc == 0x19A73Cu) {
        ctx->pc = 0x19A740u;
        goto label_19a740;
    }
    ctx->pc = 0x19A738u;
    {
        const bool branch_taken_0x19a738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a738) {
            ctx->pc = 0x19A754u;
            goto label_19a754;
        }
    }
    ctx->pc = 0x19A740u;
label_19a740:
    // 0x19a740: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19a744:
    // 0x19a744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a748:
    // 0x19a748: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19a748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19a74c:
    // 0x19a74c: 0x320f809  jalr        $t9
label_19a750:
    if (ctx->pc == 0x19A750u) {
        ctx->pc = 0x19A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A74Cu;
        // 0x19a750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A754u;
        goto label_19a754;
    }
    ctx->pc = 0x19A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19A754u);
        ctx->pc = 0x19A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A74Cu;
        // 0x19a750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A74Cu, 0x19A754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A754u;
label_19a754:
    // 0x19a754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a758:
    // 0x19a758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19a75c:
    // 0x19a75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a760:
    // 0x19a760: 0x3e00008  jr          $ra
label_19a764:
    if (ctx->pc == 0x19A764u) {
        ctx->pc = 0x19A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A760u;
        // 0x19a764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A768u;
        goto label_fallthrough_0x19a760;
    }
    ctx->pc = 0x19A760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A760u;
        // 0x19a764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a760:
    ctx->pc = 0x19A768u;
}
