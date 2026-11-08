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

// Function: FUN_001ef7c0
// Address: 0x1ef7c0 - 0x1efa44
void FUN_001ef7c0_0x1ef7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef7c0_0x1ef7c0");
#endif

    switch (ctx->pc) {
        case 0x1ef81cu: goto label_1ef81c;
        case 0x1ef834u: goto label_1ef834;
        case 0x1ef83cu: goto label_1ef83c;
        case 0x1ef84cu: goto label_1ef84c;
        case 0x1ef860u: goto label_1ef860;
        case 0x1ef874u: goto label_1ef874;
        case 0x1ef8a8u: goto label_1ef8a8;
        case 0x1ef930u: goto label_1ef930;
        case 0x1ef96cu: goto label_1ef96c;
        case 0x1ef97cu: goto label_1ef97c;
        case 0x1ef984u: goto label_1ef984;
        case 0x1ef998u: goto label_1ef998;
        case 0x1ef9a8u: goto label_1ef9a8;
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9d4u: goto label_1ef9d4;
        case 0x1ef9e0u: goto label_1ef9e0;
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1efa10u: goto label_1efa10;
        default: break;
    }

    ctx->pc = 0x1ef7c0u;

    // 0x1ef7c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1ef7c4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ef7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ef7c8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1ef7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1ef7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7d0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1ef7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1ef7d4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ef7d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7d8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ef7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1ef7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ef7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7e0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1ef7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1ef7e4: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1ef7e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1ef7e8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ef7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1ef7ec: 0x27d1e200  addiu       $s1, $fp, -0x1E00
    ctx->pc = 0x1ef7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1ef7f0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1ef7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1ef7f4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ef7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1ef7f8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1ef7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1ef7fc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ef7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1ef800: 0xffa60120  sd          $a2, 0x120($sp)
    ctx->pc = 0x1ef800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
    // 0x1ef804: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x1ef804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
    // 0x1ef808: 0xffa80130  sd          $t0, 0x130($sp)
    ctx->pc = 0x1ef808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
    // 0x1ef80c: 0xffa90138  sd          $t1, 0x138($sp)
    ctx->pc = 0x1ef80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
    // 0x1ef810: 0xffaa0140  sd          $t2, 0x140($sp)
    ctx->pc = 0x1ef810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
    // 0x1ef814: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1EF814u;
    SET_GPR_U32(ctx, 31, 0x1EF81Cu);
    ctx->pc = 0x1EF818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF814u;
    // 0x1ef818: 0xffab0148  sd          $t3, 0x148($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1EF814u, 0x1EF81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF81Cu;
label_1ef81c:
    // 0x1ef81c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1ef81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1ef820: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1ef820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1ef824: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF824u;
    {
        const bool branch_taken_0x1ef824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef824) {
            ctx->pc = 0x1EF834u;
            goto label_1ef834;
        }
    }
    ctx->pc = 0x1EF82Cu;
    // 0x1ef82c: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1EF82Cu;
    SET_GPR_U32(ctx, 31, 0x1EF834u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1EF82Cu, 0x1EF834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF834u;
label_1ef834:
    // 0x1ef834: 0xc07bdbe  jal         func_1EF6F8
    ctx->pc = 0x1EF834u;
    SET_GPR_U32(ctx, 31, 0x1EF83Cu);
    ctx->pc = 0x1EF6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6F8u, 0x1EF834u, 0x1EF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF83Cu;
label_1ef83c:
    // 0x1ef83c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF83Cu;
    {
        const bool branch_taken_0x1ef83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef83c) {
            ctx->pc = 0x1EF858u;
            goto label_1ef858;
        }
    }
    ctx->pc = 0x1EF844u;
    // 0x1ef844: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF844u;
    SET_GPR_U32(ctx, 31, 0x1EF84Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF844u, 0x1EF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF84Cu;
label_1ef84c:
    // 0x1ef84c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ef84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ef850: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1EF850u;
    {
        const bool branch_taken_0x1ef850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF850u;
        // 0x1ef854: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef850) {
            ctx->pc = 0x1EFA14u;
            goto label_1efa14;
        }
    }
    ctx->pc = 0x1EF858u;
label_1ef858:
    // 0x1ef858: 0xc07bbbe  jal         func_1EEEF8
    ctx->pc = 0x1EF858u;
    SET_GPR_U32(ctx, 31, 0x1EF860u);
    ctx->pc = 0x1EEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEEF8u, 0x1EF858u, 0x1EF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF860u;
label_1ef860:
    // 0x1ef860: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ef860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef864: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF864u;
    {
        const bool branch_taken_0x1ef864 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef864) {
            ctx->pc = 0x1EF868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF864u;
            // 0x1ef868: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF87Cu;
            goto label_1ef87c;
        }
    }
    ctx->pc = 0x1EF86Cu;
    // 0x1ef86c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF86Cu;
    SET_GPR_U32(ctx, 31, 0x1EF874u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF86Cu, 0x1EF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF874u;
label_1ef874:
    // 0x1ef874: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1EF874u;
    {
        const bool branch_taken_0x1ef874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF874u;
        // 0x1ef878: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef874) {
            ctx->pc = 0x1EFA14u;
            goto label_1efa14;
        }
    }
    ctx->pc = 0x1EF87Cu;
label_1ef87c:
    // 0x1ef87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef880: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x1ef880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ef884: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ef884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ef888: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF888u;
    {
        const bool branch_taken_0x1ef888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF888u;
        // 0x1ef88c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef888) {
            ctx->pc = 0x1EF8D4u;
            goto label_1ef8d4;
        }
    }
    ctx->pc = 0x1EF890u;
    // 0x1ef890: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1ef890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1ef894: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1ef894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef898: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1ef89c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1ef89cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1ef8a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ef8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ef8a4: 0x0  nop
    ctx->pc = 0x1ef8a4u;
    // NOP
label_1ef8a8:
    // 0x1ef8a8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1ef8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1ef8ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EF8ACu;
    {
        const bool branch_taken_0x1ef8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8ACu;
        // 0x1ef8b0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8ac) {
            ctx->pc = 0x1EF8E4u;
            goto label_1ef8e4;
        }
    }
    ctx->pc = 0x1EF8B4u;
    // 0x1ef8b4: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x1ef8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1ef8b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ef8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef8bc: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1ef8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef8c0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ef8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ef8c4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EF8C4u;
    {
        const bool branch_taken_0x1ef8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef8c4) {
            ctx->pc = 0x1EF8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF8C4u;
            // 0x1ef8c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef8a8;
        }
    }
    ctx->pc = 0x1EF8CCu;
    // 0x1ef8cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF8CCu;
    {
        const bool branch_taken_0x1ef8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8CCu;
        // 0x1ef8d0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8cc) {
            ctx->pc = 0x1EF8E8u;
            goto label_1ef8e8;
        }
    }
    ctx->pc = 0x1EF8D4u;
label_1ef8d4:
    // 0x1ef8d4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1ef8d8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1ef8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef8dc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1ef8dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1ef8e0: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1ef8e4:
    // 0x1ef8e4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1ef8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ef8e8:
    // 0x1ef8e8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF8E8u;
    {
        const bool branch_taken_0x1ef8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ef8e8) {
            ctx->pc = 0x1EF8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF8E8u;
            // 0x1ef8ec: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF8F0u;
            goto label_1ef8f0;
        }
    }
    ctx->pc = 0x1EF8F0u;
label_1ef8f0:
    // 0x1ef8f0: 0x24c2f700  addiu       $v0, $a2, -0x900
    ctx->pc = 0x1ef8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964992));
    // 0x1ef8f4: 0x3c036fff  lui         $v1, 0x6FFF
    ctx->pc = 0x1ef8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28671 << 16));
    // 0x1ef8f8: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ef8fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ef8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ef900: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x1ef900u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1ef904: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x1ef904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x1ef908: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1ef908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1ef90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef910: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x1ef910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x1ef914: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ef914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ef918: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ef918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1ef91c: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1ef91cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1ef920: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x1ef920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x1ef924: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ef924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1ef928: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EF928u;
    SET_GPR_U32(ctx, 31, 0x1EF930u);
    ctx->pc = 0x1EF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF928u;
    // 0x1ef92c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EF928u, 0x1EF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF930u;
label_1ef930:
    // 0x1ef930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef934: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1ef934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1ef938: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ef938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef93c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ef93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ef940: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ef940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ef944: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1ef944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1ef948: 0x27c7e200  addiu       $a3, $fp, -0x1E00
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1ef94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef950: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ef950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ef954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef958: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x1ef958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x1ef95c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1ef95cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef960: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ef960u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef964: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EF964u;
    SET_GPR_U32(ctx, 31, 0x1EF96Cu);
    ctx->pc = 0x1EF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF964u;
    // 0x1ef968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EF964u, 0x1EF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF96Cu;
label_1ef96c:
    // 0x1ef96c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF96Cu;
    {
        const bool branch_taken_0x1ef96c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF96Cu;
        // 0x1ef970: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef96c) {
            ctx->pc = 0x1EF98Cu;
            goto label_1ef98c;
        }
    }
    ctx->pc = 0x1EF974u;
    // 0x1ef974: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EF974u;
    SET_GPR_U32(ctx, 31, 0x1EF97Cu);
    ctx->pc = 0x1EF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF974u;
    // 0x1ef978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EF974u, 0x1EF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF97Cu;
label_1ef97c:
    // 0x1ef97c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF97Cu;
    SET_GPR_U32(ctx, 31, 0x1EF984u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF97Cu, 0x1EF984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF984u;
label_1ef984:
    // 0x1ef984: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1EF984u;
    {
        const bool branch_taken_0x1ef984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF984u;
        // 0x1ef988: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef984) {
            ctx->pc = 0x1EFA14u;
            goto label_1efa14;
        }
    }
    ctx->pc = 0x1EF98Cu;
label_1ef98c:
    // 0x1ef98c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1ef98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1ef990: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF990u;
    SET_GPR_U32(ctx, 31, 0x1EF998u);
    ctx->pc = 0x1EF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF990u;
    // 0x1ef994: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF990u, 0x1EF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF998u;
label_1ef998:
    // 0x1ef998: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF998u;
    {
        const bool branch_taken_0x1ef998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef998) {
            ctx->pc = 0x1EF9B0u;
            goto label_1ef9b0;
        }
    }
    ctx->pc = 0x1EF9A0u;
    // 0x1ef9a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EF9A0u;
    SET_GPR_U32(ctx, 31, 0x1EF9A8u);
    ctx->pc = 0x1EF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9A0u;
    // 0x1ef9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EF9A0u, 0x1EF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9A8u;
label_1ef9a8:
    // 0x1ef9a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EF9A8u;
    {
        const bool branch_taken_0x1ef9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9A8u;
        // 0x1ef9ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9a8) {
            ctx->pc = 0x1EFA14u;
            goto label_1efa14;
        }
    }
    ctx->pc = 0x1EF9B0u;
label_1ef9b0:
    // 0x1ef9b0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF9B0u;
    SET_GPR_U32(ctx, 31, 0x1EF9B8u);
    ctx->pc = 0x1EF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9B0u;
    // 0x1ef9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF9B0u, 0x1EF9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9B8u;
label_1ef9b8:
    // 0x1ef9b8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EF9B8u;
    SET_GPR_U32(ctx, 31, 0x1EF9C0u);
    ctx->pc = 0x1EF9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9B8u;
    // 0x1ef9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EF9B8u, 0x1EF9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9C0u;
label_1ef9c0:
    // 0x1ef9c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ef9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef9c4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF9C4u;
    {
        const bool branch_taken_0x1ef9c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9C4u;
        // 0x1ef9c8: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9c4) {
            ctx->pc = 0x1EF9E8u;
            goto label_1ef9e8;
        }
    }
    ctx->pc = 0x1EF9CCu;
    // 0x1ef9cc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF9CCu;
    SET_GPR_U32(ctx, 31, 0x1EF9D4u);
    ctx->pc = 0x1EF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9CCu;
    // 0x1ef9d0: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF9CCu, 0x1EF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9D4u;
label_1ef9d4:
    // 0x1ef9d4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ef9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1ef9d8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EF9D8u;
    SET_GPR_U32(ctx, 31, 0x1EF9E0u);
    ctx->pc = 0x1EF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9D8u;
    // 0x1ef9dc: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EF9D8u, 0x1EF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9E0u;
label_1ef9e0:
    // 0x1ef9e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EF9E0u;
    {
        const bool branch_taken_0x1ef9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9E0u;
        // 0x1ef9e4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9e0) {
            ctx->pc = 0x1EFA14u;
            goto label_1efa14;
        }
    }
    ctx->pc = 0x1EF9E8u;
label_1ef9e8:
    // 0x1ef9e8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1ef9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9ec: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF9ECu;
    SET_GPR_U32(ctx, 31, 0x1EF9F4u);
    ctx->pc = 0x1EF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9ECu;
    // 0x1ef9f0: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF9ECu, 0x1EF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9F4u;
label_1ef9f4:
    // 0x1ef9f4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1ef9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ef9f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef9fc: 0x8e04a468  lw          $a0, -0x5B98($s0)
    ctx->pc = 0x1ef9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    // 0x1efa00: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x1efa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x1efa04: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1efa04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1efa08: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EFA08u;
    SET_GPR_U32(ctx, 31, 0x1EFA10u);
    ctx->pc = 0x1EFA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA08u;
    // 0x1efa0c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EFA08u, 0x1EFA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA10u;
label_1efa10:
    // 0x1efa10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1efa10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1efa14:
    // 0x1efa14: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1efa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efa18: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1efa18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efa1c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1efa1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1efa20: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1efa20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1efa24: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1efa24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1efa28: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1efa28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1efa2c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1efa2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1efa30: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1efa30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1efa34: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1efa34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efa38: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1efa38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA3Cu;
        // 0x1efa40: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA44u;
}
