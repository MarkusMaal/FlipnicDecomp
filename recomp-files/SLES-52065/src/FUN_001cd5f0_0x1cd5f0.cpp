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

// Function: FUN_001cd5f0
// Address: 0x1cd5f0 - 0x1cd714
void FUN_001cd5f0_0x1cd5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cd5f0_0x1cd5f0");
#endif

    switch (ctx->pc) {
        case 0x1cd61cu: goto label_1cd61c;
        case 0x1cd628u: goto label_1cd628;
        case 0x1cd678u: goto label_1cd678;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd69cu: goto label_1cd69c;
        case 0x1cd6b8u: goto label_1cd6b8;
        case 0x1cd6c4u: goto label_1cd6c4;
        case 0x1cd6e0u: goto label_1cd6e0;
        default: break;
    }

    ctx->pc = 0x1cd5f0u;

    // 0x1cd5f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd5f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cd5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cd5f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cd5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cd5fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cd5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cd600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd604: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cd604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cd608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd60c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1cd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1cd610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd614: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x1cd614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x1cd618: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cd618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd61c:
    // 0x1cd61c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cd61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cd620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd628:
    // 0x1cd628: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1cd628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cd62c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1cd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd630: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD630u;
    {
        const bool branch_taken_0x1cd630 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd630) {
            ctx->pc = 0x1CD648u;
            goto label_1cd648;
        }
    }
    ctx->pc = 0x1CD638u;
    // 0x1cd638: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1cd63c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD63Cu;
    {
        const bool branch_taken_0x1cd63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD63Cu;
        // 0x1cd640: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd63c) {
            ctx->pc = 0x1CD648u;
            goto label_1cd648;
        }
    }
    ctx->pc = 0x1CD644u;
    // 0x1cd644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd648:
    // 0x1cd648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd64c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1cd64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd650: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CD650u;
    {
        const bool branch_taken_0x1cd650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD650u;
        // 0x1cd654: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd650) {
            ctx->pc = 0x1CD628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd628;
        }
    }
    ctx->pc = 0x1CD658u;
    // 0x1cd658: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1cd658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cd65c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1cd65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd660: 0x1453001a  bne         $v0, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CD660u;
    {
        const bool branch_taken_0x1cd660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1cd660) {
            ctx->pc = 0x1CD6CCu;
            goto label_1cd6cc;
        }
    }
    ctx->pc = 0x1CD668u;
    // 0x1cd668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd66c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd670: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD670u;
    SET_GPR_U32(ctx, 31, 0x1CD678u);
    ctx->pc = 0x1CD674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD670u;
    // 0x1cd674: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD670u, 0x1CD678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD678u;
label_1cd678:
    // 0x1cd678: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD678u;
    {
        const bool branch_taken_0x1cd678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD678u;
        // 0x1cd67c: 0xa0530008  sb          $s3, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd678) {
            ctx->pc = 0x1CD6A4u;
            goto label_1cd6a4;
        }
    }
    ctx->pc = 0x1CD680u;
    // 0x1cd680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd684: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd688: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD688u;
    SET_GPR_U32(ctx, 31, 0x1CD690u);
    ctx->pc = 0x1CD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD688u;
    // 0x1cd68c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD688u, 0x1CD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD690u;
label_1cd690:
    // 0x1cd690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd694: 0xc06e764  jal         func_1B9D90
    ctx->pc = 0x1CD694u;
    SET_GPR_U32(ctx, 31, 0x1CD69Cu);
    ctx->pc = 0x1CD698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD694u;
    // 0x1cd698: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D90u, 0x1CD694u, 0x1CD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD69Cu;
label_1cd69c:
    // 0x1cd69c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CD69Cu;
    {
        const bool branch_taken_0x1cd69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd69c) {
            ctx->pc = 0x1CD6E4u;
            goto label_1cd6e4;
        }
    }
    ctx->pc = 0x1CD6A4u;
label_1cd6a4:
    // 0x1cd6a4: 0x0  nop
    ctx->pc = 0x1cd6a4u;
    // NOP
    // 0x1cd6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd6b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD6B0u;
    SET_GPR_U32(ctx, 31, 0x1CD6B8u);
    ctx->pc = 0x1CD6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6B0u;
    // 0x1cd6b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD6B0u, 0x1CD6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6B8u;
label_1cd6b8:
    // 0x1cd6b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6bc: 0xc06e764  jal         func_1B9D90
    ctx->pc = 0x1CD6BCu;
    SET_GPR_U32(ctx, 31, 0x1CD6C4u);
    ctx->pc = 0x1CD6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6BCu;
    // 0x1cd6c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D90u, 0x1CD6BCu, 0x1CD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6C4u;
label_1cd6c4:
    // 0x1cd6c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD6C4u;
    {
        const bool branch_taken_0x1cd6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c4) {
            ctx->pc = 0x1CD6E4u;
            goto label_1cd6e4;
        }
    }
    ctx->pc = 0x1CD6CCu;
label_1cd6cc:
    // 0x1cd6cc: 0x0  nop
    ctx->pc = 0x1cd6ccu;
    // NOP
    // 0x1cd6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6d4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd6d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD6D8u;
    SET_GPR_U32(ctx, 31, 0x1CD6E0u);
    ctx->pc = 0x1CD6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6D8u;
    // 0x1cd6dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD6D8u, 0x1CD6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6E0u;
label_1cd6e0:
    // 0x1cd6e0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cd6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_1cd6e4:
    // 0x1cd6e4: 0x0  nop
    ctx->pc = 0x1cd6e4u;
    // NOP
    // 0x1cd6e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd6ec: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x1cd6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cd6f0: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1CD6F0u;
    {
        const bool branch_taken_0x1cd6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6F0u;
        // 0x1cd6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6f0) {
            ctx->pc = 0x1CD61Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd61c;
        }
    }
    ctx->pc = 0x1CD6F8u;
    // 0x1cd6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd70c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD70Cu;
        // 0x1cd710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD714u;
}
