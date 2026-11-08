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

// Function: FUN_001afb30
// Address: 0x1afb30 - 0x1aff08
void FUN_001afb30_0x1afb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001afb30_0x1afb30");
#endif

    switch (ctx->pc) {
        case 0x1afb80u: goto label_1afb80;
        case 0x1afb88u: goto label_1afb88;
        case 0x1afc20u: goto label_1afc20;
        case 0x1afc88u: goto label_1afc88;
        case 0x1afd3cu: goto label_1afd3c;
        case 0x1afd58u: goto label_1afd58;
        case 0x1afe0cu: goto label_1afe0c;
        case 0x1afe70u: goto label_1afe70;
        case 0x1afeb0u: goto label_1afeb0;
        default: break;
    }

    ctx->pc = 0x1afb30u;

    // 0x1afb30: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1afb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1afb34: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1afb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1afb38: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1afb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1afb3c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1afb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1afb40: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1afb40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb44: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1afb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1afb48: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1afb48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb4c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1afb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1afb50: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x1afb50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb54: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1afb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1afb58: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1afb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1afb5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1afb5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1afb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1afb64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1afb64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1afb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1afb6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1afb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1afb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1afb74: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1afb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb78: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1AFB78u;
    SET_GPR_U32(ctx, 31, 0x1AFB80u);
    ctx->pc = 0x1AFB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB78u;
    // 0x1afb7c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1AFB78u, 0x1AFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB80u;
label_1afb80:
    // 0x1afb80: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1AFB80u;
    {
        const bool branch_taken_0x1afb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB80u;
        // 0x1afb84: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb80) {
            ctx->pc = 0x1AFEC0u;
            goto label_1afec0;
        }
    }
    ctx->pc = 0x1AFB88u;
label_1afb88:
    // 0x1afb88: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1afb88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1afb8c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1afb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1afb90: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1afb94: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1afb98: 0x28e20030  slti        $v0, $a3, 0x30
    ctx->pc = 0x1afb98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1afb9c: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1AFB9Cu;
    {
        const bool branch_taken_0x1afb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB9Cu;
        // 0x1afba0: 0x28e1003a  slti        $at, $a3, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb9c) {
            ctx->pc = 0x1AFD44u;
            goto label_1afd44;
        }
    }
    ctx->pc = 0x1AFBA4u;
    // 0x1afba4: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x1AFBA4u;
    {
        const bool branch_taken_0x1afba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afba4) {
            ctx->pc = 0x1AFD44u;
            goto label_1afd44;
        }
    }
    ctx->pc = 0x1AFBACu;
    // 0x1afbac: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1afbb0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1afbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1afbb4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afbb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afbbc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AFBBCu;
    {
        const bool branch_taken_0x1afbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBBCu;
        // 0x1afbc0: 0x8c55ff4c  lw          $s5, -0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbbc) {
            ctx->pc = 0x1AFC10u;
            goto label_1afc10;
        }
    }
    ctx->pc = 0x1AFBC4u;
    // 0x1afbc4: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1afbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1afbc8: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afbc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afbcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afbd0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afbd4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afbd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFBD8u;
    {
        const bool branch_taken_0x1afbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBD8u;
        // 0x1afbdc: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbd8) {
            ctx->pc = 0x1AFBECu;
            goto label_1afbec;
        }
    }
    ctx->pc = 0x1AFBE0u;
    // 0x1afbe0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afbe4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afbe8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afbe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afbec:
    // 0x1afbec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFBECu;
    {
        const bool branch_taken_0x1afbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afbec) {
            ctx->pc = 0x1AFC00u;
            goto label_1afc00;
        }
    }
    ctx->pc = 0x1AFBF4u;
    // 0x1afbf4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1afbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afbf8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1afbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1afbfc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afc00:
    // 0x1afc00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC00u;
    {
        const bool branch_taken_0x1afc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc00) {
            ctx->pc = 0x1AFC10u;
            goto label_1afc10;
        }
    }
    ctx->pc = 0x1AFC08u;
    // 0x1afc08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC08u;
    {
        const bool branch_taken_0x1afc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc08) {
            ctx->pc = 0x1AFC14u;
            goto label_1afc14;
        }
    }
    ctx->pc = 0x1AFC10u;
label_1afc10:
    // 0x1afc10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afc14:
    // 0x1afc14: 0x0  nop
    ctx->pc = 0x1afc14u;
    // NOP
    // 0x1afc18: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1AFC18u;
    SET_GPR_U32(ctx, 31, 0x1AFC20u);
    ctx->pc = 0x1AFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC18u;
    // 0x1afc1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1AFC18u, 0x1AFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC20u;
label_1afc20:
    // 0x1afc20: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afc24: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFC24u;
    {
        const bool branch_taken_0x1afc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC24u;
        // 0x1afc28: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc24) {
            ctx->pc = 0x1AFC74u;
            goto label_1afc74;
        }
    }
    ctx->pc = 0x1AFC2Cu;
    // 0x1afc2c: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afc30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afc34: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afc38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afc3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFC3Cu;
    {
        const bool branch_taken_0x1afc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC3Cu;
        // 0x1afc40: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc3c) {
            ctx->pc = 0x1AFC50u;
            goto label_1afc50;
        }
    }
    ctx->pc = 0x1AFC44u;
    // 0x1afc44: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afc48: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afc4c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afc50:
    // 0x1afc50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFC50u;
    {
        const bool branch_taken_0x1afc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc50) {
            ctx->pc = 0x1AFC64u;
            goto label_1afc64;
        }
    }
    ctx->pc = 0x1AFC58u;
    // 0x1afc58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1afc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afc5c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1afc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1afc60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afc64:
    // 0x1afc64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC64u;
    {
        const bool branch_taken_0x1afc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc64) {
            ctx->pc = 0x1AFC74u;
            goto label_1afc74;
        }
    }
    ctx->pc = 0x1AFC6Cu;
    // 0x1afc6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC6Cu;
    {
        const bool branch_taken_0x1afc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc6c) {
            ctx->pc = 0x1AFC7Cu;
            goto label_1afc7c;
        }
    }
    ctx->pc = 0x1AFC74u;
label_1afc74:
    // 0x1afc74: 0x0  nop
    ctx->pc = 0x1afc74u;
    // NOP
    // 0x1afc78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afc7c:
    // 0x1afc7c: 0x0  nop
    ctx->pc = 0x1afc7cu;
    // NOP
    // 0x1afc80: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1AFC80u;
    SET_GPR_U32(ctx, 31, 0x1AFC88u);
    ctx->pc = 0x1AFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC80u;
    // 0x1afc84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1AFC80u, 0x1AFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC88u;
label_1afc88:
    // 0x1afc88: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC88u;
    {
        const bool branch_taken_0x1afc88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC88u;
        // 0x1afc8c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc88) {
            ctx->pc = 0x1AFC98u;
            goto label_1afc98;
        }
    }
    ctx->pc = 0x1AFC90u;
    // 0x1afc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC90u;
    {
        const bool branch_taken_0x1afc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC90u;
        // 0x1afc94: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc90) {
            ctx->pc = 0x1AFC9Cu;
            goto label_1afc9c;
        }
    }
    ctx->pc = 0x1AFC98u;
label_1afc98:
    // 0x1afc98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1afc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afc9c:
    // 0x1afc9c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1afc9cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afca0: 0x0  nop
    ctx->pc = 0x1afca0u;
    // NOP
    // 0x1afca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1afca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1afca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1afca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1afcac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1afcacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1afcb0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1afcb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1afcb4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFCB4u;
    {
        const bool branch_taken_0x1afcb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCB4u;
        // 0x1afcb8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcb4) {
            ctx->pc = 0x1AFCC4u;
            goto label_1afcc4;
        }
    }
    ctx->pc = 0x1AFCBCu;
    // 0x1afcbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFCBCu;
    {
        const bool branch_taken_0x1afcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCBCu;
        // 0x1afcc0: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcbc) {
            ctx->pc = 0x1AFCC8u;
            goto label_1afcc8;
        }
    }
    ctx->pc = 0x1AFCC4u;
label_1afcc4:
    // 0x1afcc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1afcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afcc8:
    // 0x1afcc8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1afcc8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afccc: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x1afcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1afcd0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1afcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1afcd4: 0x1102023  subu        $a0, $t0, $s0
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1afcd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1afcd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1afcdc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1afce0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1afce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1afce4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1afce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1afce8: 0x34658080  ori         $a1, $v1, 0x8080
    ctx->pc = 0x1afce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1afcec: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1afcecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1afcf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1afcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1afcf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1afcf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1afcf8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1afcf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1afcfc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFCFCu;
    {
        const bool branch_taken_0x1afcfc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCFCu;
        // 0x1afd00: 0xffa50010  sd          $a1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcfc) {
            ctx->pc = 0x1AFD0Cu;
            goto label_1afd0c;
        }
    }
    ctx->pc = 0x1AFD04u;
    // 0x1afd04: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1afd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1afd08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1afd08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1afd0c:
    // 0x1afd0c: 0x2233023  subu        $a2, $s1, $v1
    ctx->pc = 0x1afd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1afd10: 0x1362023  subu        $a0, $t1, $s6
    ctx->pc = 0x1afd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 22)));
    // 0x1afd14: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFD14u;
    {
        const bool branch_taken_0x1afd14 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD14u;
        // 0x1afd18: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd14) {
            ctx->pc = 0x1AFD24u;
            goto label_1afd24;
        }
    }
    ctx->pc = 0x1AFD1Cu;
    // 0x1afd1c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1afd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1afd20: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1afd20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1afd24:
    // 0x1afd24: 0x3c33823  subu        $a3, $fp, $v1
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1afd28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1afd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd2c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1afd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd30: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1afd30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1afd34: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1AFD34u;
    SET_GPR_U32(ctx, 31, 0x1AFD3Cu);
    ctx->pc = 0x1AFD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD34u;
    // 0x1afd38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1AFD34u, 0x1AFD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD3Cu;
label_1afd3c:
    // 0x1afd3c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1AFD3Cu;
    {
        const bool branch_taken_0x1afd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd3c) {
            ctx->pc = 0x1AFEB0u;
            goto label_1afeb0;
        }
    }
    ctx->pc = 0x1AFD44u;
label_1afd44:
    // 0x1afd44: 0x0  nop
    ctx->pc = 0x1afd44u;
    // NOP
    // 0x1afd48: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x1afd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1afd4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1afd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1afd50: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1AFD50u;
    SET_GPR_U32(ctx, 31, 0x1AFD58u);
    ctx->pc = 0x1AFD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD50u;
    // 0x1afd54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1AFD50u, 0x1AFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD58u;
label_1afd58:
    // 0x1afd58: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1afd5c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1afd60: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1afd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afd64: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1afd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afd68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1afd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd6c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1afd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd70: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1afd70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1afd74: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1afd74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1afd78: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1afd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1afd7c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1afd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1afd80: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1afd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afd84: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1afd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afd88: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1afd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd8c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1afd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd90: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1afd90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1afd94: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1afd94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1afd98: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1afd98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1afd9c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1afd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1afda0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afda4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDF4u;
            goto label_1afdf4;
        }
    }
    ctx->pc = 0x1AFDACu;
    // 0x1afdac: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afdacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afdb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afdb4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afdb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afdbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFDBCu;
    {
        const bool branch_taken_0x1afdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDBCu;
        // 0x1afdc0: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdbc) {
            ctx->pc = 0x1AFDD0u;
            goto label_1afdd0;
        }
    }
    ctx->pc = 0x1AFDC4u;
    // 0x1afdc4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afdc8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afdcc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afdd0:
    // 0x1afdd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFDD0u;
    {
        const bool branch_taken_0x1afdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afdd0) {
            ctx->pc = 0x1AFDE4u;
            goto label_1afde4;
        }
    }
    ctx->pc = 0x1AFDD8u;
    // 0x1afdd8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afddc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1afddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1afde0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afde4:
    // 0x1afde4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFDE4u;
    {
        const bool branch_taken_0x1afde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afde4) {
            ctx->pc = 0x1AFDF4u;
            goto label_1afdf4;
        }
    }
    ctx->pc = 0x1AFDECu;
    // 0x1afdec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFDECu;
    {
        const bool branch_taken_0x1afdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afdec) {
            ctx->pc = 0x1AFDFCu;
            goto label_1afdfc;
        }
    }
    ctx->pc = 0x1AFDF4u;
label_1afdf4:
    // 0x1afdf4: 0x0  nop
    ctx->pc = 0x1afdf4u;
    // NOP
    // 0x1afdf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afdfc:
    // 0x1afdfc: 0x0  nop
    ctx->pc = 0x1afdfcu;
    // NOP
    // 0x1afe00: 0x8fb500d8  lw          $s5, 0xD8($sp)
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1afe04: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1AFE04u;
    SET_GPR_U32(ctx, 31, 0x1AFE0Cu);
    ctx->pc = 0x1AFE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE04u;
    // 0x1afe08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1AFE04u, 0x1AFE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE0Cu;
label_1afe0c:
    // 0x1afe0c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afe10: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFE10u;
    {
        const bool branch_taken_0x1afe10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE10u;
        // 0x1afe14: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe10) {
            ctx->pc = 0x1AFE60u;
            goto label_1afe60;
        }
    }
    ctx->pc = 0x1AFE18u;
    // 0x1afe18: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afe1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afe20: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afe24: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afe24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afe28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFE28u;
    {
        const bool branch_taken_0x1afe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE28u;
        // 0x1afe2c: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe28) {
            ctx->pc = 0x1AFE3Cu;
            goto label_1afe3c;
        }
    }
    ctx->pc = 0x1AFE30u;
    // 0x1afe30: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afe34: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afe38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afe38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afe3c:
    // 0x1afe3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFE3Cu;
    {
        const bool branch_taken_0x1afe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe3c) {
            ctx->pc = 0x1AFE50u;
            goto label_1afe50;
        }
    }
    ctx->pc = 0x1AFE44u;
    // 0x1afe44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1afe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afe48: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1afe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1afe4c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afe4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1afe50:
    // 0x1afe50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFE50u;
    {
        const bool branch_taken_0x1afe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe50) {
            ctx->pc = 0x1AFE60u;
            goto label_1afe60;
        }
    }
    ctx->pc = 0x1AFE58u;
    // 0x1afe58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFE58u;
    {
        const bool branch_taken_0x1afe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe58) {
            ctx->pc = 0x1AFE64u;
            goto label_1afe64;
        }
    }
    ctx->pc = 0x1AFE60u;
label_1afe60:
    // 0x1afe60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1afe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afe64:
    // 0x1afe64: 0x0  nop
    ctx->pc = 0x1afe64u;
    // NOP
    // 0x1afe68: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1AFE68u;
    SET_GPR_U32(ctx, 31, 0x1AFE70u);
    ctx->pc = 0x1AFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE68u;
    // 0x1afe6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1AFE68u, 0x1AFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE70u;
label_1afe70:
    // 0x1afe70: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x1afe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1afe74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1afe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe78: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1afe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1afe7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1afe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe80: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1afe84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1afe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe88: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1afe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1afe8c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1afe8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe90: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1afe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1afe94: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1afe94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe98: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1afe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1afe9c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1afe9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afea0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1afea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1afea4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1afea8: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1AFEA8u;
    SET_GPR_U32(ctx, 31, 0x1AFEB0u);
    ctx->pc = 0x1AFEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEA8u;
    // 0x1afeac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1AFEA8u, 0x1AFEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEB0u;
label_1afeb0:
    // 0x1afeb0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1afeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1afeb4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFEB4u;
    {
        const bool branch_taken_0x1afeb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEB4u;
        // 0x1afeb8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afeb4) {
            ctx->pc = 0x1AFEC0u;
            goto label_1afec0;
        }
    }
    ctx->pc = 0x1AFEBCu;
    // 0x1afebc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1afebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1afec0:
    // 0x1afec0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x1afec0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1afec4: 0x1480ff30  bnez        $a0, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x1AFEC4u;
    {
        const bool branch_taken_0x1afec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afec4) {
            ctx->pc = 0x1AFB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afb88;
        }
    }
    ctx->pc = 0x1AFECCu;
    // 0x1afecc: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1afeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1afed0: 0x1460ff2d  bnez        $v1, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x1AFED0u;
    {
        const bool branch_taken_0x1afed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afed0) {
            ctx->pc = 0x1AFB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afb88;
        }
    }
    ctx->pc = 0x1AFED8u;
    // 0x1afed8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1afed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1afedc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1afedcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1afee0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1afee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1afee4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1afee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1afee8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1afee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afeec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1afeecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afef0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1afef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afef4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1afef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afef8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1afef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afefc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1afefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aff00: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF00u;
        // 0x1aff04: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFF08u;
}
