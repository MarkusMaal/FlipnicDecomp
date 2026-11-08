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

// Function: FUN_0012a340
// Address: 0x12a340 - 0x12a3dc
void FUN_0012a340_0x12a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a340_0x12a340");
#endif

    switch (ctx->pc) {
        case 0x12a340u: goto label_12a340;
        case 0x12a344u: goto label_12a344;
        case 0x12a348u: goto label_12a348;
        case 0x12a34cu: goto label_12a34c;
        case 0x12a350u: goto label_12a350;
        case 0x12a354u: goto label_12a354;
        case 0x12a358u: goto label_12a358;
        case 0x12a35cu: goto label_12a35c;
        case 0x12a360u: goto label_12a360;
        case 0x12a364u: goto label_12a364;
        case 0x12a368u: goto label_12a368;
        case 0x12a36cu: goto label_12a36c;
        case 0x12a370u: goto label_12a370;
        case 0x12a374u: goto label_12a374;
        case 0x12a378u: goto label_12a378;
        case 0x12a37cu: goto label_12a37c;
        case 0x12a380u: goto label_12a380;
        case 0x12a384u: goto label_12a384;
        case 0x12a388u: goto label_12a388;
        case 0x12a38cu: goto label_12a38c;
        case 0x12a390u: goto label_12a390;
        case 0x12a394u: goto label_12a394;
        case 0x12a398u: goto label_12a398;
        case 0x12a39cu: goto label_12a39c;
        case 0x12a3a0u: goto label_12a3a0;
        case 0x12a3a4u: goto label_12a3a4;
        case 0x12a3a8u: goto label_12a3a8;
        case 0x12a3acu: goto label_12a3ac;
        case 0x12a3b0u: goto label_12a3b0;
        case 0x12a3b4u: goto label_12a3b4;
        case 0x12a3b8u: goto label_12a3b8;
        case 0x12a3bcu: goto label_12a3bc;
        case 0x12a3c0u: goto label_12a3c0;
        case 0x12a3c4u: goto label_12a3c4;
        case 0x12a3c8u: goto label_12a3c8;
        case 0x12a3ccu: goto label_12a3cc;
        case 0x12a3d0u: goto label_12a3d0;
        case 0x12a3d4u: goto label_12a3d4;
        case 0x12a3d8u: goto label_12a3d8;
        default: break;
    }

    ctx->pc = 0x12a340u;

label_12a340:
    // 0x12a340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12a344:
    // 0x12a344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12a348:
    // 0x12a348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12a34c:
    // 0x12a34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12a350:
    // 0x12a350: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_12a354:
    // 0x12a354: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_12a358:
    if (ctx->pc == 0x12A358u) {
        ctx->pc = 0x12A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A354u;
        // 0x12a358: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A35Cu;
        goto label_12a35c;
    }
    ctx->pc = 0x12A354u;
    {
        const bool branch_taken_0x12a354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A354u;
        // 0x12a358: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a354) {
            ctx->pc = 0x12A3C8u;
            goto label_12a3c8;
        }
    }
    ctx->pc = 0x12A35Cu;
label_12a35c:
    // 0x12a35c: 0xc04a860  jal         func_12A180
label_12a360:
    if (ctx->pc == 0x12A360u) {
        ctx->pc = 0x12A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A35Cu;
        // 0x12a360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A364u;
        goto label_12a364;
    }
    ctx->pc = 0x12A35Cu;
    SET_GPR_U32(ctx, 31, 0x12A364u);
    ctx->pc = 0x12A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A35Cu;
    // 0x12a360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A180u, 0x12A35Cu, 0x12A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A364u;
label_12a364:
    // 0x12a364: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_12a368:
    if (ctx->pc == 0x12A368u) {
        ctx->pc = 0x12A36Cu;
        goto label_12a36c;
    }
    ctx->pc = 0x12A364u;
    {
        const bool branch_taken_0x12a364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a364) {
            ctx->pc = 0x12A3C8u;
            goto label_12a3c8;
        }
    }
    ctx->pc = 0x12A36Cu;
label_12a36c:
    // 0x12a36c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x12a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12a370:
    // 0x12a370: 0x8f858054  lw          $a1, -0x7FAC($gp)
    ctx->pc = 0x12a370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934612)));
label_12a374:
    // 0x12a374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a378:
    // 0x12a378: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12a378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12a37c:
    // 0x12a37c: 0x320f809  jalr        $t9
label_12a380:
    if (ctx->pc == 0x12A380u) {
        ctx->pc = 0x12A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A37Cu;
        // 0x12a380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A384u;
        goto label_12a384;
    }
    ctx->pc = 0x12A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A384u);
        ctx->pc = 0x12A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A37Cu;
        // 0x12a380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A37Cu, 0x12A384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A384u;
label_12a384:
    // 0x12a384: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x12a384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_12a388:
    // 0x12a388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a38c:
    // 0x12a38c: 0xc04a860  jal         func_12A180
label_12a390:
    if (ctx->pc == 0x12A390u) {
        ctx->pc = 0x12A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A38Cu;
        // 0x12a390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A394u;
        goto label_12a394;
    }
    ctx->pc = 0x12A38Cu;
    SET_GPR_U32(ctx, 31, 0x12A394u);
    ctx->pc = 0x12A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A38Cu;
    // 0x12a390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A180u, 0x12A38Cu, 0x12A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A394u;
label_12a394:
    // 0x12a394: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12a394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12a398:
    // 0x12a398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a39c:
    // 0x12a39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a3a0:
    // 0x12a3a0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x12a3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_12a3a4:
    // 0x12a3a4: 0x320f809  jalr        $t9
label_12a3a8:
    if (ctx->pc == 0x12A3A8u) {
        ctx->pc = 0x12A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3A4u;
        // 0x12a3a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A3ACu;
        goto label_12a3ac;
    }
    ctx->pc = 0x12A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A3ACu);
        ctx->pc = 0x12A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3A4u;
        // 0x12a3a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3A4u, 0x12A3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A3ACu;
label_12a3ac:
    // 0x12a3ac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x12a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12a3b0:
    // 0x12a3b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a3b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a3b4:
    // 0x12a3b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12a3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12a3b8:
    // 0x12a3b8: 0x320f809  jalr        $t9
label_12a3bc:
    if (ctx->pc == 0x12A3BCu) {
        ctx->pc = 0x12A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3B8u;
        // 0x12a3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A3C0u;
        goto label_12a3c0;
    }
    ctx->pc = 0x12A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A3C0u);
        ctx->pc = 0x12A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3B8u;
        // 0x12a3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3B8u, 0x12A3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A3C0u;
label_12a3c0:
    // 0x12a3c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a3c4:
    // 0x12a3c4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x12a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_12a3c8:
    // 0x12a3c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12a3cc:
    // 0x12a3cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12a3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12a3d0:
    // 0x12a3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a3d4:
    // 0x12a3d4: 0x3e00008  jr          $ra
label_12a3d8:
    if (ctx->pc == 0x12A3D8u) {
        ctx->pc = 0x12A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3D4u;
        // 0x12a3d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A3DCu;
        goto label_fallthrough_0x12a3d4;
    }
    ctx->pc = 0x12A3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3D4u;
        // 0x12a3d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12a3d4:
    ctx->pc = 0x12A3DCu;
}
