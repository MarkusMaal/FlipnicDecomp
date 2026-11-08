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

// Function: FUN_00136670
// Address: 0x136670 - 0x136764
void FUN_00136670_0x136670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136670_0x136670");
#endif

    switch (ctx->pc) {
        case 0x136670u: goto label_136670;
        case 0x136674u: goto label_136674;
        case 0x136678u: goto label_136678;
        case 0x13667cu: goto label_13667c;
        case 0x136680u: goto label_136680;
        case 0x136684u: goto label_136684;
        case 0x136688u: goto label_136688;
        case 0x13668cu: goto label_13668c;
        case 0x136690u: goto label_136690;
        case 0x136694u: goto label_136694;
        case 0x136698u: goto label_136698;
        case 0x13669cu: goto label_13669c;
        case 0x1366a0u: goto label_1366a0;
        case 0x1366a4u: goto label_1366a4;
        case 0x1366a8u: goto label_1366a8;
        case 0x1366acu: goto label_1366ac;
        case 0x1366b0u: goto label_1366b0;
        case 0x1366b4u: goto label_1366b4;
        case 0x1366b8u: goto label_1366b8;
        case 0x1366bcu: goto label_1366bc;
        case 0x1366c0u: goto label_1366c0;
        case 0x1366c4u: goto label_1366c4;
        case 0x1366c8u: goto label_1366c8;
        case 0x1366ccu: goto label_1366cc;
        case 0x1366d0u: goto label_1366d0;
        case 0x1366d4u: goto label_1366d4;
        case 0x1366d8u: goto label_1366d8;
        case 0x1366dcu: goto label_1366dc;
        case 0x1366e0u: goto label_1366e0;
        case 0x1366e4u: goto label_1366e4;
        case 0x1366e8u: goto label_1366e8;
        case 0x1366ecu: goto label_1366ec;
        case 0x1366f0u: goto label_1366f0;
        case 0x1366f4u: goto label_1366f4;
        case 0x1366f8u: goto label_1366f8;
        case 0x1366fcu: goto label_1366fc;
        case 0x136700u: goto label_136700;
        case 0x136704u: goto label_136704;
        case 0x136708u: goto label_136708;
        case 0x13670cu: goto label_13670c;
        case 0x136710u: goto label_136710;
        case 0x136714u: goto label_136714;
        case 0x136718u: goto label_136718;
        case 0x13671cu: goto label_13671c;
        case 0x136720u: goto label_136720;
        case 0x136724u: goto label_136724;
        case 0x136728u: goto label_136728;
        case 0x13672cu: goto label_13672c;
        case 0x136730u: goto label_136730;
        case 0x136734u: goto label_136734;
        case 0x136738u: goto label_136738;
        case 0x13673cu: goto label_13673c;
        case 0x136740u: goto label_136740;
        case 0x136744u: goto label_136744;
        case 0x136748u: goto label_136748;
        case 0x13674cu: goto label_13674c;
        case 0x136750u: goto label_136750;
        case 0x136754u: goto label_136754;
        case 0x136758u: goto label_136758;
        case 0x13675cu: goto label_13675c;
        case 0x136760u: goto label_136760;
        default: break;
    }

    ctx->pc = 0x136670u;

label_136670:
    // 0x136670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_136674:
    // 0x136674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_136678:
    // 0x136678: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x136678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_13667c:
    // 0x13667c: 0xc04c4c0  jal         func_131300
label_136680:
    if (ctx->pc == 0x136680u) {
        ctx->pc = 0x136680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13667Cu;
        // 0x136680: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136684u;
        goto label_136684;
    }
    ctx->pc = 0x13667Cu;
    SET_GPR_U32(ctx, 31, 0x136684u);
    ctx->pc = 0x136680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13667Cu;
    // 0x136680: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x13667Cu, 0x136684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136684u;
label_136684:
    // 0x136684: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x136684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_136688:
    // 0x136688: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x136688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_13668c:
    // 0x13668c: 0x24638f20  addiu       $v1, $v1, -0x70E0
    ctx->pc = 0x13668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938400));
label_136690:
    // 0x136690: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x136690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_136694:
    // 0x136694: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x136694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_136698:
    // 0x136698: 0xc0497a0  jal         func_125E80
label_13669c:
    if (ctx->pc == 0x13669Cu) {
        ctx->pc = 0x13669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136698u;
        // 0x13669c: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1366A0u;
        goto label_1366a0;
    }
    ctx->pc = 0x136698u;
    SET_GPR_U32(ctx, 31, 0x1366A0u);
    ctx->pc = 0x13669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136698u;
    // 0x13669c: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x136698u, 0x1366A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366A0u;
label_1366a0:
    // 0x1366a0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1366a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1366a4:
    // 0x1366a4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1366a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1366a8:
    // 0x1366a8: 0x24420ed0  addiu       $v0, $v0, 0xED0
    ctx->pc = 0x1366a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
label_1366ac:
    // 0x1366ac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1366acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1366b0:
    // 0x1366b0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1366b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1366b4:
    // 0x1366b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1366b8:
    // 0x1366b8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1366b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_1366bc:
    // 0x1366bc: 0x244264d0  addiu       $v0, $v0, 0x64D0
    ctx->pc = 0x1366bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25808));
label_1366c0:
    // 0x1366c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1366c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1366c4:
    // 0x1366c4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1366c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1366c8:
    // 0x1366c8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1366c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1366cc:
    // 0x1366cc: 0x8c590090  lw          $t9, 0x90($v0)
    ctx->pc = 0x1366ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_1366d0:
    // 0x1366d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1366d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1366d4:
    // 0x1366d4: 0x320f809  jalr        $t9
label_1366d8:
    if (ctx->pc == 0x1366D8u) {
        ctx->pc = 0x1366D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366D4u;
        // 0x1366d8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1366DCu;
        goto label_1366dc;
    }
    ctx->pc = 0x1366D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1366DCu);
        ctx->pc = 0x1366D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366D4u;
        // 0x1366d8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1366D4u, 0x1366DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1366DCu;
label_1366dc:
    // 0x1366dc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1366e0:
    // 0x1366e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1366e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1366e4:
    // 0x1366e4: 0x8c590090  lw          $t9, 0x90($v0)
    ctx->pc = 0x1366e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_1366e8:
    // 0x1366e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1366e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1366ec:
    // 0x1366ec: 0x320f809  jalr        $t9
label_1366f0:
    if (ctx->pc == 0x1366F0u) {
        ctx->pc = 0x1366F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366ECu;
        // 0x1366f0: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1366F4u;
        goto label_1366f4;
    }
    ctx->pc = 0x1366ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1366F4u);
        ctx->pc = 0x1366F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366ECu;
        // 0x1366f0: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1366ECu, 0x1366F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1366F4u;
label_1366f4:
    // 0x1366f4: 0xc0401bc  jal         func_1006F0
label_1366f8:
    if (ctx->pc == 0x1366F8u) {
        ctx->pc = 0x1366F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366F4u;
        // 0x1366f8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1366FCu;
        goto label_1366fc;
    }
    ctx->pc = 0x1366F4u;
    SET_GPR_U32(ctx, 31, 0x1366FCu);
    ctx->pc = 0x1366F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366F4u;
    // 0x1366f8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1366F4u, 0x1366FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366FCu;
label_1366fc:
    // 0x1366fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_136700:
    if (ctx->pc == 0x136700u) {
        ctx->pc = 0x136700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366FCu;
        // 0x136700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136704u;
        goto label_136704;
    }
    ctx->pc = 0x1366FCu;
    {
        const bool branch_taken_0x1366fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366FCu;
        // 0x136700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366fc) {
            ctx->pc = 0x13670Cu;
            goto label_13670c;
        }
    }
    ctx->pc = 0x136704u;
label_136704:
    // 0x136704: 0xc04c4c0  jal         func_131300
label_136708:
    if (ctx->pc == 0x136708u) {
        ctx->pc = 0x13670Cu;
        goto label_13670c;
    }
    ctx->pc = 0x136704u;
    SET_GPR_U32(ctx, 31, 0x13670Cu);
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x136704u, 0x13670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13670Cu;
label_13670c:
    // 0x13670c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x13670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_136710:
    // 0x136710: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x136710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_136714:
    // 0x136714: 0xc0401bc  jal         func_1006F0
label_136718:
    if (ctx->pc == 0x136718u) {
        ctx->pc = 0x136718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136714u;
        // 0x136718: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13671Cu;
        goto label_13671c;
    }
    ctx->pc = 0x136714u;
    SET_GPR_U32(ctx, 31, 0x13671Cu);
    ctx->pc = 0x136718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136714u;
    // 0x136718: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x136714u, 0x13671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13671Cu;
label_13671c:
    // 0x13671c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_136720:
    if (ctx->pc == 0x136720u) {
        ctx->pc = 0x136720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13671Cu;
        // 0x136720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136724u;
        goto label_136724;
    }
    ctx->pc = 0x13671Cu;
    {
        const bool branch_taken_0x13671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13671Cu;
        // 0x136720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13671c) {
            ctx->pc = 0x13672Cu;
            goto label_13672c;
        }
    }
    ctx->pc = 0x136724u;
label_136724:
    // 0x136724: 0xc04c4c0  jal         func_131300
label_136728:
    if (ctx->pc == 0x136728u) {
        ctx->pc = 0x13672Cu;
        goto label_13672c;
    }
    ctx->pc = 0x136724u;
    SET_GPR_U32(ctx, 31, 0x13672Cu);
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x136724u, 0x13672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13672Cu;
label_13672c:
    // 0x13672c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x13672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_136730:
    // 0x136730: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x136730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_136734:
    // 0x136734: 0xc0401bc  jal         func_1006F0
label_136738:
    if (ctx->pc == 0x136738u) {
        ctx->pc = 0x136738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136734u;
        // 0x136738: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13673Cu;
        goto label_13673c;
    }
    ctx->pc = 0x136734u;
    SET_GPR_U32(ctx, 31, 0x13673Cu);
    ctx->pc = 0x136738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136734u;
    // 0x136738: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x136734u, 0x13673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13673Cu;
label_13673c:
    // 0x13673c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_136740:
    if (ctx->pc == 0x136740u) {
        ctx->pc = 0x136740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13673Cu;
        // 0x136740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136744u;
        goto label_136744;
    }
    ctx->pc = 0x13673Cu;
    {
        const bool branch_taken_0x13673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13673Cu;
        // 0x136740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13673c) {
            ctx->pc = 0x13674Cu;
            goto label_13674c;
        }
    }
    ctx->pc = 0x136744u;
label_136744:
    // 0x136744: 0xc04c4c0  jal         func_131300
label_136748:
    if (ctx->pc == 0x136748u) {
        ctx->pc = 0x13674Cu;
        goto label_13674c;
    }
    ctx->pc = 0x136744u;
    SET_GPR_U32(ctx, 31, 0x13674Cu);
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x136744u, 0x13674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13674Cu;
label_13674c:
    // 0x13674c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x13674cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_136750:
    // 0x136750: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x136750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_136754:
    // 0x136754: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x136754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_136758:
    // 0x136758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13675c:
    // 0x13675c: 0x3e00008  jr          $ra
label_136760:
    if (ctx->pc == 0x136760u) {
        ctx->pc = 0x136760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13675Cu;
        // 0x136760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136764u;
        goto label_fallthrough_0x13675c;
    }
    ctx->pc = 0x13675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13675Cu;
        // 0x136760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13675Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13675c:
    ctx->pc = 0x136764u;
}
