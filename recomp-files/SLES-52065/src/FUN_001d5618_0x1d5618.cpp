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

// Function: FUN_001d5618
// Address: 0x1d5618 - 0x1d57c8
void FUN_001d5618_0x1d5618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5618_0x1d5618");
#endif

    switch (ctx->pc) {
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5660u: goto label_1d5660;
        case 0x1d5670u: goto label_1d5670;
        case 0x1d5688u: goto label_1d5688;
        case 0x1d56b0u: goto label_1d56b0;
        case 0x1d56fcu: goto label_1d56fc;
        case 0x1d5710u: goto label_1d5710;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5760u: goto label_1d5760;
        case 0x1d5790u: goto label_1d5790;
        default: break;
    }

    ctx->pc = 0x1d5618u;

    // 0x1d5618: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d561c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d5620: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d5620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5624: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d5624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d5628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d562c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d562cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5634: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5638: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d563c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d5640: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d5640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d5644: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1D5644u;
    SET_GPR_U32(ctx, 31, 0x1D564Cu);
    ctx->pc = 0x1D5648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5644u;
    // 0x1d5648: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1D5644u, 0x1D564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D564Cu;
label_1d564c:
    // 0x1d564c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D564Cu;
    {
        const bool branch_taken_0x1d564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D564Cu;
        // 0x1d5650: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d564c) {
            ctx->pc = 0x1D5680u;
            goto label_1d5680;
        }
    }
    ctx->pc = 0x1D5654u;
    // 0x1d5654: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1D5654u;
    {
        const bool branch_taken_0x1d5654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5654u;
        // 0x1d5658: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5654) {
            ctx->pc = 0x1D57A0u;
            goto label_1d57a0;
        }
    }
    ctx->pc = 0x1D565Cu;
    // 0x1d565c: 0x0  nop
    ctx->pc = 0x1d565cu;
    // NOP
label_1d5660:
    // 0x1d5660: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d5660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5664: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d5664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5668: 0xc07697e  jal         func_1DA5F8
    ctx->pc = 0x1D5668u;
    SET_GPR_U32(ctx, 31, 0x1D5670u);
    ctx->pc = 0x1D566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5668u;
    // 0x1d566c: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA5F8u, 0x1D5668u, 0x1D5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5670u;
label_1d5670:
    // 0x1d5670: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d5674: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5674u;
    {
        const bool branch_taken_0x1d5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5674u;
        // 0x1d5678: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5674) {
            ctx->pc = 0x1D56ECu;
            goto label_1d56ec;
        }
    }
    ctx->pc = 0x1D567Cu;
    // 0x1d567c: 0x0  nop
    ctx->pc = 0x1d567cu;
    // NOP
label_1d5680:
    // 0x1d5680: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D5680u;
    SET_GPR_U32(ctx, 31, 0x1D5688u);
    ctx->pc = 0x1D5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5680u;
    // 0x1d5684: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D5680u, 0x1D5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5688u;
label_1d5688:
    // 0x1d5688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d568c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d568cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5690: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d5694: 0x244b41d8  addiu       $t3, $v0, 0x41D8
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16856));
    // 0x1d5698: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x1d5698u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3841D8u));
    // 0x1d569c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d569cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d56a0: 0x26710558  addiu       $s1, $s3, 0x558
    ctx->pc = 0x1d56a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1368));
    // 0x1d56a4: 0x240a09e4  addiu       $t2, $zero, 0x9E4
    ctx->pc = 0x1d56a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d56a8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1d56a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d56ac: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x1d56acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1d56b0:
    // 0x1d56b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d56b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d56b4: 0x2485001f  addiu       $a1, $a0, 0x1F
    ctx->pc = 0x1d56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1d56b8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1d56b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d56bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d56bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56c0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1d56c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1d56c4: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x1d56c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d56c8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1d56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d56cc: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1d56ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d56d0: 0xaa8018  mult        $s0, $a1, $t2
    ctx->pc = 0x1d56d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d56d4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1d56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d56d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d56dc: 0x1069ffe0  beq         $v1, $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D56DCu;
    {
        const bool branch_taken_0x1d56dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1D56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56DCu;
        // 0x1d56e0: 0x28e60020  slti        $a2, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56dc) {
            ctx->pc = 0x1D5660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5660;
        }
    }
    ctx->pc = 0x1D56E4u;
    // 0x1d56e4: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D56E4u;
    {
        const bool branch_taken_0x1d56e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56E4u;
        // 0x1d56e8: 0x1072021  addu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56e4) {
            ctx->pc = 0x1D56B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d56b0;
        }
    }
    ctx->pc = 0x1D56ECu;
label_1d56ec:
    // 0x1d56ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D56ECu;
    {
        const bool branch_taken_0x1d56ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56ECu;
        // 0x1d56f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56ec) {
            ctx->pc = 0x1D5700u;
            goto label_1d5700;
        }
    }
    ctx->pc = 0x1D56F4u;
    // 0x1d56f4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D56F4u;
    SET_GPR_U32(ctx, 31, 0x1D56FCu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D56F4u, 0x1D56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56FCu;
label_1d56fc:
    // 0x1d56fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5700:
    // 0x1d5700: 0x12820025  beq         $s4, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D5700u;
    {
        const bool branch_taken_0x1d5700 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5700u;
        // 0x1d5704: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5700) {
            ctx->pc = 0x1D5798u;
            goto label_1d5798;
        }
    }
    ctx->pc = 0x1D5708u;
    // 0x1d5708: 0xc07532c  jal         func_1D4CB0
    ctx->pc = 0x1D5708u;
    SET_GPR_U32(ctx, 31, 0x1D5710u);
    ctx->pc = 0x1D570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5708u;
    // 0x1d570c: 0x26720558  addiu       $s2, $s3, 0x558 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4CB0u, 0x1D5708u, 0x1D5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5710u;
label_1d5710:
    // 0x1d5710: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5714: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x1d5714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1d5718: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x1d5718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1d571c: 0x2656000c  addiu       $s6, $s2, 0xC
    ctx->pc = 0x1d571cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1d5720: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5724: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d5728: 0x2362821  addu        $a1, $s1, $s6
    ctx->pc = 0x1d5728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1d572c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d572cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5730: 0x26330040  addiu       $s3, $s1, 0x40
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d5734: 0xac570010  sw          $s7, 0x10($v0)
    ctx->pc = 0x1d5734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
    // 0x1d5738: 0xc07838a  jal         func_1E0E28
    ctx->pc = 0x1D5738u;
    SET_GPR_U32(ctx, 31, 0x1D5740u);
    ctx->pc = 0x1D573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5738u;
    // 0x1d573c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E28u, 0x1D5738u, 0x1D5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5740u;
label_1d5740:
    // 0x1d5740: 0x26450048  addiu       $a1, $s2, 0x48
    ctx->pc = 0x1d5740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x1d5744: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1d5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d5748: 0x2646004c  addiu       $a2, $s2, 0x4C
    ctx->pc = 0x1d5748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x1d574c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1d574cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x1d5750: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5754: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1d5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d5758: 0xc078436  jal         func_1E10D8
    ctx->pc = 0x1D5758u;
    SET_GPR_U32(ctx, 31, 0x1D5760u);
    ctx->pc = 0x1D575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5758u;
    // 0x1d575c: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10D8u, 0x1D5758u, 0x1D5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5760u;
label_1d5760:
    // 0x1d5760: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1d5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d5764: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5768: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5768u;
    {
        const bool branch_taken_0x1d5768 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5768u;
        // 0x1d576c: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5768) {
            ctx->pc = 0x1D5780u;
            goto label_1d5780;
        }
    }
    ctx->pc = 0x1D5770u;
    // 0x1d5770: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d5774: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x1d5774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1d5778: 0x24429c58  addiu       $v0, $v0, -0x63A8
    ctx->pc = 0x1d5778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941784));
    // 0x1d577c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d577cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1d5780:
    // 0x1d5780: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1d5780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1d5784: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5788: 0xc078428  jal         func_1E10A0
    ctx->pc = 0x1D5788u;
    SET_GPR_U32(ctx, 31, 0x1D5790u);
    ctx->pc = 0x1D578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5788u;
    // 0x1d578c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10A0u, 0x1D5788u, 0x1D5790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5790u;
label_1d5790:
    // 0x1d5790: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x1d5790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1d5794: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d5794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1d5798:
    // 0x1d5798: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d5798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d579c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d579cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d57a0:
    // 0x1d57a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d57a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d57a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d57a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d57a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d57ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d57acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d57b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d57b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d57b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d57b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d57b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d57b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d57bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d57c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57C0u;
        // 0x1d57c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D57C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D57C8u;
}
