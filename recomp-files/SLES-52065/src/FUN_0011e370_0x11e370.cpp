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

// Function: FUN_0011e370
// Address: 0x11e370 - 0x11e520
void FUN_0011e370_0x11e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e370_0x11e370");
#endif

    switch (ctx->pc) {
        case 0x11e39cu: goto label_11e39c;
        case 0x11e3bcu: goto label_11e3bc;
        case 0x11e3d4u: goto label_11e3d4;
        case 0x11e3fcu: goto label_11e3fc;
        case 0x11e408u: goto label_11e408;
        case 0x11e418u: goto label_11e418;
        case 0x11e428u: goto label_11e428;
        case 0x11e430u: goto label_11e430;
        case 0x11e448u: goto label_11e448;
        case 0x11e468u: goto label_11e468;
        case 0x11e4a4u: goto label_11e4a4;
        case 0x11e4ccu: goto label_11e4cc;
        case 0x11e4d4u: goto label_11e4d4;
        case 0x11e4e8u: goto label_11e4e8;
        case 0x11e500u: goto label_11e500;
        default: break;
    }

    ctx->pc = 0x11e370u;

    // 0x11e370: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x11e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x11e374: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11e374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11e37c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x11e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11e380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11e384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11e384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11e388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11e38c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11e38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11e394: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11E394u;
    SET_GPR_U32(ctx, 31, 0x11E39Cu);
    ctx->pc = 0x11E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E394u;
    // 0x11e398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11E394u, 0x11E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E39Cu;
label_11e39c:
    // 0x11e39c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E39Cu;
    {
        const bool branch_taken_0x11e39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E39Cu;
        // 0x11e3a0: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e39c) {
            ctx->pc = 0x11E3ACu;
            goto label_11e3ac;
        }
    }
    ctx->pc = 0x11E3A4u;
    // 0x11e3a4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x11E3A4u;
    {
        const bool branch_taken_0x11e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3A4u;
        // 0x11e3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3a4) {
            ctx->pc = 0x11E504u;
            goto label_11e504;
        }
    }
    ctx->pc = 0x11E3ACu;
label_11e3ac:
    // 0x11e3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11e3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3b4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E3B4u;
    SET_GPR_U32(ctx, 31, 0x11E3BCu);
    ctx->pc = 0x11E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3B4u;
    // 0x11e3b8: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E3B4u, 0x11E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3BCu;
label_11e3bc:
    // 0x11e3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11e3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3c0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3cc: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E3CCu;
    SET_GPR_U32(ctx, 31, 0x11E3D4u);
    ctx->pc = 0x11E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3CCu;
    // 0x11e3d0: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E3CCu, 0x11E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3D4u;
label_11e3d4:
    // 0x11e3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e3d8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E3D8u;
    {
        const bool branch_taken_0x11e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3D8u;
        // 0x11e3dc: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3d8) {
            ctx->pc = 0x11E3E8u;
            goto label_11e3e8;
        }
    }
    ctx->pc = 0x11E3E0u;
    // 0x11e3e0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x11E3E0u;
    {
        const bool branch_taken_0x11e3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3E0u;
        // 0x11e3e4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3e0) {
            ctx->pc = 0x11E420u;
            goto label_11e420;
        }
    }
    ctx->pc = 0x11E3E8u;
label_11e3e8:
    // 0x11e3e8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E3E8u;
    {
        const bool branch_taken_0x11e3e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3E8u;
        // 0x11e3ec: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3e8) {
            ctx->pc = 0x11E410u;
            goto label_11e410;
        }
    }
    ctx->pc = 0x11E3F0u;
    // 0x11e3f0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11e3f4: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E3F4u;
    SET_GPR_U32(ctx, 31, 0x11E3FCu);
    ctx->pc = 0x11E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E3F4u;
    // 0x11e3f8: 0x264503c4  addiu       $a1, $s2, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E3F4u, 0x11E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3FCu;
label_11e3fc:
    // 0x11e3fc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11e400: 0xc080664  jal         func_201990
    ctx->pc = 0x11E400u;
    SET_GPR_U32(ctx, 31, 0x11E408u);
    ctx->pc = 0x11E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E400u;
    // 0x11e404: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E400u, 0x11E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E408u;
label_11e408:
    // 0x11e408: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E408u;
    {
        const bool branch_taken_0x11e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E408u;
        // 0x11e40c: 0x8e510100  lw          $s1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e408) {
            ctx->pc = 0x11E42Cu;
            goto label_11e42c;
        }
    }
    ctx->pc = 0x11E410u;
label_11e410:
    // 0x11e410: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E410u;
    SET_GPR_U32(ctx, 31, 0x11E418u);
    ctx->pc = 0x11E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E410u;
    // 0x11e414: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E410u, 0x11E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E418u;
label_11e418:
    // 0x11e418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E418u;
    {
        const bool branch_taken_0x11e418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e418) {
            ctx->pc = 0x11E428u;
            goto label_11e428;
        }
    }
    ctx->pc = 0x11E420u;
label_11e420:
    // 0x11e420: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E420u;
    SET_GPR_U32(ctx, 31, 0x11E428u);
    ctx->pc = 0x11E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E420u;
    // 0x11e424: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E420u, 0x11E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E428u;
label_11e428:
    // 0x11e428: 0x8e510100  lw          $s1, 0x100($s2)
    ctx->pc = 0x11e428u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_11e42c:
    // 0x11e42c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11e42cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e430:
    // 0x11e430: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E430u;
    {
        const bool branch_taken_0x11e430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E430u;
        // 0x11e434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e430) {
            ctx->pc = 0x11E440u;
            goto label_11e440;
        }
    }
    ctx->pc = 0x11E438u;
    // 0x11e438: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11E438u;
    {
        const bool branch_taken_0x11e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E438u;
        // 0x11e43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e438) {
            ctx->pc = 0x11E504u;
            goto label_11e504;
        }
    }
    ctx->pc = 0x11E440u;
label_11e440:
    // 0x11e440: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11E440u;
    SET_GPR_U32(ctx, 31, 0x11E448u);
    ctx->pc = 0x11E444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E440u;
    // 0x11e444: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11E440u, 0x11E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E448u;
label_11e448:
    // 0x11e448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E448u;
    {
        const bool branch_taken_0x11e448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e448) {
            ctx->pc = 0x11E45Cu;
            goto label_11e45c;
        }
    }
    ctx->pc = 0x11E450u;
    // 0x11e450: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x11e450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e454: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11E454u;
    {
        const bool branch_taken_0x11e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E454u;
        // 0x11e458: 0x8e310038  lw          $s1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e454) {
            ctx->pc = 0x11E430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e430;
        }
    }
    ctx->pc = 0x11E45Cu;
label_11e45c:
    // 0x11e45c: 0x0  nop
    ctx->pc = 0x11e45cu;
    // NOP
    // 0x11e460: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11E460u;
    SET_GPR_U32(ctx, 31, 0x11E468u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11E460u, 0x11E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E468u;
label_11e468:
    // 0x11e468: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11e46c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e470: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x11e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x11e474: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E474u;
    {
        const bool branch_taken_0x11e474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e474) {
            ctx->pc = 0x11E4ACu;
            goto label_11e4ac;
        }
    }
    ctx->pc = 0x11E47Cu;
    // 0x11e47c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E47Cu;
    {
        const bool branch_taken_0x11e47c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e47c) {
            ctx->pc = 0x11E490u;
            goto label_11e490;
        }
    }
    ctx->pc = 0x11E484u;
    // 0x11e484: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x11e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11e488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E488u;
    {
        const bool branch_taken_0x11e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E488u;
        // 0x11e48c: 0xae420100  sw          $v0, 0x100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e488) {
            ctx->pc = 0x11E498u;
            goto label_11e498;
        }
    }
    ctx->pc = 0x11E490u;
label_11e490:
    // 0x11e490: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x11e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11e494: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x11e494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_11e498:
    // 0x11e498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e49c: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11E49Cu;
    SET_GPR_U32(ctx, 31, 0x11E4A4u);
    ctx->pc = 0x11E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E49Cu;
    // 0x11e4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11E49Cu, 0x11E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4A4u;
label_11e4a4:
    // 0x11e4a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11E4A4u;
    {
        const bool branch_taken_0x11e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e4a4) {
            ctx->pc = 0x11E4F0u;
            goto label_11e4f0;
        }
    }
    ctx->pc = 0x11E4ACu;
label_11e4ac:
    // 0x11e4ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e4b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E4B0u;
    {
        const bool branch_taken_0x11e4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4B0u;
        // 0x11e4b4: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4b0) {
            ctx->pc = 0x11E4C4u;
            goto label_11e4c4;
        }
    }
    ctx->pc = 0x11E4B8u;
    // 0x11e4b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e4bc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E4BCu;
    {
        const bool branch_taken_0x11e4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4BCu;
        // 0x11e4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4bc) {
            ctx->pc = 0x11E4ECu;
            goto label_11e4ec;
        }
    }
    ctx->pc = 0x11E4C4u;
label_11e4c4:
    // 0x11e4c4: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11E4C4u;
    SET_GPR_U32(ctx, 31, 0x11E4CCu);
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11E4C4u, 0x11E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4CCu;
label_11e4cc:
    // 0x11e4cc: 0xc07c9bc  jal         func_1F26F0
    ctx->pc = 0x11E4CCu;
    SET_GPR_U32(ctx, 31, 0x11E4D4u);
    ctx->pc = 0x11E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4CCu;
    // 0x11e4d0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F26F0u, 0x11E4CCu, 0x11E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4D4u;
label_11e4d4:
    // 0x11e4d4: 0x822203ec  lb          $v0, 0x3EC($s1)
    ctx->pc = 0x11e4d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x11e4d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E4D8u;
    {
        const bool branch_taken_0x11e4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D8u;
        // 0x11e4dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4d8) {
            ctx->pc = 0x11E4E8u;
            goto label_11e4e8;
        }
    }
    ctx->pc = 0x11E4E0u;
    // 0x11e4e0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x11E4E0u;
    SET_GPR_U32(ctx, 31, 0x11E4E8u);
    ctx->pc = 0x11E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4E0u;
    // 0x11e4e4: 0x262503ec  addiu       $a1, $s1, 0x3EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x11E4E0u, 0x11E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4E8u;
label_11e4e8:
    // 0x11e4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e4ec:
    // 0x11e4ec: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x11e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_11e4f0:
    // 0x11e4f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E4F0u;
    {
        const bool branch_taken_0x11e4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4F0u;
        // 0x11e4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4f0) {
            ctx->pc = 0x11E504u;
            goto label_11e504;
        }
    }
    ctx->pc = 0x11E4F8u;
    // 0x11e4f8: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11E4F8u;
    SET_GPR_U32(ctx, 31, 0x11E500u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11E4F8u, 0x11E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E500u;
label_11e500:
    // 0x11e500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e504:
    // 0x11e504: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11e504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11e508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e50c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e518: 0x3e00008  jr          $ra
    ctx->pc = 0x11E518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E518u;
        // 0x11e51c: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E520u;
}
