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

// Function: FUN_001ee5a8
// Address: 0x1ee5a8 - 0x1ee6e8
void FUN_001ee5a8_0x1ee5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee5a8_0x1ee5a8");
#endif

    switch (ctx->pc) {
        case 0x1ee5e0u: goto label_1ee5e0;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee630u: goto label_1ee630;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee670u: goto label_1ee670;
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee688u: goto label_1ee688;
        case 0x1ee6b8u: goto label_1ee6b8;
        case 0x1ee6c8u: goto label_1ee6c8;
        default: break;
    }

    ctx->pc = 0x1ee5a8u;

    // 0x1ee5a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ee5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ee5ac: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ee5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ee5b0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ee5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1ee5b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ee5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ee5bc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ee5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ee5c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ee5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ee5c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ee5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ee5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ee5cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ee5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5d0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1ee5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1ee5d4: 0x2484e180  addiu       $a0, $a0, -0x1E80
    ctx->pc = 0x1ee5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    // 0x1ee5d8: 0xc07b80c  jal         func_1EE030
    ctx->pc = 0x1EE5D8u;
    SET_GPR_U32(ctx, 31, 0x1EE5E0u);
    ctx->pc = 0x1EE5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE5D8u;
    // 0x1ee5dc: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE030u, 0x1EE5D8u, 0x1EE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5E0u;
label_1ee5e0:
    // 0x1ee5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5e4: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1EE5E4u;
    {
        const bool branch_taken_0x1ee5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5E4u;
        // 0x1ee5e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5e4) {
            ctx->pc = 0x1EE6CCu;
            goto label_1ee6cc;
        }
    }
    ctx->pc = 0x1EE5ECu;
    // 0x1ee5ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ee5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ee5f0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1ee5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1ee5f4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ee5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ee5f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ee5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ee5fc: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1ee5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x1ee600: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1ee600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1ee604: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EE604u;
    {
        const bool branch_taken_0x1ee604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE604u;
        // 0x1ee608: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee604) {
            ctx->pc = 0x1EE690u;
            goto label_1ee690;
        }
    }
    ctx->pc = 0x1EE60Cu;
    // 0x1ee60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee610: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ee610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ee614: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ee614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ee618: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EE618u;
    SET_GPR_U32(ctx, 31, 0x1EE620u);
    ctx->pc = 0x1EE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE618u;
    // 0x1ee61c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EE618u, 0x1EE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE620u;
label_1ee620:
    // 0x1ee620: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE620u;
    {
        const bool branch_taken_0x1ee620 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE620u;
        // 0x1ee624: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee620) {
            ctx->pc = 0x1EE638u;
            goto label_1ee638;
        }
    }
    ctx->pc = 0x1EE628u;
    // 0x1ee628: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE628u;
    SET_GPR_U32(ctx, 31, 0x1EE630u);
    ctx->pc = 0x1EE62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE628u;
    // 0x1ee62c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE628u, 0x1EE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE630u;
label_1ee630:
    // 0x1ee630: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1EE630u;
    {
        const bool branch_taken_0x1ee630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE630u;
        // 0x1ee634: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee630) {
            ctx->pc = 0x1EE6CCu;
            goto label_1ee6cc;
        }
    }
    ctx->pc = 0x1EE638u;
label_1ee638:
    // 0x1ee638: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee63c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee640: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1ee640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1ee644: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee64c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee650: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE650u;
    SET_GPR_U32(ctx, 31, 0x1EE658u);
    ctx->pc = 0x1EE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE650u;
    // 0x1ee654: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE650u, 0x1EE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE658u;
label_1ee658:
    // 0x1ee658: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE658u;
    {
        const bool branch_taken_0x1ee658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee658) {
            ctx->pc = 0x1EE678u;
            goto label_1ee678;
        }
    }
    ctx->pc = 0x1EE660u;
    // 0x1ee660: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE660u;
    SET_GPR_U32(ctx, 31, 0x1EE668u);
    ctx->pc = 0x1EE664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE660u;
    // 0x1ee664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE660u, 0x1EE668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE668u;
label_1ee668:
    // 0x1ee668: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE668u;
    SET_GPR_U32(ctx, 31, 0x1EE670u);
    ctx->pc = 0x1EE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE668u;
    // 0x1ee66c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE668u, 0x1EE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE670u;
label_1ee670:
    // 0x1ee670: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EE670u;
    {
        const bool branch_taken_0x1ee670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE670u;
        // 0x1ee674: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee670) {
            ctx->pc = 0x1EE6CCu;
            goto label_1ee6cc;
        }
    }
    ctx->pc = 0x1EE678u;
label_1ee678:
    // 0x1ee678: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EE678u;
    SET_GPR_U32(ctx, 31, 0x1EE680u);
    ctx->pc = 0x1EE67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE678u;
    // 0x1ee67c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EE678u, 0x1EE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE680u;
label_1ee680:
    // 0x1ee680: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE680u;
    SET_GPR_U32(ctx, 31, 0x1EE688u);
    ctx->pc = 0x1EE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE680u;
    // 0x1ee684: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE680u, 0x1EE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE688u;
label_1ee688:
    // 0x1ee688: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE688u;
    {
        const bool branch_taken_0x1ee688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE688u;
        // 0x1ee68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee688) {
            ctx->pc = 0x1EE6CCu;
            goto label_1ee6cc;
        }
    }
    ctx->pc = 0x1EE690u;
label_1ee690:
    // 0x1ee690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee694: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee698: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ee698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ee69c: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1ee69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1ee6a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6a4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee6a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6b0: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE6B0u;
    SET_GPR_U32(ctx, 31, 0x1EE6B8u);
    ctx->pc = 0x1EE6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6B0u;
    // 0x1ee6b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE6B0u, 0x1EE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6B8u;
label_1ee6b8:
    // 0x1ee6b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE6B8u;
    {
        const bool branch_taken_0x1ee6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B8u;
        // 0x1ee6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6b8) {
            ctx->pc = 0x1EE6CCu;
            goto label_1ee6cc;
        }
    }
    ctx->pc = 0x1EE6C0u;
    // 0x1ee6c0: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE6C0u;
    SET_GPR_U32(ctx, 31, 0x1EE6C8u);
    ctx->pc = 0x1EE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6C0u;
    // 0x1ee6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE6C0u, 0x1EE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6C8u;
label_1ee6c8:
    // 0x1ee6c8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ee6cc:
    // 0x1ee6cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ee6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee6d0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ee6d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee6d4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ee6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee6d8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ee6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee6dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ee6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6E0u;
        // 0x1ee6e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE6E8u;
}
