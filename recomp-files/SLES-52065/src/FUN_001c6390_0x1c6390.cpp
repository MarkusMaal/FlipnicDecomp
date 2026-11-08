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

// Function: FUN_001c6390
// Address: 0x1c6390 - 0x1c6520
void FUN_001c6390_0x1c6390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6390_0x1c6390");
#endif

    switch (ctx->pc) {
        case 0x1c63ccu: goto label_1c63cc;
        case 0x1c63d8u: goto label_1c63d8;
        case 0x1c63e8u: goto label_1c63e8;
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c63f8u: goto label_1c63f8;
        case 0x1c6408u: goto label_1c6408;
        case 0x1c6414u: goto label_1c6414;
        case 0x1c641cu: goto label_1c641c;
        case 0x1c6428u: goto label_1c6428;
        case 0x1c6448u: goto label_1c6448;
        case 0x1c6450u: goto label_1c6450;
        case 0x1c6464u: goto label_1c6464;
        case 0x1c6470u: goto label_1c6470;
        case 0x1c6480u: goto label_1c6480;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c6490u: goto label_1c6490;
        case 0x1c64b8u: goto label_1c64b8;
        case 0x1c64c4u: goto label_1c64c4;
        case 0x1c64d4u: goto label_1c64d4;
        case 0x1c64d8u: goto label_1c64d8;
        case 0x1c64e4u: goto label_1c64e4;
        default: break;
    }

    ctx->pc = 0x1c6390u;

    // 0x1c6390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c6390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c6394: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c6398: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1c6398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c639c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c63a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c63a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c63a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c63a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c63a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c63a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c63ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c63acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c63b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c63b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c63b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63b8: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c63bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c63c0: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x1c63c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1c63c4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C63C4u;
    SET_GPR_U32(ctx, 31, 0x1C63CCu);
    ctx->pc = 0x1C63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63C4u;
    // 0x1c63c8: 0x24a51f80  addiu       $a1, $a1, 0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C63C4u, 0x1C63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63CCu;
label_1c63cc:
    // 0x1c63cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c63ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63d0: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C63D0u;
    SET_GPR_U32(ctx, 31, 0x1C63D8u);
    ctx->pc = 0x1C63D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63D0u;
    // 0x1c63d4: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C63D0u, 0x1C63D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63D8u;
label_1c63d8:
    // 0x1c63d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c63d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63dc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c63e0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C63E0u;
    SET_GPR_U32(ctx, 31, 0x1C63E8u);
    ctx->pc = 0x1C63E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63E0u;
    // 0x1c63e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C63E0u, 0x1C63E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63E8u;
label_1c63e8:
    // 0x1c63e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c63e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c63ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c63f0:
    // 0x1c63f0: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C63F0u;
    SET_GPR_U32(ctx, 31, 0x1C63F8u);
    ctx->pc = 0x1C63F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63F0u;
    // 0x1c63f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C63F0u, 0x1C63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63F8u;
label_1c63f8:
    // 0x1c63f8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c63f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c63fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c63fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6400: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C6400u;
    SET_GPR_U32(ctx, 31, 0x1C6408u);
    ctx->pc = 0x1C6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6400u;
    // 0x1c6404: 0x24a55940  addiu       $a1, $a1, 0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C6400u, 0x1C6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6408u;
label_1c6408:
    // 0x1c6408: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c6408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c640c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C640Cu;
    SET_GPR_U32(ctx, 31, 0x1C6414u);
    ctx->pc = 0x1C6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C640Cu;
    // 0x1c6410: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C640Cu, 0x1C6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6414u;
label_1c6414:
    // 0x1c6414: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6414u;
    SET_GPR_U32(ctx, 31, 0x1C641Cu);
    ctx->pc = 0x1C6418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6414u;
    // 0x1c6418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6414u, 0x1C641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C641Cu;
label_1c641c:
    // 0x1c641c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c641cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6420: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6420u;
    SET_GPR_U32(ctx, 31, 0x1C6428u);
    ctx->pc = 0x1C6424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6420u;
    // 0x1c6424: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6420u, 0x1C6428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6428u;
label_1c6428:
    // 0x1c6428: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c6428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c642c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c642cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c6430: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1c6430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c6434: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C6434u;
    {
        const bool branch_taken_0x1c6434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6434u;
        // 0x1c6438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6434) {
            ctx->pc = 0x1C63F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c63f0;
        }
    }
    ctx->pc = 0x1C643Cu;
    // 0x1c643c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c643cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6440: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6440u;
    SET_GPR_U32(ctx, 31, 0x1C6448u);
    ctx->pc = 0x1C6444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6440u;
    // 0x1c6444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6440u, 0x1C6448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6448u;
label_1c6448:
    // 0x1c6448: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C6448u;
    SET_GPR_U32(ctx, 31, 0x1C6450u);
    ctx->pc = 0x1C644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6448u;
    // 0x1c644c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C6448u, 0x1C6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6450u;
label_1c6450:
    // 0x1c6450: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c6450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c6454: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c6454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c6458: 0x24a51fd0  addiu       $a1, $a1, 0x1FD0
    ctx->pc = 0x1c6458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8144));
    // 0x1c645c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C645Cu;
    SET_GPR_U32(ctx, 31, 0x1C6464u);
    ctx->pc = 0x1C6460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C645Cu;
    // 0x1c6460: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C645Cu, 0x1C6464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6464u;
label_1c6464:
    // 0x1c6464: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6468: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C6468u;
    SET_GPR_U32(ctx, 31, 0x1C6470u);
    ctx->pc = 0x1C646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6468u;
    // 0x1c646c: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C6468u, 0x1C6470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6470u;
label_1c6470:
    // 0x1c6470: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6474: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c6474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c6478: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C6478u;
    SET_GPR_U32(ctx, 31, 0x1C6480u);
    ctx->pc = 0x1C647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6478u;
    // 0x1c647c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C6478u, 0x1C6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6480u;
label_1c6480:
    // 0x1c6480: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c6480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c6488:
    // 0x1c6488: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6488u;
    SET_GPR_U32(ctx, 31, 0x1C6490u);
    ctx->pc = 0x1C648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6488u;
    // 0x1c648c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6488u, 0x1C6490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6490u;
label_1c6490:
    // 0x1c6490: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c6490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c6494: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c6494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c6498: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1c6498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c649c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C649Cu;
    {
        const bool branch_taken_0x1c649c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c649c) {
            ctx->pc = 0x1C6488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6488;
        }
    }
    ctx->pc = 0x1C64A4u;
    // 0x1c64a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c64a8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c64ac: 0x24a51ff0  addiu       $a1, $a1, 0x1FF0
    ctx->pc = 0x1c64acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8176));
    // 0x1c64b0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C64B0u;
    SET_GPR_U32(ctx, 31, 0x1C64B8u);
    ctx->pc = 0x1C64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64B0u;
    // 0x1c64b4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C64B0u, 0x1C64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64B8u;
label_1c64b8:
    // 0x1c64b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c64b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64bc: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C64BCu;
    SET_GPR_U32(ctx, 31, 0x1C64C4u);
    ctx->pc = 0x1C64C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64BCu;
    // 0x1c64c0: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C64BCu, 0x1C64C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64C4u;
label_1c64c4:
    // 0x1c64c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c64c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64c8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c64c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c64cc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C64CCu;
    SET_GPR_U32(ctx, 31, 0x1C64D4u);
    ctx->pc = 0x1C64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64CCu;
    // 0x1c64d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C64CCu, 0x1C64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64D4u;
label_1c64d4:
    // 0x1c64d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c64d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c64d8:
    // 0x1c64d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c64d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64dc: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C64DCu;
    SET_GPR_U32(ctx, 31, 0x1C64E4u);
    ctx->pc = 0x1C64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64DCu;
    // 0x1c64e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C64DCu, 0x1C64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64E4u;
label_1c64e4:
    // 0x1c64e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c64e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c64e8: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x1c64e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c64ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C64ECu;
    {
        const bool branch_taken_0x1c64ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64ECu;
        // 0x1c64f0: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64ec) {
            ctx->pc = 0x1C64D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c64d8;
        }
    }
    ctx->pc = 0x1C64F4u;
    // 0x1c64f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c64f8: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1c64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x1c64fc: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x1c64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x1c6500: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c6500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6504: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c6504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c6508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c650c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c650cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6518: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6518u;
        // 0x1c651c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6520u;
}
