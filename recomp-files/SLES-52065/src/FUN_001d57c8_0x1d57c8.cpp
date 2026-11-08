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

// Function: FUN_001d57c8
// Address: 0x1d57c8 - 0x1d5978
void FUN_001d57c8_0x1d57c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d57c8_0x1d57c8");
#endif

    switch (ctx->pc) {
        case 0x1d57fcu: goto label_1d57fc;
        case 0x1d5810u: goto label_1d5810;
        case 0x1d5820u: goto label_1d5820;
        case 0x1d5838u: goto label_1d5838;
        case 0x1d5860u: goto label_1d5860;
        case 0x1d58acu: goto label_1d58ac;
        case 0x1d58c0u: goto label_1d58c0;
        case 0x1d58f0u: goto label_1d58f0;
        case 0x1d5910u: goto label_1d5910;
        case 0x1d5940u: goto label_1d5940;
        default: break;
    }

    ctx->pc = 0x1d57c8u;

    // 0x1d57c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d57c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d57cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d57ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d57d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d57d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57d4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d57d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d57d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d57d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d57dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d57dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d57e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d57e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d57e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d57e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d57e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d57e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d57ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d57ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d57f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d57f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d57f4: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1D57F4u;
    SET_GPR_U32(ctx, 31, 0x1D57FCu);
    ctx->pc = 0x1D57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57F4u;
    // 0x1d57f8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1D57F4u, 0x1D57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57FCu;
label_1d57fc:
    // 0x1d57fc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D57FCu;
    {
        const bool branch_taken_0x1d57fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57FCu;
        // 0x1d5800: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57fc) {
            ctx->pc = 0x1D5830u;
            goto label_1d5830;
        }
    }
    ctx->pc = 0x1D5804u;
    // 0x1d5804: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1D5804u;
    {
        const bool branch_taken_0x1d5804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5804u;
        // 0x1d5808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5804) {
            ctx->pc = 0x1D5950u;
            goto label_1d5950;
        }
    }
    ctx->pc = 0x1D580Cu;
    // 0x1d580c: 0x0  nop
    ctx->pc = 0x1d580cu;
    // NOP
label_1d5810:
    // 0x1d5810: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5814: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d5814u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5818: 0xc07697e  jal         func_1DA5F8
    ctx->pc = 0x1D5818u;
    SET_GPR_U32(ctx, 31, 0x1D5820u);
    ctx->pc = 0x1D581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5818u;
    // 0x1d581c: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA5F8u, 0x1D5818u, 0x1D5820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5820u;
label_1d5820:
    // 0x1d5820: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d5824: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5824u;
    {
        const bool branch_taken_0x1d5824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5824u;
        // 0x1d5828: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5824) {
            ctx->pc = 0x1D589Cu;
            goto label_1d589c;
        }
    }
    ctx->pc = 0x1D582Cu;
    // 0x1d582c: 0x0  nop
    ctx->pc = 0x1d582cu;
    // NOP
label_1d5830:
    // 0x1d5830: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D5830u;
    SET_GPR_U32(ctx, 31, 0x1D5838u);
    ctx->pc = 0x1D5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5830u;
    // 0x1d5834: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D5830u, 0x1D5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5838u;
label_1d5838:
    // 0x1d5838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d583c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d583cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5840: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d5840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d5844: 0x244b41d8  addiu       $t3, $v0, 0x41D8
    ctx->pc = 0x1d5844u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16856));
    // 0x1d5848: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x1d5848u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3841D8u));
    // 0x1d584c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5850: 0x26710558  addiu       $s1, $s3, 0x558
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1368));
    // 0x1d5854: 0x240a09e4  addiu       $t2, $zero, 0x9E4
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5858: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1d5858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d585c: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1d5860:
    // 0x1d5860: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d5860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d5864: 0x2485001f  addiu       $a1, $a0, 0x1F
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1d5868: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1d5868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d586c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d586cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5870: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1d5870u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1d5874: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x1d5874u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d5878: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d587c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1d587cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5880: 0xaa8018  mult        $s0, $a1, $t2
    ctx->pc = 0x1d5880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d5884: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1d5884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d5888: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d588c: 0x1069ffe0  beq         $v1, $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D588Cu;
    {
        const bool branch_taken_0x1d588c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1D5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D588Cu;
        // 0x1d5890: 0x28e60020  slti        $a2, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d588c) {
            ctx->pc = 0x1D5810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5810;
        }
    }
    ctx->pc = 0x1D5894u;
    // 0x1d5894: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D5894u;
    {
        const bool branch_taken_0x1d5894 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5894u;
        // 0x1d5898: 0x1072021  addu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5894) {
            ctx->pc = 0x1D5860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5860;
        }
    }
    ctx->pc = 0x1D589Cu;
label_1d589c:
    // 0x1d589c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D589Cu;
    {
        const bool branch_taken_0x1d589c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D589Cu;
        // 0x1d58a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d589c) {
            ctx->pc = 0x1D58B0u;
            goto label_1d58b0;
        }
    }
    ctx->pc = 0x1D58A4u;
    // 0x1d58a4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D58A4u;
    SET_GPR_U32(ctx, 31, 0x1D58ACu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D58A4u, 0x1D58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58ACu;
label_1d58ac:
    // 0x1d58ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d58b0:
    // 0x1d58b0: 0x12820025  beq         $s4, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D58B0u;
    {
        const bool branch_taken_0x1d58b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B0u;
        // 0x1d58b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58b0) {
            ctx->pc = 0x1D5948u;
            goto label_1d5948;
        }
    }
    ctx->pc = 0x1D58B8u;
    // 0x1d58b8: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x1D58B8u;
    SET_GPR_U32(ctx, 31, 0x1D58C0u);
    ctx->pc = 0x1D58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58B8u;
    // 0x1d58bc: 0x26720558  addiu       $s2, $s3, 0x558 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x1D58B8u, 0x1D58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58C0u;
label_1d58c0:
    // 0x1d58c0: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d58c4: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x1d58c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1d58c8: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x1d58c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1d58cc: 0x2656000c  addiu       $s6, $s2, 0xC
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1d58d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d58d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58d4: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d58d8: 0x2362821  addu        $a1, $s1, $s6
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1d58dc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d58dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58e0: 0x26330040  addiu       $s3, $s1, 0x40
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d58e4: 0xac570010  sw          $s7, 0x10($v0)
    ctx->pc = 0x1d58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
    // 0x1d58e8: 0xc07838a  jal         func_1E0E28
    ctx->pc = 0x1D58E8u;
    SET_GPR_U32(ctx, 31, 0x1D58F0u);
    ctx->pc = 0x1D58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58E8u;
    // 0x1d58ec: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E28u, 0x1D58E8u, 0x1D58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58F0u;
label_1d58f0:
    // 0x1d58f0: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x1d58f4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d58f8: 0x2646004c  addiu       $a2, $s2, 0x4C
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x1d58fc: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1d58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x1d5900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5904: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d5908: 0xc078436  jal         func_1E10D8
    ctx->pc = 0x1D5908u;
    SET_GPR_U32(ctx, 31, 0x1D5910u);
    ctx->pc = 0x1D590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5908u;
    // 0x1d590c: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10D8u, 0x1D5908u, 0x1D5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5910u;
label_1d5910:
    // 0x1d5910: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d5914: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5918: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5918u;
    {
        const bool branch_taken_0x1d5918 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5918u;
        // 0x1d591c: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5918) {
            ctx->pc = 0x1D5930u;
            goto label_1d5930;
        }
    }
    ctx->pc = 0x1D5920u;
    // 0x1d5920: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d5924: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1d5928: 0x24429c58  addiu       $v0, $v0, -0x63A8
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941784));
    // 0x1d592c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d592cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1d5930:
    // 0x1d5930: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1d5934: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5938: 0xc078428  jal         func_1E10A0
    ctx->pc = 0x1D5938u;
    SET_GPR_U32(ctx, 31, 0x1D5940u);
    ctx->pc = 0x1D593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5938u;
    // 0x1d593c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10A0u, 0x1D5938u, 0x1D5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5940u;
label_1d5940:
    // 0x1d5940: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x1d5940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1d5944: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d5944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1d5948:
    // 0x1d5948: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d5948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d594c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d594cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5950:
    // 0x1d5950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d595c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d595cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5960: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d5960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5964: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d5964u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5968: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d5968u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d596c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d596cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5970: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5970u;
        // 0x1d5974: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5978u;
}
