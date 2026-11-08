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

// Function: FUN_0011ea20
// Address: 0x11ea20 - 0x11ec90
void FUN_0011ea20_0x11ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ea20_0x11ea20");
#endif

    switch (ctx->pc) {
        case 0x11ea88u: goto label_11ea88;
        case 0x11eabcu: goto label_11eabc;
        case 0x11ead0u: goto label_11ead0;
        case 0x11eae0u: goto label_11eae0;
        case 0x11eaf4u: goto label_11eaf4;
        case 0x11eb04u: goto label_11eb04;
        case 0x11eb54u: goto label_11eb54;
        case 0x11eb88u: goto label_11eb88;
        case 0x11eba4u: goto label_11eba4;
        case 0x11ebb0u: goto label_11ebb0;
        case 0x11ebd4u: goto label_11ebd4;
        case 0x11ebf8u: goto label_11ebf8;
        case 0x11ec58u: goto label_11ec58;
        default: break;
    }

    ctx->pc = 0x11ea20u;

    // 0x11ea20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11ea24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11ea28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x11ea2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x11ea30: 0xbf103  sra         $fp, $t3, 4
    ctx->pc = 0x11ea30u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 11), 4));
    // 0x11ea34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11ea34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x11ea38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11ea3c: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x11ea3cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x11ea40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11ea40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11ea44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11ea44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11ea4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11ea4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11ea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11ea54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ea54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11ea5c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x11ea5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ea60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ea64: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x11ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x11ea68: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11ea68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea6c: 0xafa800a4  sw          $t0, 0xA4($sp)
    ctx->pc = 0x11ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 8));
    // 0x11ea70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ea70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea74: 0xafa900a8  sw          $t1, 0xA8($sp)
    ctx->pc = 0x11ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
    // 0x11ea78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ea78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11ea7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea80: 0xc047b24  jal         func_11EC90
    ctx->pc = 0x11EA80u;
    SET_GPR_U32(ctx, 31, 0x11EA88u);
    ctx->pc = 0x11EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA80u;
    // 0x11ea84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC90u, 0x11EA80u, 0x11EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA88u;
label_11ea88:
    // 0x11ea88: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x11ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x11ea8c: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x11ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x11ea90: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x11ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x11ea94: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x11ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x11ea98: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x11ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x11ea9c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11eaa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11eaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eaa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eaa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11eaa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eaac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11eaacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11eab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eab4: 0xc047b40  jal         func_11ED00
    ctx->pc = 0x11EAB4u;
    SET_GPR_U32(ctx, 31, 0x11EABCu);
    ctx->pc = 0x11EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAB4u;
    // 0x11eab8: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED00u, 0x11EAB4u, 0x11EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EABCu;
label_11eabc:
    // 0x11eabc: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x11eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11eac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11eac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eac4: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x11eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x11eac8: 0xc047b54  jal         func_11ED50
    ctx->pc = 0x11EAC8u;
    SET_GPR_U32(ctx, 31, 0x11EAD0u);
    ctx->pc = 0x11EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAC8u;
    // 0x11eacc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED50u, 0x11EAC8u, 0x11EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAD0u;
label_11ead0:
    // 0x11ead0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x11ead0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11ead4: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x11ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x11ead8: 0xc047b84  jal         func_11EE10
    ctx->pc = 0x11EAD8u;
    SET_GPR_U32(ctx, 31, 0x11EAE0u);
    ctx->pc = 0x11EADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAD8u;
    // 0x11eadc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE10u, 0x11EAD8u, 0x11EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAE0u;
label_11eae0:
    // 0x11eae0: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x11eae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x11eae4: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x11eae4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x11eae8: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x11EAE8u;
    {
        const bool branch_taken_0x11eae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAE8u;
        // 0x11eaec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eae8) {
            ctx->pc = 0x11EC38u;
            goto label_11ec38;
        }
    }
    ctx->pc = 0x11EAF0u;
    // 0x11eaf0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11eaf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eaf4:
    // 0x11eaf4: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x11eaf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x11eaf8: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x11EAF8u;
    {
        const bool branch_taken_0x11eaf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAF8u;
        // 0x11eafc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaf8) {
            ctx->pc = 0x11EC24u;
            goto label_11ec24;
        }
    }
    ctx->pc = 0x11EB00u;
    // 0x11eb00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11eb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb04:
    // 0x11eb04: 0x0  nop
    ctx->pc = 0x11eb04u;
    // NOP
    // 0x11eb08: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x11eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x11eb0c: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11EB0Cu;
    {
        const bool branch_taken_0x11eb0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB0Cu;
        // 0x11eb10: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb0c) {
            ctx->pc = 0x11EB34u;
            goto label_11eb34;
        }
    }
    ctx->pc = 0x11EB14u;
    // 0x11eb14: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x11eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11eb18: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EB18u;
    {
        const bool branch_taken_0x11eb18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB18u;
        // 0x11eb1c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb18) {
            ctx->pc = 0x11EB28u;
            goto label_11eb28;
        }
    }
    ctx->pc = 0x11EB20u;
    // 0x11eb20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EB20u;
    {
        const bool branch_taken_0x11eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eb20) {
            ctx->pc = 0x11EB30u;
            goto label_11eb30;
        }
    }
    ctx->pc = 0x11EB28u;
label_11eb28:
    // 0x11eb28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EB28u;
    {
        const bool branch_taken_0x11eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB28u;
        // 0x11eb2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb28) {
            ctx->pc = 0x11EB38u;
            goto label_11eb38;
        }
    }
    ctx->pc = 0x11EB30u;
label_11eb30:
    // 0x11eb30: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x11eb30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb34:
    // 0x11eb34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11eb38:
    // 0x11eb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11eb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11eb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11eb44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11eb48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb4c: 0xc047b24  jal         func_11EC90
    ctx->pc = 0x11EB4Cu;
    SET_GPR_U32(ctx, 31, 0x11EB54u);
    ctx->pc = 0x11EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB4Cu;
    // 0x11eb50: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC90u, 0x11EB4Cu, 0x11EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB54u;
label_11eb54:
    // 0x11eb54: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x11eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x11eb58: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x11eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x11eb5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x11eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x11eb60: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x11eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x11eb64: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x11eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x11eb68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11eb6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11eb74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11eb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11eb7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb80: 0xc047b40  jal         func_11ED00
    ctx->pc = 0x11EB80u;
    SET_GPR_U32(ctx, 31, 0x11EB88u);
    ctx->pc = 0x11EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB80u;
    // 0x11eb84: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED00u, 0x11EB80u, 0x11EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB88u;
label_11eb88:
    // 0x11eb88: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x11eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x11eb8c: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x11eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x11eb90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb94: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x11eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11eb98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x11eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x11eb9c: 0xc047b6c  jal         func_11EDB0
    ctx->pc = 0x11EB9Cu;
    SET_GPR_U32(ctx, 31, 0x11EBA4u);
    ctx->pc = 0x11EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB9Cu;
    // 0x11eba0: 0x533821  addu        $a3, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDB0u, 0x11EB9Cu, 0x11EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBA4u;
label_11eba4:
    // 0x11eba4: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x11eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x11eba8: 0xc047b98  jal         func_11EE60
    ctx->pc = 0x11EBA8u;
    SET_GPR_U32(ctx, 31, 0x11EBB0u);
    ctx->pc = 0x11EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBA8u;
    // 0x11ebac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE60u, 0x11EBA8u, 0x11EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBB0u;
label_11ebb0:
    // 0x11ebb0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x11ebb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebb4: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x11ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x11ebb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ebbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebc0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ebc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ebc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ebc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebcc: 0xc047b40  jal         func_11ED00
    ctx->pc = 0x11EBCCu;
    SET_GPR_U32(ctx, 31, 0x11EBD4u);
    ctx->pc = 0x11EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBCCu;
    // 0x11ebd0: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED00u, 0x11EBCCu, 0x11EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBD4u;
label_11ebd4:
    // 0x11ebd4: 0x14313c  dsll32      $a2, $s4, 4
    ctx->pc = 0x11ebd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 4));
    // 0x11ebd8: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x11ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x11ebdc: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x11ebdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x11ebe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ebe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ebe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebe8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x11ebe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ebec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ebecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebf0: 0xc047b24  jal         func_11EC90
    ctx->pc = 0x11EBF0u;
    SET_GPR_U32(ctx, 31, 0x11EBF8u);
    ctx->pc = 0x11EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBF0u;
    // 0x11ebf4: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC90u, 0x11EBF0u, 0x11EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBF8u;
label_11ebf8:
    // 0x11ebf8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x11ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x11ebfc: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x11ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
    // 0x11ec00: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x11ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x11ec04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ec04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ec08: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x11ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x11ec0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x11ec0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x11ec10: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x11ec10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11ec14: 0xaea3005c  sw          $v1, 0x5C($s5)
    ctx->pc = 0x11ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
    // 0x11ec18: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x11ec18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x11ec1c: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x11EC1Cu;
    {
        const bool branch_taken_0x11ec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC1Cu;
        // 0x11ec20: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec1c) {
            ctx->pc = 0x11EB04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eb04;
        }
    }
    ctx->pc = 0x11EC24u;
label_11ec24:
    // 0x11ec24: 0x0  nop
    ctx->pc = 0x11ec24u;
    // NOP
    // 0x11ec28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11ec28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11ec2c: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x11ec2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x11ec30: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x11EC30u;
    {
        const bool branch_taken_0x11ec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC30u;
        // 0x11ec34: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec30) {
            ctx->pc = 0x11EAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eaf4;
        }
    }
    ctx->pc = 0x11EC38u;
label_11ec38:
    // 0x11ec38: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x11ec38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x11ec3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ec40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ec44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ec48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ec4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec50: 0xc047b24  jal         func_11EC90
    ctx->pc = 0x11EC50u;
    SET_GPR_U32(ctx, 31, 0x11EC58u);
    ctx->pc = 0x11EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC50u;
    // 0x11ec54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC90u, 0x11EC50u, 0x11EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC58u;
label_11ec58:
    // 0x11ec58: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x11ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x11ec5c: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x11ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x11ec60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11ec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ec64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11ec64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ec68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11ec68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ec6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11ec6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ec70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11ec70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ec74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11ec74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ec78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11ec78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ec7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11ec7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ec80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ec84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec88: 0x3e00008  jr          $ra
    ctx->pc = 0x11EC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC88u;
        // 0x11ec8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EC90u;
}
