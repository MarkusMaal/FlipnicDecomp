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

// Function: FUN_00142540
// Address: 0x142540 - 0x142668
void FUN_00142540_0x142540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00142540_0x142540");
#endif

    switch (ctx->pc) {
        case 0x1425b4u: goto label_1425b4;
        case 0x1425e0u: goto label_1425e0;
        case 0x142610u: goto label_142610;
        case 0x142638u: goto label_142638;
        default: break;
    }

    ctx->pc = 0x142540u;

    // 0x142540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x142540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x142544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x142548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14254c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x142550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x142550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x142554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14255c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142560: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x142560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x142564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142568: 0x90c40029  lbu         $a0, 0x29($a2)
    ctx->pc = 0x142568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
    // 0x14256c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14256Cu;
    {
        const bool branch_taken_0x14256c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x142570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14256Cu;
        // 0x142570: 0x90c50028  lbu         $a1, 0x28($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14256c) {
            ctx->pc = 0x142578u;
            goto label_142578;
        }
    }
    ctx->pc = 0x142574u;
    // 0x142574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142578:
    // 0x142578: 0x8cd20014  lw          $s2, 0x14($a2)
    ctx->pc = 0x142578u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x14257c: 0x1640001e  bnez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x14257Cu;
    {
        const bool branch_taken_0x14257c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14257c) {
            ctx->pc = 0x1425F8u;
            goto label_1425f8;
        }
    }
    ctx->pc = 0x142584u;
    // 0x142584: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x142584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142588: 0x5a140  sll         $s4, $a1, 5
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x14258c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x142590: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142594: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x142594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x142598: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x142598u;
    {
        const bool branch_taken_0x142598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142598) {
            ctx->pc = 0x142648u;
            goto label_142648;
        }
    }
    ctx->pc = 0x1425A0u;
    // 0x1425a0: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1425a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1425a4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1425a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1425a8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1425A8u;
    {
        const bool branch_taken_0x1425a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425A8u;
        // 0x1425ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425a8) {
            ctx->pc = 0x142648u;
            goto label_142648;
        }
    }
    ctx->pc = 0x1425B0u;
    // 0x1425b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1425b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1425b4:
    // 0x1425b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1425b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1425b8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1425bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1425c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1425c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1425c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1425C4u;
    {
        const bool branch_taken_0x1425c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425c4) {
            ctx->pc = 0x1425E0u;
            goto label_1425e0;
        }
    }
    ctx->pc = 0x1425CCu;
    // 0x1425cc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1425ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1425d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1425d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1425d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1425d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1425d8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1425D8u;
    SET_GPR_U32(ctx, 31, 0x1425E0u);
    ctx->pc = 0x1425DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425D8u;
    // 0x1425dc: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1425D8u, 0x1425E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425E0u;
label_1425e0:
    // 0x1425e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1425e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1425e4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1425e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1425e8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1425E8u;
    {
        const bool branch_taken_0x1425e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1425ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425E8u;
        // 0x1425ec: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425e8) {
            ctx->pc = 0x1425B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1425b4;
        }
    }
    ctx->pc = 0x1425F0u;
    // 0x1425f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1425F0u;
    {
        const bool branch_taken_0x1425f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425f0) {
            ctx->pc = 0x142648u;
            goto label_142648;
        }
    }
    ctx->pc = 0x1425F8u;
label_1425f8:
    // 0x1425f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1425f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1425fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1425FCu;
    {
        const bool branch_taken_0x1425fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425FCu;
        // 0x142600: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425fc) {
            ctx->pc = 0x142648u;
            goto label_142648;
        }
    }
    ctx->pc = 0x142604u;
    // 0x142604: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x142604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x142608: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x142608u;
    {
        const bool branch_taken_0x142608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142608u;
        // 0x14260c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142608) {
            ctx->pc = 0x142648u;
            goto label_142648;
        }
    }
    ctx->pc = 0x142610u;
label_142610:
    // 0x142610: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x142610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x142614: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x142614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x142618: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x142618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14261c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x142620: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x142620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x142624: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x142624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x142628: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14262c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14262cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142630: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x142630u;
    SET_GPR_U32(ctx, 31, 0x142638u);
    ctx->pc = 0x142634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142630u;
    // 0x142634: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x142630u, 0x142638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142638u;
label_142638:
    // 0x142638: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14263c: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x14263cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x142640: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x142640u;
    {
        const bool branch_taken_0x142640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142640) {
            ctx->pc = 0x142610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142610;
        }
    }
    ctx->pc = 0x142648u;
label_142648:
    // 0x142648: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x142648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14264c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14264cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142650: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14265c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14265cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142660: 0x3e00008  jr          $ra
    ctx->pc = 0x142660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142660u;
        // 0x142664: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142668u;
}
