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

// Function: FUN_001efbc8
// Address: 0x1efbc8 - 0x1efe00
void FUN_001efbc8_0x1efbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001efbc8_0x1efbc8");
#endif

    switch (ctx->pc) {
        case 0x1efc00u: goto label_1efc00;
        case 0x1efc0cu: goto label_1efc0c;
        case 0x1efc24u: goto label_1efc24;
        case 0x1efc48u: goto label_1efc48;
        case 0x1efc88u: goto label_1efc88;
        case 0x1efcb4u: goto label_1efcb4;
        case 0x1efcf0u: goto label_1efcf0;
        case 0x1efd2cu: goto label_1efd2c;
        case 0x1efd68u: goto label_1efd68;
        case 0x1efd78u: goto label_1efd78;
        case 0x1efd80u: goto label_1efd80;
        case 0x1efd94u: goto label_1efd94;
        case 0x1efda4u: goto label_1efda4;
        case 0x1efdbcu: goto label_1efdbc;
        case 0x1efdccu: goto label_1efdcc;
        case 0x1efdd4u: goto label_1efdd4;
        default: break;
    }

    ctx->pc = 0x1efbc8u;

    // 0x1efbc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1efbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1efbcc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1efbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1efbd0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1efbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1efbd4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1efbd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efbd8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1efbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1efbdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1efbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efbe0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1efbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1efbe4: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1efbe4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1efbe8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1efbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1efbec: 0x26b1e200  addiu       $s1, $s5, -0x1E00
    ctx->pc = 0x1efbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959616));
    // 0x1efbf0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1efbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1efbf4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1efbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1efbf8: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1EFBF8u;
    SET_GPR_U32(ctx, 31, 0x1EFC00u);
    ctx->pc = 0x1EFBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBF8u;
    // 0x1efbfc: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1EFBF8u, 0x1EFC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC00u;
label_1efc00:
    // 0x1efc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1efc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc04: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1EFC04u;
    SET_GPR_U32(ctx, 31, 0x1EFC0Cu);
    ctx->pc = 0x1EFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC04u;
    // 0x1efc08: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1EFC04u, 0x1EFC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC0Cu;
label_1efc0c:
    // 0x1efc0c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1efc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1efc10: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1efc10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1efc14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFC14u;
    {
        const bool branch_taken_0x1efc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc14) {
            ctx->pc = 0x1EFC2Cu;
            goto label_1efc2c;
        }
    }
    ctx->pc = 0x1EFC1Cu;
    // 0x1efc1c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFC1Cu;
    SET_GPR_U32(ctx, 31, 0x1EFC24u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFC1Cu, 0x1EFC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC24u;
label_1efc24:
    // 0x1efc24: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1EFC24u;
    {
        const bool branch_taken_0x1efc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC24u;
        // 0x1efc28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc24) {
            ctx->pc = 0x1EFDD8u;
            goto label_1efdd8;
        }
    }
    ctx->pc = 0x1EFC2Cu;
label_1efc2c:
    // 0x1efc2c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFC2Cu;
    {
        const bool branch_taken_0x1efc2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc2c) {
            ctx->pc = 0x1EFC40u;
            goto label_1efc40;
        }
    }
    ctx->pc = 0x1EFC34u;
    // 0x1efc34: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1efc34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1efc38: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFC38u;
    {
        const bool branch_taken_0x1efc38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC38u;
        // 0x1efc3c: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc38) {
            ctx->pc = 0x1EFC50u;
            goto label_1efc50;
        }
    }
    ctx->pc = 0x1EFC40u;
label_1efc40:
    // 0x1efc40: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFC40u;
    SET_GPR_U32(ctx, 31, 0x1EFC48u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFC40u, 0x1EFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC48u;
label_1efc48:
    // 0x1efc48: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1EFC48u;
    {
        const bool branch_taken_0x1efc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC48u;
        // 0x1efc4c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc48) {
            ctx->pc = 0x1EFDD8u;
            goto label_1efdd8;
        }
    }
    ctx->pc = 0x1EFC50u;
label_1efc50:
    // 0x1efc50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1efc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1efc54: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1efc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1efc58: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1efc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1efc5c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1efc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1efc60: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1efc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1efc64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efc64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efc68: 0xae340014  sw          $s4, 0x14($s1)
    ctx->pc = 0x1efc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
    // 0x1efc6c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1efc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1efc70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1efc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efc78: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1efc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1efc7c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1efc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1efc80: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EFC80u;
    SET_GPR_U32(ctx, 31, 0x1EFC88u);
    ctx->pc = 0x1EFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC80u;
    // 0x1efc84: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EFC80u, 0x1EFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC88u;
label_1efc88:
    // 0x1efc88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1efc88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1efc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efc90: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1efc94: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1efc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1efc98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1efc98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1efc9c: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1efc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1efca0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EFCA0u;
    {
        const bool branch_taken_0x1efca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCA0u;
        // 0x1efca4: 0xaeb2e200  sw          $s2, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efca0) {
            ctx->pc = 0x1EFD34u;
            goto label_1efd34;
        }
    }
    ctx->pc = 0x1EFCA8u;
    // 0x1efca8: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1efcac: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFCACu;
    SET_GPR_U32(ctx, 31, 0x1EFCB4u);
    ctx->pc = 0x1EFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCACu;
    // 0x1efcb0: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFCACu, 0x1EFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCB4u;
label_1efcb4:
    // 0x1efcb4: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1efcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1efcb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efcb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcbc: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1efcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1efcc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efcc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFCC4u;
    {
        const bool branch_taken_0x1efcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCC4u;
        // 0x1efcc8: 0x3c160039  lui         $s6, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcc4) {
            ctx->pc = 0x1EFCE8u;
            goto label_1efce8;
        }
    }
    ctx->pc = 0x1EFCCCu;
    // 0x1efccc: 0x8ea3e200  lw          $v1, -0x1E00($s5)
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294959616)));
    // 0x1efcd0: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1efcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1efcd4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1efcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1efcd8: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1efcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1efcdc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EFCDCu;
    {
        const bool branch_taken_0x1efcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCDCu;
        // 0x1efce0: 0xaea2e200  sw          $v0, -0x1E00($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcdc) {
            ctx->pc = 0x1EFD24u;
            goto label_1efd24;
        }
    }
    ctx->pc = 0x1EFCE4u;
    // 0x1efce4: 0x0  nop
    ctx->pc = 0x1efce4u;
    // NOP
label_1efce8:
    // 0x1efce8: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1efce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1efcec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1efcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1efcf0:
    // 0x1efcf0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1efcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1efcf4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFCF4u;
    {
        const bool branch_taken_0x1efcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCF4u;
        // 0x1efcf8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcf4) {
            ctx->pc = 0x1EFD24u;
            goto label_1efd24;
        }
    }
    ctx->pc = 0x1EFCFCu;
    // 0x1efcfc: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1efd00: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1efd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1efd04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efd08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1efd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1efd0c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EFD0Cu;
    {
        const bool branch_taken_0x1efd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD0Cu;
        // 0x1efd10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd0c) {
            ctx->pc = 0x1EFCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efcf0;
        }
    }
    ctx->pc = 0x1EFD14u;
    // 0x1efd14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1efd18: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1efd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1efd1c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1efd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1efd20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1efd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1efd24:
    // 0x1efd24: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EFD24u;
    SET_GPR_U32(ctx, 31, 0x1EFD2Cu);
    ctx->pc = 0x1EFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD24u;
    // 0x1efd28: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EFD24u, 0x1EFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD2Cu;
label_1efd2c:
    // 0x1efd2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFD2Cu;
    {
        const bool branch_taken_0x1efd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD2Cu;
        // 0x1efd30: 0x2610ee40  addiu       $s0, $s0, -0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd2c) {
            ctx->pc = 0x1EFD40u;
            goto label_1efd40;
        }
    }
    ctx->pc = 0x1EFD34u;
label_1efd34:
    // 0x1efd34: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1efd34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1efd38: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1efd38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1efd3c: 0x2610ee40  addiu       $s0, $s0, -0x11C0
    ctx->pc = 0x1efd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
label_1efd40:
    // 0x1efd40: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1efd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1efd44: 0x26a7e200  addiu       $a3, $s5, -0x1E00
    ctx->pc = 0x1efd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959616));
    // 0x1efd48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1efd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1efd4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1efd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efd50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd54: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1efd58: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1efd58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd5c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1efd5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efd60: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EFD60u;
    SET_GPR_U32(ctx, 31, 0x1EFD68u);
    ctx->pc = 0x1EFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD60u;
    // 0x1efd64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EFD60u, 0x1EFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD68u;
label_1efd68:
    // 0x1efd68: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFD68u;
    {
        const bool branch_taken_0x1efd68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD68u;
        // 0x1efd6c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd68) {
            ctx->pc = 0x1EFD88u;
            goto label_1efd88;
        }
    }
    ctx->pc = 0x1EFD70u;
    // 0x1efd70: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFD70u;
    SET_GPR_U32(ctx, 31, 0x1EFD78u);
    ctx->pc = 0x1EFD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD70u;
    // 0x1efd74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFD70u, 0x1EFD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD78u;
label_1efd78:
    // 0x1efd78: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFD78u;
    SET_GPR_U32(ctx, 31, 0x1EFD80u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFD78u, 0x1EFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD80u;
label_1efd80:
    // 0x1efd80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EFD80u;
    {
        const bool branch_taken_0x1efd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD80u;
        // 0x1efd84: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd80) {
            ctx->pc = 0x1EFDD8u;
            goto label_1efdd8;
        }
    }
    ctx->pc = 0x1EFD88u;
label_1efd88:
    // 0x1efd88: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1efd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1efd8c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFD94u);
    ctx->pc = 0x1EFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD8Cu;
    // 0x1efd90: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFD8Cu, 0x1EFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD94u;
label_1efd94:
    // 0x1efd94: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFD94u;
    {
        const bool branch_taken_0x1efd94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD94u;
        // 0x1efd98: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd94) {
            ctx->pc = 0x1EFDACu;
            goto label_1efdac;
        }
    }
    ctx->pc = 0x1EFD9Cu;
    // 0x1efd9c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1EFDA4u);
    ctx->pc = 0x1EFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD9Cu;
    // 0x1efda0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFD9Cu, 0x1EFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDA4u;
label_1efda4:
    // 0x1efda4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EFDA4u;
    {
        const bool branch_taken_0x1efda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDA4u;
        // 0x1efda8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efda4) {
            ctx->pc = 0x1EFDD8u;
            goto label_1efdd8;
        }
    }
    ctx->pc = 0x1EFDACu;
label_1efdac:
    // 0x1efdac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFDACu;
    {
        const bool branch_taken_0x1efdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efdac) {
            ctx->pc = 0x1EFDC4u;
            goto label_1efdc4;
        }
    }
    ctx->pc = 0x1EFDB4u;
    // 0x1efdb4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFDB4u;
    SET_GPR_U32(ctx, 31, 0x1EFDBCu);
    ctx->pc = 0x1EFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDB4u;
    // 0x1efdb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFDB4u, 0x1EFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDBCu;
label_1efdbc:
    // 0x1efdbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFDBCu;
    {
        const bool branch_taken_0x1efdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDBCu;
        // 0x1efdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdbc) {
            ctx->pc = 0x1EFDD8u;
            goto label_1efdd8;
        }
    }
    ctx->pc = 0x1EFDC4u;
label_1efdc4:
    // 0x1efdc4: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFDC4u;
    SET_GPR_U32(ctx, 31, 0x1EFDCCu);
    ctx->pc = 0x1EFDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDC4u;
    // 0x1efdc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFDC4u, 0x1EFDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDCCu;
label_1efdcc:
    // 0x1efdcc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFDCCu;
    SET_GPR_U32(ctx, 31, 0x1EFDD4u);
    ctx->pc = 0x1EFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDCCu;
    // 0x1efdd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFDCCu, 0x1EFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDD4u;
label_1efdd4:
    // 0x1efdd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1efdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1efdd8:
    // 0x1efdd8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1efdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1efddc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1efddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1efde0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1efde0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1efde4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1efde4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1efde8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1efde8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1efdec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1efdecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1efdf0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1efdf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efdf4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1efdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDF8u;
        // 0x1efdfc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFE00u;
}
