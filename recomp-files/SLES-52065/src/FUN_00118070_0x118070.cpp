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

// Function: FUN_00118070
// Address: 0x118070 - 0x1181b8
void FUN_00118070_0x118070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118070_0x118070");
#endif

    switch (ctx->pc) {
        case 0x118088u: goto label_118088;
        case 0x118090u: goto label_118090;
        case 0x1180f4u: goto label_1180f4;
        case 0x118100u: goto label_118100;
        case 0x118164u: goto label_118164;
        case 0x118170u: goto label_118170;
        case 0x118178u: goto label_118178;
        case 0x118184u: goto label_118184;
        case 0x11818cu: goto label_11818c;
        case 0x118198u: goto label_118198;
        case 0x1181a0u: goto label_1181a0;
        case 0x1181a8u: goto label_1181a8;
        default: break;
    }

    ctx->pc = 0x118070u;

    // 0x118070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11807c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11807cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118080: 0xc04c26c  jal         func_1309B0
    ctx->pc = 0x118080u;
    SET_GPR_U32(ctx, 31, 0x118088u);
    ctx->pc = 0x118084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118080u;
    // 0x118084: 0x27848334  addiu       $a0, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1309B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1309B0u, 0x118080u, 0x118088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118088u;
label_118088:
    // 0x118088: 0xc045908  jal         func_116420
    ctx->pc = 0x118088u;
    SET_GPR_U32(ctx, 31, 0x118090u);
    ctx->pc = 0x116420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116420u, 0x118088u, 0x118090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118090u;
label_118090:
    // 0x118090: 0x8f848358  lw          $a0, -0x7CA8($gp)
    ctx->pc = 0x118090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x118094: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x118094u;
    {
        const bool branch_taken_0x118094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118094u;
        // 0x118098: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118094) {
            ctx->pc = 0x1180E4u;
            goto label_1180e4;
        }
    }
    ctx->pc = 0x11809Cu;
    // 0x11809c: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x11809cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1180a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1180a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1180a4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1180a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1180a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1180a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1180ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1180ACu;
    {
        const bool branch_taken_0x1180ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180ACu;
        // 0x1180b0: 0x8f83835c  lw          $v1, -0x7CA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180ac) {
            ctx->pc = 0x1180C0u;
            goto label_1180c0;
        }
    }
    ctx->pc = 0x1180B4u;
    // 0x1180b4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1180b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1180b8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1180b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1180bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1180bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1180c0:
    // 0x1180c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1180C0u;
    {
        const bool branch_taken_0x1180c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1180c0) {
            ctx->pc = 0x1180D4u;
            goto label_1180d4;
        }
    }
    ctx->pc = 0x1180C8u;
    // 0x1180c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1180c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1180cc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1180ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1180d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1180d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1180d4:
    // 0x1180d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1180D4u;
    {
        const bool branch_taken_0x1180d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1180d4) {
            ctx->pc = 0x1180E4u;
            goto label_1180e4;
        }
    }
    ctx->pc = 0x1180DCu;
    // 0x1180dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1180DCu;
    {
        const bool branch_taken_0x1180dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180DCu;
        // 0x1180e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180dc) {
            ctx->pc = 0x1180ECu;
            goto label_1180ec;
        }
    }
    ctx->pc = 0x1180E4u;
label_1180e4:
    // 0x1180e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1180e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1180e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1180ec:
    // 0x1180ec: 0xc06d220  jal         func_1B4880
    ctx->pc = 0x1180ECu;
    SET_GPR_U32(ctx, 31, 0x1180F4u);
    ctx->pc = 0x1B4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4880u, 0x1180ECu, 0x1180F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1180F4u;
label_1180f4:
    // 0x1180f4: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1180f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1180f8: 0xc053c54  jal         func_14F150
    ctx->pc = 0x1180F8u;
    SET_GPR_U32(ctx, 31, 0x118100u);
    ctx->pc = 0x1180FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1180F8u;
    // 0x1180fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x1180F8u, 0x118100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118100u;
label_118100:
    // 0x118100: 0x8f848350  lw          $a0, -0x7CB0($gp)
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935376)));
    // 0x118104: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x118104u;
    {
        const bool branch_taken_0x118104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118104u;
        // 0x118108: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118104) {
            ctx->pc = 0x118154u;
            goto label_118154;
        }
    }
    ctx->pc = 0x11810Cu;
    // 0x11810c: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x11810cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x118110: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x118110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118114: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x118114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x118118: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x118118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11811c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11811Cu;
    {
        const bool branch_taken_0x11811c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11811Cu;
        // 0x118120: 0x8f838354  lw          $v1, -0x7CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11811c) {
            ctx->pc = 0x118130u;
            goto label_118130;
        }
    }
    ctx->pc = 0x118124u;
    // 0x118124: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x118124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x118128: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x118128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x11812c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11812cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_118130:
    // 0x118130: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118130u;
    {
        const bool branch_taken_0x118130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118130) {
            ctx->pc = 0x118144u;
            goto label_118144;
        }
    }
    ctx->pc = 0x118138u;
    // 0x118138: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x118138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11813c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x118140: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x118140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_118144:
    // 0x118144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118144u;
    {
        const bool branch_taken_0x118144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118144) {
            ctx->pc = 0x118154u;
            goto label_118154;
        }
    }
    ctx->pc = 0x11814Cu;
    // 0x11814c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11814Cu;
    {
        const bool branch_taken_0x11814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11814Cu;
        // 0x118150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11814c) {
            ctx->pc = 0x11815Cu;
            goto label_11815c;
        }
    }
    ctx->pc = 0x118154u;
label_118154:
    // 0x118154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x118154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x118158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11815c:
    // 0x11815c: 0xc06d220  jal         func_1B4880
    ctx->pc = 0x11815Cu;
    SET_GPR_U32(ctx, 31, 0x118164u);
    ctx->pc = 0x1B4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4880u, 0x11815Cu, 0x118164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118164u;
label_118164:
    // 0x118164: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x118164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x118168: 0xc053c54  jal         func_14F150
    ctx->pc = 0x118168u;
    SET_GPR_U32(ctx, 31, 0x118170u);
    ctx->pc = 0x11816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118168u;
    // 0x11816c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x118168u, 0x118170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118170u;
label_118170:
    // 0x118170: 0xc04b1e4  jal         func_12C790
    ctx->pc = 0x118170u;
    SET_GPR_U32(ctx, 31, 0x118178u);
    ctx->pc = 0x12C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C790u, 0x118170u, 0x118178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118178u;
label_118178:
    // 0x118178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11817c: 0xc04b21c  jal         func_12C870
    ctx->pc = 0x11817Cu;
    SET_GPR_U32(ctx, 31, 0x118184u);
    ctx->pc = 0x118180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11817Cu;
    // 0x118180: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C870u, 0x11817Cu, 0x118184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118184u;
label_118184:
    // 0x118184: 0xc04b220  jal         func_12C880
    ctx->pc = 0x118184u;
    SET_GPR_U32(ctx, 31, 0x11818Cu);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x118184u, 0x11818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11818Cu;
label_11818c:
    // 0x11818c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118190: 0xc04b27c  jal         func_12C9F0
    ctx->pc = 0x118190u;
    SET_GPR_U32(ctx, 31, 0x118198u);
    ctx->pc = 0x118194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118190u;
    // 0x118194: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C9F0u, 0x118190u, 0x118198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118198u;
label_118198:
    // 0x118198: 0xc045e40  jal         func_117900
    ctx->pc = 0x118198u;
    SET_GPR_U32(ctx, 31, 0x1181A0u);
    ctx->pc = 0x11819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118198u;
    // 0x11819c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117900u, 0x118198u, 0x1181A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181A0u;
label_1181a0:
    // 0x1181a0: 0xc061868  jal         func_1861A0
    ctx->pc = 0x1181A0u;
    SET_GPR_U32(ctx, 31, 0x1181A8u);
    ctx->pc = 0x1861A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1861A0u, 0x1181A0u, 0x1181A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181A8u;
label_1181a8:
    // 0x1181a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1181a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1181ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1181acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1181b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1181B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1181B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181B0u;
        // 0x1181b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1181B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1181B8u;
}
