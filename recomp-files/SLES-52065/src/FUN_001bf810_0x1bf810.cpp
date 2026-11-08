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

// Function: FUN_001bf810
// Address: 0x1bf810 - 0x1bfc18
void FUN_001bf810_0x1bf810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf810_0x1bf810");
#endif

    switch (ctx->pc) {
        case 0x1bf838u: goto label_1bf838;
        case 0x1bf858u: goto label_1bf858;
        case 0x1bf860u: goto label_1bf860;
        case 0x1bf870u: goto label_1bf870;
        case 0x1bf878u: goto label_1bf878;
        case 0x1bf884u: goto label_1bf884;
        case 0x1bf88cu: goto label_1bf88c;
        case 0x1bf89cu: goto label_1bf89c;
        case 0x1bf8acu: goto label_1bf8ac;
        case 0x1bf8b8u: goto label_1bf8b8;
        case 0x1bf8c0u: goto label_1bf8c0;
        case 0x1bf8d0u: goto label_1bf8d0;
        case 0x1bf8e0u: goto label_1bf8e0;
        case 0x1bf8e8u: goto label_1bf8e8;
        case 0x1bf8f8u: goto label_1bf8f8;
        case 0x1bf908u: goto label_1bf908;
        case 0x1bf910u: goto label_1bf910;
        case 0x1bf920u: goto label_1bf920;
        case 0x1bf930u: goto label_1bf930;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf960u: goto label_1bf960;
        case 0x1bf974u: goto label_1bf974;
        case 0x1bf980u: goto label_1bf980;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa28u: goto label_1bfa28;
        case 0x1bfb40u: goto label_1bfb40;
        case 0x1bfb64u: goto label_1bfb64;
        case 0x1bfb7cu: goto label_1bfb7c;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfba0u: goto label_1bfba0;
        case 0x1bfbb4u: goto label_1bfbb4;
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfbd4u: goto label_1bfbd4;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfbf4u: goto label_1bfbf4;
        case 0x1bfc04u: goto label_1bfc04;
        default: break;
    }

    ctx->pc = 0x1bf810u;

    // 0x1bf810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bf810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bf814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bf818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bf81c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf824: 0x8c25f4f0  lw          $a1, -0xB10($at)
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bf828: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf82c: 0x8c26f4f8  lw          $a2, -0xB08($at)
    ctx->pc = 0x1bf82cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bf830: 0xc06ffb0  jal         func_1BFEC0
    ctx->pc = 0x1BF830u;
    SET_GPR_U32(ctx, 31, 0x1BF838u);
    ctx->pc = 0x1BF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF830u;
    // 0x1bf834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEC0u, 0x1BF830u, 0x1BF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF838u;
label_1bf838:
    // 0x1bf838: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1bf838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1bf83c: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1bf83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bf840: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1bf840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bf844: 0x10c2003a  beq         $a2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BF844u;
    {
        const bool branch_taken_0x1bf844 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf844) {
            ctx->pc = 0x1BF930u;
            goto label_1bf930;
        }
    }
    ctx->pc = 0x1BF84Cu;
    // 0x1bf84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf850: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF850u;
    SET_GPR_U32(ctx, 31, 0x1BF858u);
    ctx->pc = 0x1BF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF850u;
    // 0x1bf854: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF850u, 0x1BF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF858u;
label_1bf858:
    // 0x1bf858: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1BF858u;
    SET_GPR_U32(ctx, 31, 0x1BF860u);
    ctx->pc = 0x1BF85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF858u;
    // 0x1bf85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1BF858u, 0x1BF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF860u;
label_1bf860:
    // 0x1bf860: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bf864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf868: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF868u;
    SET_GPR_U32(ctx, 31, 0x1BF870u);
    ctx->pc = 0x1BF86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF868u;
    // 0x1bf86c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF868u, 0x1BF870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF870u;
label_1bf870:
    // 0x1bf870: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1BF870u;
    SET_GPR_U32(ctx, 31, 0x1BF878u);
    ctx->pc = 0x1BF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF870u;
    // 0x1bf874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1BF870u, 0x1BF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF878u;
label_1bf878:
    // 0x1bf878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf87c: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1BF87Cu;
    SET_GPR_U32(ctx, 31, 0x1BF884u);
    ctx->pc = 0x1BF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF87Cu;
    // 0x1bf880: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1BF87Cu, 0x1BF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF884u;
label_1bf884:
    // 0x1bf884: 0xc070044  jal         func_1C0110
    ctx->pc = 0x1BF884u;
    SET_GPR_U32(ctx, 31, 0x1BF88Cu);
    ctx->pc = 0x1BF888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF884u;
    // 0x1bf888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0110u, 0x1BF884u, 0x1BF88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF88Cu;
label_1bf88c:
    // 0x1bf88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf890: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf894: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF894u;
    SET_GPR_U32(ctx, 31, 0x1BF89Cu);
    ctx->pc = 0x1BF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF894u;
    // 0x1bf898: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF894u, 0x1BF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF89Cu;
label_1bf89c:
    // 0x1bf89c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8a4: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BF8A4u;
    SET_GPR_U32(ctx, 31, 0x1BF8ACu);
    ctx->pc = 0x1BF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8A4u;
    // 0x1bf8a8: 0x24a53690  addiu       $a1, $a1, 0x3690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BF8A4u, 0x1BF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8ACu;
label_1bf8ac:
    // 0x1bf8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8b0: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1BF8B0u;
    SET_GPR_U32(ctx, 31, 0x1BF8B8u);
    ctx->pc = 0x1BF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8B0u;
    // 0x1bf8b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1BF8B0u, 0x1BF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8B8u;
label_1bf8b8:
    // 0x1bf8b8: 0xc070064  jal         func_1C0190
    ctx->pc = 0x1BF8B8u;
    SET_GPR_U32(ctx, 31, 0x1BF8C0u);
    ctx->pc = 0x1BF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8B8u;
    // 0x1bf8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0190u, 0x1BF8B8u, 0x1BF8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8C0u;
label_1bf8c0:
    // 0x1bf8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bf8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf8c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF8C8u;
    SET_GPR_U32(ctx, 31, 0x1BF8D0u);
    ctx->pc = 0x1BF8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8C8u;
    // 0x1bf8cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF8C8u, 0x1BF8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8D0u;
label_1bf8d0:
    // 0x1bf8d0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8d8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BF8D8u;
    SET_GPR_U32(ctx, 31, 0x1BF8E0u);
    ctx->pc = 0x1BF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8D8u;
    // 0x1bf8dc: 0x24a53690  addiu       $a1, $a1, 0x3690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BF8D8u, 0x1BF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8E0u;
label_1bf8e0:
    // 0x1bf8e0: 0xc07007c  jal         func_1C01F0
    ctx->pc = 0x1BF8E0u;
    SET_GPR_U32(ctx, 31, 0x1BF8E8u);
    ctx->pc = 0x1BF8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8E0u;
    // 0x1bf8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C01F0u, 0x1BF8E0u, 0x1BF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8E8u;
label_1bf8e8:
    // 0x1bf8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bf8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf8f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF8F0u;
    SET_GPR_U32(ctx, 31, 0x1BF8F8u);
    ctx->pc = 0x1BF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8F0u;
    // 0x1bf8f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF8F0u, 0x1BF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8F8u;
label_1bf8f8:
    // 0x1bf8f8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf8fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf900: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BF900u;
    SET_GPR_U32(ctx, 31, 0x1BF908u);
    ctx->pc = 0x1BF904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF900u;
    // 0x1bf904: 0x24a53670  addiu       $a1, $a1, 0x3670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BF900u, 0x1BF908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF908u;
label_1bf908:
    // 0x1bf908: 0xc07009c  jal         func_1C0270
    ctx->pc = 0x1BF908u;
    SET_GPR_U32(ctx, 31, 0x1BF910u);
    ctx->pc = 0x1BF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF908u;
    // 0x1bf90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0270u, 0x1BF908u, 0x1BF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF910u;
label_1bf910:
    // 0x1bf910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf914: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bf914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf918: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF918u;
    SET_GPR_U32(ctx, 31, 0x1BF920u);
    ctx->pc = 0x1BF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF918u;
    // 0x1bf91c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF918u, 0x1BF920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF920u;
label_1bf920:
    // 0x1bf920: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf928: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BF928u;
    SET_GPR_U32(ctx, 31, 0x1BF930u);
    ctx->pc = 0x1BF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF928u;
    // 0x1bf92c: 0x24a53670  addiu       $a1, $a1, 0x3670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BF928u, 0x1BF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF930u;
label_1bf930:
    // 0x1bf930: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf934: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bf934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf938: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bf93c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BF93Cu;
    {
        const bool branch_taken_0x1bf93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF93Cu;
        // 0x1bf940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf93c) {
            ctx->pc = 0x1BF968u;
            goto label_1bf968;
        }
    }
    ctx->pc = 0x1BF944u;
    // 0x1bf944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf94c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF94Cu;
    SET_GPR_U32(ctx, 31, 0x1BF954u);
    ctx->pc = 0x1BF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF94Cu;
    // 0x1bf950: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF94Cu, 0x1BF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF954u;
label_1bf954:
    // 0x1bf954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf958: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1BF958u;
    SET_GPR_U32(ctx, 31, 0x1BF960u);
    ctx->pc = 0x1BF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF958u;
    // 0x1bf95c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1BF958u, 0x1BF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF960u;
label_1bf960:
    // 0x1bf960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF960u;
    {
        const bool branch_taken_0x1bf960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf960) {
            ctx->pc = 0x1BF980u;
            goto label_1bf980;
        }
    }
    ctx->pc = 0x1BF968u;
label_1bf968:
    // 0x1bf968: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf96c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF96Cu;
    SET_GPR_U32(ctx, 31, 0x1BF974u);
    ctx->pc = 0x1BF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF96Cu;
    // 0x1bf970: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF96Cu, 0x1BF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF974u;
label_1bf974:
    // 0x1bf974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf978: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1BF978u;
    SET_GPR_U32(ctx, 31, 0x1BF980u);
    ctx->pc = 0x1BF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF978u;
    // 0x1bf97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1BF978u, 0x1BF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF980u;
label_1bf980:
    // 0x1bf980: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf984: 0x8c25f4f0  lw          $a1, -0xB10($at)
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bf988: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf98c: 0x8c26f4f8  lw          $a2, -0xB08($at)
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bf990: 0xc06ffb0  jal         func_1BFEC0
    ctx->pc = 0x1BF990u;
    SET_GPR_U32(ctx, 31, 0x1BF998u);
    ctx->pc = 0x1BF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF990u;
    // 0x1bf994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEC0u, 0x1BF990u, 0x1BF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF998u;
label_1bf998:
    // 0x1bf998: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf99c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1bf99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1bf9a0: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x1bf9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf9a8: 0xc073080  jal         func_1CC200
    ctx->pc = 0x1BF9A8u;
    SET_GPR_U32(ctx, 31, 0x1BF9B0u);
    ctx->pc = 0x1BF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9A8u;
    // 0x1bf9ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC200u, 0x1BF9A8u, 0x1BF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9B0u;
label_1bf9b0:
    // 0x1bf9b0: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BF9B0u;
    SET_GPR_U32(ctx, 31, 0x1BF9B8u);
    ctx->pc = 0x1BF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9B0u;
    // 0x1bf9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BF9B0u, 0x1BF9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9B8u;
label_1bf9b8:
    // 0x1bf9b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf9bc: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1bf9c0: 0x8c22f4f0  lw          $v0, -0xB10($at)
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bf9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bf9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bf9cc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bf9d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9d4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf9d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf9dc: 0x254af4f8  addiu       $t2, $t2, -0xB08
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964472));
    // 0x1bf9e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bf9e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9e4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1bf9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1bf9e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf9ec: 0x8c22f4f8  lw          $v0, -0xB08($at)
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bf9f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1bf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1bf9f4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1bf9f8: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BF9F8u;
    SET_GPR_U32(ctx, 31, 0x1BFA00u);
    ctx->pc = 0x1BF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9F8u;
    // 0x1bf9fc: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BF9F8u, 0x1BFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA00u;
label_1bfa00:
    // 0x1bfa00: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1bfa00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1bfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bfa0c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bfa10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bfa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa14: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1bfa14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bfa18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa1c: 0x254af4f0  addiu       $t2, $t2, -0xB10
    ctx->pc = 0x1bfa1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964464));
    // 0x1bfa20: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BFA20u;
    SET_GPR_U32(ctx, 31, 0x1BFA28u);
    ctx->pc = 0x1BFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA20u;
    // 0x1bfa24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BFA20u, 0x1BFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA28u;
label_1bfa28:
    // 0x1bfa28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa30: 0x8c23f4f0  lw          $v1, -0xB10($at)
    ctx->pc = 0x1bfa30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bfa34: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BFA34u;
    {
        const bool branch_taken_0x1bfa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa34) {
            ctx->pc = 0x1BFA68u;
            goto label_1bfa68;
        }
    }
    ctx->pc = 0x1BFA3Cu;
    // 0x1bfa3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfa44: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1bfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bfa48: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFA48u;
    {
        const bool branch_taken_0x1bfa48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa48) {
            ctx->pc = 0x1BFA68u;
            goto label_1bfa68;
        }
    }
    ctx->pc = 0x1BFA50u;
    // 0x1bfa50: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bfa54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa58: 0xac22f4f0  sw          $v0, -0xB10($at)
    ctx->pc = 0x1bfa58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F0u, _value); } while (0);
    // 0x1bfa5c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1bfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1bfa60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa64: 0xac22f4f8  sw          $v0, -0xB08($at)
    ctx->pc = 0x1bfa64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F8u, _value); } while (0);
label_1bfa68:
    // 0x1bfa68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bfa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa70: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bfa74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFA74u;
    {
        const bool branch_taken_0x1bfa74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa74) {
            ctx->pc = 0x1BFA84u;
            goto label_1bfa84;
        }
    }
    ctx->pc = 0x1BFA7Cu;
    // 0x1bfa7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa80: 0xac20f4f0  sw          $zero, -0xB10($at)
    ctx->pc = 0x1bfa80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F4F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F0u, _value); } while (0);
label_1bfa84:
    // 0x1bfa84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa88: 0x8022f508  lb          $v0, -0xAF8($at)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F508u));
    // 0x1bfa8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFA8Cu;
    {
        const bool branch_taken_0x1bfa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa8c) {
            ctx->pc = 0x1BFAACu;
            goto label_1bfaac;
        }
    }
    ctx->pc = 0x1BFA94u;
    // 0x1bfa94: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1bfa98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa9c: 0xac23f500  sw          $v1, -0xB00($at)
    ctx->pc = 0x1bfa9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F500u, _value); } while (0);
    // 0x1bfaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfaa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfaa8: 0xa022f508  sb          $v0, -0xAF8($at)
    ctx->pc = 0x1bfaa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F508u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F508u, _value); } while (0);
label_1bfaac:
    // 0x1bfaac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfab0: 0x8022f518  lb          $v0, -0xAE8($at)
    ctx->pc = 0x1bfab0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F518u));
    // 0x1bfab4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFAB4u;
    {
        const bool branch_taken_0x1bfab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfab4) {
            ctx->pc = 0x1BFAD4u;
            goto label_1bfad4;
        }
    }
    ctx->pc = 0x1BFABCu;
    // 0x1bfabc: 0x24030172  addiu       $v1, $zero, 0x172
    ctx->pc = 0x1bfabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x1bfac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfac4: 0xac23f510  sw          $v1, -0xAF0($at)
    ctx->pc = 0x1bfac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F510u, _value); } while (0);
    // 0x1bfac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfacc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfad0: 0xa022f518  sb          $v0, -0xAE8($at)
    ctx->pc = 0x1bfad0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F518u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F518u, _value); } while (0);
label_1bfad4:
    // 0x1bfad4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfad8: 0x8022f528  lb          $v0, -0xAD8($at)
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F528u));
    // 0x1bfadc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFADCu;
    {
        const bool branch_taken_0x1bfadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfadc) {
            ctx->pc = 0x1BFAFCu;
            goto label_1bfafc;
        }
    }
    ctx->pc = 0x1BFAE4u;
    // 0x1bfae4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bfae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfaec: 0xac23f520  sw          $v1, -0xAE0($at)
    ctx->pc = 0x1bfaecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F520u, _value); } while (0);
    // 0x1bfaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfaf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfaf8: 0xa022f528  sb          $v0, -0xAD8($at)
    ctx->pc = 0x1bfaf8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F528u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F528u, _value); } while (0);
label_1bfafc:
    // 0x1bfafc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb00: 0x8022f538  lb          $v0, -0xAC8($at)
    ctx->pc = 0x1bfb00u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F538u));
    // 0x1bfb04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BFB04u;
    {
        const bool branch_taken_0x1bfb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb04) {
            ctx->pc = 0x1BFB28u;
            goto label_1bfb28;
        }
    }
    ctx->pc = 0x1BFB0Cu;
    // 0x1bfb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfb10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb14: 0xa022f538  sb          $v0, -0xAC8($at)
    ctx->pc = 0x1bfb14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F538u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F538u, _value); } while (0);
    // 0x1bfb18: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1bfb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1bfb1c: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x1bfb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1bfb20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb24: 0xac22f530  sw          $v0, -0xAD0($at)
    ctx->pc = 0x1bfb24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F530u, _value); } while (0);
label_1bfb28:
    // 0x1bfb28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb2c: 0xc42cf520  lwc1        $f12, -0xAE0($at)
    ctx->pc = 0x1bfb2cu;
    { uint32_t bits = FAST_READ32(0x36F520u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb34: 0xc42df530  lwc1        $f13, -0xAD0($at)
    ctx->pc = 0x1bfb34u;
    { uint32_t bits = FAST_READ32(0x36F530u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bfb38: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1BFB38u;
    SET_GPR_U32(ctx, 31, 0x1BFB40u);
    ctx->pc = 0x1BFB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB38u;
    // 0x1bfb3c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1BFB38u, 0x1BFB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB40u;
label_1bfb40:
    // 0x1bfb40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb44: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1bfb48: 0xc421f500  lwc1        $f1, -0xB00($at)
    ctx->pc = 0x1bfb48u;
    { uint32_t bits = FAST_READ32(0x36F500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfb4c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1bfb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bfb50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb54: 0xc420f510  lwc1        $f0, -0xAF0($at)
    ctx->pc = 0x1bfb54u;
    { uint32_t bits = FAST_READ32(0x36F510u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfb58: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bfb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bfb5c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1BFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB64u);
    ctx->pc = 0x1BFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB5Cu;
    // 0x1bfb60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1BFB5Cu, 0x1BFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB64u;
label_1bfb64:
    // 0x1bfb64: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1bfb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb6c: 0x8c31ca84  lw          $s1, -0x357C($at)
    ctx->pc = 0x1bfb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1bfb70: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bfb74: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFB74u;
    SET_GPR_U32(ctx, 31, 0x1BFB7Cu);
    ctx->pc = 0x1BFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB74u;
    // 0x1bfb78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFB74u, 0x1BFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB7Cu;
label_1bfb7c:
    // 0x1bfb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bfb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb80: 0xc06eb68  jal         func_1BADA0
    ctx->pc = 0x1BFB80u;
    SET_GPR_U32(ctx, 31, 0x1BFB88u);
    ctx->pc = 0x1BFB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB80u;
    // 0x1bfb84: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BADA0u, 0x1BFB80u, 0x1BFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB88u;
label_1bfb88:
    // 0x1bfb88: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1bfb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb8c: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x1bfb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bfb90: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x1bfb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bfb94: 0xc7af005c  lwc1        $f15, 0x5C($sp)
    ctx->pc = 0x1bfb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bfb98: 0xc062860  jal         func_18A180
    ctx->pc = 0x1BFB98u;
    SET_GPR_U32(ctx, 31, 0x1BFBA0u);
    ctx->pc = 0x1BFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB98u;
    // 0x1bfb9c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1BFB98u, 0x1BFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBA0u;
label_1bfba0:
    // 0x1bfba0: 0xde260028  ld          $a2, 0x28($s1)
    ctx->pc = 0x1bfba0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1bfba4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bfba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bfba8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bfbac: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1BFBACu;
    SET_GPR_U32(ctx, 31, 0x1BFBB4u);
    ctx->pc = 0x1BFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBACu;
    // 0x1bfbb0: 0x24a51578  addiu       $a1, $a1, 0x1578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1BFBACu, 0x1BFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBB4u;
label_1bfbb4:
    // 0x1bfbb4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1bfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1bfbb8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bfbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bfbbc: 0x24a51580  addiu       $a1, $a1, 0x1580
    ctx->pc = 0x1bfbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
    // 0x1bfbc0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1BFBC0u;
    SET_GPR_U32(ctx, 31, 0x1BFBC8u);
    ctx->pc = 0x1BFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBC0u;
    // 0x1bfbc4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1BFBC0u, 0x1BFBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBC8u;
label_1bfbc8:
    // 0x1bfbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbcc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BFBCCu;
    SET_GPR_U32(ctx, 31, 0x1BFBD4u);
    ctx->pc = 0x1BFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBCCu;
    // 0x1bfbd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BFBCCu, 0x1BFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBD4u;
label_1bfbd4:
    // 0x1bfbd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFBD4u;
    {
        const bool branch_taken_0x1bfbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBD4u;
        // 0x1bfbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbd4) {
            ctx->pc = 0x1BFBECu;
            goto label_1bfbec;
        }
    }
    ctx->pc = 0x1BFBDCu;
    // 0x1bfbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbe0: 0xc06ffbc  jal         func_1BFEF0
    ctx->pc = 0x1BFBE0u;
    SET_GPR_U32(ctx, 31, 0x1BFBE8u);
    ctx->pc = 0x1BFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBE0u;
    // 0x1bfbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEF0u, 0x1BFBE0u, 0x1BFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBE8u;
label_1bfbe8:
    // 0x1bfbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfbec:
    // 0x1bfbec: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BFBECu;
    SET_GPR_U32(ctx, 31, 0x1BFBF4u);
    ctx->pc = 0x1BFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBECu;
    // 0x1bfbf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BFBECu, 0x1BFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBF4u;
label_1bfbf4:
    // 0x1bfbf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFBF4u;
    {
        const bool branch_taken_0x1bfbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBF4u;
        // 0x1bfbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbf4) {
            ctx->pc = 0x1BFC04u;
            goto label_1bfc04;
        }
    }
    ctx->pc = 0x1BFBFCu;
    // 0x1bfbfc: 0xc06ffbc  jal         func_1BFEF0
    ctx->pc = 0x1BFBFCu;
    SET_GPR_U32(ctx, 31, 0x1BFC04u);
    ctx->pc = 0x1BFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBFCu;
    // 0x1bfc00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEF0u, 0x1BFBFCu, 0x1BFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC04u;
label_1bfc04:
    // 0x1bfc04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bfc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfc10: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC10u;
        // 0x1bfc14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFC18u;
}
