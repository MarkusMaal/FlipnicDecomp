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

// Function: FUN_001f9250
// Address: 0x1f9250 - 0x1f9368
void FUN_001f9250_0x1f9250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9250_0x1f9250");
#endif

    switch (ctx->pc) {
        case 0x1f92a0u: goto label_1f92a0;
        case 0x1f92c4u: goto label_1f92c4;
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f9320u: goto label_1f9320;
        case 0x1f9340u: goto label_1f9340;
        default: break;
    }

    ctx->pc = 0x1f9250u;

    // 0x1f9250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f9250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f9254: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f9254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f9258: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f9258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f925c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f9260: 0x24551600  addiu       $s5, $v0, 0x1600
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f9264: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f9264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f9268: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f9268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f926c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f9270: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f9270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9274: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f9274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f9278: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f927c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9280: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1f9280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f9284: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9284u;
    {
        const bool branch_taken_0x1f9284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9284u;
        // 0x1f9288: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9284) {
            ctx->pc = 0x1F9294u;
            goto label_1f9294;
        }
    }
    ctx->pc = 0x1F928Cu;
    // 0x1f928c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F928Cu;
    {
        const bool branch_taken_0x1f928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F928Cu;
        // 0x1f9290: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f928c) {
            ctx->pc = 0x1F9344u;
            goto label_1f9344;
        }
    }
    ctx->pc = 0x1F9294u;
label_1f9294:
    // 0x1f9294: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f9294u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f9298: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9298u;
    SET_GPR_U32(ctx, 31, 0x1F92A0u);
    ctx->pc = 0x1F929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9298u;
    // 0x1f929c: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9298u, 0x1F92A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92A0u;
label_1f92a0:
    // 0x1f92a0: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F92A0u;
    {
        const bool branch_taken_0x1f92a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92A0u;
        // 0x1f92a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92a0) {
            ctx->pc = 0x1F9344u;
            goto label_1f9344;
        }
    }
    ctx->pc = 0x1F92A8u;
    // 0x1f92a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F92A8u;
    {
        const bool branch_taken_0x1f92a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f92a8) {
            ctx->pc = 0x1F92BCu;
            goto label_1f92bc;
        }
    }
    ctx->pc = 0x1F92B0u;
    // 0x1f92b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f92b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F92B4u;
    {
        const bool branch_taken_0x1f92b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92B4u;
        // 0x1f92b8: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92b4) {
            ctx->pc = 0x1F92CCu;
            goto label_1f92cc;
        }
    }
    ctx->pc = 0x1F92BCu;
label_1f92bc:
    // 0x1f92bc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F92BCu;
    SET_GPR_U32(ctx, 31, 0x1F92C4u);
    ctx->pc = 0x1F92C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92BCu;
    // 0x1f92c0: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F92BCu, 0x1F92C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92C4u;
label_1f92c4:
    // 0x1f92c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F92C4u;
    {
        const bool branch_taken_0x1f92c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92C4u;
        // 0x1f92c8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92c4) {
            ctx->pc = 0x1F9344u;
            goto label_1f9344;
        }
    }
    ctx->pc = 0x1F92CCu;
label_1f92cc:
    // 0x1f92cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f92ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92d0: 0x261016c4  addiu       $s0, $s0, 0x16C4
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5828));
    // 0x1f92d4: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1f92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f92d8: 0xc080804  jal         func_202010
    ctx->pc = 0x1F92D8u;
    SET_GPR_U32(ctx, 31, 0x1F92E0u);
    ctx->pc = 0x1F92DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92D8u;
    // 0x1f92dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F92D8u, 0x1F92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92E0u;
label_1f92e0:
    // 0x1f92e0: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1f92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1f92e4: 0xae13ffec  sw          $s3, -0x14($s0)
    ctx->pc = 0x1f92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 19));
    // 0x1f92e8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x1f92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x1f92ec: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f92f0: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1f92f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f92f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1f92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1f92fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1f92fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9300: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f9300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f9304: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f9308: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f9308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f930c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9310: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f9314: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f9318: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F9318u;
    SET_GPR_U32(ctx, 31, 0x1F9320u);
    ctx->pc = 0x1F931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9318u;
    // 0x1f931c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F9318u, 0x1F9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9320u;
label_1f9320:
    // 0x1f9320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9324: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9324u;
    {
        const bool branch_taken_0x1f9324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9324u;
        // 0x1f9328: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9324) {
            ctx->pc = 0x1F9338u;
            goto label_1f9338;
        }
    }
    ctx->pc = 0x1F932Cu;
    // 0x1f932c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f9330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9330u;
    {
        const bool branch_taken_0x1f9330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9330u;
        // 0x1f9334: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9330) {
            ctx->pc = 0x1F9340u;
            goto label_1f9340;
        }
    }
    ctx->pc = 0x1F9338u;
label_1f9338:
    // 0x1f9338: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F9338u;
    SET_GPR_U32(ctx, 31, 0x1F9340u);
    ctx->pc = 0x1F933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9338u;
    // 0x1f933c: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F9338u, 0x1F9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9340u;
label_1f9340:
    // 0x1f9340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9344:
    // 0x1f9344: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f9344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f9348: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f9348u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f934c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f934cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9350: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f9350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9354: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f9354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9358: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f9358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f935c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f935cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9360: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9360u;
        // 0x1f9364: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9368u;
}
