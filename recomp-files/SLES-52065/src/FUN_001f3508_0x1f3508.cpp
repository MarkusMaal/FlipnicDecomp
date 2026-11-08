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

// Function: FUN_001f3508
// Address: 0x1f3508 - 0x1f360c
void FUN_001f3508_0x1f3508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3508_0x1f3508");
#endif

    switch (ctx->pc) {
        case 0x1f3538u: goto label_1f3538;
        case 0x1f3548u: goto label_1f3548;
        case 0x1f3574u: goto label_1f3574;
        case 0x1f3588u: goto label_1f3588;
        case 0x1f35b8u: goto label_1f35b8;
        default: break;
    }

    ctx->pc = 0x1f3508u;

    // 0x1f3508: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f3508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f350c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f350cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f3510: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f3510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f3514: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f3514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3518: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f3518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f351c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f351cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3520: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f3524: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f3524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3528: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f3528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f352c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f352cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3530: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F3530u;
    SET_GPR_U32(ctx, 31, 0x1F3538u);
    ctx->pc = 0x1F3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3530u;
    // 0x1f3534: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F3530u, 0x1F3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3538u;
label_1f3538:
    // 0x1f3538: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F3538u;
    {
        const bool branch_taken_0x1f3538 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3538u;
        // 0x1f353c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3538) {
            ctx->pc = 0x1F35ECu;
            goto label_1f35ec;
        }
    }
    ctx->pc = 0x1F3540u;
    // 0x1f3540: 0xc07caf2  jal         func_1F2BC8
    ctx->pc = 0x1F3540u;
    SET_GPR_U32(ctx, 31, 0x1F3548u);
    ctx->pc = 0x1F2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2BC8u, 0x1F3540u, 0x1F3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3548u;
label_1f3548:
    // 0x1f3548: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3548u;
    {
        const bool branch_taken_0x1f3548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3548) {
            ctx->pc = 0x1F354Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3548u;
            // 0x1f354c: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F355Cu;
            goto label_1f355c;
        }
    }
    ctx->pc = 0x1F3550u;
    // 0x1f3550: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3554: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F3554u;
    {
        const bool branch_taken_0x1f3554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3554u;
        // 0x1f3558: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3554) {
            ctx->pc = 0x1F35ECu;
            goto label_1f35ec;
        }
    }
    ctx->pc = 0x1F355Cu;
label_1f355c:
    // 0x1f355c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3560: 0x2451fb88  addiu       $s1, $v0, -0x478
    ctx->pc = 0x1f3560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966152));
    // 0x1f3564: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1f3564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f3568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f356c: 0xc080804  jal         func_202010
    ctx->pc = 0x1F356Cu;
    SET_GPR_U32(ctx, 31, 0x1F3574u);
    ctx->pc = 0x1F3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F356Cu;
    // 0x1f3570: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F356Cu, 0x1F3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3574u;
label_1f3574:
    // 0x1f3574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3578: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x1f3578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f357c: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1f357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1f3580: 0xc080804  jal         func_202010
    ctx->pc = 0x1F3580u;
    SET_GPR_U32(ctx, 31, 0x1F3588u);
    ctx->pc = 0x1F3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3580u;
    // 0x1f3584: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F3580u, 0x1F3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3588u;
label_1f3588:
    // 0x1f3588: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f358c: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x1f358cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3590: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3594: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f3594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f3598: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f359c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f35a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35a4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1f35a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f35a8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f35a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35ac: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f35acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f35b0: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F35B0u;
    SET_GPR_U32(ctx, 31, 0x1F35B8u);
    ctx->pc = 0x1F35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35B0u;
    // 0x1f35b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F35B0u, 0x1F35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35B8u;
label_1f35b8:
    // 0x1f35b8: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F35B8u;
    {
        const bool branch_taken_0x1f35b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f35b8) {
            ctx->pc = 0x1F35BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F35B8u;
            // 0x1f35bc: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F35CCu;
            goto label_1f35cc;
        }
    }
    ctx->pc = 0x1F35C0u;
    // 0x1f35c0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f35c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F35C4u;
    {
        const bool branch_taken_0x1f35c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35C4u;
        // 0x1f35c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35c4) {
            ctx->pc = 0x1F35ECu;
            goto label_1f35ec;
        }
    }
    ctx->pc = 0x1F35CCu;
label_1f35cc:
    // 0x1f35cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F35CCu;
    {
        const bool branch_taken_0x1f35cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f35cc) {
            ctx->pc = 0x1F35D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F35CCu;
            // 0x1f35d0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F35E0u;
            goto label_1f35e0;
        }
    }
    ctx->pc = 0x1F35D4u;
    // 0x1f35d4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f35d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F35D8u;
    {
        const bool branch_taken_0x1f35d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35D8u;
        // 0x1f35dc: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35d8) {
            ctx->pc = 0x1F35ECu;
            goto label_1f35ec;
        }
    }
    ctx->pc = 0x1F35E0u;
label_1f35e0:
    // 0x1f35e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f35e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f35e8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1f35e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_1f35ec:
    // 0x1f35ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f35ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f35f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f35f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f35f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f35f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f35f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f35f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f35fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f35fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3600: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3604: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3604u;
        // 0x1f3608: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F360Cu;
}
