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

// Function: FUN_00160370
// Address: 0x160370 - 0x160460
void FUN_00160370_0x160370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160370_0x160370");
#endif

    switch (ctx->pc) {
        case 0x160370u: goto label_160370;
        case 0x160374u: goto label_160374;
        case 0x160378u: goto label_160378;
        case 0x16037cu: goto label_16037c;
        case 0x160380u: goto label_160380;
        case 0x160384u: goto label_160384;
        case 0x160388u: goto label_160388;
        case 0x16038cu: goto label_16038c;
        case 0x160390u: goto label_160390;
        case 0x160394u: goto label_160394;
        case 0x160398u: goto label_160398;
        case 0x16039cu: goto label_16039c;
        case 0x1603a0u: goto label_1603a0;
        case 0x1603a4u: goto label_1603a4;
        case 0x1603a8u: goto label_1603a8;
        case 0x1603acu: goto label_1603ac;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603b4u: goto label_1603b4;
        case 0x1603b8u: goto label_1603b8;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603d0u: goto label_1603d0;
        case 0x1603d4u: goto label_1603d4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603e0u: goto label_1603e0;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603e8u: goto label_1603e8;
        case 0x1603ecu: goto label_1603ec;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f4u: goto label_1603f4;
        case 0x1603f8u: goto label_1603f8;
        case 0x1603fcu: goto label_1603fc;
        case 0x160400u: goto label_160400;
        case 0x160404u: goto label_160404;
        case 0x160408u: goto label_160408;
        case 0x16040cu: goto label_16040c;
        case 0x160410u: goto label_160410;
        case 0x160414u: goto label_160414;
        case 0x160418u: goto label_160418;
        case 0x16041cu: goto label_16041c;
        case 0x160420u: goto label_160420;
        case 0x160424u: goto label_160424;
        case 0x160428u: goto label_160428;
        case 0x16042cu: goto label_16042c;
        case 0x160430u: goto label_160430;
        case 0x160434u: goto label_160434;
        case 0x160438u: goto label_160438;
        case 0x16043cu: goto label_16043c;
        case 0x160440u: goto label_160440;
        case 0x160444u: goto label_160444;
        case 0x160448u: goto label_160448;
        case 0x16044cu: goto label_16044c;
        case 0x160450u: goto label_160450;
        case 0x160454u: goto label_160454;
        case 0x160458u: goto label_160458;
        case 0x16045cu: goto label_16045c;
        default: break;
    }

    ctx->pc = 0x160370u;

label_160370:
    // 0x160370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x160370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_160374:
    // 0x160374: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x160374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_160378:
    // 0x160378: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x160378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16037c:
    // 0x16037c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_160380:
    // 0x160380: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x160380u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160384:
    // 0x160384: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_160388:
    // 0x160388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16038c:
    // 0x16038c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_160390:
    // 0x160390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_160394:
    // 0x160394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_160398:
    // 0x160398: 0x8c902c20  lw          $s0, 0x2C20($a0)
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11296)));
label_16039c:
    // 0x16039c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x16039cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1603a0:
    // 0x1603a0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_1603a4:
    if (ctx->pc == 0x1603A4u) {
        ctx->pc = 0x1603A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603A0u;
        // 0x1603a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603A8u;
        goto label_1603a8;
    }
    ctx->pc = 0x1603A0u;
    {
        const bool branch_taken_0x1603a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603A0u;
        // 0x1603a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603a0) {
            ctx->pc = 0x160438u;
            goto label_160438;
        }
    }
    ctx->pc = 0x1603A8u;
label_1603a8:
    // 0x1603a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1603a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1603ac:
    // 0x1603ac: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x1603acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
label_1603b0:
    // 0x1603b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1603b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1603b4:
    // 0x1603b4: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1603b8:
    // 0x1603b8: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1603bc:
    // 0x1603bc: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1603c0:
    // 0x1603c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1603c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1603c4:
    // 0x1603c4: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1603c8:
    // 0x1603c8: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x1603c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1603cc:
    // 0x1603cc: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x1603ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1603d0:
    // 0x1603d0: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x1603d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1603d4:
    // 0x1603d4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1603d8:
    if (ctx->pc == 0x1603D8u) {
        ctx->pc = 0x1603D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603D4u;
        // 0x1603d8: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603DCu;
        goto label_1603dc;
    }
    ctx->pc = 0x1603D4u;
    {
        const bool branch_taken_0x1603d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603D4u;
        // 0x1603d8: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603d4) {
            ctx->pc = 0x160428u;
            goto label_160428;
        }
    }
    ctx->pc = 0x1603DCu;
label_1603dc:
    // 0x1603dc: 0x0  nop
    ctx->pc = 0x1603dcu;
    // NOP
label_1603e0:
    // 0x1603e0: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x1603e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_1603e4:
    // 0x1603e4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1603e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1603e8:
    // 0x1603e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1603ec:
    // 0x1603ec: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x1603ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1603f0:
    // 0x1603f0: 0x84a50020  lh          $a1, 0x20($a1)
    ctx->pc = 0x1603f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_1603f4:
    // 0x1603f4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_1603f8:
    if (ctx->pc == 0x1603F8u) {
        ctx->pc = 0x1603F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F4u;
        // 0x1603f8: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603FCu;
        goto label_1603fc;
    }
    ctx->pc = 0x1603F4u;
    {
        const bool branch_taken_0x1603f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1603F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F4u;
        // 0x1603f8: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603f4) {
            ctx->pc = 0x160404u;
            goto label_160404;
        }
    }
    ctx->pc = 0x1603FCu;
label_1603fc:
    // 0x1603fc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_160400:
    if (ctx->pc == 0x160400u) {
        ctx->pc = 0x160404u;
        goto label_160404;
    }
    ctx->pc = 0x1603FCu;
    {
        const bool branch_taken_0x1603fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1603fc) {
            ctx->pc = 0x160418u;
            goto label_160418;
        }
    }
    ctx->pc = 0x160404u;
label_160404:
    // 0x160404: 0x0  nop
    ctx->pc = 0x160404u;
    // NOP
label_160408:
    // 0x160408: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16040c:
    // 0x16040c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16040cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_160410:
    // 0x160410: 0x320f809  jalr        $t9
label_160414:
    if (ctx->pc == 0x160414u) {
        ctx->pc = 0x160414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160410u;
        // 0x160414: 0x8c850210  lw          $a1, 0x210($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160418u;
        goto label_160418;
    }
    ctx->pc = 0x160410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x160418u);
        ctx->pc = 0x160414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160410u;
        // 0x160414: 0x8c850210  lw          $a1, 0x210($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160410u, 0x160418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160418u;
label_160418:
    // 0x160418: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x160418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16041c:
    // 0x16041c: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x16041cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_160420:
    // 0x160420: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_160424:
    if (ctx->pc == 0x160424u) {
        ctx->pc = 0x160424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160420u;
        // 0x160424: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160428u;
        goto label_160428;
    }
    ctx->pc = 0x160420u;
    {
        const bool branch_taken_0x160420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160420u;
        // 0x160424: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160420) {
            ctx->pc = 0x1603DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1603dc;
        }
    }
    ctx->pc = 0x160428u;
label_160428:
    // 0x160428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16042c:
    // 0x16042c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x16042cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_160430:
    // 0x160430: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_160434:
    if (ctx->pc == 0x160434u) {
        ctx->pc = 0x160434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160430u;
        // 0x160434: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160438u;
        goto label_160438;
    }
    ctx->pc = 0x160430u;
    {
        const bool branch_taken_0x160430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160430u;
        // 0x160434: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160430) {
            ctx->pc = 0x1603ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1603ac;
        }
    }
    ctx->pc = 0x160438u;
label_160438:
    // 0x160438: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x160438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16043c:
    // 0x16043c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16043cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_160440:
    // 0x160440: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_160444:
    // 0x160444: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_160448:
    // 0x160448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16044c:
    // 0x16044c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16044cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_160450:
    // 0x160450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160454:
    // 0x160454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_160458:
    // 0x160458: 0x3e00008  jr          $ra
label_16045c:
    if (ctx->pc == 0x16045Cu) {
        ctx->pc = 0x16045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160458u;
        // 0x16045c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160460u;
        goto label_fallthrough_0x160458;
    }
    ctx->pc = 0x160458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160458u;
        // 0x16045c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160458:
    ctx->pc = 0x160460u;
}
