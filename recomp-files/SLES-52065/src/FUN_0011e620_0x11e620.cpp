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

// Function: FUN_0011e620
// Address: 0x11e620 - 0x11e8e0
void FUN_0011e620_0x11e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e620_0x11e620");
#endif

    switch (ctx->pc) {
        case 0x11e648u: goto label_11e648;
        case 0x11e668u: goto label_11e668;
        case 0x11e680u: goto label_11e680;
        case 0x11e6a0u: goto label_11e6a0;
        case 0x11e6b4u: goto label_11e6b4;
        case 0x11e6c0u: goto label_11e6c0;
        case 0x11e6d0u: goto label_11e6d0;
        case 0x11e6dcu: goto label_11e6dc;
        case 0x11e6f4u: goto label_11e6f4;
        case 0x11e714u: goto label_11e714;
        case 0x11e720u: goto label_11e720;
        case 0x11e740u: goto label_11e740;
        case 0x11e758u: goto label_11e758;
        case 0x11e780u: goto label_11e780;
        case 0x11e7e0u: goto label_11e7e0;
        case 0x11e7ecu: goto label_11e7ec;
        case 0x11e7f8u: goto label_11e7f8;
        case 0x11e804u: goto label_11e804;
        case 0x11e824u: goto label_11e824;
        case 0x11e830u: goto label_11e830;
        case 0x11e854u: goto label_11e854;
        case 0x11e86cu: goto label_11e86c;
        case 0x11e894u: goto label_11e894;
        default: break;
    }

    ctx->pc = 0x11e620u;

    // 0x11e620: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x11e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x11e624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11e624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11e628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11e62c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11e62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11e634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11e638: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11e638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e63c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11e63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e640: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11E640u;
    SET_GPR_U32(ctx, 31, 0x11E648u);
    ctx->pc = 0x11E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E640u;
    // 0x11e644: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11E640u, 0x11E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E648u;
label_11e648:
    // 0x11e648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E648u;
    {
        const bool branch_taken_0x11e648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E648u;
        // 0x11e64c: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e648) {
            ctx->pc = 0x11E658u;
            goto label_11e658;
        }
    }
    ctx->pc = 0x11E650u;
    // 0x11e650: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x11E650u;
    {
        const bool branch_taken_0x11e650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E650u;
        // 0x11e654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e650) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E658u;
label_11e658:
    // 0x11e658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e65c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e660: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E660u;
    SET_GPR_U32(ctx, 31, 0x11E668u);
    ctx->pc = 0x11E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E660u;
    // 0x11e664: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E660u, 0x11E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E668u;
label_11e668:
    // 0x11e668: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e66c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e678: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E678u;
    SET_GPR_U32(ctx, 31, 0x11E680u);
    ctx->pc = 0x11E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E678u;
    // 0x11e67c: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E678u, 0x11E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E680u;
label_11e680:
    // 0x11e680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e684: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E684u;
    {
        const bool branch_taken_0x11e684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E684u;
        // 0x11e688: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e684) {
            ctx->pc = 0x11E698u;
            goto label_11e698;
        }
    }
    ctx->pc = 0x11E68Cu;
    // 0x11e68c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x11e68cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e690: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x11E690u;
    {
        const bool branch_taken_0x11e690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e690) {
            ctx->pc = 0x11E7B8u;
            goto label_11e7b8;
        }
    }
    ctx->pc = 0x11E698u;
label_11e698:
    // 0x11e698: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E698u;
    SET_GPR_U32(ctx, 31, 0x11E6A0u);
    ctx->pc = 0x11E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E698u;
    // 0x11e69c: 0x26450104  addiu       $a1, $s2, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E698u, 0x11E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6A0u;
label_11e6a0:
    // 0x11e6a0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E6A0u;
    {
        const bool branch_taken_0x11e6a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6A0u;
        // 0x11e6a4: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a0) {
            ctx->pc = 0x11E6C8u;
            goto label_11e6c8;
        }
    }
    ctx->pc = 0x11E6A8u;
    // 0x11e6a8: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x11e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x11e6ac: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E6ACu;
    SET_GPR_U32(ctx, 31, 0x11E6B4u);
    ctx->pc = 0x11E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6ACu;
    // 0x11e6b0: 0x264503c4  addiu       $a1, $s2, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E6ACu, 0x11E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6B4u;
label_11e6b4:
    // 0x11e6b4: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x11e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x11e6b8: 0xc080664  jal         func_201990
    ctx->pc = 0x11E6B8u;
    SET_GPR_U32(ctx, 31, 0x11E6C0u);
    ctx->pc = 0x11E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6B8u;
    // 0x11e6bc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E6B8u, 0x11E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6C0u;
label_11e6c0:
    // 0x11e6c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E6C0u;
    {
        const bool branch_taken_0x11e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6C0u;
        // 0x11e6c4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6c0) {
            ctx->pc = 0x11E6D4u;
            goto label_11e6d4;
        }
    }
    ctx->pc = 0x11E6C8u;
label_11e6c8:
    // 0x11e6c8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E6C8u;
    SET_GPR_U32(ctx, 31, 0x11E6D0u);
    ctx->pc = 0x11E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6C8u;
    // 0x11e6cc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E6C8u, 0x11E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6D0u;
label_11e6d0:
    // 0x11e6d0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_11e6d4:
    // 0x11e6d4: 0xc080664  jal         func_201990
    ctx->pc = 0x11E6D4u;
    SET_GPR_U32(ctx, 31, 0x11E6DCu);
    ctx->pc = 0x11E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6D4u;
    // 0x11e6d8: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E6D4u, 0x11E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6DCu;
label_11e6dc:
    // 0x11e6dc: 0x8e420538  lw          $v0, 0x538($s2)
    ctx->pc = 0x11e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1336)));
    // 0x11e6e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e6e4: 0x14450015  bne         $v0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E6E4u;
    {
        const bool branch_taken_0x11e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6E4u;
        // 0x11e6e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6e4) {
            ctx->pc = 0x11E73Cu;
            goto label_11e73c;
        }
    }
    ctx->pc = 0x11E6ECu;
    // 0x11e6ec: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11E6ECu;
    SET_GPR_U32(ctx, 31, 0x11E6F4u);
    ctx->pc = 0x11E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6ECu;
    // 0x11e6f0: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11E6ECu, 0x11E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6F4u;
label_11e6f4:
    // 0x11e6f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6f8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E6F8u;
    {
        const bool branch_taken_0x11e6f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6F8u;
        // 0x11e6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6f8) {
            ctx->pc = 0x11E708u;
            goto label_11e708;
        }
    }
    ctx->pc = 0x11E700u;
    // 0x11e700: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x11E700u;
    {
        const bool branch_taken_0x11e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E700u;
        // 0x11e704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e700) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E708u;
label_11e708:
    // 0x11e708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e70c: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11E70Cu;
    SET_GPR_U32(ctx, 31, 0x11E714u);
    ctx->pc = 0x11E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E70Cu;
    // 0x11e710: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11E70Cu, 0x11E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E714u;
label_11e714:
    // 0x11e714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e718: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11E718u;
    SET_GPR_U32(ctx, 31, 0x11E720u);
    ctx->pc = 0x11E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E718u;
    // 0x11e71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11E718u, 0x11E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E720u;
label_11e720:
    // 0x11e720: 0x260307ff  addiu       $v1, $s0, 0x7FF
    ctx->pc = 0x11e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
    // 0x11e724: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E724u;
    {
        const bool branch_taken_0x11e724 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E724u;
        // 0x11e728: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e724) {
            ctx->pc = 0x11E734u;
            goto label_11e734;
        }
    }
    ctx->pc = 0x11E72Cu;
    // 0x11e72c: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11e730: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11e730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_11e734:
    // 0x11e734: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x11E734u;
    {
        const bool branch_taken_0x11e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E734u;
        // 0x11e738: 0x212c0  sll         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e734) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E73Cu;
label_11e73c:
    // 0x11e73c: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x11e73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11e740:
    // 0x11e740: 0x8e420524  lw          $v0, 0x524($s2)
    ctx->pc = 0x11e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
    // 0x11e744: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e74c: 0x24c6e770  addiu       $a2, $a2, -0x1890
    ctx->pc = 0x11e74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961008));
    // 0x11e750: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E750u;
    SET_GPR_U32(ctx, 31, 0x11E758u);
    ctx->pc = 0x11E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E750u;
    // 0x11e754: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E750u, 0x11E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E758u;
label_11e758:
    // 0x11e758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e75c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E75Cu;
    {
        const bool branch_taken_0x11e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e75c) {
            ctx->pc = 0x11E76Cu;
            goto label_11e76c;
        }
    }
    ctx->pc = 0x11E764u;
    // 0x11e764: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x11E764u;
    {
        const bool branch_taken_0x11e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E764u;
        // 0x11e768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e764) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E76Cu;
label_11e76c:
    // 0x11e76c: 0x8e420524  lw          $v0, 0x524($s2)
    ctx->pc = 0x11e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
    // 0x11e770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e774: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x11e774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x11e778: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E778u;
    SET_GPR_U32(ctx, 31, 0x11E780u);
    ctx->pc = 0x11E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E778u;
    // 0x11e77c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E778u, 0x11E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E780u;
label_11e780:
    // 0x11e780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e784: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E784u;
    {
        const bool branch_taken_0x11e784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e784) {
            ctx->pc = 0x11E7ACu;
            goto label_11e7ac;
        }
    }
    ctx->pc = 0x11E78Cu;
    // 0x11e78c: 0x8e430524  lw          $v1, 0x524($s2)
    ctx->pc = 0x11e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
    // 0x11e790: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x11e790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11e794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11e798: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x11e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11e79c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11e7a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e7a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x11E7A4u;
    {
        const bool branch_taken_0x11e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7A4u;
        // 0x11e7a8: 0x212c0  sll         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7a4) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E7ACu;
label_11e7ac:
    // 0x11e7ac: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x11e7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x11e7b0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11E7B0u;
    {
        const bool branch_taken_0x11e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7B0u;
        // 0x11e7b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7b0) {
            ctx->pc = 0x11E740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e740;
        }
    }
    ctx->pc = 0x11E7B8u;
label_11e7b8:
    // 0x11e7b8: 0x824203c4  lb          $v0, 0x3C4($s2)
    ctx->pc = 0x11e7b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 964)));
    // 0x11e7bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E7BCu;
    {
        const bool branch_taken_0x11e7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7BCu;
        // 0x11e7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7bc) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E7C4u;
    // 0x11e7c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11E7C4u;
    {
        const bool branch_taken_0x11e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e7c4) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E7CCu;
label_11e7cc:
    // 0x11e7cc: 0x8e420538  lw          $v0, 0x538($s2)
    ctx->pc = 0x11e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1336)));
    // 0x11e7d0: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11E7D0u;
    {
        const bool branch_taken_0x11e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7D0u;
        // 0x11e7d4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7d0) {
            ctx->pc = 0x11E84Cu;
            goto label_11e84c;
        }
    }
    ctx->pc = 0x11E7D8u;
    // 0x11e7d8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E7D8u;
    SET_GPR_U32(ctx, 31, 0x11E7E0u);
    ctx->pc = 0x11E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7D8u;
    // 0x11e7dc: 0x26450104  addiu       $a1, $s2, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E7D8u, 0x11E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7E0u;
label_11e7e0:
    // 0x11e7e0: 0x264503c4  addiu       $a1, $s2, 0x3C4
    ctx->pc = 0x11e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 964));
    // 0x11e7e4: 0xc080664  jal         func_201990
    ctx->pc = 0x11E7E4u;
    SET_GPR_U32(ctx, 31, 0x11E7ECu);
    ctx->pc = 0x11E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7E4u;
    // 0x11e7e8: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E7E4u, 0x11E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7ECu;
label_11e7ec:
    // 0x11e7ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7f0: 0xc080664  jal         func_201990
    ctx->pc = 0x11E7F0u;
    SET_GPR_U32(ctx, 31, 0x11E7F8u);
    ctx->pc = 0x11E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7F0u;
    // 0x11e7f4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E7F0u, 0x11E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7F8u;
label_11e7f8:
    // 0x11e7f8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11e7fc: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11E7FCu;
    SET_GPR_U32(ctx, 31, 0x11E804u);
    ctx->pc = 0x11E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7FCu;
    // 0x11e800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11E7FCu, 0x11E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E804u;
label_11e804:
    // 0x11e804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e808: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E808u;
    {
        const bool branch_taken_0x11e808 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E808u;
        // 0x11e80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e808) {
            ctx->pc = 0x11E818u;
            goto label_11e818;
        }
    }
    ctx->pc = 0x11E810u;
    // 0x11e810: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11E810u;
    {
        const bool branch_taken_0x11e810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E810u;
        // 0x11e814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e810) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E818u;
label_11e818:
    // 0x11e818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e81c: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11E81Cu;
    SET_GPR_U32(ctx, 31, 0x11E824u);
    ctx->pc = 0x11E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E81Cu;
    // 0x11e820: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11E81Cu, 0x11E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E824u;
label_11e824:
    // 0x11e824: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e828: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11E828u;
    SET_GPR_U32(ctx, 31, 0x11E830u);
    ctx->pc = 0x11E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E828u;
    // 0x11e82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11E828u, 0x11E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E830u;
label_11e830:
    // 0x11e830: 0x2623000f  addiu       $v1, $s1, 0xF
    ctx->pc = 0x11e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x11e834: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E834u;
    {
        const bool branch_taken_0x11e834 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E834u;
        // 0x11e838: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e834) {
            ctx->pc = 0x11E844u;
            goto label_11e844;
        }
    }
    ctx->pc = 0x11E83Cu;
    // 0x11e83c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x11e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x11e840: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11e840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_11e844:
    // 0x11e844: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E844u;
    {
        const bool branch_taken_0x11e844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E844u;
        // 0x11e848: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e844) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E84Cu;
label_11e84c:
    // 0x11e84c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11e84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11e850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e854:
    // 0x11e854: 0x8e42052c  lw          $v0, 0x52C($s2)
    ctx->pc = 0x11e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1324)));
    // 0x11e858: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e858u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e85c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e860: 0x24c6e730  addiu       $a2, $a2, -0x18D0
    ctx->pc = 0x11e860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960944));
    // 0x11e864: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E864u;
    SET_GPR_U32(ctx, 31, 0x11E86Cu);
    ctx->pc = 0x11E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E864u;
    // 0x11e868: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E864u, 0x11E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E86Cu;
label_11e86c:
    // 0x11e86c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e870: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E870u;
    {
        const bool branch_taken_0x11e870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e870) {
            ctx->pc = 0x11E880u;
            goto label_11e880;
        }
    }
    ctx->pc = 0x11E878u;
    // 0x11e878: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11E878u;
    {
        const bool branch_taken_0x11e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E878u;
        // 0x11e87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e878) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E880u;
label_11e880:
    // 0x11e880: 0x8e42052c  lw          $v0, 0x52C($s2)
    ctx->pc = 0x11e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1324)));
    // 0x11e884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e888: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11e888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e88c: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E88Cu;
    SET_GPR_U32(ctx, 31, 0x11E894u);
    ctx->pc = 0x11E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E88Cu;
    // 0x11e890: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E88Cu, 0x11E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E894u;
label_11e894:
    // 0x11e894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e898: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E898u;
    {
        const bool branch_taken_0x11e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e898) {
            ctx->pc = 0x11E8BCu;
            goto label_11e8bc;
        }
    }
    ctx->pc = 0x11E8A0u;
    // 0x11e8a0: 0x8e43052c  lw          $v1, 0x52C($s2)
    ctx->pc = 0x11e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1324)));
    // 0x11e8a4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x11e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x11e8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11e8ac: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x11e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11e8b0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11e8b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E8B4u;
    {
        const bool branch_taken_0x11e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8B4u;
        // 0x11e8b8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8b4) {
            ctx->pc = 0x11E8C8u;
            goto label_11e8c8;
        }
    }
    ctx->pc = 0x11E8BCu;
label_11e8bc:
    // 0x11e8bc: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x11e8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x11e8c0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x11E8C0u;
    {
        const bool branch_taken_0x11e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8C0u;
        // 0x11e8c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8c0) {
            ctx->pc = 0x11E854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e854;
        }
    }
    ctx->pc = 0x11E8C8u;
label_11e8c8:
    // 0x11e8c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11e8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e8cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e8ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e8d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8D8u;
        // 0x11e8dc: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E8E0u;
}
