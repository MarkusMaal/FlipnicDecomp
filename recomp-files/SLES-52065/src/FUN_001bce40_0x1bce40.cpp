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

// Function: FUN_001bce40
// Address: 0x1bce40 - 0x1bd17c
void FUN_001bce40_0x1bce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bce40_0x1bce40");
#endif

    switch (ctx->pc) {
        case 0x1bce6cu: goto label_1bce6c;
        case 0x1bce7cu: goto label_1bce7c;
        case 0x1bce98u: goto label_1bce98;
        case 0x1bceb0u: goto label_1bceb0;
        case 0x1bced4u: goto label_1bced4;
        case 0x1bcf20u: goto label_1bcf20;
        case 0x1bcf40u: goto label_1bcf40;
        case 0x1bcf4cu: goto label_1bcf4c;
        case 0x1bcf80u: goto label_1bcf80;
        case 0x1bcfc0u: goto label_1bcfc0;
        case 0x1bcfccu: goto label_1bcfcc;
        case 0x1bcfdcu: goto label_1bcfdc;
        case 0x1bcfe4u: goto label_1bcfe4;
        case 0x1bd000u: goto label_1bd000;
        case 0x1bd014u: goto label_1bd014;
        case 0x1bd098u: goto label_1bd098;
        case 0x1bd0a0u: goto label_1bd0a0;
        case 0x1bd0b0u: goto label_1bd0b0;
        case 0x1bd108u: goto label_1bd108;
        case 0x1bd118u: goto label_1bd118;
        case 0x1bd138u: goto label_1bd138;
        case 0x1bd148u: goto label_1bd148;
        default: break;
    }

    ctx->pc = 0x1bce40u;

    // 0x1bce40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1bce44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bce48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bce4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bce50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bce54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bce54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bce5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bce60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bce60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bce64: 0xc04b220  jal         func_12C880
    ctx->pc = 0x1BCE64u;
    SET_GPR_U32(ctx, 31, 0x1BCE6Cu);
    ctx->pc = 0x1BCE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE64u;
    // 0x1bce68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x1BCE64u, 0x1BCE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE6Cu;
label_1bce6c:
    // 0x1bce6c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x1bce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1bce70: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x1bce70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bce74: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x1BCE74u;
    SET_GPR_U32(ctx, 31, 0x1BCE7Cu);
    ctx->pc = 0x1BCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE74u;
    // 0x1bce78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x1BCE74u, 0x1BCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE7Cu;
label_1bce7c:
    // 0x1bce7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bce7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce80: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BCE80u;
    {
        const bool branch_taken_0x1bce80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE80u;
        // 0x1bce84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce80) {
            ctx->pc = 0x1BCEA0u;
            goto label_1bcea0;
        }
    }
    ctx->pc = 0x1BCE88u;
    // 0x1bce88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bce88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bce8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce90: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BCE90u;
    SET_GPR_U32(ctx, 31, 0x1BCE98u);
    ctx->pc = 0x1BCE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE90u;
    // 0x1bce94: 0x24a511f0  addiu       $a1, $a1, 0x11F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BCE90u, 0x1BCE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE98u;
label_1bce98:
    // 0x1bce98: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1BCE98u;
    {
        const bool branch_taken_0x1bce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE98u;
        // 0x1bce9c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce98) {
            ctx->pc = 0x1BD158u;
            goto label_1bd158;
        }
    }
    ctx->pc = 0x1BCEA0u;
label_1bcea0:
    // 0x1bcea0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bcea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcea4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bcea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bcea8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1BCEA8u;
    SET_GPR_U32(ctx, 31, 0x1BCEB0u);
    ctx->pc = 0x1BCEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEA8u;
    // 0x1bceac: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1BCEA8u, 0x1BCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEB0u;
label_1bceb0:
    // 0x1bceb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCEB0u;
    {
        const bool branch_taken_0x1bceb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEB0u;
        // 0x1bceb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bceb0) {
            ctx->pc = 0x1BCEC4u;
            goto label_1bcec4;
        }
    }
    ctx->pc = 0x1BCEB8u;
    // 0x1bceb8: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x1bceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bcebc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcec0: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcec0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
label_1bcec4:
    // 0x1bcec4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bcec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcec8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bcecc: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1BCECCu;
    SET_GPR_U32(ctx, 31, 0x1BCED4u);
    ctx->pc = 0x1BCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCECCu;
    // 0x1bced0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1BCECCu, 0x1BCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCED4u;
label_1bced4:
    // 0x1bced4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCED4u;
    {
        const bool branch_taken_0x1bced4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bced4) {
            ctx->pc = 0x1BCEE8u;
            goto label_1bcee8;
        }
    }
    ctx->pc = 0x1BCEDCu;
    // 0x1bcedc: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bcee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcee4: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
label_1bcee8:
    // 0x1bcee8: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bceec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCEECu;
    {
        const bool branch_taken_0x1bceec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bceec) {
            ctx->pc = 0x1BCF00u;
            goto label_1bcf00;
        }
    }
    ctx->pc = 0x1BCEF4u;
    // 0x1bcef4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bcef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcefc: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
label_1bcf00:
    // 0x1bcf00: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1bcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bcf04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bcf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bcf08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1bcf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bcf0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCF0Cu;
    {
        const bool branch_taken_0x1bcf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF0Cu;
        // 0x1bcf10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf0c) {
            ctx->pc = 0x1BCF18u;
            goto label_1bcf18;
        }
    }
    ctx->pc = 0x1BCF14u;
    // 0x1bcf14: 0xaea0007c  sw          $zero, 0x7C($s5)
    ctx->pc = 0x1bcf14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 0));
label_1bcf18:
    // 0x1bcf18: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCF18u;
    SET_GPR_U32(ctx, 31, 0x1BCF20u);
    ctx->pc = 0x1BCF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF18u;
    // 0x1bcf1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCF18u, 0x1BCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF20u;
label_1bcf20:
    // 0x1bcf20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCF20u;
    {
        const bool branch_taken_0x1bcf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF20u;
        // 0x1bcf24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf20) {
            ctx->pc = 0x1BCF44u;
            goto label_1bcf44;
        }
    }
    ctx->pc = 0x1BCF28u;
    // 0x1bcf28: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1bcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcf2c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bcf2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bcf30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCF30u;
    {
        const bool branch_taken_0x1bcf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF30u;
        // 0x1bcf34: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf30) {
            ctx->pc = 0x1BCF40u;
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCF38u;
    // 0x1bcf38: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCF38u;
    SET_GPR_U32(ctx, 31, 0x1BCF40u);
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCF38u, 0x1BCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF40u;
label_1bcf40:
    // 0x1bcf40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bcf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf44:
    // 0x1bcf44: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCF44u;
    SET_GPR_U32(ctx, 31, 0x1BCF4Cu);
    ctx->pc = 0x1BCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF44u;
    // 0x1bcf48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCF44u, 0x1BCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF4Cu;
label_1bcf4c:
    // 0x1bcf4c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BCF4Cu;
    {
        const bool branch_taken_0x1bcf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF4Cu;
        // 0x1bcf50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf4c) {
            ctx->pc = 0x1BCFC4u;
            goto label_1bcfc4;
        }
    }
    ctx->pc = 0x1BCF54u;
    // 0x1bcf54: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1bcf58: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcf5c: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x1bcf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcf60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bcf64: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x1bcf64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bcf68: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x1bcf68u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x1bcf6c: 0x0  nop
    ctx->pc = 0x1bcf6cu;
    // NOP
    // 0x1bcf70: 0x0  nop
    ctx->pc = 0x1bcf70u;
    // NOP
    // 0x1bcf74: 0x2812  mflo        $a1
    ctx->pc = 0x1bcf74u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bcf78: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1BCF78u;
    SET_GPR_U32(ctx, 31, 0x1BCF80u);
    ctx->pc = 0x1BCF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF78u;
    // 0x1bcf7c: 0x26a40064  addiu       $a0, $s5, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1BCF78u, 0x1BCF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF80u;
label_1bcf80:
    // 0x1bcf80: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcf84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bcf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcf88: 0x244001b  divu        $zero, $s2, $a0
    ctx->pc = 0x1bcf88u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x1bcf8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcf90: 0x0  nop
    ctx->pc = 0x1bcf90u;
    // NOP
    // 0x1bcf94: 0x2010  mfhi        $a0
    ctx->pc = 0x1bcf94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bcf98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bcf98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bcf9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcfa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcfa4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCFA4u;
    {
        const bool branch_taken_0x1bcfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcfa4) {
            ctx->pc = 0x1BCFC0u;
            goto label_1bcfc0;
        }
    }
    ctx->pc = 0x1BCFACu;
    // 0x1bcfac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1bcfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bcfb0: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x1bcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1bcfb4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1bcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1bcfb8: 0xc06f55c  jal         func_1BD570
    ctx->pc = 0x1BCFB8u;
    SET_GPR_U32(ctx, 31, 0x1BCFC0u);
    ctx->pc = 0x1BCFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFB8u;
    // 0x1bcfbc: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD570u, 0x1BCFB8u, 0x1BCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFC0u;
label_1bcfc0:
    // 0x1bcfc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bcfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bcfc4:
    // 0x1bcfc4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCFC4u;
    SET_GPR_U32(ctx, 31, 0x1BCFCCu);
    ctx->pc = 0x1BCFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFC4u;
    // 0x1bcfc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCFC4u, 0x1BCFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFCCu;
label_1bcfcc:
    // 0x1bcfcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BCFCCu;
    {
        const bool branch_taken_0x1bcfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfcc) {
            ctx->pc = 0x1BD000u;
            goto label_1bd000;
        }
    }
    ctx->pc = 0x1BCFD4u;
    // 0x1bcfd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCFD4u;
    {
        const bool branch_taken_0x1bcfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfd4) {
            ctx->pc = 0x1BCFE4u;
            goto label_1bcfe4;
        }
    }
    ctx->pc = 0x1BCFDCu;
label_1bcfdc:
    // 0x1bcfdc: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCFDCu;
    SET_GPR_U32(ctx, 31, 0x1BCFE4u);
    ctx->pc = 0x1BCFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFDCu;
    // 0x1bcfe0: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCFDCu, 0x1BCFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFE4u;
label_1bcfe4:
    // 0x1bcfe4: 0x0  nop
    ctx->pc = 0x1bcfe4u;
    // NOP
    // 0x1bcfe8: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcff0: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BCFF0u;
    {
        const bool branch_taken_0x1bcff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcff0) {
            ctx->pc = 0x1BCFDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcfdc;
        }
    }
    ctx->pc = 0x1BCFF8u;
    // 0x1bcff8: 0xc06f490  jal         func_1BD240
    ctx->pc = 0x1BCFF8u;
    SET_GPR_U32(ctx, 31, 0x1BD000u);
    ctx->pc = 0x1BCFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFF8u;
    // 0x1bcffc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD240u, 0x1BCFF8u, 0x1BD000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD000u;
label_1bd000:
    // 0x1bd000: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd004: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd00c: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BD00Cu;
    SET_GPR_U32(ctx, 31, 0x1BD014u);
    ctx->pc = 0x1BD010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD00Cu;
    // 0x1bd010: 0x24a51208  addiu       $a1, $a1, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BD00Cu, 0x1BD014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD014u;
label_1bd014:
    // 0x1bd014: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bd014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bd018: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x1bd018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1bd01c: 0x24423068  addiu       $v0, $v0, 0x3068
    ctx->pc = 0x1bd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12392));
    // 0x1bd020: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1bd024: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1bd024u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x213068u));
    // 0x1bd028: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bd028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bd02c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x1bd02cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bd030: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x1bd030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x1bd034: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x213070u));
    // 0x1bd038: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1bd038u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bd03c: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1bd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bd040: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD040u;
    {
        const bool branch_taken_0x1bd040 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD040u;
        // 0x1bd044: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd040) {
            ctx->pc = 0x1BD050u;
            goto label_1bd050;
        }
    }
    ctx->pc = 0x1BD048u;
    // 0x1bd048: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1bd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1bd04c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bd04cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1bd050:
    // 0x1bd050: 0x24560001  addiu       $s6, $v0, 0x1
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd054: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bd054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bd058: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bd058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bd05c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD05Cu;
    {
        const bool branch_taken_0x1bd05c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD05Cu;
        // 0x1bd060: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd05c) {
            ctx->pc = 0x1BD06Cu;
            goto label_1bd06c;
        }
    }
    ctx->pc = 0x1BD064u;
    // 0x1bd064: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bd064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bd068: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1bd06c:
    // 0x1bd06c: 0x3393c  dsll32      $a3, $v1, 4
    ctx->pc = 0x1bd06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1bd070: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bd070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bd074: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD074u;
    {
        const bool branch_taken_0x1bd074 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD074u;
        // 0x1bd078: 0x7393f  dsra32      $a3, $a3, 4 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd074) {
            ctx->pc = 0x1BD084u;
            goto label_1bd084;
        }
    }
    ctx->pc = 0x1BD07Cu;
    // 0x1bd07c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bd080: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x1bd080u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
label_1bd084:
    // 0x1bd084: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd08c: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x1bd08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x1bd090: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BD090u;
    SET_GPR_U32(ctx, 31, 0x1BD098u);
    ctx->pc = 0x1BD094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD090u;
    // 0x1bd094: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BD090u, 0x1BD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD098u;
label_1bd098:
    // 0x1bd098: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1BD098u;
    SET_GPR_U32(ctx, 31, 0x1BD0A0u);
    ctx->pc = 0x1BD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD098u;
    // 0x1bd09c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1BD098u, 0x1BD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0A0u;
label_1bd0a0:
    // 0x1bd0a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd0a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bd0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1BD0A8u;
    {
        const bool branch_taken_0x1bd0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0A8u;
        // 0x1bd0ac: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0a8) {
            ctx->pc = 0x1BD13Cu;
            goto label_1bd13c;
        }
    }
    ctx->pc = 0x1BD0B0u;
label_1bd0b0:
    // 0x1bd0b0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD0B0u;
    {
        const bool branch_taken_0x1bd0b0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1BD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0B0u;
        // 0x1bd0b4: 0x121103  sra         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0b0) {
            ctx->pc = 0x1BD0C0u;
            goto label_1bd0c0;
        }
    }
    ctx->pc = 0x1BD0B8u;
    // 0x1bd0b8: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x1bd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x1bd0bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bd0bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1bd0c0:
    // 0x1bd0c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd0c4: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BD0C4u;
    {
        const bool branch_taken_0x1bd0c4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd0c4) {
            ctx->pc = 0x1BD130u;
            goto label_1bd130;
        }
    }
    ctx->pc = 0x1BD0CCu;
    // 0x1bd0cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd0d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0d8: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x1bd0dc: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1bd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bd0e0: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x1bd0e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd0e4: 0x2439826  xor         $s3, $s2, $v1
    ctx->pc = 0x1bd0e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 3));
    // 0x1bd0e8: 0x2e730001  sltiu       $s3, $s3, 0x1
    ctx->pc = 0x1bd0e8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bd0ec: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1bd0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1bd0f0: 0x90460084  lbu         $a2, 0x84($v0)
    ctx->pc = 0x1bd0f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bd0f4: 0x92820050  lbu         $v0, 0x50($s4)
    ctx->pc = 0x1bd0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1bd0f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bd0fc: 0x90470088  lbu         $a3, 0x88($v0)
    ctx->pc = 0x1bd0fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd100: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BD100u;
    SET_GPR_U32(ctx, 31, 0x1BD108u);
    ctx->pc = 0x1BD104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD100u;
    // 0x1bd104: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BD100u, 0x1BD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD108u;
label_1bd108:
    // 0x1bd108: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD108u;
    {
        const bool branch_taken_0x1bd108 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD108u;
        // 0x1bd10c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd108) {
            ctx->pc = 0x1BD130u;
            goto label_1bd130;
        }
    }
    ctx->pc = 0x1BD110u;
    // 0x1bd110: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BD110u;
    SET_GPR_U32(ctx, 31, 0x1BD118u);
    ctx->pc = 0x1BD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD110u;
    // 0x1bd114: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BD110u, 0x1BD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD118u;
label_1bd118:
    // 0x1bd118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD118u;
    {
        const bool branch_taken_0x1bd118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd118) {
            ctx->pc = 0x1BD130u;
            goto label_1bd130;
        }
    }
    ctx->pc = 0x1BD120u;
    // 0x1bd120: 0x92820050  lbu         $v0, 0x50($s4)
    ctx->pc = 0x1bd120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1bd124: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bd124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd128: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bd128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bd12c: 0xa2820050  sb          $v0, 0x50($s4)
    ctx->pc = 0x1bd12cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 2));
label_1bd130:
    // 0x1bd130: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BD130u;
    SET_GPR_U32(ctx, 31, 0x1BD138u);
    ctx->pc = 0x1BD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD130u;
    // 0x1bd134: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BD130u, 0x1BD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD138u;
label_1bd138:
    // 0x1bd138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bd138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bd13c:
    // 0x1bd13c: 0x0  nop
    ctx->pc = 0x1bd13cu;
    // NOP
    // 0x1bd140: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1BD140u;
    SET_GPR_U32(ctx, 31, 0x1BD148u);
    ctx->pc = 0x1BD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD140u;
    // 0x1bd144: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1BD140u, 0x1BD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD148u;
label_1bd148:
    // 0x1bd148: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bd148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd14c: 0x1462ffd8  bne         $v1, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1BD14Cu;
    {
        const bool branch_taken_0x1bd14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd14c) {
            ctx->pc = 0x1BD0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd0b0;
        }
    }
    ctx->pc = 0x1BD154u;
    // 0x1bd154: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bd154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bd158:
    // 0x1bd158: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bd158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd15c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bd15cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd160: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bd160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bd164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd174: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD174u;
        // 0x1bd178: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD17Cu;
}
