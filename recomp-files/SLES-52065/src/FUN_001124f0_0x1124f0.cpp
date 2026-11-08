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

// Function: FUN_001124f0
// Address: 0x1124f0 - 0x112bf8
void FUN_001124f0_0x1124f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001124f0_0x1124f0");
#endif

    switch (ctx->pc) {
        case 0x112530u: goto label_112530;
        case 0x112548u: goto label_112548;
        case 0x11259cu: goto label_11259c;
        case 0x1125a4u: goto label_1125a4;
        case 0x1125fcu: goto label_1125fc;
        case 0x112624u: goto label_112624;
        case 0x11262cu: goto label_11262c;
        case 0x112640u: goto label_112640;
        case 0x112680u: goto label_112680;
        case 0x1126a8u: goto label_1126a8;
        case 0x1126c8u: goto label_1126c8;
        case 0x112750u: goto label_112750;
        case 0x112778u: goto label_112778;
        case 0x1127b4u: goto label_1127b4;
        case 0x1127f8u: goto label_1127f8;
        case 0x112814u: goto label_112814;
        case 0x11281cu: goto label_11281c;
        case 0x112854u: goto label_112854;
        case 0x112884u: goto label_112884;
        case 0x1128acu: goto label_1128ac;
        case 0x1128e4u: goto label_1128e4;
        case 0x11290cu: goto label_11290c;
        case 0x11294cu: goto label_11294c;
        case 0x112990u: goto label_112990;
        case 0x1129acu: goto label_1129ac;
        case 0x1129d4u: goto label_1129d4;
        case 0x112a0cu: goto label_112a0c;
        case 0x112a34u: goto label_112a34;
        case 0x112a74u: goto label_112a74;
        case 0x112ab8u: goto label_112ab8;
        case 0x112ad4u: goto label_112ad4;
        case 0x112afcu: goto label_112afc;
        case 0x112b24u: goto label_112b24;
        case 0x112b94u: goto label_112b94;
        case 0x112bbcu: goto label_112bbc;
        default: break;
    }

    ctx->pc = 0x1124f0u;

    // 0x1124f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1124f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1124f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1124f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1124f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1124f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1124fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1124fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x112500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x112500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x112504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x112508: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x112508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11250c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x112510: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x112510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112514: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x112514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112518: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x112518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11251c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112528: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x112528u;
    SET_GPR_U32(ctx, 31, 0x112530u);
    ctx->pc = 0x11252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112528u;
    // 0x11252c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x112528u, 0x112530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112530u;
label_112530:
    // 0x112530: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x112530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112538: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x112538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11253c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11253cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112540: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112540u;
    {
        const bool branch_taken_0x112540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112540u;
        // 0x112544: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112540) {
            ctx->pc = 0x112580u;
            goto label_112580;
        }
    }
    ctx->pc = 0x112548u;
label_112548:
    // 0x112548: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11254c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x11254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x112550: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112558: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x112558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11255c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x11255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112560: 0x90420224  lbu         $v0, 0x224($v0)
    ctx->pc = 0x112560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x112564: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x112564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x112568: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112568u;
    {
        const bool branch_taken_0x112568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112568u;
        // 0x11256c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112568) {
            ctx->pc = 0x112578u;
            goto label_112578;
        }
    }
    ctx->pc = 0x112570u;
    // 0x112570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112570u;
    {
        const bool branch_taken_0x112570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112570) {
            ctx->pc = 0x11258Cu;
            goto label_11258c;
        }
    }
    ctx->pc = 0x112578u;
label_112578:
    // 0x112578: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x112578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x11257c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11257cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_112580:
    // 0x112580: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x112580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112584: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112584u;
    {
        const bool branch_taken_0x112584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112584u;
        // 0x112588: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112584) {
            ctx->pc = 0x112548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112548;
        }
    }
    ctx->pc = 0x11258Cu;
label_11258c:
    // 0x11258c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11258Cu;
    {
        const bool branch_taken_0x11258c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11258Cu;
        // 0x112590: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11258c) {
            ctx->pc = 0x1125C0u;
            goto label_1125c0;
        }
    }
    ctx->pc = 0x112594u;
    // 0x112594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x112594u;
    {
        const bool branch_taken_0x112594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112594) {
            ctx->pc = 0x1125A8u;
            goto label_1125a8;
        }
    }
    ctx->pc = 0x11259Cu;
label_11259c:
    // 0x11259c: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x11259Cu;
    SET_GPR_U32(ctx, 31, 0x1125A4u);
    ctx->pc = 0x1125A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11259Cu;
    // 0x1125a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x11259Cu, 0x1125A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125A4u;
label_1125a4:
    // 0x1125a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1125a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1125a8:
    // 0x1125a8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1125a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1125ac: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1125acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1125b0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1125B0u;
    {
        const bool branch_taken_0x1125b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1125B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125B0u;
        // 0x1125b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125b0) {
            ctx->pc = 0x11259Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11259c;
        }
    }
    ctx->pc = 0x1125B8u;
    // 0x1125b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1125bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1125bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1125c0:
    // 0x1125c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1125c4: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1125c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1125c8: 0x10200182  beqz        $at, . + 4 + (0x182 << 2)
    ctx->pc = 0x1125C8u;
    {
        const bool branch_taken_0x1125c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125C8u;
        // 0x1125cc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125c8) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x1125D0u;
    // 0x1125d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1125d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1125d4: 0x2463e470  addiu       $v1, $v1, -0x1B90
    ctx->pc = 0x1125d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960240));
    // 0x1125d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1125d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1125dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1125dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1125e0: 0x400008  jr          $v0
    ctx->pc = 0x1125E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1125E8u: goto label_1125e8;
            case 0x112744u: goto label_112744;
            case 0x112798u: goto label_112798;
            case 0x1128D8u: goto label_1128d8;
            case 0x112930u: goto label_112930;
            case 0x112A00u: goto label_112a00;
            case 0x112A58u: goto label_112a58;
            case 0x112B88u: goto label_112b88;
            case 0x112BD4u: goto label_112bd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1125E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1125E8u;
label_1125e8:
    // 0x1125e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1125e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1125ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1125ECu;
    {
        const bool branch_taken_0x1125ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125ECu;
        // 0x1125f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125ec) {
            ctx->pc = 0x112640u;
            goto label_112640;
        }
    }
    ctx->pc = 0x1125F4u;
    // 0x1125f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1125F4u;
    {
        const bool branch_taken_0x1125f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125F4u;
        // 0x1125f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125f4) {
            ctx->pc = 0x11262Cu;
            goto label_11262c;
        }
    }
    ctx->pc = 0x1125FCu;
label_1125fc:
    // 0x1125fc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1125fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112604: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112608: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x112608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x11260c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11260cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112618: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11261c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11261Cu;
    SET_GPR_U32(ctx, 31, 0x112624u);
    ctx->pc = 0x112620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11261Cu;
    // 0x112620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11261Cu, 0x112624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112624u;
label_112624:
    // 0x112624: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x112624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x112628: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x112628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11262c:
    // 0x11262c: 0x0  nop
    ctx->pc = 0x11262cu;
    // NOP
    // 0x112630: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112634: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x112634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112638: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112638u;
    {
        const bool branch_taken_0x112638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112638) {
            ctx->pc = 0x1125FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1125fc;
        }
    }
    ctx->pc = 0x112640u;
label_112640:
    // 0x112640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x112640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x112644: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x112644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x112648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11264c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x112650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112658: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x112658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11265c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11265cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x112660: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x112660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x112664: 0x0  nop
    ctx->pc = 0x112664u;
    // NOP
    // 0x112668: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x112668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11266c: 0x10200159  beqz        $at, . + 4 + (0x159 << 2)
    ctx->pc = 0x11266Cu;
    {
        const bool branch_taken_0x11266c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11266Cu;
        // 0x112670: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11266c) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112674u;
    // 0x112674: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x112674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112678: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x112678u;
    {
        const bool branch_taken_0x112678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112678u;
        // 0x11267c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112678) {
            ctx->pc = 0x1126B0u;
            goto label_1126b0;
        }
    }
    ctx->pc = 0x112680u;
label_112680:
    // 0x112680: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x112684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112688: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11268c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x11268cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x112690: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112690u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11269c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1126a0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1126A0u;
    SET_GPR_U32(ctx, 31, 0x1126A8u);
    ctx->pc = 0x1126A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126A0u;
    // 0x1126a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1126A0u, 0x1126A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126A8u;
label_1126a8:
    // 0x1126a8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1126ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1126acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1126b0:
    // 0x1126b0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1126b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1126b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1126b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1126b8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1126B8u;
    {
        const bool branch_taken_0x1126b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1126BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126B8u;
        // 0x1126bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126b8) {
            ctx->pc = 0x112680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112680;
        }
    }
    ctx->pc = 0x1126C0u;
    // 0x1126c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1126C0u;
    {
        const bool branch_taken_0x1126c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126C0u;
        // 0x1126c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126c0) {
            ctx->pc = 0x112720u;
            goto label_112720;
        }
    }
    ctx->pc = 0x1126C8u;
label_1126c8:
    // 0x1126c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1126c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1126cc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1126ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1126d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1126d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1126d4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1126d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1126d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1126d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1126dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1126dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1126e0: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x1126e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1126e4: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x1126e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1126e8: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1126e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1126ec: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1126ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1126f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1126F0u;
    {
        const bool branch_taken_0x1126f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1126f0) {
            ctx->pc = 0x112714u;
            goto label_112714;
        }
    }
    ctx->pc = 0x1126F8u;
    // 0x1126f8: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1126f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1126fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1126fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x112700: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x112700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x112704: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x112704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x112708: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x112708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11270c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x11270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x112710: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x112710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
label_112714:
    // 0x112714: 0x0  nop
    ctx->pc = 0x112714u;
    // NOP
    // 0x112718: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x112718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11271c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_112720:
    // 0x112720: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112724: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112728: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x112728u;
    {
        const bool branch_taken_0x112728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112728) {
            ctx->pc = 0x1126C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1126c8;
        }
    }
    ctx->pc = 0x112730u;
    // 0x112730: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x112730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x112734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11273c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x11273Cu;
    {
        const bool branch_taken_0x11273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11273Cu;
        // 0x112740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11273c) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112744u;
label_112744:
    // 0x112744: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112748: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112748u;
    {
        const bool branch_taken_0x112748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112748u;
        // 0x11274c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112748) {
            ctx->pc = 0x112778u;
            goto label_112778;
        }
    }
    ctx->pc = 0x112750u;
label_112750:
    // 0x112750: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112754: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x112758: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11275c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112760: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112764: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x112764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x112768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11276c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112770: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112774: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x112774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_112778:
    // 0x112778: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11277c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11277cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112780: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x112780u;
    {
        const bool branch_taken_0x112780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112780) {
            ctx->pc = 0x112750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112750;
        }
    }
    ctx->pc = 0x112788u;
    // 0x112788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11278c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112790: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x112790u;
    {
        const bool branch_taken_0x112790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112790u;
        // 0x112794: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112790) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112798u;
label_112798:
    // 0x112798: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x112798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11279c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11279cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127a0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1127a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1127a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1127a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1127a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1127ACu;
    {
        const bool branch_taken_0x1127ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1127B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127ACu;
        // 0x1127b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127ac) {
            ctx->pc = 0x1127F8u;
            goto label_1127f8;
        }
    }
    ctx->pc = 0x1127B4u;
label_1127b4:
    // 0x1127b4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1127b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1127b8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1127b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1127bc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1127bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1127c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1127c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1127c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1127c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1127c8: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x1127c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1127cc: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x1127ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x1127d0: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1127d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1127d4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1127d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1127d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1127D8u;
    {
        const bool branch_taken_0x1127d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127d8) {
            ctx->pc = 0x1127F0u;
            goto label_1127f0;
        }
    }
    ctx->pc = 0x1127E0u;
    // 0x1127e0: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x1127e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x1127e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1127E4u;
    {
        const bool branch_taken_0x1127e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1127E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127E4u;
        // 0x1127e8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127e4) {
            ctx->pc = 0x1127F0u;
            goto label_1127f0;
        }
    }
    ctx->pc = 0x1127ECu;
    // 0x1127ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1127ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1127f0:
    // 0x1127f0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1127f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1127f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1127f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1127f8:
    // 0x1127f8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1127f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1127fc: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1127FCu;
    {
        const bool branch_taken_0x1127fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127fc) {
            ctx->pc = 0x1127B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1127b4;
        }
    }
    ctx->pc = 0x112804u;
    // 0x112804: 0x14e600f3  bne         $a3, $a2, . + 4 + (0xF3 << 2)
    ctx->pc = 0x112804u;
    {
        const bool branch_taken_0x112804 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x112808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112804u;
        // 0x112808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112804) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x11280Cu;
    // 0x11280c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11280Cu;
    {
        const bool branch_taken_0x11280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11280Cu;
        // 0x112810: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11280c) {
            ctx->pc = 0x112864u;
            goto label_112864;
        }
    }
    ctx->pc = 0x112814u;
label_112814:
    // 0x112814: 0xc044254  jal         func_110950
    ctx->pc = 0x112814u;
    SET_GPR_U32(ctx, 31, 0x11281Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112814u, 0x11281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11281Cu;
label_11281c:
    // 0x11281c: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x11281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x112820: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112824: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x112824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x112828: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11282c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11282cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x112830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112834: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112838: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x112838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11283c: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x11283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x112840: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x112840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x112844: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112844u;
    {
        const bool branch_taken_0x112844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112844u;
        // 0x112848: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112844) {
            ctx->pc = 0x11285Cu;
            goto label_11285c;
        }
    }
    ctx->pc = 0x11284Cu;
    // 0x11284c: 0xc042118  jal         func_108460
    ctx->pc = 0x11284Cu;
    SET_GPR_U32(ctx, 31, 0x112854u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x11284Cu, 0x112854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112854u;
label_112854:
    // 0x112854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112854u;
    {
        const bool branch_taken_0x112854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112854) {
            ctx->pc = 0x112878u;
            goto label_112878;
        }
    }
    ctx->pc = 0x11285Cu;
label_11285c:
    // 0x11285c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x11285cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_112864:
    // 0x112864: 0x0  nop
    ctx->pc = 0x112864u;
    // NOP
    // 0x112868: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x112868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11286c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11286cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112870: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x112870u;
    {
        const bool branch_taken_0x112870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112870) {
            ctx->pc = 0x112814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112814;
        }
    }
    ctx->pc = 0x112878u;
label_112878:
    // 0x112878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11287c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11287Cu;
    {
        const bool branch_taken_0x11287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11287Cu;
        // 0x112880: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11287c) {
            ctx->pc = 0x1128B4u;
            goto label_1128b4;
        }
    }
    ctx->pc = 0x112884u;
label_112884:
    // 0x112884: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112888: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11288c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112890: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x112894: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11289c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1128a0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1128a4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1128A4u;
    SET_GPR_U32(ctx, 31, 0x1128ACu);
    ctx->pc = 0x1128A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128A4u;
    // 0x1128a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1128A4u, 0x1128ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128ACu;
label_1128ac:
    // 0x1128ac: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1128acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1128b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1128b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1128b4:
    // 0x1128b4: 0x0  nop
    ctx->pc = 0x1128b4u;
    // NOP
    // 0x1128b8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1128b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1128bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1128bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1128c0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1128C0u;
    {
        const bool branch_taken_0x1128c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1128c0) {
            ctx->pc = 0x112884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112884;
        }
    }
    ctx->pc = 0x1128C8u;
    // 0x1128c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1128c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1128cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1128d0: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1128D0u;
    {
        const bool branch_taken_0x1128d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128D0u;
        // 0x1128d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128d0) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x1128D8u;
label_1128d8:
    // 0x1128d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1128d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1128DCu;
    {
        const bool branch_taken_0x1128dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128DCu;
        // 0x1128e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128dc) {
            ctx->pc = 0x11290Cu;
            goto label_11290c;
        }
    }
    ctx->pc = 0x1128E4u;
label_1128e4:
    // 0x1128e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1128e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1128e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1128e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1128ec: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1128ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1128f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1128f4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1128f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1128f8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1128f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1128fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1128fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112904: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112908: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x112908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_11290c:
    // 0x11290c: 0x0  nop
    ctx->pc = 0x11290cu;
    // NOP
    // 0x112910: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112914: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112918: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x112918u;
    {
        const bool branch_taken_0x112918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112918) {
            ctx->pc = 0x1128E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1128e4;
        }
    }
    ctx->pc = 0x112920u;
    // 0x112920: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112928: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x112928u;
    {
        const bool branch_taken_0x112928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112928u;
        // 0x11292c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112928) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112930u;
label_112930:
    // 0x112930: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x112930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112938: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x112938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11293c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11293cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112944: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112944u;
    {
        const bool branch_taken_0x112944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112944u;
        // 0x112948: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112944) {
            ctx->pc = 0x112990u;
            goto label_112990;
        }
    }
    ctx->pc = 0x11294Cu;
label_11294c:
    // 0x11294c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112950: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x112950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x112954: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11295c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x112960: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x112960u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112964: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x112964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x112968: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x112968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11296c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x112970: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112970u;
    {
        const bool branch_taken_0x112970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112970) {
            ctx->pc = 0x112988u;
            goto label_112988;
        }
    }
    ctx->pc = 0x112978u;
    // 0x112978: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x112978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x11297c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11297Cu;
    {
        const bool branch_taken_0x11297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11297Cu;
        // 0x112980: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11297c) {
            ctx->pc = 0x112988u;
            goto label_112988;
        }
    }
    ctx->pc = 0x112984u;
    // 0x112984: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x112984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_112988:
    // 0x112988: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11298c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_112990:
    // 0x112990: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x112990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112994: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x112994u;
    {
        const bool branch_taken_0x112994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112994) {
            ctx->pc = 0x11294Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11294c;
        }
    }
    ctx->pc = 0x11299Cu;
    // 0x11299c: 0x14e6008d  bne         $a3, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x11299Cu;
    {
        const bool branch_taken_0x11299c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1129A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11299Cu;
        // 0x1129a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11299c) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x1129A4u;
    // 0x1129a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1129A4u;
    {
        const bool branch_taken_0x1129a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129A4u;
        // 0x1129a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129a4) {
            ctx->pc = 0x1129DCu;
            goto label_1129dc;
        }
    }
    ctx->pc = 0x1129ACu;
label_1129ac:
    // 0x1129ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1129acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1129b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1129b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1129b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1129b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1129b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1129b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1129bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1129bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1129c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1129c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1129c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1129c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1129c8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1129c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1129cc: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1129CCu;
    SET_GPR_U32(ctx, 31, 0x1129D4u);
    ctx->pc = 0x1129D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129CCu;
    // 0x1129d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1129CCu, 0x1129D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129D4u;
label_1129d4:
    // 0x1129d4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1129d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1129d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1129d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1129dc:
    // 0x1129dc: 0x0  nop
    ctx->pc = 0x1129dcu;
    // NOP
    // 0x1129e0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1129e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1129e4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1129e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1129e8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1129E8u;
    {
        const bool branch_taken_0x1129e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1129e8) {
            ctx->pc = 0x1129ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1129ac;
        }
    }
    ctx->pc = 0x1129F0u;
    // 0x1129f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1129f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1129f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1129f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1129f8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1129F8u;
    {
        const bool branch_taken_0x1129f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129F8u;
        // 0x1129fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129f8) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112A00u;
label_112a00:
    // 0x112a00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112A04u;
    {
        const bool branch_taken_0x112a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A04u;
        // 0x112a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a04) {
            ctx->pc = 0x112A34u;
            goto label_112a34;
        }
    }
    ctx->pc = 0x112A0Cu;
label_112a0c:
    // 0x112a0c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112a10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x112a14: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112a18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112a1c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112a20: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x112a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x112a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112a2c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112a30: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x112a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_112a34:
    // 0x112a34: 0x0  nop
    ctx->pc = 0x112a34u;
    // NOP
    // 0x112a38: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112a3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112a40: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x112A40u;
    {
        const bool branch_taken_0x112a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112a40) {
            ctx->pc = 0x112A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112a0c;
        }
    }
    ctx->pc = 0x112A48u;
    // 0x112a48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112a50: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x112A50u;
    {
        const bool branch_taken_0x112a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A50u;
        // 0x112a54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a50) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112A58u;
label_112a58:
    // 0x112a58: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x112a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a60: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x112a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112A6Cu;
    {
        const bool branch_taken_0x112a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A6Cu;
        // 0x112a70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a6c) {
            ctx->pc = 0x112AB8u;
            goto label_112ab8;
        }
    }
    ctx->pc = 0x112A74u;
label_112a74:
    // 0x112a74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112a78: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x112a7c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112a84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x112a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x112a88: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x112a88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112a8c: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x112a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x112a90: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x112a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x112a94: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x112a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x112a98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112A98u;
    {
        const bool branch_taken_0x112a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112a98) {
            ctx->pc = 0x112AB0u;
            goto label_112ab0;
        }
    }
    ctx->pc = 0x112AA0u;
    // 0x112aa0: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x112aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x112aa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x112AA4u;
    {
        const bool branch_taken_0x112aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA4u;
        // 0x112aa8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa4) {
            ctx->pc = 0x112AB0u;
            goto label_112ab0;
        }
    }
    ctx->pc = 0x112AACu;
    // 0x112aac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x112aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_112ab0:
    // 0x112ab0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x112ab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_112ab8:
    // 0x112ab8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x112ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112abc: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x112ABCu;
    {
        const bool branch_taken_0x112abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112abc) {
            ctx->pc = 0x112A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112a74;
        }
    }
    ctx->pc = 0x112AC4u;
    // 0x112ac4: 0x14e60043  bne         $a3, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x112AC4u;
    {
        const bool branch_taken_0x112ac4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x112AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AC4u;
        // 0x112ac8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ac4) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112ACCu;
    // 0x112acc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x112ACCu;
    {
        const bool branch_taken_0x112acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112ACCu;
        // 0x112ad0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112acc) {
            ctx->pc = 0x112B04u;
            goto label_112b04;
        }
    }
    ctx->pc = 0x112AD4u;
label_112ad4:
    // 0x112ad4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112ad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112adc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112ae0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x112ae4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112ae4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112ae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112af0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112af4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x112AF4u;
    SET_GPR_U32(ctx, 31, 0x112AFCu);
    ctx->pc = 0x112AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AF4u;
    // 0x112af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x112AF4u, 0x112AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AFCu;
label_112afc:
    // 0x112afc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112b00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_112b04:
    // 0x112b04: 0x0  nop
    ctx->pc = 0x112b04u;
    // NOP
    // 0x112b08: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112b0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x112b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112b10: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112B10u;
    {
        const bool branch_taken_0x112b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B10u;
        // 0x112b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b10) {
            ctx->pc = 0x112AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ad4;
        }
    }
    ctx->pc = 0x112B18u;
    // 0x112b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b1c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112B1Cu;
    {
        const bool branch_taken_0x112b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B1Cu;
        // 0x112b20: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b1c) {
            ctx->pc = 0x112B68u;
            goto label_112b68;
        }
    }
    ctx->pc = 0x112B24u;
label_112b24:
    // 0x112b24: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x112b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112b28: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112b2c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x112b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112b30: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112b34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112b38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112b3c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112b40: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x112b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x112b44: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x112b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x112b48: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x112b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x112b4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112B4Cu;
    {
        const bool branch_taken_0x112b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112b4c) {
            ctx->pc = 0x112B60u;
            goto label_112b60;
        }
    }
    ctx->pc = 0x112B54u;
    // 0x112b54: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x112b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x112b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x112b5c: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x112b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
label_112b60:
    // 0x112b60: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x112b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x112b64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_112b68:
    // 0x112b68: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112b6c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x112b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112b70: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x112B70u;
    {
        const bool branch_taken_0x112b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112b70) {
            ctx->pc = 0x112B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112b24;
        }
    }
    ctx->pc = 0x112B78u;
    // 0x112b78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112b80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112B80u;
    {
        const bool branch_taken_0x112b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B80u;
        // 0x112b84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b80) {
            ctx->pc = 0x112BD4u;
            goto label_112bd4;
        }
    }
    ctx->pc = 0x112B88u;
label_112b88:
    // 0x112b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112B8Cu;
    {
        const bool branch_taken_0x112b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B8Cu;
        // 0x112b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b8c) {
            ctx->pc = 0x112BBCu;
            goto label_112bbc;
        }
    }
    ctx->pc = 0x112B94u;
label_112b94:
    // 0x112b94: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112b98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x112b9c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112ba0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112ba4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112ba8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x112ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x112bac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112bb4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112bb8: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x112bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_112bbc:
    // 0x112bbc: 0x0  nop
    ctx->pc = 0x112bbcu;
    // NOP
    // 0x112bc0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112bc4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112bc8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x112BC8u;
    {
        const bool branch_taken_0x112bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112bc8) {
            ctx->pc = 0x112B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112b94;
        }
    }
    ctx->pc = 0x112BD0u;
    // 0x112bd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x112bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_112bd4:
    // 0x112bd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x112bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x112bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112be0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x112be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x112be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x112be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x112becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x112BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BF0u;
        // 0x112bf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112BF8u;
}
