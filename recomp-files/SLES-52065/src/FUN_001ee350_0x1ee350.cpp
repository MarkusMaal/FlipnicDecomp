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

// Function: FUN_001ee350
// Address: 0x1ee350 - 0x1ee4a8
void FUN_001ee350_0x1ee350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee350_0x1ee350");
#endif

    switch (ctx->pc) {
        case 0x1ee390u: goto label_1ee390;
        case 0x1ee3d8u: goto label_1ee3d8;
        case 0x1ee3e8u: goto label_1ee3e8;
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee480u: goto label_1ee480;
        default: break;
    }

    ctx->pc = 0x1ee350u;

    // 0x1ee350: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ee354: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ee354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ee358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee35c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1ee35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1ee360: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ee360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ee364: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ee364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ee368: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ee368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1ee36c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ee36cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee370: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ee370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ee374: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ee374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee378: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ee378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ee37c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1ee37cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee380: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ee380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ee384: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ee384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee388: 0xc07b80c  jal         func_1EE030
    ctx->pc = 0x1EE388u;
    SET_GPR_U32(ctx, 31, 0x1EE390u);
    ctx->pc = 0x1EE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE388u;
    // 0x1ee38c: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE030u, 0x1EE388u, 0x1EE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE390u;
label_1ee390:
    // 0x1ee390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee394: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EE394u;
    {
        const bool branch_taken_0x1ee394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE394u;
        // 0x1ee398: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee394) {
            ctx->pc = 0x1EE484u;
            goto label_1ee484;
        }
    }
    ctx->pc = 0x1EE39Cu;
    // 0x1ee39c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ee39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ee3a0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1ee3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1ee3a4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ee3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ee3a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ee3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ee3ac: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1ee3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x1ee3b0: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x1ee3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x1ee3b4: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x1ee3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x1ee3b8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1ee3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1ee3bc: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EE3BCu;
    {
        const bool branch_taken_0x1ee3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3BCu;
        // 0x1ee3c0: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3bc) {
            ctx->pc = 0x1EE448u;
            goto label_1ee448;
        }
    }
    ctx->pc = 0x1EE3C4u;
    // 0x1ee3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee3c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ee3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ee3cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ee3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ee3d0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EE3D0u;
    SET_GPR_U32(ctx, 31, 0x1EE3D8u);
    ctx->pc = 0x1EE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3D0u;
    // 0x1ee3d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EE3D0u, 0x1EE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3D8u;
label_1ee3d8:
    // 0x1ee3d8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE3D8u;
    {
        const bool branch_taken_0x1ee3d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3D8u;
        // 0x1ee3dc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3d8) {
            ctx->pc = 0x1EE3F0u;
            goto label_1ee3f0;
        }
    }
    ctx->pc = 0x1EE3E0u;
    // 0x1ee3e0: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE3E0u;
    SET_GPR_U32(ctx, 31, 0x1EE3E8u);
    ctx->pc = 0x1EE3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3E0u;
    // 0x1ee3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE3E0u, 0x1EE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3E8u;
label_1ee3e8:
    // 0x1ee3e8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1EE3E8u;
    {
        const bool branch_taken_0x1ee3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3E8u;
        // 0x1ee3ec: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3e8) {
            ctx->pc = 0x1EE484u;
            goto label_1ee484;
        }
    }
    ctx->pc = 0x1EE3F0u;
label_1ee3f0:
    // 0x1ee3f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3f8: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1ee3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1ee3fc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee408: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE408u;
    SET_GPR_U32(ctx, 31, 0x1EE410u);
    ctx->pc = 0x1EE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE408u;
    // 0x1ee40c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE408u, 0x1EE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE410u;
label_1ee410:
    // 0x1ee410: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE410u;
    {
        const bool branch_taken_0x1ee410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee410) {
            ctx->pc = 0x1EE430u;
            goto label_1ee430;
        }
    }
    ctx->pc = 0x1EE418u;
    // 0x1ee418: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE418u;
    SET_GPR_U32(ctx, 31, 0x1EE420u);
    ctx->pc = 0x1EE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE418u;
    // 0x1ee41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE418u, 0x1EE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE420u;
label_1ee420:
    // 0x1ee420: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE420u;
    SET_GPR_U32(ctx, 31, 0x1EE428u);
    ctx->pc = 0x1EE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE420u;
    // 0x1ee424: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE420u, 0x1EE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE428u;
label_1ee428:
    // 0x1ee428: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EE428u;
    {
        const bool branch_taken_0x1ee428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE428u;
        // 0x1ee42c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee428) {
            ctx->pc = 0x1EE484u;
            goto label_1ee484;
        }
    }
    ctx->pc = 0x1EE430u;
label_1ee430:
    // 0x1ee430: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EE430u;
    SET_GPR_U32(ctx, 31, 0x1EE438u);
    ctx->pc = 0x1EE434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE430u;
    // 0x1ee434: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EE430u, 0x1EE438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE438u;
label_1ee438:
    // 0x1ee438: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE438u;
    SET_GPR_U32(ctx, 31, 0x1EE440u);
    ctx->pc = 0x1EE43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE438u;
    // 0x1ee43c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE438u, 0x1EE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE440u;
label_1ee440:
    // 0x1ee440: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE440u;
    {
        const bool branch_taken_0x1ee440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE440u;
        // 0x1ee444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee440) {
            ctx->pc = 0x1EE484u;
            goto label_1ee484;
        }
    }
    ctx->pc = 0x1EE448u;
label_1ee448:
    // 0x1ee448: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee44c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee450: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ee450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ee454: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1ee454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1ee458: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee45c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee464: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee468: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE468u;
    SET_GPR_U32(ctx, 31, 0x1EE470u);
    ctx->pc = 0x1EE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE468u;
    // 0x1ee46c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE468u, 0x1EE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE470u;
label_1ee470:
    // 0x1ee470: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE470u;
    {
        const bool branch_taken_0x1ee470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE470u;
        // 0x1ee474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee470) {
            ctx->pc = 0x1EE484u;
            goto label_1ee484;
        }
    }
    ctx->pc = 0x1EE478u;
    // 0x1ee478: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE478u;
    SET_GPR_U32(ctx, 31, 0x1EE480u);
    ctx->pc = 0x1EE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE478u;
    // 0x1ee47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE478u, 0x1EE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE480u;
label_1ee480:
    // 0x1ee480: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ee480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ee484:
    // 0x1ee484: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ee484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee488: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1ee488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee48c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ee48cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee490: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ee490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee494: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ee494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee498: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ee498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee49c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ee49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4A0u;
        // 0x1ee4a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE4A8u;
}
