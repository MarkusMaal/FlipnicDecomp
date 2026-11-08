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

// Function: FUN_0015d520
// Address: 0x15d520 - 0x15d650
void FUN_0015d520_0x15d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d520_0x15d520");
#endif

    switch (ctx->pc) {
        case 0x15d520u: goto label_15d520;
        case 0x15d524u: goto label_15d524;
        case 0x15d528u: goto label_15d528;
        case 0x15d52cu: goto label_15d52c;
        case 0x15d530u: goto label_15d530;
        case 0x15d534u: goto label_15d534;
        case 0x15d538u: goto label_15d538;
        case 0x15d53cu: goto label_15d53c;
        case 0x15d540u: goto label_15d540;
        case 0x15d544u: goto label_15d544;
        case 0x15d548u: goto label_15d548;
        case 0x15d54cu: goto label_15d54c;
        case 0x15d550u: goto label_15d550;
        case 0x15d554u: goto label_15d554;
        case 0x15d558u: goto label_15d558;
        case 0x15d55cu: goto label_15d55c;
        case 0x15d560u: goto label_15d560;
        case 0x15d564u: goto label_15d564;
        case 0x15d568u: goto label_15d568;
        case 0x15d56cu: goto label_15d56c;
        case 0x15d570u: goto label_15d570;
        case 0x15d574u: goto label_15d574;
        case 0x15d578u: goto label_15d578;
        case 0x15d57cu: goto label_15d57c;
        case 0x15d580u: goto label_15d580;
        case 0x15d584u: goto label_15d584;
        case 0x15d588u: goto label_15d588;
        case 0x15d58cu: goto label_15d58c;
        case 0x15d590u: goto label_15d590;
        case 0x15d594u: goto label_15d594;
        case 0x15d598u: goto label_15d598;
        case 0x15d59cu: goto label_15d59c;
        case 0x15d5a0u: goto label_15d5a0;
        case 0x15d5a4u: goto label_15d5a4;
        case 0x15d5a8u: goto label_15d5a8;
        case 0x15d5acu: goto label_15d5ac;
        case 0x15d5b0u: goto label_15d5b0;
        case 0x15d5b4u: goto label_15d5b4;
        case 0x15d5b8u: goto label_15d5b8;
        case 0x15d5bcu: goto label_15d5bc;
        case 0x15d5c0u: goto label_15d5c0;
        case 0x15d5c4u: goto label_15d5c4;
        case 0x15d5c8u: goto label_15d5c8;
        case 0x15d5ccu: goto label_15d5cc;
        case 0x15d5d0u: goto label_15d5d0;
        case 0x15d5d4u: goto label_15d5d4;
        case 0x15d5d8u: goto label_15d5d8;
        case 0x15d5dcu: goto label_15d5dc;
        case 0x15d5e0u: goto label_15d5e0;
        case 0x15d5e4u: goto label_15d5e4;
        case 0x15d5e8u: goto label_15d5e8;
        case 0x15d5ecu: goto label_15d5ec;
        case 0x15d5f0u: goto label_15d5f0;
        case 0x15d5f4u: goto label_15d5f4;
        case 0x15d5f8u: goto label_15d5f8;
        case 0x15d5fcu: goto label_15d5fc;
        case 0x15d600u: goto label_15d600;
        case 0x15d604u: goto label_15d604;
        case 0x15d608u: goto label_15d608;
        case 0x15d60cu: goto label_15d60c;
        case 0x15d610u: goto label_15d610;
        case 0x15d614u: goto label_15d614;
        case 0x15d618u: goto label_15d618;
        case 0x15d61cu: goto label_15d61c;
        case 0x15d620u: goto label_15d620;
        case 0x15d624u: goto label_15d624;
        case 0x15d628u: goto label_15d628;
        case 0x15d62cu: goto label_15d62c;
        case 0x15d630u: goto label_15d630;
        case 0x15d634u: goto label_15d634;
        case 0x15d638u: goto label_15d638;
        case 0x15d63cu: goto label_15d63c;
        case 0x15d640u: goto label_15d640;
        case 0x15d644u: goto label_15d644;
        case 0x15d648u: goto label_15d648;
        case 0x15d64cu: goto label_15d64c;
        default: break;
    }

    ctx->pc = 0x15d520u;

label_15d520:
    // 0x15d520: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_15d524:
    // 0x15d524: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_15d528:
    // 0x15d528: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15d52c:
    // 0x15d52c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15d530:
    // 0x15d530: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15d530u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d534:
    // 0x15d534: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15d538:
    // 0x15d538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15d53c:
    // 0x15d53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d540:
    // 0x15d540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15d544:
    // 0x15d544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15d548:
    // 0x15d548: 0x8c902c20  lw          $s0, 0x2C20($a0)
    ctx->pc = 0x15d548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11296)));
label_15d54c:
    // 0x15d54c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15d54cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15d550:
    // 0x15d550: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_15d554:
    if (ctx->pc == 0x15D554u) {
        ctx->pc = 0x15D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D550u;
        // 0x15d554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D558u;
        goto label_15d558;
    }
    ctx->pc = 0x15D550u;
    {
        const bool branch_taken_0x15d550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D550u;
        // 0x15d554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d550) {
            ctx->pc = 0x15D5E4u;
            goto label_15d5e4;
        }
    }
    ctx->pc = 0x15D558u;
label_15d558:
    // 0x15d558: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15d558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d55c:
    // 0x15d55c: 0x8ec22c1c  lw          $v0, 0x2C1C($s6)
    ctx->pc = 0x15d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
label_15d560:
    // 0x15d560: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x15d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_15d564:
    // 0x15d564: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x15d564u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_15d568:
    // 0x15d568: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x15d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_15d56c:
    // 0x15d56c: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x15d56cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_15d570:
    // 0x15d570: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15d574:
    // 0x15d574: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x15d574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_15d578:
    // 0x15d578: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d57c:
    // 0x15d57c: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x15d57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_15d580:
    // 0x15d580: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x15d580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15d584:
    // 0x15d584: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_15d588:
    if (ctx->pc == 0x15D588u) {
        ctx->pc = 0x15D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D584u;
        // 0x15d588: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D58Cu;
        goto label_15d58c;
    }
    ctx->pc = 0x15D584u;
    {
        const bool branch_taken_0x15d584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D584u;
        // 0x15d588: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d584) {
            ctx->pc = 0x15D5C8u;
            goto label_15d5c8;
        }
    }
    ctx->pc = 0x15D58Cu;
label_15d58c:
    // 0x15d58c: 0x0  nop
    ctx->pc = 0x15d58cu;
    // NOP
label_15d590:
    // 0x15d590: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x15d590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_15d594:
    // 0x15d594: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d598:
    // 0x15d598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d59c:
    // 0x15d59c: 0x80420028  lb          $v0, 0x28($v0)
    ctx->pc = 0x15d59cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_15d5a0:
    // 0x15d5a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15d5a4:
    if (ctx->pc == 0x15D5A4u) {
        ctx->pc = 0x15D5A8u;
        goto label_15d5a8;
    }
    ctx->pc = 0x15D5A0u;
    {
        const bool branch_taken_0x15d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d5a0) {
            ctx->pc = 0x15D5B8u;
            goto label_15d5b8;
        }
    }
    ctx->pc = 0x15D5A8u;
label_15d5a8:
    // 0x15d5a8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d5ac:
    // 0x15d5ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d5b0:
    // 0x15d5b0: 0x320f809  jalr        $t9
label_15d5b4:
    if (ctx->pc == 0x15D5B4u) {
        ctx->pc = 0x15D5B8u;
        goto label_15d5b8;
    }
    ctx->pc = 0x15D5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D5B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D5B0u, 0x15D5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D5B8u;
label_15d5b8:
    // 0x15d5b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d5b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15d5bc:
    // 0x15d5bc: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x15d5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15d5c0:
    // 0x15d5c0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_15d5c4:
    if (ctx->pc == 0x15D5C4u) {
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5C0u;
        // 0x15d5c4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5C8u;
        goto label_15d5c8;
    }
    ctx->pc = 0x15D5C0u;
    {
        const bool branch_taken_0x15d5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5C0u;
        // 0x15d5c4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5c0) {
            ctx->pc = 0x15D58Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d58c;
        }
    }
    ctx->pc = 0x15D5C8u;
label_15d5c8:
    // 0x15d5c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15d5cc:
    // 0x15d5cc: 0xc057620  jal         func_15D880
label_15d5d0:
    if (ctx->pc == 0x15D5D0u) {
        ctx->pc = 0x15D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5CCu;
        // 0x15d5d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5D4u;
        goto label_15d5d4;
    }
    ctx->pc = 0x15D5CCu;
    SET_GPR_U32(ctx, 31, 0x15D5D4u);
    ctx->pc = 0x15D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5CCu;
    // 0x15d5d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D880u, 0x15D5CCu, 0x15D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5D4u;
label_15d5d4:
    // 0x15d5d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d5d8:
    // 0x15d5d8: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x15d5d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15d5dc:
    // 0x15d5dc: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_15d5e0:
    if (ctx->pc == 0x15D5E0u) {
        ctx->pc = 0x15D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5DCu;
        // 0x15d5e0: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5E4u;
        goto label_15d5e4;
    }
    ctx->pc = 0x15D5DCu;
    {
        const bool branch_taken_0x15d5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5DCu;
        // 0x15d5e0: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5dc) {
            ctx->pc = 0x15D55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d55c;
        }
    }
    ctx->pc = 0x15D5E4u;
label_15d5e4:
    // 0x15d5e4: 0x0  nop
    ctx->pc = 0x15d5e4u;
    // NOP
label_15d5e8:
    // 0x15d5e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15d5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d5ec:
    // 0x15d5ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_15d5f0:
    if (ctx->pc == 0x15D5F0u) {
        ctx->pc = 0x15D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5ECu;
        // 0x15d5f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5F4u;
        goto label_15d5f4;
    }
    ctx->pc = 0x15D5ECu;
    {
        const bool branch_taken_0x15d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5ECu;
        // 0x15d5f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5ec) {
            ctx->pc = 0x15D614u;
            goto label_15d614;
        }
    }
    ctx->pc = 0x15D5F4u;
label_15d5f4:
    // 0x15d5f4: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x15d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_15d5f8:
    // 0x15d5f8: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x15d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_15d5fc:
    // 0x15d5fc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d600:
    // 0x15d600: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d604:
    // 0x15d604: 0x320f809  jalr        $t9
label_15d608:
    if (ctx->pc == 0x15D608u) {
        ctx->pc = 0x15D60Cu;
        goto label_15d60c;
    }
    ctx->pc = 0x15D604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D60Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D604u, 0x15D60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D60Cu;
label_15d60c:
    // 0x15d60c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_15d610:
    // 0x15d610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d614:
    // 0x15d614: 0x0  nop
    ctx->pc = 0x15d614u;
    // NOP
label_15d618:
    // 0x15d618: 0x8ec33dd8  lw          $v1, 0x3DD8($s6)
    ctx->pc = 0x15d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 15832)));
label_15d61c:
    // 0x15d61c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d620:
    // 0x15d620: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_15d624:
    if (ctx->pc == 0x15D624u) {
        ctx->pc = 0x15D628u;
        goto label_15d628;
    }
    ctx->pc = 0x15D620u;
    {
        const bool branch_taken_0x15d620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d620) {
            ctx->pc = 0x15D5F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d5f4;
        }
    }
    ctx->pc = 0x15D628u;
label_15d628:
    // 0x15d628: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15d628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15d62c:
    // 0x15d62c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d62cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15d630:
    // 0x15d630: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15d634:
    // 0x15d634: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d638:
    // 0x15d638: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d63c:
    // 0x15d63c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d640:
    // 0x15d640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d644:
    // 0x15d644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d648:
    // 0x15d648: 0x3e00008  jr          $ra
label_15d64c:
    if (ctx->pc == 0x15D64Cu) {
        ctx->pc = 0x15D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D648u;
        // 0x15d64c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D650u;
        goto label_fallthrough_0x15d648;
    }
    ctx->pc = 0x15D648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D648u;
        // 0x15d64c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d648:
    ctx->pc = 0x15D650u;
}
