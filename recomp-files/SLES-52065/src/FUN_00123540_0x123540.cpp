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

// Function: FUN_00123540
// Address: 0x123540 - 0x123698
void FUN_00123540_0x123540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123540_0x123540");
#endif

    switch (ctx->pc) {
        case 0x1235b4u: goto label_1235b4;
        case 0x1235bcu: goto label_1235bc;
        case 0x1235c4u: goto label_1235c4;
        case 0x1235e8u: goto label_1235e8;
        case 0x1235f0u: goto label_1235f0;
        case 0x123604u: goto label_123604;
        case 0x123618u: goto label_123618;
        case 0x123664u: goto label_123664;
        default: break;
    }

    ctx->pc = 0x123540u;

    // 0x123540: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x123540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x123544: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x123544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x123548: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x123548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12354c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x12354cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x123550: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x123550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x123554: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x123554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x123558: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x123558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12355c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x12355cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x123560: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x123560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x123564: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x123564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x123568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x123568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12356c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x12356cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x123570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x123570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x123574: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x123574u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12357c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12357cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x123580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x123584: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x123584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123588: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x123588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12358c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x12358cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123590: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x123590u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x123594: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x123594u;
    {
        const bool branch_taken_0x123594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x123598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123594u;
        // 0x123598: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123594) {
            ctx->pc = 0x1235BCu;
            goto label_1235bc;
        }
    }
    ctx->pc = 0x12359Cu;
    // 0x12359c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x12359cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1235a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1235a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1235a4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1235a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1235a8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1235a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1235ac: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1235ACu;
    SET_GPR_U32(ctx, 31, 0x1235B4u);
    ctx->pc = 0x1235B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235ACu;
    // 0x1235b0: 0x24a5ea50  addiu       $a1, $a1, -0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1235ACu, 0x1235B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235B4u;
label_1235b4:
    // 0x1235b4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1235B4u;
    SET_GPR_U32(ctx, 31, 0x1235BCu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1235B4u, 0x1235BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235BCu;
label_1235bc:
    // 0x1235bc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1235BCu;
    SET_GPR_U32(ctx, 31, 0x1235C4u);
    ctx->pc = 0x1235C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235BCu;
    // 0x1235c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1235BCu, 0x1235C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235C4u;
label_1235c4:
    // 0x1235c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1235c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235c8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1235C8u;
    {
        const bool branch_taken_0x1235c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1235CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235C8u;
        // 0x1235cc: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235c8) {
            ctx->pc = 0x1235F4u;
            goto label_1235f4;
        }
    }
    ctx->pc = 0x1235D0u;
    // 0x1235d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1235d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1235d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1235d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1235d8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1235d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1235dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1235dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1235e0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1235E0u;
    SET_GPR_U32(ctx, 31, 0x1235E8u);
    ctx->pc = 0x1235E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235E0u;
    // 0x1235e4: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1235E0u, 0x1235E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235E8u;
label_1235e8:
    // 0x1235e8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1235E8u;
    SET_GPR_U32(ctx, 31, 0x1235F0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1235E8u, 0x1235F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235F0u;
label_1235f0:
    // 0x1235f0: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1235f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1235f4:
    // 0x1235f4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1235F4u;
    {
        const bool branch_taken_0x1235f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F4u;
        // 0x1235f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f4) {
            ctx->pc = 0x123624u;
            goto label_123624;
        }
    }
    ctx->pc = 0x1235FCu;
    // 0x1235fc: 0xc048de8  jal         func_1237A0
    ctx->pc = 0x1235FCu;
    SET_GPR_U32(ctx, 31, 0x123604u);
    ctx->pc = 0x123600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235FCu;
    // 0x123600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237A0u, 0x1235FCu, 0x123604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123604u;
label_123604:
    // 0x123604: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x123604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123608: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x123608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12360c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x12360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123610: 0xc048da8  jal         func_1236A0
    ctx->pc = 0x123610u;
    SET_GPR_U32(ctx, 31, 0x123618u);
    ctx->pc = 0x123614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123610u;
    // 0x123614: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236A0u, 0x123610u, 0x123618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123618u;
label_123618:
    // 0x123618: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x123618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12361c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x123620: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x123620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_123624:
    // 0x123624: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x123624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x123628: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x123628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12362c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123634: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x123634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x123638: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x123638u;
    {
        const bool branch_taken_0x123638 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123638u;
        // 0x12363c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123638) {
            ctx->pc = 0x123648u;
            goto label_123648;
        }
    }
    ctx->pc = 0x123640u;
    // 0x123640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123640u;
    {
        const bool branch_taken_0x123640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123640u;
        // 0x123644: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123640) {
            ctx->pc = 0x12364Cu;
            goto label_12364c;
        }
    }
    ctx->pc = 0x123648u;
label_123648:
    // 0x123648: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x123648u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
label_12364c:
    // 0x12364c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x12364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x123650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x123654: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x123654u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x123658: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x123658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x12365c: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x12365Cu;
    SET_GPR_U32(ctx, 31, 0x123664u);
    ctx->pc = 0x123660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12365Cu;
    // 0x123660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x12365Cu, 0x123664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123664u;
label_123664:
    // 0x123664: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x123664u;
    {
        const bool branch_taken_0x123664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123664u;
        // 0x123668: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123664) {
            ctx->pc = 0x123670u;
            goto label_123670;
        }
    }
    ctx->pc = 0x12366Cu;
    // 0x12366c: 0xaed0000c  sw          $s0, 0xC($s6)
    ctx->pc = 0x12366cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 16));
label_123670:
    // 0x123670: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x123670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123674: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x123674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123678: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x123678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12367c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12367cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123680: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x123680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12368c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12368cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123690: 0x3e00008  jr          $ra
    ctx->pc = 0x123690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123690u;
        // 0x123694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123698u;
}
