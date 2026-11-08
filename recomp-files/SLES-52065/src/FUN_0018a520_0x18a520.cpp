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

// Function: FUN_0018a520
// Address: 0x18a520 - 0x18a638
void FUN_0018a520_0x18a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a520_0x18a520");
#endif

    switch (ctx->pc) {
        case 0x18a588u: goto label_18a588;
        case 0x18a5b0u: goto label_18a5b0;
        case 0x18a5d4u: goto label_18a5d4;
        case 0x18a5fcu: goto label_18a5fc;
        default: break;
    }

    ctx->pc = 0x18a520u;

    // 0x18a520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18a524: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a528: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18a52c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a530: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a534: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18a534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a53c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18a53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a548: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A548u;
    {
        const bool branch_taken_0x18a548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A548u;
        // 0x18a54c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a548) {
            ctx->pc = 0x18A55Cu;
            goto label_18a55c;
        }
    }
    ctx->pc = 0x18A550u;
    // 0x18a550: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18a554: 0x16830008  bne         $s4, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A554u;
    {
        const bool branch_taken_0x18a554 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a554) {
            ctx->pc = 0x18A578u;
            goto label_18a578;
        }
    }
    ctx->pc = 0x18A55Cu;
label_18a55c:
    // 0x18a55c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a560: 0x16830003  bne         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A560u;
    {
        const bool branch_taken_0x18a560 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a560) {
            ctx->pc = 0x18A570u;
            goto label_18a570;
        }
    }
    ctx->pc = 0x18A568u;
    // 0x18a568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A568u;
    {
        const bool branch_taken_0x18a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A568u;
        // 0x18a56c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a568) {
            ctx->pc = 0x18A57Cu;
            goto label_18a57c;
        }
    }
    ctx->pc = 0x18A570u;
label_18a570:
    // 0x18a570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A570u;
    {
        const bool branch_taken_0x18a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A570u;
        // 0x18a574: 0x8f9480d8  lw          $s4, -0x7F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a570) {
            ctx->pc = 0x18A57Cu;
            goto label_18a57c;
        }
    }
    ctx->pc = 0x18A578u;
label_18a578:
    // 0x18a578: 0xaf9480d8  sw          $s4, -0x7F28($gp)
    ctx->pc = 0x18a578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 20));
label_18a57c:
    // 0x18a57c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18a57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a580: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18a580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a584: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18a584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a588:
    // 0x18a588: 0x2b19821  addu        $s3, $s5, $s1
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x18a58c: 0x826310cc  lb          $v1, 0x10CC($s3)
    ctx->pc = 0x18a58cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4300)));
    // 0x18a590: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A590u;
    {
        const bool branch_taken_0x18a590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a590) {
            ctx->pc = 0x18A5B0u;
            goto label_18a5b0;
        }
    }
    ctx->pc = 0x18A598u;
    // 0x18a598: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x18a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x18a59c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a5a0: 0x8c442b2c  lw          $a0, 0x2B2C($v0)
    ctx->pc = 0x18a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11052)));
    // 0x18a5a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18a5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5a8: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x18A5A8u;
    SET_GPR_U32(ctx, 31, 0x18A5B0u);
    ctx->pc = 0x18A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5A8u;
    // 0x18a5ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x18A5A8u, 0x18A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5B0u;
label_18a5b0:
    // 0x18a5b0: 0x826312cc  lb          $v1, 0x12CC($s3)
    ctx->pc = 0x18a5b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4812)));
    // 0x18a5b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A5B4u;
    {
        const bool branch_taken_0x18a5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5b4) {
            ctx->pc = 0x18A5D4u;
            goto label_18a5d4;
        }
    }
    ctx->pc = 0x18A5BCu;
    // 0x18a5bc: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x18a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x18a5c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a5c4: 0x8c442b4c  lw          $a0, 0x2B4C($v0)
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11084)));
    // 0x18a5c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18a5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5cc: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x18A5CCu;
    SET_GPR_U32(ctx, 31, 0x18A5D4u);
    ctx->pc = 0x18A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5CCu;
    // 0x18a5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x18A5CCu, 0x18A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5D4u;
label_18a5d4:
    // 0x18a5d4: 0x0  nop
    ctx->pc = 0x18a5d4u;
    // NOP
    // 0x18a5d8: 0x82630ecc  lb          $v1, 0xECC($s3)
    ctx->pc = 0x18a5d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3788)));
    // 0x18a5dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A5DCu;
    {
        const bool branch_taken_0x18a5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5dc) {
            ctx->pc = 0x18A5FCu;
            goto label_18a5fc;
        }
    }
    ctx->pc = 0x18A5E4u;
    // 0x18a5e4: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x18a5e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a5ec: 0x8c442b0c  lw          $a0, 0x2B0C($v0)
    ctx->pc = 0x18a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11020)));
    // 0x18a5f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18a5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5f4: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x18A5F4u;
    SET_GPR_U32(ctx, 31, 0x18A5FCu);
    ctx->pc = 0x18A5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5F4u;
    // 0x18a5f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x18A5F4u, 0x18A5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5FCu;
label_18a5fc:
    // 0x18a5fc: 0x0  nop
    ctx->pc = 0x18a5fcu;
    // NOP
    // 0x18a600: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a604: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18a604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18a608: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18a608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18a60c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x18A60Cu;
    {
        const bool branch_taken_0x18a60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A60Cu;
        // 0x18a610: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a60c) {
            ctx->pc = 0x18A588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a588;
        }
    }
    ctx->pc = 0x18A614u;
    // 0x18a614: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18a614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a618: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a618u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a61c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a61cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a630: 0x3e00008  jr          $ra
    ctx->pc = 0x18A630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A630u;
        // 0x18a634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A638u;
}
