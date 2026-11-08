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

// Function: FUN_001f84c8
// Address: 0x1f84c8 - 0x1f85ec
void FUN_001f84c8_0x1f84c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f84c8_0x1f84c8");
#endif

    switch (ctx->pc) {
        case 0x1f8520u: goto label_1f8520;
        case 0x1f8544u: goto label_1f8544;
        case 0x1f8560u: goto label_1f8560;
        case 0x1f85a0u: goto label_1f85a0;
        case 0x1f85c0u: goto label_1f85c0;
        default: break;
    }

    ctx->pc = 0x1f84c8u;

    // 0x1f84c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f84c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f84cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f84d0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f84d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f84d4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f84d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f84d8: 0x24561600  addiu       $s6, $v0, 0x1600
    ctx->pc = 0x1f84d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f84dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f84dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f84e0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f84e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84e4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f84e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f84e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f84e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f84ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f84f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f84f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f84f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f84f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f84fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f84fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8500: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1f8500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8504: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8504u;
    {
        const bool branch_taken_0x1f8504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8504u;
        // 0x1f8508: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8504) {
            ctx->pc = 0x1F8514u;
            goto label_1f8514;
        }
    }
    ctx->pc = 0x1F850Cu;
    // 0x1f850c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F850Cu;
    {
        const bool branch_taken_0x1f850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F850Cu;
        // 0x1f8510: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f850c) {
            ctx->pc = 0x1F85C4u;
            goto label_1f85c4;
        }
    }
    ctx->pc = 0x1F8514u;
label_1f8514:
    // 0x1f8514: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f8518: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8518u;
    SET_GPR_U32(ctx, 31, 0x1F8520u);
    ctx->pc = 0x1F851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8518u;
    // 0x1f851c: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8518u, 0x1F8520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8520u;
label_1f8520:
    // 0x1f8520: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F8520u;
    {
        const bool branch_taken_0x1f8520 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8520u;
        // 0x1f8524: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8520) {
            ctx->pc = 0x1F85C4u;
            goto label_1f85c4;
        }
    }
    ctx->pc = 0x1F8528u;
    // 0x1f8528: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8528u;
    {
        const bool branch_taken_0x1f8528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8528) {
            ctx->pc = 0x1F853Cu;
            goto label_1f853c;
        }
    }
    ctx->pc = 0x1F8530u;
    // 0x1f8530: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8534: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8534u;
    {
        const bool branch_taken_0x1f8534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8534u;
        // 0x1f8538: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8534) {
            ctx->pc = 0x1F854Cu;
            goto label_1f854c;
        }
    }
    ctx->pc = 0x1F853Cu;
label_1f853c:
    // 0x1f853c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F853Cu;
    SET_GPR_U32(ctx, 31, 0x1F8544u);
    ctx->pc = 0x1F8540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F853Cu;
    // 0x1f8540: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F853Cu, 0x1F8544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8544u;
label_1f8544:
    // 0x1f8544: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F8544u;
    {
        const bool branch_taken_0x1f8544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8544u;
        // 0x1f8548: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8544) {
            ctx->pc = 0x1F85C4u;
            goto label_1f85c4;
        }
    }
    ctx->pc = 0x1F854Cu;
label_1f854c:
    // 0x1f854c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8550: 0x261016c4  addiu       $s0, $s0, 0x16C4
    ctx->pc = 0x1f8550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5828));
    // 0x1f8554: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f8558: 0xc080804  jal         func_202010
    ctx->pc = 0x1F8558u;
    SET_GPR_U32(ctx, 31, 0x1F8560u);
    ctx->pc = 0x1F855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8558u;
    // 0x1f855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F8558u, 0x1F8560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8560u;
label_1f8560:
    // 0x1f8560: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1f8564: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x1f8564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x1f8568: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1f8568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1f856c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8570: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x1f8570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x1f8574: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f8574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8578: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1f8578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f857c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1f857cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8580: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8584: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f8584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8588: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f858c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f858cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8590: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f8594: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8598: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8598u;
    SET_GPR_U32(ctx, 31, 0x1F85A0u);
    ctx->pc = 0x1F859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8598u;
    // 0x1f859c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8598u, 0x1F85A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85A0u;
label_1f85a0:
    // 0x1f85a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f85a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F85A4u;
    {
        const bool branch_taken_0x1f85a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85A4u;
        // 0x1f85a8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85a4) {
            ctx->pc = 0x1F85B8u;
            goto label_1f85b8;
        }
    }
    ctx->pc = 0x1F85ACu;
    // 0x1f85ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f85acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f85b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F85B0u;
    {
        const bool branch_taken_0x1f85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B0u;
        // 0x1f85b4: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85b0) {
            ctx->pc = 0x1F85C0u;
            goto label_1f85c0;
        }
    }
    ctx->pc = 0x1F85B8u;
label_1f85b8:
    // 0x1f85b8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F85B8u;
    SET_GPR_U32(ctx, 31, 0x1F85C0u);
    ctx->pc = 0x1F85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F85B8u;
    // 0x1f85bc: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F85B8u, 0x1F85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85C0u;
label_1f85c0:
    // 0x1f85c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f85c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f85c4:
    // 0x1f85c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f85c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f85c8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f85c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f85cc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f85ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f85d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f85d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f85d4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f85d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f85d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f85d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f85dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f85dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f85e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f85e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f85e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F85E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85E4u;
        // 0x1f85e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F85ECu;
}
