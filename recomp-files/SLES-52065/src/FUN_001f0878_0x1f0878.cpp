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

// Function: FUN_001f0878
// Address: 0x1f0878 - 0x1f0a1c
void FUN_001f0878_0x1f0878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0878_0x1f0878");
#endif

    switch (ctx->pc) {
        case 0x1f08b8u: goto label_1f08b8;
        case 0x1f08d0u: goto label_1f08d0;
        case 0x1f08f8u: goto label_1f08f8;
        case 0x1f095cu: goto label_1f095c;
        case 0x1f0998u: goto label_1f0998;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09b0u: goto label_1f09b0;
        case 0x1f09c4u: goto label_1f09c4;
        case 0x1f09d4u: goto label_1f09d4;
        case 0x1f09e4u: goto label_1f09e4;
        case 0x1f09ecu: goto label_1f09ec;
        default: break;
    }

    ctx->pc = 0x1f0878u;

    // 0x1f0878: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f0878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f087c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f0880: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f0880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f0884: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f0884u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0888: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f088c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f0890: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f0894: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f0894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0898: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f0898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f089c: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f089cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f08a0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f08a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f08a4: 0x26f2e200  addiu       $s2, $s7, -0x1E00
    ctx->pc = 0x1f08a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f08a8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f08a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f08ac: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f08acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f08b0: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F08B0u;
    SET_GPR_U32(ctx, 31, 0x1F08B8u);
    ctx->pc = 0x1F08B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08B0u;
    // 0x1f08b4: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F08B0u, 0x1F08B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08B8u;
label_1f08b8:
    // 0x1f08b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f08bc: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f08c0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F08C0u;
    {
        const bool branch_taken_0x1f08c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f08c0) {
            ctx->pc = 0x1F08C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F08C0u;
            // 0x1f08c4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F08D4u;
            goto label_1f08d4;
        }
    }
    ctx->pc = 0x1F08C8u;
    // 0x1f08c8: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F08C8u;
    SET_GPR_U32(ctx, 31, 0x1F08D0u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F08C8u, 0x1F08D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08D0u;
label_1f08d0:
    // 0x1f08d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f08d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1f08d4:
    // 0x1f08d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f08d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08d8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f08dc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F08DCu;
    {
        const bool branch_taken_0x1f08dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08DCu;
        // 0x1f08e0: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08dc) {
            ctx->pc = 0x1F0924u;
            goto label_1f0924;
        }
    }
    ctx->pc = 0x1F08E4u;
    // 0x1f08e4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f08e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f08e8: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f08e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f08ec: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f08ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f08f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f08f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f08f4: 0x0  nop
    ctx->pc = 0x1f08f4u;
    // NOP
label_1f08f8:
    // 0x1f08f8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1f08f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f08fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F08FCu;
    {
        const bool branch_taken_0x1f08fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08FCu;
        // 0x1f0900: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08fc) {
            ctx->pc = 0x1F0930u;
            goto label_1f0930;
        }
    }
    ctx->pc = 0x1F0904u;
    // 0x1f0904: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1f0904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f0908: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f090c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f090cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0910: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f0914: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0914u;
    {
        const bool branch_taken_0x1f0914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0914) {
            ctx->pc = 0x1F0918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0914u;
            // 0x1f0918: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F08F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f08f8;
        }
    }
    ctx->pc = 0x1F091Cu;
    // 0x1f091c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F091Cu;
    {
        const bool branch_taken_0x1f091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F091Cu;
        // 0x1f0920: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f091c) {
            ctx->pc = 0x1F0934u;
            goto label_1f0934;
        }
    }
    ctx->pc = 0x1F0924u;
label_1f0924:
    // 0x1f0924: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f0924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0928: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f092c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f092cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f0930:
    // 0x1f0930: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f0930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f0934:
    // 0x1f0934: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0934u;
    {
        const bool branch_taken_0x1f0934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0934u;
        // 0x1f0938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0934) {
            ctx->pc = 0x1F0944u;
            goto label_1f0944;
        }
    }
    ctx->pc = 0x1F093Cu;
    // 0x1f093c: 0xa240040b  sb          $zero, 0x40B($s2)
    ctx->pc = 0x1f093cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0940: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1f0940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1f0944:
    // 0x1f0944: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0948: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f0948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f094c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0950: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f0950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f0954: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0954u;
    SET_GPR_U32(ctx, 31, 0x1F095Cu);
    ctx->pc = 0x1F0958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0954u;
    // 0x1f0958: 0x2694ee40  addiu       $s4, $s4, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0954u, 0x1F095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F095Cu;
label_1f095c:
    // 0x1f095c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f095cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0960: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f0960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f0964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0968: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f0968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f096c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f096cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f0970: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f0974: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f0974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0978: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f097c: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1f0980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0984: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0988: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f098c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f098cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0990: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0990u;
    SET_GPR_U32(ctx, 31, 0x1F0998u);
    ctx->pc = 0x1F0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0990u;
    // 0x1f0994: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0990u, 0x1F0998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0998u;
label_1f0998:
    // 0x1f0998: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0998u;
    {
        const bool branch_taken_0x1f0998 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0998u;
        // 0x1f099c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0998) {
            ctx->pc = 0x1F09B8u;
            goto label_1f09b8;
        }
    }
    ctx->pc = 0x1F09A0u;
    // 0x1f09a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F09A0u;
    SET_GPR_U32(ctx, 31, 0x1F09A8u);
    ctx->pc = 0x1F09A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09A0u;
    // 0x1f09a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F09A0u, 0x1F09A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09A8u;
label_1f09a8:
    // 0x1f09a8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F09A8u;
    SET_GPR_U32(ctx, 31, 0x1F09B0u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F09A8u, 0x1F09B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09B0u;
label_1f09b0:
    // 0x1f09b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F09B0u;
    {
        const bool branch_taken_0x1f09b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B0u;
        // 0x1f09b4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b0) {
            ctx->pc = 0x1F09F0u;
            goto label_1f09f0;
        }
    }
    ctx->pc = 0x1F09B8u;
label_1f09b8:
    // 0x1f09b8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f09b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f09bc: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F09BCu;
    SET_GPR_U32(ctx, 31, 0x1F09C4u);
    ctx->pc = 0x1F09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09BCu;
    // 0x1f09c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F09BCu, 0x1F09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09C4u;
label_1f09c4:
    // 0x1f09c4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F09C4u;
    {
        const bool branch_taken_0x1f09c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f09c4) {
            ctx->pc = 0x1F09DCu;
            goto label_1f09dc;
        }
    }
    ctx->pc = 0x1F09CCu;
    // 0x1f09cc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F09CCu;
    SET_GPR_U32(ctx, 31, 0x1F09D4u);
    ctx->pc = 0x1F09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09CCu;
    // 0x1f09d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F09CCu, 0x1F09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09D4u;
label_1f09d4:
    // 0x1f09d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F09D4u;
    {
        const bool branch_taken_0x1f09d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09D4u;
        // 0x1f09d8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09d4) {
            ctx->pc = 0x1F09F0u;
            goto label_1f09f0;
        }
    }
    ctx->pc = 0x1F09DCu;
label_1f09dc:
    // 0x1f09dc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F09DCu;
    SET_GPR_U32(ctx, 31, 0x1F09E4u);
    ctx->pc = 0x1F09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09DCu;
    // 0x1f09e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F09DCu, 0x1F09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09E4u;
label_1f09e4:
    // 0x1f09e4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F09E4u;
    SET_GPR_U32(ctx, 31, 0x1F09ECu);
    ctx->pc = 0x1F09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09E4u;
    // 0x1f09e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F09E4u, 0x1F09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09ECu;
label_1f09ec:
    // 0x1f09ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f09f0:
    // 0x1f09f0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f09f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f09f4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f09f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f09f8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f09f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f09fc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f09fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0a00: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0a00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0a04: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0a04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0a08: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0a0c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0a10: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A14u;
        // 0x1f0a18: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0A1Cu;
}
