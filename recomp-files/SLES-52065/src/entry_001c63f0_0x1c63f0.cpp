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

// Function: entry_001c63f0
// Address: 0x1c63f0 - 0x1c6488
void entry_001c63f0_0x1c63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c63f0_0x1c63f0");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x1c63f0u;

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
    ctx->pc = 0x1c6488u;
}
