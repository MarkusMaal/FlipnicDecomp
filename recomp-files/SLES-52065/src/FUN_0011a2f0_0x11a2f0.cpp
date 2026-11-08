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

// Function: FUN_0011a2f0
// Address: 0x11a2f0 - 0x11a40c
void FUN_0011a2f0_0x11a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a2f0_0x11a2f0");
#endif

    switch (ctx->pc) {
        case 0x11a368u: goto label_11a368;
        case 0x11a38cu: goto label_11a38c;
        default: break;
    }

    ctx->pc = 0x11a2f0u;

    // 0x11a2f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11a2f4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x11a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x11a2f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11a2fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11a300: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11a304: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11a308: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11a308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11a30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11a310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a318: 0x8ce400a0  lw          $a0, 0xA0($a3)
    ctx->pc = 0x11a318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x11a31c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11a31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a320: 0x8ce300a4  lw          $v1, 0xA4($a3)
    ctx->pc = 0x11a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x11a324: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11a324u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11a328: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x11a328u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a32c: 0x266082a  slt         $at, $s3, $a2
    ctx->pc = 0x11a32cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11a330: 0xc1980a  movz        $s3, $a2, $at
    ctx->pc = 0x11a330u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x11a334: 0x8e110098  lw          $s1, 0x98($s0)
    ctx->pc = 0x11a334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x11a338: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x11a338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x11a33c: 0x8e1200c8  lw          $s2, 0xC8($s0)
    ctx->pc = 0x11a33cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x11a340: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x11a344: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x11a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x11a348: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11a348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11a34c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x11A34Cu;
    {
        const bool branch_taken_0x11a34c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A34Cu;
        // 0x11a350: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a34c) {
            ctx->pc = 0x11A37Cu;
            goto label_11a37c;
        }
    }
    ctx->pc = 0x11A354u;
    // 0x11a354: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x11a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x11a358: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x11a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a35c: 0x513023  subu        $a2, $v0, $s1
    ctx->pc = 0x11a35cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11a360: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11A360u;
    SET_GPR_U32(ctx, 31, 0x11A368u);
    ctx->pc = 0x11A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A360u;
    // 0x11a364: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11A360u, 0x11A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A368u;
label_11a368:
    // 0x11a368: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x11a368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x11a36c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x11a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11a370: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x11a370u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11a374: 0x262a823  subu        $s5, $s3, $v0
    ctx->pc = 0x11a374u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11a378: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11a378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a37c:
    // 0x11a37c: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x11a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a384: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11A384u;
    SET_GPR_U32(ctx, 31, 0x11A38Cu);
    ctx->pc = 0x11A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A384u;
    // 0x11a388: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11A384u, 0x11A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A38Cu;
label_11a38c:
    // 0x11a38c: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x11a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x11a390: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x11a390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x11a394: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x11a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x11a398: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x11a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11a39c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x11a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x11a3a0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x11a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x11a3a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A3A4u;
    {
        const bool branch_taken_0x11a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a3a4) {
            ctx->pc = 0x11A3CCu;
            goto label_11a3cc;
        }
    }
    ctx->pc = 0x11A3ACu;
    // 0x11a3ac: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x11a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x11a3b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x11a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x11a3b4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11a3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a3b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11A3B8u;
    {
        const bool branch_taken_0x11a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3B8u;
        // 0x11a3bc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3b8) {
            ctx->pc = 0x11A3E8u;
            goto label_11a3e8;
        }
    }
    ctx->pc = 0x11A3C0u;
    // 0x11a3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a3c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11A3C4u;
    {
        const bool branch_taken_0x11a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3C4u;
        // 0x11a3c8: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3c4) {
            ctx->pc = 0x11A3E4u;
            goto label_11a3e4;
        }
    }
    ctx->pc = 0x11A3CCu;
label_11a3cc:
    // 0x11a3cc: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x11a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x11a3d0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11a3d4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11a3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11a3d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A3D8u;
    {
        const bool branch_taken_0x11a3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a3d8) {
            ctx->pc = 0x11A3E4u;
            goto label_11a3e4;
        }
    }
    ctx->pc = 0x11A3E0u;
    // 0x11a3e0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x11a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_11a3e4:
    // 0x11a3e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x11a3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a3e8:
    // 0x11a3e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a3ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11a3ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a3f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11a3f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a3f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11a3f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a3f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11a3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11a3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a404: 0x3e00008  jr          $ra
    ctx->pc = 0x11A404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A404u;
        // 0x11a408: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A40Cu;
}
