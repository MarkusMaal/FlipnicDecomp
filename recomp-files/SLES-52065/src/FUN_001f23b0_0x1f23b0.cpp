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

// Function: FUN_001f23b0
// Address: 0x1f23b0 - 0x1f2578
void FUN_001f23b0_0x1f23b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f23b0_0x1f23b0");
#endif

    switch (ctx->pc) {
        case 0x1f23f4u: goto label_1f23f4;
        case 0x1f240cu: goto label_1f240c;
        case 0x1f2438u: goto label_1f2438;
        case 0x1f249cu: goto label_1f249c;
        case 0x1f24b8u: goto label_1f24b8;
        case 0x1f24f4u: goto label_1f24f4;
        case 0x1f2504u: goto label_1f2504;
        case 0x1f250cu: goto label_1f250c;
        case 0x1f2520u: goto label_1f2520;
        case 0x1f2530u: goto label_1f2530;
        case 0x1f2540u: goto label_1f2540;
        case 0x1f2548u: goto label_1f2548;
        default: break;
    }

    ctx->pc = 0x1f23b0u;

    // 0x1f23b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f23b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f23b4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f23b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f23b8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f23b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f23bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f23bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f23c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f23c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f23c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23c8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f23cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f23ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23d0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f23d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f23d4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f23d8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f23d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f23dc: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f23dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f23e0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f23e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f23e4: 0x26f2e200  addiu       $s2, $s7, -0x1E00
    ctx->pc = 0x1f23e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f23e8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f23e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f23ec: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F23ECu;
    SET_GPR_U32(ctx, 31, 0x1F23F4u);
    ctx->pc = 0x1F23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23ECu;
    // 0x1f23f0: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F23ECu, 0x1F23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23F4u;
label_1f23f4:
    // 0x1f23f4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f23f8: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f23fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F23FCu;
    {
        const bool branch_taken_0x1f23fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f23fc) {
            ctx->pc = 0x1F2400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F23FCu;
            // 0x1f2400: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2410u;
            goto label_1f2410;
        }
    }
    ctx->pc = 0x1F2404u;
    // 0x1f2404: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F2404u;
    SET_GPR_U32(ctx, 31, 0x1F240Cu);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F2404u, 0x1F240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F240Cu;
label_1f240c:
    // 0x1f240c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f240cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1f2410:
    // 0x1f2410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2414: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f2414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f2418: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F2418u;
    {
        const bool branch_taken_0x1f2418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2418u;
        // 0x1f241c: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2418) {
            ctx->pc = 0x1F2464u;
            goto label_1f2464;
        }
    }
    ctx->pc = 0x1F2420u;
    // 0x1f2420: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1f2420u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f2424: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f2428: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f2428u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f242c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f242cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f2430: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f2430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f2434: 0x0  nop
    ctx->pc = 0x1f2434u;
    // NOP
label_1f2438:
    // 0x1f2438: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f2438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f243c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F243Cu;
    {
        const bool branch_taken_0x1f243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F243Cu;
        // 0x1f2440: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f243c) {
            ctx->pc = 0x1F2474u;
            goto label_1f2474;
        }
    }
    ctx->pc = 0x1F2444u;
    // 0x1f2444: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f2444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f2448: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f2448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f244c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1f244cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2450: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f2450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f2454: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F2454u;
    {
        const bool branch_taken_0x1f2454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2454) {
            ctx->pc = 0x1F2458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2454u;
            // 0x1f2458: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2438;
        }
    }
    ctx->pc = 0x1F245Cu;
    // 0x1f245c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F245Cu;
    {
        const bool branch_taken_0x1f245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F245Cu;
        // 0x1f2460: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f245c) {
            ctx->pc = 0x1F2478u;
            goto label_1f2478;
        }
    }
    ctx->pc = 0x1F2464u;
label_1f2464:
    // 0x1f2464: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1f2464u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f2468: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f2468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f246c: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f246cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f2470: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f2474:
    // 0x1f2474: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f2474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f2478:
    // 0x1f2478: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2478u;
    {
        const bool branch_taken_0x1f2478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2478) {
            ctx->pc = 0x1F247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2478u;
            // 0x1f247c: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2480u;
            goto label_1f2480;
        }
    }
    ctx->pc = 0x1F2480u;
label_1f2480:
    // 0x1f2480: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1f2480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f2484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f2484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2488: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x1f2488u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1f248c: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x1f248cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x1f2490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2494: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F2494u;
    SET_GPR_U32(ctx, 31, 0x1F249Cu);
    ctx->pc = 0x1F2498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2494u;
    // 0x1f2498: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F2494u, 0x1F249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F249Cu;
label_1f249c:
    // 0x1f249c: 0x2690ee40  addiu       $s0, $s4, -0x11C0
    ctx->pc = 0x1f249cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f24a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f24a4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f24a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f24ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f24acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f24b0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F24B0u;
    SET_GPR_U32(ctx, 31, 0x1F24B8u);
    ctx->pc = 0x1F24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24B0u;
    // 0x1f24b4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F24B0u, 0x1F24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24B8u;
label_1f24b8:
    // 0x1f24b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f24b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24bc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f24bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f24c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f24c4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f24c8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f24cc: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1f24ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1f24d0: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f24d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f24d4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1f24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f24d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f24dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f24dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24e0: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f24e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f24e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f24e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f24ec: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F24ECu;
    SET_GPR_U32(ctx, 31, 0x1F24F4u);
    ctx->pc = 0x1F24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24ECu;
    // 0x1f24f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F24ECu, 0x1F24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24F4u;
label_1f24f4:
    // 0x1f24f4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F24F4u;
    {
        const bool branch_taken_0x1f24f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24F4u;
        // 0x1f24f8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24f4) {
            ctx->pc = 0x1F2514u;
            goto label_1f2514;
        }
    }
    ctx->pc = 0x1F24FCu;
    // 0x1f24fc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F24FCu;
    SET_GPR_U32(ctx, 31, 0x1F2504u);
    ctx->pc = 0x1F2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24FCu;
    // 0x1f2500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F24FCu, 0x1F2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2504u;
label_1f2504:
    // 0x1f2504: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2504u;
    SET_GPR_U32(ctx, 31, 0x1F250Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2504u, 0x1F250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F250Cu;
label_1f250c:
    // 0x1f250c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F250Cu;
    {
        const bool branch_taken_0x1f250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F250Cu;
        // 0x1f2510: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f250c) {
            ctx->pc = 0x1F254Cu;
            goto label_1f254c;
        }
    }
    ctx->pc = 0x1F2514u;
label_1f2514:
    // 0x1f2514: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f2514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f2518: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2518u;
    SET_GPR_U32(ctx, 31, 0x1F2520u);
    ctx->pc = 0x1F251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2518u;
    // 0x1f251c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2518u, 0x1F2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2520u;
label_1f2520:
    // 0x1f2520: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2520u;
    {
        const bool branch_taken_0x1f2520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2520) {
            ctx->pc = 0x1F2538u;
            goto label_1f2538;
        }
    }
    ctx->pc = 0x1F2528u;
    // 0x1f2528: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2528u;
    SET_GPR_U32(ctx, 31, 0x1F2530u);
    ctx->pc = 0x1F252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2528u;
    // 0x1f252c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2528u, 0x1F2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2530u;
label_1f2530:
    // 0x1f2530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2530u;
    {
        const bool branch_taken_0x1f2530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2530u;
        // 0x1f2534: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2530) {
            ctx->pc = 0x1F254Cu;
            goto label_1f254c;
        }
    }
    ctx->pc = 0x1F2538u;
label_1f2538:
    // 0x1f2538: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F2538u;
    SET_GPR_U32(ctx, 31, 0x1F2540u);
    ctx->pc = 0x1F253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2538u;
    // 0x1f253c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F2538u, 0x1F2540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2540u;
label_1f2540:
    // 0x1f2540: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2540u;
    SET_GPR_U32(ctx, 31, 0x1F2548u);
    ctx->pc = 0x1F2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2540u;
    // 0x1f2544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2540u, 0x1F2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2548u;
label_1f2548:
    // 0x1f2548: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f254c:
    // 0x1f254c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f254cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f2550: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f2550u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f2554: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f2554u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f2558: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f2558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f255c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f255cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f2560: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f2560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f2564: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f2564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2568: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f2568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f256c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f256cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2570: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2570u;
        // 0x1f2574: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2578u;
}
