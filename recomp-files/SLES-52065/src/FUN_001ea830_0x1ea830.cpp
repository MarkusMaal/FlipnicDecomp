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

// Function: FUN_001ea830
// Address: 0x1ea830 - 0x1eab44
void FUN_001ea830_0x1ea830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ea830_0x1ea830");
#endif

    switch (ctx->pc) {
        case 0x1ea848u: goto label_1ea848;
        case 0x1ea874u: goto label_1ea874;
        case 0x1ea880u: goto label_1ea880;
        case 0x1ea894u: goto label_1ea894;
        case 0x1ea8a4u: goto label_1ea8a4;
        case 0x1ea8e8u: goto label_1ea8e8;
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea90cu: goto label_1ea90c;
        case 0x1ea924u: goto label_1ea924;
        case 0x1ea93cu: goto label_1ea93c;
        case 0x1ea948u: goto label_1ea948;
        case 0x1ea954u: goto label_1ea954;
        case 0x1ea96cu: goto label_1ea96c;
        case 0x1ea978u: goto label_1ea978;
        case 0x1ea990u: goto label_1ea990;
        case 0x1ea99cu: goto label_1ea99c;
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9c0u: goto label_1ea9c0;
        case 0x1ea9ccu: goto label_1ea9cc;
        case 0x1ea9e4u: goto label_1ea9e4;
        case 0x1ea9f0u: goto label_1ea9f0;
        case 0x1ea9fcu: goto label_1ea9fc;
        case 0x1eaa08u: goto label_1eaa08;
        case 0x1eaa20u: goto label_1eaa20;
        case 0x1eaa38u: goto label_1eaa38;
        case 0x1eaa44u: goto label_1eaa44;
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa94u: goto label_1eaa94;
        case 0x1eaaa8u: goto label_1eaaa8;
        case 0x1eaabcu: goto label_1eaabc;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaad4u: goto label_1eaad4;
        case 0x1eaaf0u: goto label_1eaaf0;
        case 0x1eaaf8u: goto label_1eaaf8;
        case 0x1eab04u: goto label_1eab04;
        case 0x1eab14u: goto label_1eab14;
        default: break;
    }

    ctx->pc = 0x1ea830u;

    // 0x1ea830: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ea834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ea838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea844: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1ea844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1ea848:
    // 0x1ea848: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x1ea848u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ea84c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA84Cu;
    {
        const bool branch_taken_0x1ea84c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea84c) {
            ctx->pc = 0x1EA864u;
            goto label_1ea864;
        }
    }
    ctx->pc = 0x1EA854u;
    // 0x1ea854: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1ea854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ea858: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1ea858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1ea85c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EA85Cu;
    {
        const bool branch_taken_0x1ea85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA85Cu;
        // 0x1ea860: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea85c) {
            ctx->pc = 0x1EA8B8u;
            goto label_1ea8b8;
        }
    }
    ctx->pc = 0x1EA864u;
label_1ea864:
    // 0x1ea864: 0x0  nop
    ctx->pc = 0x1ea864u;
    // NOP
    // 0x1ea868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea86c: 0xc07abcc  jal         func_1EAF30
    ctx->pc = 0x1EA86Cu;
    SET_GPR_U32(ctx, 31, 0x1EA874u);
    ctx->pc = 0x1EA870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA86Cu;
    // 0x1ea870: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAF30u, 0x1EA86Cu, 0x1EA874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA874u;
label_1ea874:
    // 0x1ea874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea878: 0xc07aad4  jal         func_1EAB50
    ctx->pc = 0x1EA878u;
    SET_GPR_U32(ctx, 31, 0x1EA880u);
    ctx->pc = 0x1EA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA878u;
    // 0x1ea87c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB50u, 0x1EA878u, 0x1EA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA880u;
label_1ea880:
    // 0x1ea880: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ea880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ea884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA884u;
    {
        const bool branch_taken_0x1ea884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea884) {
            ctx->pc = 0x1EA894u;
            goto label_1ea894;
        }
    }
    ctx->pc = 0x1EA88Cu;
    // 0x1ea88c: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1EA88Cu;
    SET_GPR_U32(ctx, 31, 0x1EA894u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EA88Cu, 0x1EA894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA894u;
label_1ea894:
    // 0x1ea894: 0x0  nop
    ctx->pc = 0x1ea894u;
    // NOP
    // 0x1ea898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea89c: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1EA89Cu;
    SET_GPR_U32(ctx, 31, 0x1EA8A4u);
    ctx->pc = 0x1EA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA89Cu;
    // 0x1ea8a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1EA89Cu, 0x1EA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8A4u;
label_1ea8a4:
    // 0x1ea8a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ea8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ea8a8: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1EA8A8u;
    {
        const bool branch_taken_0x1ea8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8a8) {
            ctx->pc = 0x1EA848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea848;
        }
    }
    ctx->pc = 0x1EA8B0u;
    // 0x1ea8b0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1EA8B0u;
    {
        const bool branch_taken_0x1ea8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8b0) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA8B8u;
label_1ea8b8:
    // 0x1ea8b8: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1ea8b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ea8bc: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x1EA8BCu;
    {
        const bool branch_taken_0x1ea8bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8BCu;
        // 0x1ea8c0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8bc) {
            ctx->pc = 0x1EAAE8u;
            goto label_1eaae8;
        }
    }
    ctx->pc = 0x1EA8C4u;
    // 0x1ea8c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea8c8: 0x24634140  addiu       $v1, $v1, 0x4140
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16704));
    // 0x1ea8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea8d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ea8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea8d4: 0x400008  jr          $v0
    ctx->pc = 0x1EA8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA8DCu: goto label_1ea8dc;
            case 0x1EA8F4u: goto label_1ea8f4;
            case 0x1EA918u: goto label_1ea918;
            case 0x1EA930u: goto label_1ea930;
            case 0x1EA960u: goto label_1ea960;
            case 0x1EA984u: goto label_1ea984;
            case 0x1EA9A8u: goto label_1ea9a8;
            case 0x1EA9D8u: goto label_1ea9d8;
            case 0x1EAA14u: goto label_1eaa14;
            case 0x1EAA2Cu: goto label_1eaa2c;
            case 0x1EAA50u: goto label_1eaa50;
            case 0x1EAA9Cu: goto label_1eaa9c;
            case 0x1EAAB0u: goto label_1eaab0;
            case 0x1EAAE8u: goto label_1eaae8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA8D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EA8DCu;
label_1ea8dc:
    // 0x1ea8dc: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea8e0: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA8E0u;
    SET_GPR_U32(ctx, 31, 0x1EA8E8u);
    ctx->pc = 0x1EA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8E0u;
    // 0x1ea8e4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA8E0u, 0x1EA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8E8u;
label_1ea8e8:
    // 0x1ea8e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea8ec: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1EA8ECu;
    {
        const bool branch_taken_0x1ea8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8ECu;
        // 0x1ea8f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8ec) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA8F4u;
label_1ea8f4:
    // 0x1ea8f4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea8f8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA8F8u;
    SET_GPR_U32(ctx, 31, 0x1EA900u);
    ctx->pc = 0x1EA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8F8u;
    // 0x1ea8fc: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA8F8u, 0x1EA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA900u;
label_1ea900:
    // 0x1ea900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea904: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA904u;
    SET_GPR_U32(ctx, 31, 0x1EA90Cu);
    ctx->pc = 0x1EA908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA904u;
    // 0x1ea908: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA904u, 0x1EA90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA90Cu;
label_1ea90c:
    // 0x1ea90c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea910: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1EA910u;
    {
        const bool branch_taken_0x1ea910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA910u;
        // 0x1ea914: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea910) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA918u;
label_1ea918:
    // 0x1ea918: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea91c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA91Cu;
    SET_GPR_U32(ctx, 31, 0x1EA924u);
    ctx->pc = 0x1EA920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA91Cu;
    // 0x1ea920: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA91Cu, 0x1EA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA924u;
label_1ea924:
    // 0x1ea924: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea928: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1EA928u;
    {
        const bool branch_taken_0x1ea928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA928u;
        // 0x1ea92c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea928) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA930u;
label_1ea930:
    // 0x1ea930: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea934: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA934u;
    SET_GPR_U32(ctx, 31, 0x1EA93Cu);
    ctx->pc = 0x1EA938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA934u;
    // 0x1ea938: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA934u, 0x1EA93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA93Cu;
label_1ea93c:
    // 0x1ea93c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea940: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA940u;
    SET_GPR_U32(ctx, 31, 0x1EA948u);
    ctx->pc = 0x1EA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA940u;
    // 0x1ea944: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA940u, 0x1EA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA948u;
label_1ea948:
    // 0x1ea948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea94c: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA94Cu;
    SET_GPR_U32(ctx, 31, 0x1EA954u);
    ctx->pc = 0x1EA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA94Cu;
    // 0x1ea950: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA94Cu, 0x1EA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA954u;
label_1ea954:
    // 0x1ea954: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea958: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1EA958u;
    {
        const bool branch_taken_0x1ea958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA958u;
        // 0x1ea95c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea958) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA960u;
label_1ea960:
    // 0x1ea960: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea964: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA964u;
    SET_GPR_U32(ctx, 31, 0x1EA96Cu);
    ctx->pc = 0x1EA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA964u;
    // 0x1ea968: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA964u, 0x1EA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA96Cu;
label_1ea96c:
    // 0x1ea96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea970: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA970u;
    SET_GPR_U32(ctx, 31, 0x1EA978u);
    ctx->pc = 0x1EA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA970u;
    // 0x1ea974: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA970u, 0x1EA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA978u;
label_1ea978:
    // 0x1ea978: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea97c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1EA97Cu;
    {
        const bool branch_taken_0x1ea97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA97Cu;
        // 0x1ea980: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea97c) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA984u;
label_1ea984:
    // 0x1ea984: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea988: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA988u;
    SET_GPR_U32(ctx, 31, 0x1EA990u);
    ctx->pc = 0x1EA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA988u;
    // 0x1ea98c: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA988u, 0x1EA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA990u;
label_1ea990:
    // 0x1ea990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea994: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA994u;
    SET_GPR_U32(ctx, 31, 0x1EA99Cu);
    ctx->pc = 0x1EA998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA994u;
    // 0x1ea998: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA994u, 0x1EA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA99Cu;
label_1ea99c:
    // 0x1ea99c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea9a0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1EA9A0u;
    {
        const bool branch_taken_0x1ea9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A0u;
        // 0x1ea9a4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9a0) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA9A8u;
label_1ea9a8:
    // 0x1ea9a8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea9ac: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9ACu;
    SET_GPR_U32(ctx, 31, 0x1EA9B4u);
    ctx->pc = 0x1EA9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9ACu;
    // 0x1ea9b0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9ACu, 0x1EA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9B4u;
label_1ea9b4:
    // 0x1ea9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9b8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9B8u;
    SET_GPR_U32(ctx, 31, 0x1EA9C0u);
    ctx->pc = 0x1EA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9B8u;
    // 0x1ea9bc: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9B8u, 0x1EA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9C0u;
label_1ea9c0:
    // 0x1ea9c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9c4: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9C4u;
    SET_GPR_U32(ctx, 31, 0x1EA9CCu);
    ctx->pc = 0x1EA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9C4u;
    // 0x1ea9c8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9C4u, 0x1EA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9CCu;
label_1ea9cc:
    // 0x1ea9cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea9d0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1EA9D0u;
    {
        const bool branch_taken_0x1ea9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D0u;
        // 0x1ea9d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9d0) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EA9D8u;
label_1ea9d8:
    // 0x1ea9d8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea9dc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9DCu;
    SET_GPR_U32(ctx, 31, 0x1EA9E4u);
    ctx->pc = 0x1EA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9DCu;
    // 0x1ea9e0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9DCu, 0x1EA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9E4u;
label_1ea9e4:
    // 0x1ea9e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9e8: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA9E8u;
    SET_GPR_U32(ctx, 31, 0x1EA9F0u);
    ctx->pc = 0x1EA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9E8u;
    // 0x1ea9ec: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA9E8u, 0x1EA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9F0u;
label_1ea9f0:
    // 0x1ea9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9f4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA9F4u;
    SET_GPR_U32(ctx, 31, 0x1EA9FCu);
    ctx->pc = 0x1EA9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9F4u;
    // 0x1ea9f8: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA9F4u, 0x1EA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9FCu;
label_1ea9fc:
    // 0x1ea9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa00: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAA00u;
    SET_GPR_U32(ctx, 31, 0x1EAA08u);
    ctx->pc = 0x1EAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA00u;
    // 0x1eaa04: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAA00u, 0x1EAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA08u;
label_1eaa08:
    // 0x1eaa08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eaa0c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1EAA0Cu;
    {
        const bool branch_taken_0x1eaa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA0Cu;
        // 0x1eaa10: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa0c) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EAA14u;
label_1eaa14:
    // 0x1eaa14: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaa18: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA18u;
    SET_GPR_U32(ctx, 31, 0x1EAA20u);
    ctx->pc = 0x1EAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA18u;
    // 0x1eaa1c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA18u, 0x1EAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA20u;
label_1eaa20:
    // 0x1eaa20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eaa24: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1EAA24u;
    {
        const bool branch_taken_0x1eaa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA24u;
        // 0x1eaa28: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa24) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EAA2Cu;
label_1eaa2c:
    // 0x1eaa2c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaa30: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA30u;
    SET_GPR_U32(ctx, 31, 0x1EAA38u);
    ctx->pc = 0x1EAA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA30u;
    // 0x1eaa34: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA30u, 0x1EAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA38u;
label_1eaa38:
    // 0x1eaa38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa3c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA44u);
    ctx->pc = 0x1EAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA3Cu;
    // 0x1eaa40: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA3Cu, 0x1EAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA44u;
label_1eaa44:
    // 0x1eaa44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eaa48: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1EAA48u;
    {
        const bool branch_taken_0x1eaa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA48u;
        // 0x1eaa4c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa48) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EAA50u;
label_1eaa50:
    // 0x1eaa50: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x1eaa50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1eaa54: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x1eaa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1eaa58: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x1eaa58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1eaa5c: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x1eaa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1eaa60: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x1eaa60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1eaa64: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x1eaa64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1eaa68: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1eaa68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1eaa6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1eaa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1eaa70: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1eaa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1eaa74: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1eaa74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1eaa78: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1eaa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1eaa7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eaa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eaa80: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAA80u;
    SET_GPR_U32(ctx, 31, 0x1EAA88u);
    ctx->pc = 0x1EAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA80u;
    // 0x1eaa84: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAA80u, 0x1EAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA88u;
label_1eaa88:
    // 0x1eaa88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa8c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA94u);
    ctx->pc = 0x1EAA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA8Cu;
    // 0x1eaa90: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA8Cu, 0x1EAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA94u;
label_1eaa94:
    // 0x1eaa94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1EAA94u;
    {
        const bool branch_taken_0x1eaa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA94u;
        // 0x1eaa98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa94) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EAA9Cu;
label_1eaa9c:
    // 0x1eaa9c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaaa0: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAAA0u;
    SET_GPR_U32(ctx, 31, 0x1EAAA8u);
    ctx->pc = 0x1EAAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAA0u;
    // 0x1eaaa4: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAAA0u, 0x1EAAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAA8u;
label_1eaaa8:
    // 0x1eaaa8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EAAA8u;
    {
        const bool branch_taken_0x1eaaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAA8u;
        // 0x1eaaac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaa8) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EAAB0u;
label_1eaab0:
    // 0x1eaab0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaab4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAAB4u;
    SET_GPR_U32(ctx, 31, 0x1EAABCu);
    ctx->pc = 0x1EAAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAB4u;
    // 0x1eaab8: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAAB4u, 0x1EAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAABCu;
label_1eaabc:
    // 0x1eaabc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaac0: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAAC0u;
    SET_GPR_U32(ctx, 31, 0x1EAAC8u);
    ctx->pc = 0x1EAAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAC0u;
    // 0x1eaac4: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAAC0u, 0x1EAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAC8u;
label_1eaac8:
    // 0x1eaac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaacc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAACCu;
    SET_GPR_U32(ctx, 31, 0x1EAAD4u);
    ctx->pc = 0x1EAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAACCu;
    // 0x1eaad0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAACCu, 0x1EAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAD4u;
label_1eaad4:
    // 0x1eaad4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1eaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1eaad8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eaadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eaae0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EAAE0u;
    {
        const bool branch_taken_0x1eaae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAE0u;
        // 0x1eaae4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaae0) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EAAE8u;
label_1eaae8:
    // 0x1eaae8: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1EAAE8u;
    SET_GPR_U32(ctx, 31, 0x1EAAF0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EAAE8u, 0x1EAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAF0u;
label_1eaaf0:
    // 0x1eaaf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EAAF0u;
    {
        const bool branch_taken_0x1eaaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaaf0) {
            ctx->pc = 0x1EAB14u;
            goto label_1eab14;
        }
    }
    ctx->pc = 0x1EAAF8u;
label_1eaaf8:
    // 0x1eaaf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eaafc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAAFCu;
    SET_GPR_U32(ctx, 31, 0x1EAB04u);
    ctx->pc = 0x1EAB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAFCu;
    // 0x1eab00: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAAFCu, 0x1EAB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB04u;
label_1eab04:
    // 0x1eab04: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eab08: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1eab0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eab10: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1eab10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1eab14:
    // 0x1eab14: 0x0  nop
    ctx->pc = 0x1eab14u;
    // NOP
    // 0x1eab18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eab1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eab20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1eab20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1eab24: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1eab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eab28: 0x1043fff3  beq         $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1EAB28u;
    {
        const bool branch_taken_0x1eab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eab28) {
            ctx->pc = 0x1EAAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaaf8;
        }
    }
    ctx->pc = 0x1EAB30u;
    // 0x1eab30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eab34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eab34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eab38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eab38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB3Cu;
        // 0x1eab40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAB44u;
}
