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

// Function: FUN_00127560
// Address: 0x127560 - 0x127738
void FUN_00127560_0x127560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127560_0x127560");
#endif

    switch (ctx->pc) {
        case 0x127594u: goto label_127594;
        case 0x127610u: goto label_127610;
        case 0x127620u: goto label_127620;
        case 0x127630u: goto label_127630;
        case 0x127640u: goto label_127640;
        case 0x127650u: goto label_127650;
        case 0x127660u: goto label_127660;
        case 0x127670u: goto label_127670;
        case 0x127680u: goto label_127680;
        case 0x127690u: goto label_127690;
        case 0x1276a0u: goto label_1276a0;
        case 0x1276b0u: goto label_1276b0;
        case 0x1276c0u: goto label_1276c0;
        case 0x1276d0u: goto label_1276d0;
        case 0x1276e0u: goto label_1276e0;
        case 0x127724u: goto label_127724;
        default: break;
    }

    ctx->pc = 0x127560u;

    // 0x127560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x127564: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x127564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x127568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12756c: 0x246389f0  addiu       $v1, $v1, -0x7610
    ctx->pc = 0x12756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937072));
    // 0x127570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127578: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x127578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x12757c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x12757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127580: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x127580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x127584: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127588: 0x2450002c  addiu       $s0, $v0, 0x2C
    ctx->pc = 0x127588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x12758c: 0xc049dd8  jal         func_127760
    ctx->pc = 0x12758Cu;
    SET_GPR_U32(ctx, 31, 0x127594u);
    ctx->pc = 0x127590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12758Cu;
    // 0x127590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x12758Cu, 0x127594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127594u;
label_127594:
    // 0x127594: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x127594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x127598: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x12759c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1275a0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1275a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1275a4: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1275a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1275a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1275a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1275ac: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1275b0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1275b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1275b4: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1275b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1275b8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1275b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1275bc: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1275bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1275c0: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x1275c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x1275c4: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1275c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1275c8: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x1275c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x1275cc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1275ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1275d0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1275d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1275d4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1275d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1275d8: 0xafa6003c  sw          $a2, 0x3C($sp)
    ctx->pc = 0x1275d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
    // 0x1275dc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1275dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1275e0: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1275e4: 0x7ca30040  sq          $v1, 0x40($a1)
    ctx->pc = 0x1275e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 3));
    // 0x1275e8: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1275e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x1275ec: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1275ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1275f0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1275f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1275f4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1275f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1275f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1275f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1275fc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1275fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127600: 0x7c620050  sq          $v0, 0x50($v1)
    ctx->pc = 0x127600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 2));
    // 0x127604: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127608: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127608u;
    SET_GPR_U32(ctx, 31, 0x127610u);
    ctx->pc = 0x12760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127608u;
    // 0x12760c: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127608u, 0x127610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127610u;
label_127610:
    // 0x127610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127610u;
    {
        const bool branch_taken_0x127610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127610u;
        // 0x127614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127610) {
            ctx->pc = 0x127620u;
            goto label_127620;
        }
    }
    ctx->pc = 0x127618u;
    // 0x127618: 0xc049704  jal         func_125C10
    ctx->pc = 0x127618u;
    SET_GPR_U32(ctx, 31, 0x127620u);
    ctx->pc = 0x125C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C10u, 0x127618u, 0x127620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127620u;
label_127620:
    // 0x127620: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127624: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x127624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x127628: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127628u;
    SET_GPR_U32(ctx, 31, 0x127630u);
    ctx->pc = 0x12762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127628u;
    // 0x12762c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127628u, 0x127630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127630u;
label_127630:
    // 0x127630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127630u;
    {
        const bool branch_taken_0x127630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127630u;
        // 0x127634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127630) {
            ctx->pc = 0x127640u;
            goto label_127640;
        }
    }
    ctx->pc = 0x127638u;
    // 0x127638: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x127638u;
    SET_GPR_U32(ctx, 31, 0x127640u);
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x127638u, 0x127640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127640u;
label_127640:
    // 0x127640: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127644: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x127648: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127648u;
    SET_GPR_U32(ctx, 31, 0x127650u);
    ctx->pc = 0x12764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127648u;
    // 0x12764c: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127648u, 0x127650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127650u;
label_127650:
    // 0x127650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127650u;
    {
        const bool branch_taken_0x127650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127650u;
        // 0x127654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127650) {
            ctx->pc = 0x127660u;
            goto label_127660;
        }
    }
    ctx->pc = 0x127658u;
    // 0x127658: 0xc049c94  jal         func_127250
    ctx->pc = 0x127658u;
    SET_GPR_U32(ctx, 31, 0x127660u);
    ctx->pc = 0x127250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127250u, 0x127658u, 0x127660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127660u;
label_127660:
    // 0x127660: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127664: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x127664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x127668: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127668u;
    SET_GPR_U32(ctx, 31, 0x127670u);
    ctx->pc = 0x12766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127668u;
    // 0x12766c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127668u, 0x127670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127670u;
label_127670:
    // 0x127670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127670u;
    {
        const bool branch_taken_0x127670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127670u;
        // 0x127674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127670) {
            ctx->pc = 0x127680u;
            goto label_127680;
        }
    }
    ctx->pc = 0x127678u;
    // 0x127678: 0xc04a0dc  jal         func_128370
    ctx->pc = 0x127678u;
    SET_GPR_U32(ctx, 31, 0x127680u);
    ctx->pc = 0x128370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128370u, 0x127678u, 0x127680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127680u;
label_127680:
    // 0x127680: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127684: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x127684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x127688: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127688u;
    SET_GPR_U32(ctx, 31, 0x127690u);
    ctx->pc = 0x12768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127688u;
    // 0x12768c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127688u, 0x127690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127690u;
label_127690:
    // 0x127690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127690u;
    {
        const bool branch_taken_0x127690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127690u;
        // 0x127694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127690) {
            ctx->pc = 0x1276A0u;
            goto label_1276a0;
        }
    }
    ctx->pc = 0x127698u;
    // 0x127698: 0xc04a128  jal         func_1284A0
    ctx->pc = 0x127698u;
    SET_GPR_U32(ctx, 31, 0x1276A0u);
    ctx->pc = 0x1284A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A0u, 0x127698u, 0x1276A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276A0u;
label_1276a0:
    // 0x1276a0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276a4: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1276a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1276a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1276A8u;
    SET_GPR_U32(ctx, 31, 0x1276B0u);
    ctx->pc = 0x1276ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276A8u;
    // 0x1276ac: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1276A8u, 0x1276B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276B0u;
label_1276b0:
    // 0x1276b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1276B0u;
    {
        const bool branch_taken_0x1276b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276B0u;
        // 0x1276b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276b0) {
            ctx->pc = 0x1276C0u;
            goto label_1276c0;
        }
    }
    ctx->pc = 0x1276B8u;
    // 0x1276b8: 0xc04a51c  jal         func_129470
    ctx->pc = 0x1276B8u;
    SET_GPR_U32(ctx, 31, 0x1276C0u);
    ctx->pc = 0x129470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129470u, 0x1276B8u, 0x1276C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276C0u;
label_1276c0:
    // 0x1276c0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276c4: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1276c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1276C8u;
    SET_GPR_U32(ctx, 31, 0x1276D0u);
    ctx->pc = 0x1276CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276C8u;
    // 0x1276cc: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1276C8u, 0x1276D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276D0u;
label_1276d0:
    // 0x1276d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1276D0u;
    {
        const bool branch_taken_0x1276d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276D0u;
        // 0x1276d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276d0) {
            ctx->pc = 0x1276E0u;
            goto label_1276e0;
        }
    }
    ctx->pc = 0x1276D8u;
    // 0x1276d8: 0xc04a5a0  jal         func_129680
    ctx->pc = 0x1276D8u;
    SET_GPR_U32(ctx, 31, 0x1276E0u);
    ctx->pc = 0x129680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129680u, 0x1276D8u, 0x1276E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276E0u;
label_1276e0:
    // 0x1276e0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276e4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1276e8: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1276e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1276ec: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1276f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1276f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1276f8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276fc: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1276fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x127700: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127704: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x127704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x127708: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12770c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x12770cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x127710: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127714: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x127714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x127718: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12771c: 0xc04a098  jal         func_128260
    ctx->pc = 0x12771Cu;
    SET_GPR_U32(ctx, 31, 0x127724u);
    ctx->pc = 0x127720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12771Cu;
    // 0x127720: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128260u, 0x12771Cu, 0x127724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127724u;
label_127724:
    // 0x127724: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12772c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12772cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127730: 0x3e00008  jr          $ra
    ctx->pc = 0x127730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127730u;
        // 0x127734: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127738u;
}
