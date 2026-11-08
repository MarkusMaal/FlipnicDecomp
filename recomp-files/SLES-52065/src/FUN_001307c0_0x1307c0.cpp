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

// Function: FUN_001307c0
// Address: 0x1307c0 - 0x13094c
void FUN_001307c0_0x1307c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001307c0_0x1307c0");
#endif

    switch (ctx->pc) {
        case 0x1307e8u: goto label_1307e8;
        case 0x1307f0u: goto label_1307f0;
        case 0x1307f8u: goto label_1307f8;
        case 0x130804u: goto label_130804;
        case 0x130810u: goto label_130810;
        case 0x130818u: goto label_130818;
        case 0x130828u: goto label_130828;
        case 0x130834u: goto label_130834;
        case 0x13083cu: goto label_13083c;
        case 0x130844u: goto label_130844;
        case 0x130868u: goto label_130868;
        case 0x13087cu: goto label_13087c;
        case 0x130890u: goto label_130890;
        case 0x13089cu: goto label_13089c;
        case 0x1308a4u: goto label_1308a4;
        case 0x1308b0u: goto label_1308b0;
        case 0x1308c0u: goto label_1308c0;
        case 0x1308c8u: goto label_1308c8;
        case 0x130904u: goto label_130904;
        case 0x13092cu: goto label_13092c;
        default: break;
    }

    ctx->pc = 0x1307c0u;

    // 0x1307c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1307c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1307c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1307c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1307c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1307c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1307cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1307ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1307d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1307d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1307d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1307d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1307d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1307dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1307dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307e0: 0xc080702  jal         func_201C08
    ctx->pc = 0x1307E0u;
    SET_GPR_U32(ctx, 31, 0x1307E8u);
    ctx->pc = 0x1307E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307E0u;
    // 0x1307e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1307E0u, 0x1307E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307E8u;
label_1307e8:
    // 0x1307e8: 0xc080d98  jal         func_203660
    ctx->pc = 0x1307E8u;
    SET_GPR_U32(ctx, 31, 0x1307F0u);
    ctx->pc = 0x1307ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307E8u;
    // 0x1307ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x1307E8u, 0x1307F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307F0u;
label_1307f0:
    // 0x1307f0: 0xc04c254  jal         func_130950
    ctx->pc = 0x1307F0u;
    SET_GPR_U32(ctx, 31, 0x1307F8u);
    ctx->pc = 0x130950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130950u, 0x1307F0u, 0x1307F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307F8u;
label_1307f8:
    // 0x1307f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1307f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307fc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1307FCu;
    SET_GPR_U32(ctx, 31, 0x130804u);
    ctx->pc = 0x130800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307FCu;
    // 0x130800: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1307FCu, 0x130804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130804u;
label_130804:
    // 0x130804: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x130804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x130808: 0xc080664  jal         func_201990
    ctx->pc = 0x130808u;
    SET_GPR_U32(ctx, 31, 0x130810u);
    ctx->pc = 0x13080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130808u;
    // 0x13080c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x130808u, 0x130810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130810u;
label_130810:
    // 0x130810: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x130810u;
    SET_GPR_U32(ctx, 31, 0x130818u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x130810u, 0x130818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130818u;
label_130818:
    // 0x130818: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13081c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x130820: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x130820u;
    SET_GPR_U32(ctx, 31, 0x130828u);
    ctx->pc = 0x130824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130820u;
    // 0x130824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x130820u, 0x130828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130828u;
label_130828:
    // 0x130828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13082c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x13082Cu;
    SET_GPR_U32(ctx, 31, 0x130834u);
    ctx->pc = 0x130830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13082Cu;
    // 0x130830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x13082Cu, 0x130834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130834u;
label_130834:
    // 0x130834: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x130834u;
    {
        const bool branch_taken_0x130834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130834) {
            ctx->pc = 0x130858u;
            goto label_130858;
        }
    }
    ctx->pc = 0x13083Cu;
label_13083c:
    // 0x13083c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x13083Cu;
    SET_GPR_U32(ctx, 31, 0x130844u);
    ctx->pc = 0x130840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13083Cu;
    // 0x130840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x13083Cu, 0x130844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130844u;
label_130844:
    // 0x130844: 0x0  nop
    ctx->pc = 0x130844u;
    // NOP
    // 0x130848: 0x0  nop
    ctx->pc = 0x130848u;
    // NOP
    // 0x13084c: 0x0  nop
    ctx->pc = 0x13084cu;
    // NOP
    // 0x130850: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130850u;
    {
        const bool branch_taken_0x130850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130850) {
            ctx->pc = 0x13083Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13083c;
        }
    }
    ctx->pc = 0x130858u;
label_130858:
    // 0x130858: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x130858u;
    {
        const bool branch_taken_0x130858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130858u;
        // 0x13085c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130858) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x130860u;
    // 0x130860: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x130860u;
    SET_GPR_U32(ctx, 31, 0x130868u);
    ctx->pc = 0x130864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130860u;
    // 0x130864: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x130860u, 0x130868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130868u;
label_130868:
    // 0x130868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13086c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13086Cu;
    {
        const bool branch_taken_0x13086c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x130870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13086Cu;
        // 0x130870: 0x26240128  addiu       $a0, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13086c) {
            ctx->pc = 0x130884u;
            goto label_130884;
        }
    }
    ctx->pc = 0x130874u;
    // 0x130874: 0xc04f024  jal         func_13C090
    ctx->pc = 0x130874u;
    SET_GPR_U32(ctx, 31, 0x13087Cu);
    ctx->pc = 0x130878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130874u;
    // 0x130878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C090u, 0x130874u, 0x13087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13087Cu;
label_13087c:
    // 0x13087c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13087cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130880: 0x26240128  addiu       $a0, $s1, 0x128
    ctx->pc = 0x130880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
label_130884:
    // 0x130884: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130888: 0xc080702  jal         func_201C08
    ctx->pc = 0x130888u;
    SET_GPR_U32(ctx, 31, 0x130890u);
    ctx->pc = 0x13088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130888u;
    // 0x13088c: 0xae330170  sw          $s3, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x130888u, 0x130890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130890u;
label_130890:
    // 0x130890: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130894: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x130894u;
    SET_GPR_U32(ctx, 31, 0x13089Cu);
    ctx->pc = 0x130898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130894u;
    // 0x130898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x130894u, 0x13089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13089Cu;
label_13089c:
    // 0x13089c: 0xc04c0dc  jal         func_130370
    ctx->pc = 0x13089Cu;
    SET_GPR_U32(ctx, 31, 0x1308A4u);
    ctx->pc = 0x1308A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13089Cu;
    // 0x1308a0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130370u, 0x13089Cu, 0x1308A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308A4u;
label_1308a4:
    // 0x1308a4: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1308a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1308a8: 0xc04c0dc  jal         func_130370
    ctx->pc = 0x1308A8u;
    SET_GPR_U32(ctx, 31, 0x1308B0u);
    ctx->pc = 0x1308ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308A8u;
    // 0x1308ac: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130370u, 0x1308A8u, 0x1308B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308B0u;
label_1308b0:
    // 0x1308b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1308b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308b4: 0x1272000e  beq         $s3, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1308B4u;
    {
        const bool branch_taken_0x1308b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x1308b4) {
            ctx->pc = 0x1308F0u;
            goto label_1308f0;
        }
    }
    ctx->pc = 0x1308BCu;
    // 0x1308bc: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x1308bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1308c0:
    // 0x1308c0: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1308C0u;
    SET_GPR_U32(ctx, 31, 0x1308C8u);
    ctx->pc = 0x1308C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308C0u;
    // 0x1308c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1308C0u, 0x1308C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308C8u;
label_1308c8:
    // 0x1308c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1308C8u;
    {
        const bool branch_taken_0x1308c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1308c8) {
            ctx->pc = 0x1308E4u;
            goto label_1308e4;
        }
    }
    ctx->pc = 0x1308D0u;
    // 0x1308d0: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1308d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1308d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1308d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1308d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1308dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1308DCu;
    {
        const bool branch_taken_0x1308dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1308E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308DCu;
        // 0x1308e0: 0xae630048  sw          $v1, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308dc) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x1308E4u;
label_1308e4:
    // 0x1308e4: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1308e8: 0x1672fff5  bne         $s3, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x1308E8u;
    {
        const bool branch_taken_0x1308e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1308ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308E8u;
        // 0x1308ec: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308e8) {
            ctx->pc = 0x1308C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1308c0;
        }
    }
    ctx->pc = 0x1308F0u;
label_1308f0:
    // 0x1308f0: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1308f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1308f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1308f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1308f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1308fc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1308FCu;
    SET_GPR_U32(ctx, 31, 0x130904u);
    ctx->pc = 0x130900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308FCu;
    // 0x130900: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1308FCu, 0x130904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130904u;
label_130904:
    // 0x130904: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130908: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x130908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13090c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13090cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130910: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x130914: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x130914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x130918: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x130918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13091c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130920: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x130920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x130924: 0xc04c450  jal         func_131140
    ctx->pc = 0x130924u;
    SET_GPR_U32(ctx, 31, 0x13092Cu);
    ctx->pc = 0x130928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130924u;
    // 0x130928: 0xafa30158  sw          $v1, 0x158($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131140u, 0x130924u, 0x13092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13092Cu;
label_13092c:
    // 0x13092c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13092cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130930:
    // 0x130930: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130934: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130938: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13093c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13093cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130944: 0x3e00008  jr          $ra
    ctx->pc = 0x130944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130944u;
        // 0x130948: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13094Cu;
}
