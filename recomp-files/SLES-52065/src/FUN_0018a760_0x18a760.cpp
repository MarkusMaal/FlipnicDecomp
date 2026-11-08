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

// Function: FUN_0018a760
// Address: 0x18a760 - 0x18a890
void FUN_0018a760_0x18a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a760_0x18a760");
#endif

    switch (ctx->pc) {
        case 0x18a790u: goto label_18a790;
        case 0x18a804u: goto label_18a804;
        case 0x18a83cu: goto label_18a83c;
        case 0x18a84cu: goto label_18a84c;
        case 0x18a868u: goto label_18a868;
        case 0x18a874u: goto label_18a874;
        case 0x18a87cu: goto label_18a87c;
        default: break;
    }

    ctx->pc = 0x18a760u;

    // 0x18a760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a764: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x18a764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x18a768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a76c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a77c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18a77cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a780: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18a780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a784: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x18a788: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18a788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a78c: 0x24841ae0  addiu       $a0, $a0, 0x1AE0
    ctx->pc = 0x18a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
label_18a790:
    // 0x18a790: 0x2085821  addu        $t3, $s0, $t0
    ctx->pc = 0x18a790u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x18a794: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x18a794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x18a798: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x18a798u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x18a79c: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18a7a0: 0xa0600080  sb          $zero, 0x80($v1)
    ctx->pc = 0x18a7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7a4: 0x20a6021  addu        $t4, $s0, $t2
    ctx->pc = 0x18a7a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x18a7a8: 0xa0600480  sb          $zero, 0x480($v1)
    ctx->pc = 0x18a7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1152), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18a7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18a7b0: 0xad660880  sw          $a2, 0x880($t3)
    ctx->pc = 0x18a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 2176), GPR_U32(ctx, 6));
    // 0x18a7b4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x18a7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x18a7b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a7bc: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x18a7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x18a7c0: 0x254a0200  addiu       $t2, $t2, 0x200
    ctx->pc = 0x18a7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 512));
    // 0x18a7c4: 0xa1800acc  sb          $zero, 0xACC($t4)
    ctx->pc = 0x18a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2764), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7c8: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x18a7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18a7cc: 0xa1800b0c  sb          $zero, 0xB0C($t4)
    ctx->pc = 0x18a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2828), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7d0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18a7d4: 0xa1800b4c  sb          $zero, 0xB4C($t4)
    ctx->pc = 0x18a7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2892), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7d8: 0xa1800b8c  sb          $zero, 0xB8C($t4)
    ctx->pc = 0x18a7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2956), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7dc: 0xa1800bcc  sb          $zero, 0xBCC($t4)
    ctx->pc = 0x18a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3020), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7e0: 0xa1800c0c  sb          $zero, 0xC0C($t4)
    ctx->pc = 0x18a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3084), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7e4: 0xa1800c4c  sb          $zero, 0xC4C($t4)
    ctx->pc = 0x18a7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3148), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a7e8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x18A7E8u;
    {
        const bool branch_taken_0x18a7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7E8u;
        // 0x18a7ec: 0xa1800c8c  sb          $zero, 0xC8C($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 3212), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7e8) {
            ctx->pc = 0x18A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a790;
        }
    }
    ctx->pc = 0x18A7F0u;
    // 0x18a7f0: 0x8f8286e0  lw          $v0, -0x7920($gp)
    ctx->pc = 0x18a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x18a7f4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18A7F4u;
    {
        const bool branch_taken_0x18a7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7F4u;
        // 0x18a7f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7f4) {
            ctx->pc = 0x18A880u;
            goto label_18a880;
        }
    }
    ctx->pc = 0x18A7FCu;
    // 0x18a7fc: 0xc0628f4  jal         func_18A3D0
    ctx->pc = 0x18A7FCu;
    SET_GPR_U32(ctx, 31, 0x18A804u);
    ctx->pc = 0x18A3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3D0u, 0x18A7FCu, 0x18A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A804u;
label_18a804:
    // 0x18a804: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18a808: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x18a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x18a80c: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x18a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
    // 0x18a810: 0x246396a0  addiu       $v1, $v1, -0x6960
    ctx->pc = 0x18a810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940320));
    // 0x18a814: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x18a814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x18a818: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18a81c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x18a820: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x18a820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x18a824: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x18a824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x18a828: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x18a82c: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x18a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x18a830: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x18a830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x18a834: 0xc07ad08  jal         func_1EB420
    ctx->pc = 0x18A834u;
    SET_GPR_U32(ctx, 31, 0x18A83Cu);
    ctx->pc = 0x18A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A834u;
    // 0x18a838: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB420u, 0x18A834u, 0x18A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A83Cu;
label_18a83c:
    // 0x18a83c: 0xaf8286e8  sw          $v0, -0x7918($gp)
    ctx->pc = 0x18a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U32(ctx, 2));
    // 0x18a840: 0x8f8486e8  lw          $a0, -0x7918($gp)
    ctx->pc = 0x18a840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x18a844: 0xc07ad10  jal         func_1EB440
    ctx->pc = 0x18A844u;
    SET_GPR_U32(ctx, 31, 0x18A84Cu);
    ctx->pc = 0x18A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A844u;
    // 0x18a848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB440u, 0x18A844u, 0x18A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A84Cu;
label_18a84c:
    // 0x18a84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a850: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x18a850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x18a854: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18a854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a858: 0xaf8286e0  sw          $v0, -0x7920($gp)
    ctx->pc = 0x18a858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 2));
    // 0x18a85c: 0x24a5a6f0  addiu       $a1, $a1, -0x5910
    ctx->pc = 0x18a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944496));
    // 0x18a860: 0xc07acc0  jal         func_1EB300
    ctx->pc = 0x18A860u;
    SET_GPR_U32(ctx, 31, 0x18A868u);
    ctx->pc = 0x18A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A860u;
    // 0x18a864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB300u, 0x18A860u, 0x18A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A868u;
label_18a868:
    // 0x18a868: 0xaf8286e4  sw          $v0, -0x791C($gp)
    ctx->pc = 0x18a868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 2));
    // 0x18a86c: 0xc082ae4  jal         func_20AB90
    ctx->pc = 0x18A86Cu;
    SET_GPR_U32(ctx, 31, 0x18A874u);
    ctx->pc = 0x18A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A86Cu;
    // 0x18a870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB90u, 0x18A86Cu, 0x18A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A874u;
label_18a874:
    // 0x18a874: 0xc07b05a  jal         func_1EC168
    ctx->pc = 0x18A874u;
    SET_GPR_U32(ctx, 31, 0x18A87Cu);
    ctx->pc = 0x18A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A874u;
    // 0x18a878: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC168u, 0x18A874u, 0x18A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A87Cu;
label_18a87c:
    // 0x18a87c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18a87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a880:
    // 0x18a880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a888: 0x3e00008  jr          $ra
    ctx->pc = 0x18A888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A888u;
        // 0x18a88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A890u;
}
