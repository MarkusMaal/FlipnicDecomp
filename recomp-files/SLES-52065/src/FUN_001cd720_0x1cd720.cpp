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

// Function: FUN_001cd720
// Address: 0x1cd720 - 0x1cd9f8
void FUN_001cd720_0x1cd720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cd720_0x1cd720");
#endif

    switch (ctx->pc) {
        case 0x1cd748u: goto label_1cd748;
        case 0x1cd754u: goto label_1cd754;
        case 0x1cd768u: goto label_1cd768;
        case 0x1cd788u: goto label_1cd788;
        case 0x1cd794u: goto label_1cd794;
        case 0x1cd7a8u: goto label_1cd7a8;
        case 0x1cd7b8u: goto label_1cd7b8;
        case 0x1cd7c0u: goto label_1cd7c0;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd7f8u: goto label_1cd7f8;
        case 0x1cd8c0u: goto label_1cd8c0;
        case 0x1cd8ccu: goto label_1cd8cc;
        case 0x1cd8dcu: goto label_1cd8dc;
        case 0x1cd8ecu: goto label_1cd8ec;
        case 0x1cd8f8u: goto label_1cd8f8;
        case 0x1cd920u: goto label_1cd920;
        case 0x1cd928u: goto label_1cd928;
        case 0x1cd938u: goto label_1cd938;
        case 0x1cd94cu: goto label_1cd94c;
        case 0x1cd958u: goto label_1cd958;
        case 0x1cd968u: goto label_1cd968;
        case 0x1cd980u: goto label_1cd980;
        case 0x1cd9a0u: goto label_1cd9a0;
        case 0x1cd9b4u: goto label_1cd9b4;
        case 0x1cd9c8u: goto label_1cd9c8;
        case 0x1cd9dcu: goto label_1cd9dc;
        default: break;
    }

    ctx->pc = 0x1cd720u;

    // 0x1cd720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cd724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cd728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cd728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cd72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cd72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cd730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd734: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cd738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd740: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CD740u;
    {
        const bool branch_taken_0x1cd740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD740u;
        // 0x1cd744: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd740) {
            ctx->pc = 0x1CD770u;
            goto label_1cd770;
        }
    }
    ctx->pc = 0x1CD748u;
label_1cd748:
    // 0x1cd748: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cd748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd74c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD74Cu;
    SET_GPR_U32(ctx, 31, 0x1CD754u);
    ctx->pc = 0x1CD750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD74Cu;
    // 0x1cd750: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD74Cu, 0x1CD754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD754u;
label_1cd754:
    // 0x1cd754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd758: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cd75c: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
    // 0x1cd760: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CD760u;
    SET_GPR_U32(ctx, 31, 0x1CD768u);
    ctx->pc = 0x1CD764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD760u;
    // 0x1cd764: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CD760u, 0x1CD768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD768u;
label_1cd768:
    // 0x1cd768: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1cd76c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cd770:
    // 0x1cd770: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1cd770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cd774: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CD774u;
    {
        const bool branch_taken_0x1cd774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD774u;
        // 0x1cd778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd774) {
            ctx->pc = 0x1CD748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd748;
        }
    }
    ctx->pc = 0x1CD77Cu;
    // 0x1cd77c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd780: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CD780u;
    {
        const bool branch_taken_0x1cd780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD780u;
        // 0x1cd784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd780) {
            ctx->pc = 0x1CD7C8u;
            goto label_1cd7c8;
        }
    }
    ctx->pc = 0x1CD788u;
label_1cd788:
    // 0x1cd788: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd78c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD78Cu;
    SET_GPR_U32(ctx, 31, 0x1CD794u);
    ctx->pc = 0x1CD790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD78Cu;
    // 0x1cd790: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD78Cu, 0x1CD794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD794u;
label_1cd794:
    // 0x1cd794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd798: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cd798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cd79c: 0x24428a60  addiu       $v0, $v0, -0x75A0
    ctx->pc = 0x1cd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937184));
    // 0x1cd7a0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CD7A0u;
    SET_GPR_U32(ctx, 31, 0x1CD7A8u);
    ctx->pc = 0x1CD7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7A0u;
    // 0x1cd7a4: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CD7A0u, 0x1CD7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7A8u;
label_1cd7a8:
    // 0x1cd7a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd7b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD7B0u;
    SET_GPR_U32(ctx, 31, 0x1CD7B8u);
    ctx->pc = 0x1CD7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7B0u;
    // 0x1cd7b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD7B0u, 0x1CD7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7B8u;
label_1cd7b8:
    // 0x1cd7b8: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CD7B8u;
    SET_GPR_U32(ctx, 31, 0x1CD7C0u);
    ctx->pc = 0x1CD7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7B8u;
    // 0x1cd7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CD7B8u, 0x1CD7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7C0u;
label_1cd7c0:
    // 0x1cd7c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cd7c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cd7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cd7c8:
    // 0x1cd7c8: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x1cd7c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cd7cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CD7CCu;
    {
        const bool branch_taken_0x1cd7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7CCu;
        // 0x1cd7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7cc) {
            ctx->pc = 0x1CD788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd788;
        }
    }
    ctx->pc = 0x1CD7D4u;
    // 0x1cd7d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7dc:
    // 0x1cd7dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd7e0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD7E0u;
    SET_GPR_U32(ctx, 31, 0x1CD7E8u);
    ctx->pc = 0x1CD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7E0u;
    // 0x1cd7e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD7E0u, 0x1CD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7E8u;
label_1cd7e8:
    // 0x1cd7e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd7ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7f0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CD7F0u;
    SET_GPR_U32(ctx, 31, 0x1CD7F8u);
    ctx->pc = 0x1CD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7F0u;
    // 0x1cd7f4: 0x24a58ac0  addiu       $a1, $a1, -0x7540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CD7F0u, 0x1CD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7F8u;
label_1cd7f8:
    // 0x1cd7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd7fc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1cd7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd800: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CD800u;
    {
        const bool branch_taken_0x1cd800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD800u;
        // 0x1cd804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd800) {
            ctx->pc = 0x1CD7DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd7dc;
        }
    }
    ctx->pc = 0x1CD808u;
    // 0x1cd808: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd80c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1cd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1cd810: 0x8c242ca0  lw          $a0, 0x2CA0($at)
    ctx->pc = 0x1cd810u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x222CA0u));
    // 0x1cd814: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1cd814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1cd818: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cd818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cd81c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd820: 0x24422c30  addiu       $v0, $v0, 0x2C30
    ctx->pc = 0x1cd820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11312));
    // 0x1cd824: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd828: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd82c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cd82cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cd830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cd834: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cd838: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd83c: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x1cd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
    // 0x1cd840: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1cd840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1cd844: 0xae240080  sw          $a0, 0x80($s1)
    ctx->pc = 0x1cd844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 4));
    // 0x1cd848: 0x8c242ca4  lw          $a0, 0x2CA4($at)
    ctx->pc = 0x1cd848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11428)));
    // 0x1cd84c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd850: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd854: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cd854u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd858: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cd858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cd85c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cd860: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cd860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd864: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x1cd864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x1cd868: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1cd86c: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x1cd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
    // 0x1cd870: 0x8c242ca8  lw          $a0, 0x2CA8($at)
    ctx->pc = 0x1cd870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11432)));
    // 0x1cd874: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cd874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd878: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cd878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cd87c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cd87cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cd880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cd884: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cd884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cd888: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cd888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd88c: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x1cd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
    // 0x1cd890: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1cd894: 0xae240088  sw          $a0, 0x88($s1)
    ctx->pc = 0x1cd894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 4));
    // 0x1cd898: 0x8c242cac  lw          $a0, 0x2CAC($at)
    ctx->pc = 0x1cd898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11436)));
    // 0x1cd89c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd8a0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cd8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd8a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd8ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd8b0: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1cd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x1cd8b4: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x1cd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1cd8b8: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1cd8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x1cd8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8c0:
    // 0x1cd8c0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd8c4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD8C4u;
    SET_GPR_U32(ctx, 31, 0x1CD8CCu);
    ctx->pc = 0x1CD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8C4u;
    // 0x1cd8c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD8C4u, 0x1CD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8CCu;
label_1cd8cc:
    // 0x1cd8cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd8d4: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1CD8D4u;
    SET_GPR_U32(ctx, 31, 0x1CD8DCu);
    ctx->pc = 0x1CD8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8D4u;
    // 0x1cd8d8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D80u, 0x1CD8D4u, 0x1CD8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8DCu;
label_1cd8dc:
    // 0x1cd8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8e0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd8e4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD8E4u;
    SET_GPR_U32(ctx, 31, 0x1CD8ECu);
    ctx->pc = 0x1CD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8E4u;
    // 0x1cd8e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD8E4u, 0x1CD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8ECu;
label_1cd8ec:
    // 0x1cd8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8f0: 0xc06e764  jal         func_1B9D90
    ctx->pc = 0x1CD8F0u;
    SET_GPR_U32(ctx, 31, 0x1CD8F8u);
    ctx->pc = 0x1CD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8F0u;
    // 0x1cd8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D90u, 0x1CD8F0u, 0x1CD8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8F8u;
label_1cd8f8:
    // 0x1cd8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd8fc: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x1cd8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cd900: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CD900u;
    {
        const bool branch_taken_0x1cd900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD900u;
        // 0x1cd904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd900) {
            ctx->pc = 0x1CD8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd8c0;
        }
    }
    ctx->pc = 0x1CD908u;
    // 0x1cd908: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1cd908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x1cd90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd910: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x1cd910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x1cd914: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x1cd914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cd918: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD918u;
    SET_GPR_U32(ctx, 31, 0x1CD920u);
    ctx->pc = 0x1CD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD918u;
    // 0x1cd91c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD918u, 0x1CD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD920u;
label_1cd920:
    // 0x1cd920: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CD920u;
    SET_GPR_U32(ctx, 31, 0x1CD928u);
    ctx->pc = 0x1CD924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD920u;
    // 0x1cd924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CD920u, 0x1CD928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD928u;
label_1cd928:
    // 0x1cd928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd92c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd930: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD930u;
    SET_GPR_U32(ctx, 31, 0x1CD938u);
    ctx->pc = 0x1CD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD930u;
    // 0x1cd934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD930u, 0x1CD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD938u;
label_1cd938:
    // 0x1cd938: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x1cd938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cd93c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd940: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd944: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD944u;
    SET_GPR_U32(ctx, 31, 0x1CD94Cu);
    ctx->pc = 0x1CD948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD944u;
    // 0x1cd948: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD944u, 0x1CD94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD94Cu;
label_1cd94c:
    // 0x1cd94c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1cd94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1cd950: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cd950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd958:
    // 0x1cd958: 0x26650006  addiu       $a1, $s3, 0x6
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1cd95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd960: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD960u;
    SET_GPR_U32(ctx, 31, 0x1CD968u);
    ctx->pc = 0x1CD964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD960u;
    // 0x1cd964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD960u, 0x1CD968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD968u;
label_1cd968:
    // 0x1cd968: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1cd968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1cd96c: 0x26650006  addiu       $a1, $s3, 0x6
    ctx->pc = 0x1cd96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1cd970: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd978: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD978u;
    SET_GPR_U32(ctx, 31, 0x1CD980u);
    ctx->pc = 0x1CD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD978u;
    // 0x1cd97c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD978u, 0x1CD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD980u;
label_1cd980:
    // 0x1cd980: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1cd980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1cd984: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cd984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cd988: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1cd988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd98c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CD98Cu;
    {
        const bool branch_taken_0x1cd98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD98Cu;
        // 0x1cd990: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd98c) {
            ctx->pc = 0x1CD958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd958;
        }
    }
    ctx->pc = 0x1CD994u;
    // 0x1cd994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd998: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CD998u;
    SET_GPR_U32(ctx, 31, 0x1CD9A0u);
    ctx->pc = 0x1CD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD998u;
    // 0x1cd99c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CD998u, 0x1CD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9A0u;
label_1cd9a0:
    // 0x1cd9a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9a8: 0x24a584f0  addiu       $a1, $a1, -0x7B10
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935792));
    // 0x1cd9ac: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CD9ACu;
    SET_GPR_U32(ctx, 31, 0x1CD9B4u);
    ctx->pc = 0x1CD9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9ACu;
    // 0x1cd9b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CD9ACu, 0x1CD9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9B4u;
label_1cd9b4:
    // 0x1cd9b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9bc: 0x24a58630  addiu       $a1, $a1, -0x79D0
    ctx->pc = 0x1cd9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936112));
    // 0x1cd9c0: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CD9C0u;
    SET_GPR_U32(ctx, 31, 0x1CD9C8u);
    ctx->pc = 0x1CD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9C0u;
    // 0x1cd9c4: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CD9C0u, 0x1CD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9C8u;
label_1cd9c8:
    // 0x1cd9c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9d0: 0x24a587d0  addiu       $a1, $a1, -0x7830
    ctx->pc = 0x1cd9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936528));
    // 0x1cd9d4: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CD9D4u;
    SET_GPR_U32(ctx, 31, 0x1CD9DCu);
    ctx->pc = 0x1CD9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9D4u;
    // 0x1cd9d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CD9D4u, 0x1CD9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9DCu;
label_1cd9dc:
    // 0x1cd9dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd9e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F0u;
        // 0x1cd9f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD9F8u;
}
