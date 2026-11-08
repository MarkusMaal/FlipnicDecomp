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

// Function: FUN_001ca710
// Address: 0x1ca710 - 0x1ca99c
void FUN_001ca710_0x1ca710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca710_0x1ca710");
#endif

    switch (ctx->pc) {
        case 0x1ca75cu: goto label_1ca75c;
        case 0x1ca78cu: goto label_1ca78c;
        case 0x1ca7a8u: goto label_1ca7a8;
        case 0x1ca7b4u: goto label_1ca7b4;
        case 0x1ca7c8u: goto label_1ca7c8;
        case 0x1ca7d4u: goto label_1ca7d4;
        case 0x1ca7f8u: goto label_1ca7f8;
        case 0x1ca800u: goto label_1ca800;
        case 0x1ca810u: goto label_1ca810;
        case 0x1ca818u: goto label_1ca818;
        case 0x1ca828u: goto label_1ca828;
        case 0x1ca830u: goto label_1ca830;
        case 0x1ca848u: goto label_1ca848;
        case 0x1ca850u: goto label_1ca850;
        case 0x1ca860u: goto label_1ca860;
        case 0x1ca868u: goto label_1ca868;
        case 0x1ca884u: goto label_1ca884;
        case 0x1ca88cu: goto label_1ca88c;
        case 0x1ca89cu: goto label_1ca89c;
        case 0x1ca8a4u: goto label_1ca8a4;
        case 0x1ca8b4u: goto label_1ca8b4;
        case 0x1ca8c4u: goto label_1ca8c4;
        case 0x1ca8d4u: goto label_1ca8d4;
        case 0x1ca8dcu: goto label_1ca8dc;
        case 0x1ca8f0u: goto label_1ca8f0;
        case 0x1ca904u: goto label_1ca904;
        case 0x1ca90cu: goto label_1ca90c;
        case 0x1ca91cu: goto label_1ca91c;
        case 0x1ca924u: goto label_1ca924;
        case 0x1ca930u: goto label_1ca930;
        case 0x1ca940u: goto label_1ca940;
        case 0x1ca950u: goto label_1ca950;
        case 0x1ca95cu: goto label_1ca95c;
        case 0x1ca96cu: goto label_1ca96c;
        case 0x1ca97cu: goto label_1ca97c;
        case 0x1ca988u: goto label_1ca988;
        default: break;
    }

    ctx->pc = 0x1ca710u;

    // 0x1ca710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca720: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1ca720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1ca724: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x1ca724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x1ca728: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1ca728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1ca72c: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1ca72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1ca730: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1ca730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1ca734: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA734u;
    {
        const bool branch_taken_0x1ca734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA734u;
        // 0x1ca738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca734) {
            ctx->pc = 0x1CA75Cu;
            goto label_1ca75c;
        }
    }
    ctx->pc = 0x1CA73Cu;
    // 0x1ca73c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ca740: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1ca740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ca744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca748: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ca74c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca750: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1ca750u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ca754: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CA754u;
    SET_GPR_U32(ctx, 31, 0x1CA75Cu);
    ctx->pc = 0x1CA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA754u;
    // 0x1ca758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CA754u, 0x1CA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA75Cu;
label_1ca75c:
    // 0x1ca75c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1ca75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca760: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca764: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA764u;
    {
        const bool branch_taken_0x1ca764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA764u;
        // 0x1ca768: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca764) {
            ctx->pc = 0x1CA78Cu;
            goto label_1ca78c;
        }
    }
    ctx->pc = 0x1CA76Cu;
    // 0x1ca76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca770: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ca770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ca774: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1ca774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ca778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca77c: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1ca77cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1ca780: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1ca780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca784: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CA784u;
    SET_GPR_U32(ctx, 31, 0x1CA78Cu);
    ctx->pc = 0x1CA788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA784u;
    // 0x1ca788: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CA784u, 0x1CA78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA78Cu;
label_1ca78c:
    // 0x1ca78c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1ca78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ca790: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA790u;
    {
        const bool branch_taken_0x1ca790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA790u;
        // 0x1ca794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca790) {
            ctx->pc = 0x1CA7BCu;
            goto label_1ca7bc;
        }
    }
    ctx->pc = 0x1CA798u;
    // 0x1ca798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca79c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ca79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca7a0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA7A0u;
    SET_GPR_U32(ctx, 31, 0x1CA7A8u);
    ctx->pc = 0x1CA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7A0u;
    // 0x1ca7a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA7A0u, 0x1CA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7A8u;
label_1ca7a8:
    // 0x1ca7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7ac: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CA7ACu;
    SET_GPR_U32(ctx, 31, 0x1CA7B4u);
    ctx->pc = 0x1CA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7ACu;
    // 0x1ca7b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CA7ACu, 0x1CA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7B4u;
label_1ca7b4:
    // 0x1ca7b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA7B4u;
    {
        const bool branch_taken_0x1ca7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7B4u;
        // 0x1ca7b8: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7b4) {
            ctx->pc = 0x1CA7D8u;
            goto label_1ca7d8;
        }
    }
    ctx->pc = 0x1CA7BCu;
label_1ca7bc:
    // 0x1ca7bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ca7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca7c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA7C0u;
    SET_GPR_U32(ctx, 31, 0x1CA7C8u);
    ctx->pc = 0x1CA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7C0u;
    // 0x1ca7c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA7C0u, 0x1CA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7C8u;
label_1ca7c8:
    // 0x1ca7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7cc: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CA7CCu;
    SET_GPR_U32(ctx, 31, 0x1CA7D4u);
    ctx->pc = 0x1CA7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7CCu;
    // 0x1ca7d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CA7CCu, 0x1CA7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7D4u;
label_1ca7d4:
    // 0x1ca7d4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1ca7d8:
    // 0x1ca7d8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1ca7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ca7dc: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CA7DCu;
    {
        const bool branch_taken_0x1ca7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca7dc) {
            ctx->pc = 0x1CA868u;
            goto label_1ca868;
        }
    }
    ctx->pc = 0x1CA7E4u;
    // 0x1ca7e4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA7E4u;
    {
        const bool branch_taken_0x1ca7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7E4u;
        // 0x1ca7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7e4) {
            ctx->pc = 0x1CA838u;
            goto label_1ca838;
        }
    }
    ctx->pc = 0x1CA7ECu;
    // 0x1ca7ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca7f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA7F0u;
    SET_GPR_U32(ctx, 31, 0x1CA7F8u);
    ctx->pc = 0x1CA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7F0u;
    // 0x1ca7f4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA7F0u, 0x1CA7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7F8u;
label_1ca7f8:
    // 0x1ca7f8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA7F8u;
    SET_GPR_U32(ctx, 31, 0x1CA800u);
    ctx->pc = 0x1CA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7F8u;
    // 0x1ca7fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA7F8u, 0x1CA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA800u;
label_1ca800:
    // 0x1ca800: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca808: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA808u;
    SET_GPR_U32(ctx, 31, 0x1CA810u);
    ctx->pc = 0x1CA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA808u;
    // 0x1ca80c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA808u, 0x1CA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA810u;
label_1ca810:
    // 0x1ca810: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA810u;
    SET_GPR_U32(ctx, 31, 0x1CA818u);
    ctx->pc = 0x1CA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA810u;
    // 0x1ca814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA810u, 0x1CA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA818u;
label_1ca818:
    // 0x1ca818: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ca818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca820: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA820u;
    SET_GPR_U32(ctx, 31, 0x1CA828u);
    ctx->pc = 0x1CA824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA820u;
    // 0x1ca824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA820u, 0x1CA828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA828u;
label_1ca828:
    // 0x1ca828: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA828u;
    SET_GPR_U32(ctx, 31, 0x1CA830u);
    ctx->pc = 0x1CA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA828u;
    // 0x1ca82c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA828u, 0x1CA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA830u;
label_1ca830:
    // 0x1ca830: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CA830u;
    {
        const bool branch_taken_0x1ca830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA830u;
        // 0x1ca834: 0x8e060060  lw          $a2, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca830) {
            ctx->pc = 0x1CA86Cu;
            goto label_1ca86c;
        }
    }
    ctx->pc = 0x1CA838u;
label_1ca838:
    // 0x1ca838: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca840: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA840u;
    SET_GPR_U32(ctx, 31, 0x1CA848u);
    ctx->pc = 0x1CA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA840u;
    // 0x1ca844: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA840u, 0x1CA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA848u;
label_1ca848:
    // 0x1ca848: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA848u;
    SET_GPR_U32(ctx, 31, 0x1CA850u);
    ctx->pc = 0x1CA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA848u;
    // 0x1ca84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA848u, 0x1CA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA850u;
label_1ca850:
    // 0x1ca850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca854: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca858: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA858u;
    SET_GPR_U32(ctx, 31, 0x1CA860u);
    ctx->pc = 0x1CA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA858u;
    // 0x1ca85c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA858u, 0x1CA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA860u;
label_1ca860:
    // 0x1ca860: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA860u;
    SET_GPR_U32(ctx, 31, 0x1CA868u);
    ctx->pc = 0x1CA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA860u;
    // 0x1ca864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA860u, 0x1CA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA868u;
label_1ca868:
    // 0x1ca868: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ca86c:
    // 0x1ca86c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1ca86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca870: 0x10c2002d  beq         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1CA870u;
    {
        const bool branch_taken_0x1ca870 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA870u;
        // 0x1ca874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca870) {
            ctx->pc = 0x1CA928u;
            goto label_1ca928;
        }
    }
    ctx->pc = 0x1CA878u;
    // 0x1ca878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca87c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA87Cu;
    SET_GPR_U32(ctx, 31, 0x1CA884u);
    ctx->pc = 0x1CA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA87Cu;
    // 0x1ca880: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA87Cu, 0x1CA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA884u;
label_1ca884:
    // 0x1ca884: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA884u;
    SET_GPR_U32(ctx, 31, 0x1CA88Cu);
    ctx->pc = 0x1CA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA884u;
    // 0x1ca888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA884u, 0x1CA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA88Cu;
label_1ca88c:
    // 0x1ca88c: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca894: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA894u;
    SET_GPR_U32(ctx, 31, 0x1CA89Cu);
    ctx->pc = 0x1CA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA894u;
    // 0x1ca898: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA894u, 0x1CA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA89Cu;
label_1ca89c:
    // 0x1ca89c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA89Cu;
    SET_GPR_U32(ctx, 31, 0x1CA8A4u);
    ctx->pc = 0x1CA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA89Cu;
    // 0x1ca8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA89Cu, 0x1CA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8A4u;
label_1ca8a4:
    // 0x1ca8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ca8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca8ac: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CA8ACu;
    SET_GPR_U32(ctx, 31, 0x1CA8B4u);
    ctx->pc = 0x1CA8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8ACu;
    // 0x1ca8b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CA8ACu, 0x1CA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8B4u;
label_1ca8b4:
    // 0x1ca8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ca8bc: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CA8BCu;
    SET_GPR_U32(ctx, 31, 0x1CA8C4u);
    ctx->pc = 0x1CA8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8BCu;
    // 0x1ca8c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CA8BCu, 0x1CA8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8C4u;
label_1ca8c4:
    // 0x1ca8c4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA8CCu;
    SET_GPR_U32(ctx, 31, 0x1CA8D4u);
    ctx->pc = 0x1CA8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8CCu;
    // 0x1ca8d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA8CCu, 0x1CA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8D4u;
label_1ca8d4:
    // 0x1ca8d4: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CA8D4u;
    SET_GPR_U32(ctx, 31, 0x1CA8DCu);
    ctx->pc = 0x1CA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8D4u;
    // 0x1ca8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CA8D4u, 0x1CA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8DCu;
label_1ca8dc:
    // 0x1ca8dc: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ca8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca8e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA8E8u;
    SET_GPR_U32(ctx, 31, 0x1CA8F0u);
    ctx->pc = 0x1CA8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8E8u;
    // 0x1ca8ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA8E8u, 0x1CA8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8F0u;
label_1ca8f0:
    // 0x1ca8f0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1ca8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1ca8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8f8: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca8fc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA8FCu;
    SET_GPR_U32(ctx, 31, 0x1CA904u);
    ctx->pc = 0x1CA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8FCu;
    // 0x1ca900: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA8FCu, 0x1CA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA904u;
label_1ca904:
    // 0x1ca904: 0xc06e47c  jal         func_1B91F0
    ctx->pc = 0x1CA904u;
    SET_GPR_U32(ctx, 31, 0x1CA90Cu);
    ctx->pc = 0x1CA908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA904u;
    // 0x1ca908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91F0u, 0x1CA904u, 0x1CA90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA90Cu;
label_1ca90c:
    // 0x1ca90c: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ca90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca914: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA914u;
    SET_GPR_U32(ctx, 31, 0x1CA91Cu);
    ctx->pc = 0x1CA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA914u;
    // 0x1ca918: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA914u, 0x1CA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA91Cu;
label_1ca91c:
    // 0x1ca91c: 0xc06e474  jal         func_1B91D0
    ctx->pc = 0x1CA91Cu;
    SET_GPR_U32(ctx, 31, 0x1CA924u);
    ctx->pc = 0x1CA920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA91Cu;
    // 0x1ca920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91D0u, 0x1CA91Cu, 0x1CA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA924u;
label_1ca924:
    // 0x1ca924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca928:
    // 0x1ca928: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CA928u;
    SET_GPR_U32(ctx, 31, 0x1CA930u);
    ctx->pc = 0x1CA92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA928u;
    // 0x1ca92c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CA928u, 0x1CA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA930u;
label_1ca930:
    // 0x1ca930: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA930u;
    {
        const bool branch_taken_0x1ca930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA930u;
        // 0x1ca934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca930) {
            ctx->pc = 0x1CA954u;
            goto label_1ca954;
        }
    }
    ctx->pc = 0x1CA938u;
    // 0x1ca938: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1CA938u;
    SET_GPR_U32(ctx, 31, 0x1CA940u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1CA938u, 0x1CA940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA940u;
label_1ca940:
    // 0x1ca940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA940u;
    {
        const bool branch_taken_0x1ca940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA940u;
        // 0x1ca944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca940) {
            ctx->pc = 0x1CA950u;
            goto label_1ca950;
        }
    }
    ctx->pc = 0x1CA948u;
    // 0x1ca948: 0xc072adc  jal         func_1CAB70
    ctx->pc = 0x1CA948u;
    SET_GPR_U32(ctx, 31, 0x1CA950u);
    ctx->pc = 0x1CA94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA948u;
    // 0x1ca94c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAB70u, 0x1CA948u, 0x1CA950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA950u;
label_1ca950:
    // 0x1ca950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca954:
    // 0x1ca954: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CA954u;
    SET_GPR_U32(ctx, 31, 0x1CA95Cu);
    ctx->pc = 0x1CA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA954u;
    // 0x1ca958: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CA954u, 0x1CA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA95Cu;
label_1ca95c:
    // 0x1ca95c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA95Cu;
    {
        const bool branch_taken_0x1ca95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA95Cu;
        // 0x1ca960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca95c) {
            ctx->pc = 0x1CA980u;
            goto label_1ca980;
        }
    }
    ctx->pc = 0x1CA964u;
    // 0x1ca964: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1CA964u;
    SET_GPR_U32(ctx, 31, 0x1CA96Cu);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1CA964u, 0x1CA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA96Cu;
label_1ca96c:
    // 0x1ca96c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA96Cu;
    {
        const bool branch_taken_0x1ca96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA96Cu;
        // 0x1ca970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca96c) {
            ctx->pc = 0x1CA97Cu;
            goto label_1ca97c;
        }
    }
    ctx->pc = 0x1CA974u;
    // 0x1ca974: 0xc072adc  jal         func_1CAB70
    ctx->pc = 0x1CA974u;
    SET_GPR_U32(ctx, 31, 0x1CA97Cu);
    ctx->pc = 0x1CA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA974u;
    // 0x1ca978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAB70u, 0x1CA974u, 0x1CA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA97Cu;
label_1ca97c:
    // 0x1ca97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca980:
    // 0x1ca980: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CA980u;
    SET_GPR_U32(ctx, 31, 0x1CA988u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CA980u, 0x1CA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA988u;
label_1ca988:
    // 0x1ca988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca994: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA994u;
        // 0x1ca998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA99Cu;
}
