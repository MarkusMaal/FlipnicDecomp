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

// Function: FUN_001efa48
// Address: 0x1efa48 - 0x1efbc4
void FUN_001efa48_0x1efa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001efa48_0x1efa48");
#endif

    switch (ctx->pc) {
        case 0x1efa70u: goto label_1efa70;
        case 0x1efa7cu: goto label_1efa7c;
        case 0x1efa94u: goto label_1efa94;
        case 0x1efab8u: goto label_1efab8;
        case 0x1efaf0u: goto label_1efaf0;
        case 0x1efb3cu: goto label_1efb3c;
        case 0x1efb4cu: goto label_1efb4c;
        case 0x1efb54u: goto label_1efb54;
        case 0x1efb6cu: goto label_1efb6c;
        case 0x1efb7cu: goto label_1efb7c;
        case 0x1efb8cu: goto label_1efb8c;
        case 0x1efb94u: goto label_1efb94;
        default: break;
    }

    ctx->pc = 0x1efa48u;

    // 0x1efa48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1efa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1efa4c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1efa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1efa50: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1efa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1efa54: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1efa54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1efa58: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1efa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1efa5c: 0x2692e200  addiu       $s2, $s4, -0x1E00
    ctx->pc = 0x1efa5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959616));
    // 0x1efa60: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1efa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1efa64: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1efa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1efa68: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1EFA68u;
    SET_GPR_U32(ctx, 31, 0x1EFA70u);
    ctx->pc = 0x1EFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA68u;
    // 0x1efa6c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1EFA68u, 0x1EFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA70u;
label_1efa70:
    // 0x1efa70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1efa70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa74: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1EFA74u;
    SET_GPR_U32(ctx, 31, 0x1EFA7Cu);
    ctx->pc = 0x1EFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA74u;
    // 0x1efa78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1EFA74u, 0x1EFA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA7Cu;
label_1efa7c:
    // 0x1efa7c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1efa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1efa80: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1efa80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1efa84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFA84u;
    {
        const bool branch_taken_0x1efa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efa84) {
            ctx->pc = 0x1EFA9Cu;
            goto label_1efa9c;
        }
    }
    ctx->pc = 0x1EFA8Cu;
    // 0x1efa8c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA94u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFA8Cu, 0x1EFA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA94u;
label_1efa94:
    // 0x1efa94: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1EFA94u;
    {
        const bool branch_taken_0x1efa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA94u;
        // 0x1efa98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa94) {
            ctx->pc = 0x1EFBA4u;
            goto label_1efba4;
        }
    }
    ctx->pc = 0x1EFA9Cu;
label_1efa9c:
    // 0x1efa9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFA9Cu;
    {
        const bool branch_taken_0x1efa9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efa9c) {
            ctx->pc = 0x1EFAB0u;
            goto label_1efab0;
        }
    }
    ctx->pc = 0x1EFAA4u;
    // 0x1efaa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1efaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1efaa8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFAA8u;
    {
        const bool branch_taken_0x1efaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efaa8) {
            ctx->pc = 0x1EFAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFAA8u;
            // 0x1efaac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFAC0u;
            goto label_1efac0;
        }
    }
    ctx->pc = 0x1EFAB0u;
label_1efab0:
    // 0x1efab0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFAB0u;
    SET_GPR_U32(ctx, 31, 0x1EFAB8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFAB0u, 0x1EFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAB8u;
label_1efab8:
    // 0x1efab8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1EFAB8u;
    {
        const bool branch_taken_0x1efab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAB8u;
        // 0x1efabc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab8) {
            ctx->pc = 0x1EFBA4u;
            goto label_1efba4;
        }
    }
    ctx->pc = 0x1EFAC0u;
label_1efac0:
    // 0x1efac0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1efac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1efac4: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1efac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1efac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1efac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efacc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1efaccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1efad0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1efad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1efad4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1efad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1efad8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efadc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1efadcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1efae0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efae4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1efae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1efae8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EFAE8u;
    SET_GPR_U32(ctx, 31, 0x1EFAF0u);
    ctx->pc = 0x1EFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFAE8u;
    // 0x1efaec: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EFAE8u, 0x1EFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAF0u;
label_1efaf0:
    // 0x1efaf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1efaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efaf4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1efaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1efaf8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1efaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1efafc: 0xae91e200  sw          $s1, -0x1E00($s4)
    ctx->pc = 0x1efafcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 17));
    // 0x1efb00: 0x2453ee40  addiu       $s3, $v0, -0x11C0
    ctx->pc = 0x1efb00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1efb04: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1efb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1efb08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1efb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efb0c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1efb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1efb10: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1efb10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1efb14: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1efb18: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1efb18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efb20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1efb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1efb24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb28: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1efb2c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1efb2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb30: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1efb30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efb34: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EFB34u;
    SET_GPR_U32(ctx, 31, 0x1EFB3Cu);
    ctx->pc = 0x1EFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB34u;
    // 0x1efb38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EFB34u, 0x1EFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB3Cu;
label_1efb3c:
    // 0x1efb3c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFB3Cu;
    {
        const bool branch_taken_0x1efb3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1efb3c) {
            ctx->pc = 0x1EFB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB3Cu;
            // 0x1efb40: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB5Cu;
            goto label_1efb5c;
        }
    }
    ctx->pc = 0x1EFB44u;
    // 0x1efb44: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFB44u;
    SET_GPR_U32(ctx, 31, 0x1EFB4Cu);
    ctx->pc = 0x1EFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB44u;
    // 0x1efb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFB44u, 0x1EFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB4Cu;
label_1efb4c:
    // 0x1efb4c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB54u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFB4Cu, 0x1EFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB54u;
label_1efb54:
    // 0x1efb54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EFB54u;
    {
        const bool branch_taken_0x1efb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB54u;
        // 0x1efb58: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb54) {
            ctx->pc = 0x1EFBA4u;
            goto label_1efba4;
        }
    }
    ctx->pc = 0x1EFB5Cu;
label_1efb5c:
    // 0x1efb5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1efb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1efb60: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1efb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1efb64: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFB64u;
    SET_GPR_U32(ctx, 31, 0x1EFB6Cu);
    ctx->pc = 0x1EFB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB64u;
    // 0x1efb68: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFB64u, 0x1EFB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB6Cu;
label_1efb6c:
    // 0x1efb6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFB6Cu;
    {
        const bool branch_taken_0x1efb6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efb6c) {
            ctx->pc = 0x1EFB84u;
            goto label_1efb84;
        }
    }
    ctx->pc = 0x1EFB74u;
    // 0x1efb74: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFB74u;
    SET_GPR_U32(ctx, 31, 0x1EFB7Cu);
    ctx->pc = 0x1EFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB74u;
    // 0x1efb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFB74u, 0x1EFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB7Cu;
label_1efb7c:
    // 0x1efb7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFB7Cu;
    {
        const bool branch_taken_0x1efb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB7Cu;
        // 0x1efb80: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb7c) {
            ctx->pc = 0x1EFBA4u;
            goto label_1efba4;
        }
    }
    ctx->pc = 0x1EFB84u;
label_1efb84:
    // 0x1efb84: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFB84u;
    SET_GPR_U32(ctx, 31, 0x1EFB8Cu);
    ctx->pc = 0x1EFB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB84u;
    // 0x1efb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFB84u, 0x1EFB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB8Cu;
label_1efb8c:
    // 0x1efb8c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFB8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB94u);
    ctx->pc = 0x1EFB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB8Cu;
    // 0x1efb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFB8Cu, 0x1EFB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB94u;
label_1efb94:
    // 0x1efb94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1efb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efb98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1efb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efb9c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1efb9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1efba0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1efba0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1efba4:
    // 0x1efba4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1efba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1efba8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1efba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1efbac: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1efbacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1efbb0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1efbb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1efbb4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1efbb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efbb8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1efbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBBCu;
        // 0x1efbc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFBC4u;
}
