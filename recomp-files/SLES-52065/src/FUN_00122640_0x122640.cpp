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

// Function: FUN_00122640
// Address: 0x122640 - 0x122854
void FUN_00122640_0x122640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122640_0x122640");
#endif

    switch (ctx->pc) {
        case 0x122688u: goto label_122688;
        case 0x12269cu: goto label_12269c;
        case 0x1226a8u: goto label_1226a8;
        case 0x1226b4u: goto label_1226b4;
        case 0x1226bcu: goto label_1226bc;
        case 0x1226c4u: goto label_1226c4;
        case 0x1226e4u: goto label_1226e4;
        case 0x1226f8u: goto label_1226f8;
        case 0x122704u: goto label_122704;
        case 0x122710u: goto label_122710;
        case 0x122718u: goto label_122718;
        case 0x122720u: goto label_122720;
        case 0x122734u: goto label_122734;
        case 0x12273cu: goto label_12273c;
        case 0x122768u: goto label_122768;
        case 0x12277cu: goto label_12277c;
        case 0x122788u: goto label_122788;
        case 0x122794u: goto label_122794;
        case 0x12279cu: goto label_12279c;
        case 0x1227a4u: goto label_1227a4;
        case 0x1227c4u: goto label_1227c4;
        case 0x1227d8u: goto label_1227d8;
        case 0x1227e4u: goto label_1227e4;
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f8u: goto label_1227f8;
        case 0x122800u: goto label_122800;
        case 0x122814u: goto label_122814;
        case 0x12281cu: goto label_12281c;
        case 0x122830u: goto label_122830;
        case 0x122838u: goto label_122838;
        default: break;
    }

    ctx->pc = 0x122640u;

label_122640:
    // 0x122640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122644: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x122644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122648: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x122648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12264c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12265c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12265cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122660: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x122660u;
    {
        const bool branch_taken_0x122660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122660u;
        // 0x122664: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122660) {
            ctx->pc = 0x12273Cu;
            goto label_12273c;
        }
    }
    ctx->pc = 0x122668u;
    // 0x122668: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x122668u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12266c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x12266Cu;
    {
        const bool branch_taken_0x12266c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12266c) {
            ctx->pc = 0x1226C4u;
            goto label_1226c4;
        }
    }
    ctx->pc = 0x122674u;
    // 0x122674: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x122674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122678: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122678u;
    {
        const bool branch_taken_0x122678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x122678) {
            ctx->pc = 0x122688u;
            goto label_122688;
        }
    }
    ctx->pc = 0x122680u;
    // 0x122680: 0xc048990  jal         func_122640
    ctx->pc = 0x122680u;
    SET_GPR_U32(ctx, 31, 0x122688u);
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x122688u;
label_122688:
    // 0x122688: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x122688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12268c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12268Cu;
    {
        const bool branch_taken_0x12268c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x122690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12268Cu;
        // 0x122690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12268c) {
            ctx->pc = 0x1226A0u;
            goto label_1226a0;
        }
    }
    ctx->pc = 0x122694u;
    // 0x122694: 0xc048990  jal         func_122640
    ctx->pc = 0x122694u;
    SET_GPR_U32(ctx, 31, 0x12269Cu);
    ctx->pc = 0x122698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122694u;
    // 0x122698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x12269Cu;
label_12269c:
    // 0x12269c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12269cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1226a0:
    // 0x1226a0: 0xc048a1c  jal         func_122870
    ctx->pc = 0x1226A0u;
    SET_GPR_U32(ctx, 31, 0x1226A8u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x1226A0u, 0x1226A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226A8u;
label_1226a8:
    // 0x1226a8: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1226a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1226ac: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x1226ACu;
    SET_GPR_U32(ctx, 31, 0x1226B4u);
    ctx->pc = 0x1226B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226ACu;
    // 0x1226b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x1226ACu, 0x1226B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226B4u;
label_1226b4:
    // 0x1226b4: 0xc048a18  jal         func_122860
    ctx->pc = 0x1226B4u;
    SET_GPR_U32(ctx, 31, 0x1226BCu);
    ctx->pc = 0x1226B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226B4u;
    // 0x1226b8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x1226B4u, 0x1226BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226BCu;
label_1226bc:
    // 0x1226bc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1226BCu;
    SET_GPR_U32(ctx, 31, 0x1226C4u);
    ctx->pc = 0x1226C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226BCu;
    // 0x1226c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1226BCu, 0x1226C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226C4u;
label_1226c4:
    // 0x1226c4: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1226c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1226c8: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1226C8u;
    {
        const bool branch_taken_0x1226c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226C8u;
        // 0x1226cc: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226c8) {
            ctx->pc = 0x122724u;
            goto label_122724;
        }
    }
    ctx->pc = 0x1226D0u;
    // 0x1226d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1226d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1226D4u;
    {
        const bool branch_taken_0x1226d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226D4u;
        // 0x1226d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226d4) {
            ctx->pc = 0x1226E4u;
            goto label_1226e4;
        }
    }
    ctx->pc = 0x1226DCu;
    // 0x1226dc: 0xc048990  jal         func_122640
    ctx->pc = 0x1226DCu;
    SET_GPR_U32(ctx, 31, 0x1226E4u);
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x1226E4u;
label_1226e4:
    // 0x1226e4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1226e8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226E8u;
    {
        const bool branch_taken_0x1226e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226E8u;
        // 0x1226ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226e8) {
            ctx->pc = 0x1226FCu;
            goto label_1226fc;
        }
    }
    ctx->pc = 0x1226F0u;
    // 0x1226f0: 0xc048990  jal         func_122640
    ctx->pc = 0x1226F0u;
    SET_GPR_U32(ctx, 31, 0x1226F8u);
    ctx->pc = 0x1226F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226F0u;
    // 0x1226f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x1226F8u;
label_1226f8:
    // 0x1226f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1226f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1226fc:
    // 0x1226fc: 0xc048a1c  jal         func_122870
    ctx->pc = 0x1226FCu;
    SET_GPR_U32(ctx, 31, 0x122704u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x1226FCu, 0x122704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122704u;
label_122704:
    // 0x122704: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x122704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x122708: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x122708u;
    SET_GPR_U32(ctx, 31, 0x122710u);
    ctx->pc = 0x12270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122708u;
    // 0x12270c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x122708u, 0x122710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122710u;
label_122710:
    // 0x122710: 0xc048a18  jal         func_122860
    ctx->pc = 0x122710u;
    SET_GPR_U32(ctx, 31, 0x122718u);
    ctx->pc = 0x122714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122710u;
    // 0x122714: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x122710u, 0x122718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122718u;
label_122718:
    // 0x122718: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122718u;
    SET_GPR_U32(ctx, 31, 0x122720u);
    ctx->pc = 0x12271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122718u;
    // 0x12271c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122718u, 0x122720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122720u;
label_122720:
    // 0x122720: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x122720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_122724:
    // 0x122724: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122724u;
    {
        const bool branch_taken_0x122724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122724u;
        // 0x122728: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122724) {
            ctx->pc = 0x122734u;
            goto label_122734;
        }
    }
    ctx->pc = 0x12272Cu;
    // 0x12272c: 0xc04619c  jal         func_118670
    ctx->pc = 0x12272Cu;
    SET_GPR_U32(ctx, 31, 0x122734u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x12272Cu, 0x122734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122734u;
label_122734:
    // 0x122734: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122734u;
    SET_GPR_U32(ctx, 31, 0x12273Cu);
    ctx->pc = 0x122738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122734u;
    // 0x122738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122734u, 0x12273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12273Cu;
label_12273c:
    // 0x12273c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x12273cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x122740: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x122740u;
    {
        const bool branch_taken_0x122740 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122740u;
        // 0x122744: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122740) {
            ctx->pc = 0x122820u;
            goto label_122820;
        }
    }
    ctx->pc = 0x122748u;
    // 0x122748: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x122748u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12274c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x12274Cu;
    {
        const bool branch_taken_0x12274c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12274c) {
            ctx->pc = 0x1227A4u;
            goto label_1227a4;
        }
    }
    ctx->pc = 0x122754u;
    // 0x122754: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x122754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122758: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122758u;
    {
        const bool branch_taken_0x122758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122758u;
        // 0x12275c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122758) {
            ctx->pc = 0x122768u;
            goto label_122768;
        }
    }
    ctx->pc = 0x122760u;
    // 0x122760: 0xc048990  jal         func_122640
    ctx->pc = 0x122760u;
    SET_GPR_U32(ctx, 31, 0x122768u);
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x122768u;
label_122768:
    // 0x122768: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x122768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12276c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12276Cu;
    {
        const bool branch_taken_0x12276c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x122770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12276Cu;
        // 0x122770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12276c) {
            ctx->pc = 0x122780u;
            goto label_122780;
        }
    }
    ctx->pc = 0x122774u;
    // 0x122774: 0xc048990  jal         func_122640
    ctx->pc = 0x122774u;
    SET_GPR_U32(ctx, 31, 0x12277Cu);
    ctx->pc = 0x122778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122774u;
    // 0x122778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x12277Cu;
label_12277c:
    // 0x12277c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122780:
    // 0x122780: 0xc048a1c  jal         func_122870
    ctx->pc = 0x122780u;
    SET_GPR_U32(ctx, 31, 0x122788u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x122780u, 0x122788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122788u;
label_122788:
    // 0x122788: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x122788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x12278c: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x12278Cu;
    SET_GPR_U32(ctx, 31, 0x122794u);
    ctx->pc = 0x122790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12278Cu;
    // 0x122790: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x12278Cu, 0x122794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122794u;
label_122794:
    // 0x122794: 0xc048a18  jal         func_122860
    ctx->pc = 0x122794u;
    SET_GPR_U32(ctx, 31, 0x12279Cu);
    ctx->pc = 0x122798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122794u;
    // 0x122798: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x122794u, 0x12279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12279Cu;
label_12279c:
    // 0x12279c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12279Cu;
    SET_GPR_U32(ctx, 31, 0x1227A4u);
    ctx->pc = 0x1227A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12279Cu;
    // 0x1227a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12279Cu, 0x1227A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227A4u;
label_1227a4:
    // 0x1227a4: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1227a8: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1227A8u;
    {
        const bool branch_taken_0x1227a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A8u;
        // 0x1227ac: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227a8) {
            ctx->pc = 0x122804u;
            goto label_122804;
        }
    }
    ctx->pc = 0x1227B0u;
    // 0x1227b0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1227b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1227b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1227B4u;
    {
        const bool branch_taken_0x1227b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227B4u;
        // 0x1227b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227b4) {
            ctx->pc = 0x1227C4u;
            goto label_1227c4;
        }
    }
    ctx->pc = 0x1227BCu;
    // 0x1227bc: 0xc048990  jal         func_122640
    ctx->pc = 0x1227BCu;
    SET_GPR_U32(ctx, 31, 0x1227C4u);
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x1227C4u;
label_1227c4:
    // 0x1227c4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1227c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1227c8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1227C8u;
    {
        const bool branch_taken_0x1227c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227C8u;
        // 0x1227cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227c8) {
            ctx->pc = 0x1227DCu;
            goto label_1227dc;
        }
    }
    ctx->pc = 0x1227D0u;
    // 0x1227d0: 0xc048990  jal         func_122640
    ctx->pc = 0x1227D0u;
    SET_GPR_U32(ctx, 31, 0x1227D8u);
    ctx->pc = 0x1227D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227D0u;
    // 0x1227d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122640u;
    goto label_122640;
    ctx->pc = 0x1227D8u;
label_1227d8:
    // 0x1227d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1227d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1227dc:
    // 0x1227dc: 0xc048a1c  jal         func_122870
    ctx->pc = 0x1227DCu;
    SET_GPR_U32(ctx, 31, 0x1227E4u);
    ctx->pc = 0x122870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122870u, 0x1227DCu, 0x1227E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227E4u;
label_1227e4:
    // 0x1227e4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1227e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1227e8: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x1227E8u;
    SET_GPR_U32(ctx, 31, 0x1227F0u);
    ctx->pc = 0x1227ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227E8u;
    // 0x1227ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x1227E8u, 0x1227F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F0u;
label_1227f0:
    // 0x1227f0: 0xc048a18  jal         func_122860
    ctx->pc = 0x1227F0u;
    SET_GPR_U32(ctx, 31, 0x1227F8u);
    ctx->pc = 0x1227F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F0u;
    // 0x1227f4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122860u, 0x1227F0u, 0x1227F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F8u;
label_1227f8:
    // 0x1227f8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1227F8u;
    SET_GPR_U32(ctx, 31, 0x122800u);
    ctx->pc = 0x1227FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F8u;
    // 0x1227fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1227F8u, 0x122800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122800u;
label_122800:
    // 0x122800: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x122800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_122804:
    // 0x122804: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122804u;
    {
        const bool branch_taken_0x122804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122804u;
        // 0x122808: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122804) {
            ctx->pc = 0x122814u;
            goto label_122814;
        }
    }
    ctx->pc = 0x12280Cu;
    // 0x12280c: 0xc04619c  jal         func_118670
    ctx->pc = 0x12280Cu;
    SET_GPR_U32(ctx, 31, 0x122814u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x12280Cu, 0x122814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122814u;
label_122814:
    // 0x122814: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122814u;
    SET_GPR_U32(ctx, 31, 0x12281Cu);
    ctx->pc = 0x122818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122814u;
    // 0x122818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122814u, 0x12281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12281Cu;
label_12281c:
    // 0x12281c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x12281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_122820:
    // 0x122820: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122820u;
    {
        const bool branch_taken_0x122820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122820u;
        // 0x122824: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122820) {
            ctx->pc = 0x122830u;
            goto label_122830;
        }
    }
    ctx->pc = 0x122828u;
    // 0x122828: 0xc04619c  jal         func_118670
    ctx->pc = 0x122828u;
    SET_GPR_U32(ctx, 31, 0x122830u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x122828u, 0x122830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122830u;
label_122830:
    // 0x122830: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122830u;
    SET_GPR_U32(ctx, 31, 0x122838u);
    ctx->pc = 0x122834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122830u;
    // 0x122834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122830u, 0x122838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122838u;
label_122838:
    // 0x122838: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12283c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12283cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12284c: 0x3e00008  jr          $ra
    ctx->pc = 0x12284Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12284Cu;
        // 0x122850: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12284Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122854u;
}
