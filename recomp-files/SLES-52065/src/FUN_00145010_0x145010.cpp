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

// Function: FUN_00145010
// Address: 0x145010 - 0x14515c
void FUN_00145010_0x145010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145010_0x145010");
#endif

    switch (ctx->pc) {
        case 0x145044u: goto label_145044;
        case 0x145050u: goto label_145050;
        case 0x145058u: goto label_145058;
        case 0x145064u: goto label_145064;
        case 0x145078u: goto label_145078;
        case 0x145084u: goto label_145084;
        case 0x1450a8u: goto label_1450a8;
        case 0x1450b4u: goto label_1450b4;
        case 0x1450bcu: goto label_1450bc;
        case 0x1450c8u: goto label_1450c8;
        case 0x1450dcu: goto label_1450dc;
        case 0x1450e8u: goto label_1450e8;
        case 0x14510cu: goto label_14510c;
        case 0x145118u: goto label_145118;
        case 0x145124u: goto label_145124;
        case 0x14512cu: goto label_14512c;
        case 0x145134u: goto label_145134;
        default: break;
    }

    ctx->pc = 0x145010u;

    // 0x145010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x145014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14501c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145020: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x145020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x145024: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x145024u;
    {
        const bool branch_taken_0x145024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145024u;
        // 0x145028: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145024) {
            ctx->pc = 0x145084u;
            goto label_145084;
        }
    }
    ctx->pc = 0x14502Cu;
    // 0x14502c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14502Cu;
    {
        const bool branch_taken_0x14502c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14502Cu;
        // 0x145030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14502c) {
            ctx->pc = 0x14507Cu;
            goto label_14507c;
        }
    }
    ctx->pc = 0x145034u;
    // 0x145034: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x145034u;
    {
        const bool branch_taken_0x145034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145034u;
        // 0x145038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145034) {
            ctx->pc = 0x145078u;
            goto label_145078;
        }
    }
    ctx->pc = 0x14503Cu;
    // 0x14503c: 0xc04c554  jal         func_131550
    ctx->pc = 0x14503Cu;
    SET_GPR_U32(ctx, 31, 0x145044u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x14503Cu, 0x145044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145044u;
label_145044:
    // 0x145044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145048: 0xc04c550  jal         func_131540
    ctx->pc = 0x145048u;
    SET_GPR_U32(ctx, 31, 0x145050u);
    ctx->pc = 0x14504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145048u;
    // 0x14504c: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x145048u, 0x145050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145050u;
label_145050:
    // 0x145050: 0xc04c554  jal         func_131550
    ctx->pc = 0x145050u;
    SET_GPR_U32(ctx, 31, 0x145058u);
    ctx->pc = 0x145054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145050u;
    // 0x145054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x145050u, 0x145058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145058u;
label_145058:
    // 0x145058: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x145058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14505c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x14505Cu;
    SET_GPR_U32(ctx, 31, 0x145064u);
    ctx->pc = 0x145060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14505Cu;
    // 0x145060: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x14505Cu, 0x145064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145064u;
label_145064:
    // 0x145064: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14506c: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x14506cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x145070: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x145070u;
    SET_GPR_U32(ctx, 31, 0x145078u);
    ctx->pc = 0x145074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145070u;
    // 0x145074: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323C0u, 0x145070u, 0x145078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145078u;
label_145078:
    // 0x145078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14507c:
    // 0x14507c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14507Cu;
    SET_GPR_U32(ctx, 31, 0x145084u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14507Cu, 0x145084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145084u;
label_145084:
    // 0x145084: 0x8e3001a0  lw          $s0, 0x1A0($s1)
    ctx->pc = 0x145084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x145088: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x145088u;
    {
        const bool branch_taken_0x145088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145088) {
            ctx->pc = 0x1450E8u;
            goto label_1450e8;
        }
    }
    ctx->pc = 0x145090u;
    // 0x145090: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x145090u;
    {
        const bool branch_taken_0x145090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145090u;
        // 0x145094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145090) {
            ctx->pc = 0x1450E0u;
            goto label_1450e0;
        }
    }
    ctx->pc = 0x145098u;
    // 0x145098: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x145098u;
    {
        const bool branch_taken_0x145098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145098u;
        // 0x14509c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145098) {
            ctx->pc = 0x1450DCu;
            goto label_1450dc;
        }
    }
    ctx->pc = 0x1450A0u;
    // 0x1450a0: 0xc05147c  jal         func_1451F0
    ctx->pc = 0x1450A0u;
    SET_GPR_U32(ctx, 31, 0x1450A8u);
    ctx->pc = 0x1451F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451F0u, 0x1450A0u, 0x1450A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450A8u;
label_1450a8:
    // 0x1450a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1450a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450ac: 0xc051474  jal         func_1451D0
    ctx->pc = 0x1450ACu;
    SET_GPR_U32(ctx, 31, 0x1450B4u);
    ctx->pc = 0x1450B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450ACu;
    // 0x1450b0: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x1450ACu, 0x1450B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450B4u;
label_1450b4:
    // 0x1450b4: 0xc05147c  jal         func_1451F0
    ctx->pc = 0x1450B4u;
    SET_GPR_U32(ctx, 31, 0x1450BCu);
    ctx->pc = 0x1450B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450B4u;
    // 0x1450b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451F0u, 0x1450B4u, 0x1450BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450BCu;
label_1450bc:
    // 0x1450bc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1450bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1450c0: 0xc051478  jal         func_1451E0
    ctx->pc = 0x1450C0u;
    SET_GPR_U32(ctx, 31, 0x1450C8u);
    ctx->pc = 0x1450C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450C0u;
    // 0x1450c4: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451E0u, 0x1450C0u, 0x1450C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450C8u;
label_1450c8:
    // 0x1450c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1450c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1450cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1450ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450d0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1450d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1450d4: 0xc0514b8  jal         func_1452E0
    ctx->pc = 0x1450D4u;
    SET_GPR_U32(ctx, 31, 0x1450DCu);
    ctx->pc = 0x1450D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450D4u;
    // 0x1450d8: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452E0u, 0x1450D4u, 0x1450DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450DCu;
label_1450dc:
    // 0x1450dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1450dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1450e0:
    // 0x1450e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1450E0u;
    SET_GPR_U32(ctx, 31, 0x1450E8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1450E0u, 0x1450E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450E8u;
label_1450e8:
    // 0x1450e8: 0x8e3001a4  lw          $s0, 0x1A4($s1)
    ctx->pc = 0x1450e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x1450ec: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1450ECu;
    {
        const bool branch_taken_0x1450ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1450ec) {
            ctx->pc = 0x145124u;
            goto label_145124;
        }
    }
    ctx->pc = 0x1450F4u;
    // 0x1450f4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1450F4u;
    {
        const bool branch_taken_0x1450f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450F4u;
        // 0x1450f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450f4) {
            ctx->pc = 0x14511Cu;
            goto label_14511c;
        }
    }
    ctx->pc = 0x1450FCu;
    // 0x1450fc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1450FCu;
    {
        const bool branch_taken_0x1450fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450FCu;
        // 0x145100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450fc) {
            ctx->pc = 0x145118u;
            goto label_145118;
        }
    }
    ctx->pc = 0x145104u;
    // 0x145104: 0xc0514ec  jal         func_1453B0
    ctx->pc = 0x145104u;
    SET_GPR_U32(ctx, 31, 0x14510Cu);
    ctx->pc = 0x1453B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453B0u, 0x145104u, 0x14510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14510Cu;
label_14510c:
    // 0x14510c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14510cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x145110: 0xc051458  jal         func_145160
    ctx->pc = 0x145110u;
    SET_GPR_U32(ctx, 31, 0x145118u);
    ctx->pc = 0x145114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145110u;
    // 0x145114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145160u, 0x145110u, 0x145118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145118u;
label_145118:
    // 0x145118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14511c:
    // 0x14511c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14511Cu;
    SET_GPR_U32(ctx, 31, 0x145124u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14511Cu, 0x145124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145124u;
label_145124:
    // 0x145124: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145124u;
    SET_GPR_U32(ctx, 31, 0x14512Cu);
    ctx->pc = 0x145128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145124u;
    // 0x145128: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145124u, 0x14512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14512Cu;
label_14512c:
    // 0x14512c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14512Cu;
    SET_GPR_U32(ctx, 31, 0x145134u);
    ctx->pc = 0x145130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14512Cu;
    // 0x145130: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14512Cu, 0x145134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145134u;
label_145134:
    // 0x145134: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x145134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x145138: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x145138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x14513c: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x14513cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x145140: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x145140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x145144: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x145144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x145148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14514c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14514cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145154: 0x3e00008  jr          $ra
    ctx->pc = 0x145154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145154u;
        // 0x145158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14515Cu;
}
