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

// Function: FUN_0014d960
// Address: 0x14d960 - 0x14dd6c
void FUN_0014d960_0x14d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d960_0x14d960");
#endif

    switch (ctx->pc) {
        case 0x14d9dcu: goto label_14d9dc;
        case 0x14d9e4u: goto label_14d9e4;
        case 0x14da34u: goto label_14da34;
        case 0x14da74u: goto label_14da74;
        case 0x14dabcu: goto label_14dabc;
        case 0x14db28u: goto label_14db28;
        case 0x14db60u: goto label_14db60;
        case 0x14dbd4u: goto label_14dbd4;
        case 0x14dc10u: goto label_14dc10;
        case 0x14dc30u: goto label_14dc30;
        case 0x14dc38u: goto label_14dc38;
        case 0x14dc5cu: goto label_14dc5c;
        case 0x14dc98u: goto label_14dc98;
        case 0x14dcccu: goto label_14dccc;
        case 0x14dd14u: goto label_14dd14;
        case 0x14dd40u: goto label_14dd40;
        default: break;
    }

    ctx->pc = 0x14d960u;

    // 0x14d960: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14d964: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14d968: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14d96c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14d970: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14d974: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14d978: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14d978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d97c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d980: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14d980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d984: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d988: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14d988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d990: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14d990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d994: 0x126000ea  beqz        $s3, . + 4 + (0xEA << 2)
    ctx->pc = 0x14D994u;
    {
        const bool branch_taken_0x14d994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D994u;
        // 0x14d998: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d994) {
            ctx->pc = 0x14DD40u;
            goto label_14dd40;
        }
    }
    ctx->pc = 0x14D99Cu;
    // 0x14d99c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x14d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x14d9a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14d9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14d9a4: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x14d9a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d9a8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D9A8u;
    {
        const bool branch_taken_0x14d9a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d9a8) {
            ctx->pc = 0x14D9C4u;
            goto label_14d9c4;
        }
    }
    ctx->pc = 0x14D9B0u;
    // 0x14d9b0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d9b4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14d9b8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14d9b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14d9bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D9BCu;
    {
        const bool branch_taken_0x14d9bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9bc) {
            ctx->pc = 0x14D9E4u;
            goto label_14d9e4;
        }
    }
    ctx->pc = 0x14D9C4u;
label_14d9c4:
    // 0x14d9c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14d9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14d9c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14d9cc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14d9d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d9d4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14D9D4u;
    SET_GPR_U32(ctx, 31, 0x14D9DCu);
    ctx->pc = 0x14D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9D4u;
    // 0x14d9d8: 0x24a5f2a0  addiu       $a1, $a1, -0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14D9D4u, 0x14D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9DCu;
label_14d9dc:
    // 0x14d9dc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14D9DCu;
    SET_GPR_U32(ctx, 31, 0x14D9E4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14D9DCu, 0x14D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9E4u;
label_14d9e4:
    // 0x14d9e4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d9e8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d9ec: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x14d9f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14d9f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14d9f4: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x14D9F4u;
    {
        const bool branch_taken_0x14d9f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d9f4) {
            ctx->pc = 0x14DB94u;
            goto label_14db94;
        }
    }
    ctx->pc = 0x14D9FCu;
    // 0x14d9fc: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14da00: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x14da00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14da04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14da08: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x14da08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14da0c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA0Cu;
    {
        const bool branch_taken_0x14da0c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA0Cu;
        // 0x14da10: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da0c) {
            ctx->pc = 0x14DA1Cu;
            goto label_14da1c;
        }
    }
    ctx->pc = 0x14DA14u;
    // 0x14da14: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x14da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x14da18: 0x43103  sra         $a2, $a0, 4
    ctx->pc = 0x14da18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
label_14da1c:
    // 0x14da1c: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14da1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14da20: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14DA20u;
    {
        const bool branch_taken_0x14da20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA20u;
        // 0x14da24: 0x134900  sll         $t1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da20) {
            ctx->pc = 0x14DAACu;
            goto label_14daac;
        }
    }
    ctx->pc = 0x14DA28u;
    // 0x14da28: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14da28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14da2c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DA2Cu;
    {
        const bool branch_taken_0x14da2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA2Cu;
        // 0x14da30: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da2c) {
            ctx->pc = 0x14DA64u;
            goto label_14da64;
        }
    }
    ctx->pc = 0x14DA34u;
label_14da34:
    // 0x14da34: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA34u;
    {
        const bool branch_taken_0x14da34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da34) {
            ctx->pc = 0x14DA44u;
            goto label_14da44;
        }
    }
    ctx->pc = 0x14DA3Cu;
    // 0x14da3c: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x14da3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14da40: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x14da40u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_14da44:
    // 0x14da44: 0x0  nop
    ctx->pc = 0x14da44u;
    // NOP
    // 0x14da48: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14da4c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14da50: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14da54: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14da58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14da5c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DA5Cu;
    {
        const bool branch_taken_0x14da5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA5Cu;
        // 0x14da60: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da5c) {
            ctx->pc = 0x14DA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14da34;
        }
    }
    ctx->pc = 0x14DA64u;
label_14da64:
    // 0x14da64: 0x0  nop
    ctx->pc = 0x14da64u;
    // NOP
    // 0x14da68: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x14da68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14da6c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x14DA6Cu;
    {
        const bool branch_taken_0x14da6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA6Cu;
        // 0x14da70: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da6c) {
            ctx->pc = 0x14DB58u;
            goto label_14db58;
        }
    }
    ctx->pc = 0x14DA74u;
label_14da74:
    // 0x14da74: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA74u;
    {
        const bool branch_taken_0x14da74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da74) {
            ctx->pc = 0x14DA84u;
            goto label_14da84;
        }
    }
    ctx->pc = 0x14DA7Cu;
    // 0x14da7c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x14da7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14da80: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x14da80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_14da84:
    // 0x14da84: 0x0  nop
    ctx->pc = 0x14da84u;
    // NOP
    // 0x14da88: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14da88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14da8c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14da90: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14da90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14da94: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x14da94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14da98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14da9c: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DA9Cu;
    {
        const bool branch_taken_0x14da9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA9Cu;
        // 0x14daa0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da9c) {
            ctx->pc = 0x14DA74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14da74;
        }
    }
    ctx->pc = 0x14DAA4u;
    // 0x14daa4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14DAA4u;
    {
        const bool branch_taken_0x14daa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daa4) {
            ctx->pc = 0x14DB58u;
            goto label_14db58;
        }
    }
    ctx->pc = 0x14DAACu;
label_14daac:
    // 0x14daac: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x14daacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14dab0: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x14dab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14dab4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DAB4u;
    {
        const bool branch_taken_0x14dab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAB4u;
        // 0x14dab8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dab4) {
            ctx->pc = 0x14DAECu;
            goto label_14daec;
        }
    }
    ctx->pc = 0x14DABCu;
label_14dabc:
    // 0x14dabc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DABCu;
    {
        const bool branch_taken_0x14dabc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dabc) {
            ctx->pc = 0x14DACCu;
            goto label_14dacc;
        }
    }
    ctx->pc = 0x14DAC4u;
    // 0x14dac4: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x14dac4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14dac8: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x14dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
label_14dacc:
    // 0x14dacc: 0x0  nop
    ctx->pc = 0x14daccu;
    // NOP
    // 0x14dad0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dad4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14dad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14dad8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x14dad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x14dadc: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x14dadcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14dae0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14dae4: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DAE4u;
    {
        const bool branch_taken_0x14dae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAE4u;
        // 0x14dae8: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dae4) {
            ctx->pc = 0x14DABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dabc;
        }
    }
    ctx->pc = 0x14DAECu;
label_14daec:
    // 0x14daec: 0x0  nop
    ctx->pc = 0x14daecu;
    // NOP
    // 0x14daf0: 0xd32023  subu        $a0, $a2, $s3
    ctx->pc = 0x14daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x14daf4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x14daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14daf8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x14daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14dafc: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x14dafcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14db00: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DB00u;
    {
        const bool branch_taken_0x14db00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB00u;
        // 0x14db04: 0x2852021  addu        $a0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db00) {
            ctx->pc = 0x14DB1Cu;
            goto label_14db1c;
        }
    }
    ctx->pc = 0x14DB08u;
    // 0x14db08: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x14db08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14db0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14DB0Cu;
    {
        const bool branch_taken_0x14db0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db0c) {
            ctx->pc = 0x14DB18u;
            goto label_14db18;
        }
    }
    ctx->pc = 0x14DB14u;
    // 0x14db14: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x14db14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_14db18:
    // 0x14db18: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_14db1c:
    // 0x14db1c: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x14db1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14db20: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DB20u;
    {
        const bool branch_taken_0x14db20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db20) {
            ctx->pc = 0x14DB58u;
            goto label_14db58;
        }
    }
    ctx->pc = 0x14DB28u;
label_14db28:
    // 0x14db28: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x14db28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x14db2c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x14db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x14db30: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x14db30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14db34: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x14db34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14db38: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x14db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14db3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x14db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db40: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db44: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x14db44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14db48: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x14db48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14db4c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x14db4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14db50: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DB50u;
    {
        const bool branch_taken_0x14db50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB50u;
        // 0x14db54: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db50) {
            ctx->pc = 0x14DB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14db28;
        }
    }
    ctx->pc = 0x14DB58u;
label_14db58:
    // 0x14db58: 0x12600079  beqz        $s3, . + 4 + (0x79 << 2)
    ctx->pc = 0x14DB58u;
    {
        const bool branch_taken_0x14db58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db58) {
            ctx->pc = 0x14DD40u;
            goto label_14dd40;
        }
    }
    ctx->pc = 0x14DB60u;
label_14db60:
    // 0x14db60: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x14db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14db64: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14db64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14db68: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x14db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14db6c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x14db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db70: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x14db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db74: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x14db74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x14db78: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x14db78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x14db7c: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x14db7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x14db80: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x14db80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x14db84: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x14DB84u;
    {
        const bool branch_taken_0x14db84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB84u;
        // 0x14db88: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db84) {
            ctx->pc = 0x14DB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14db60;
        }
    }
    ctx->pc = 0x14DB8Cu;
    // 0x14db8c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB8Cu;
        // 0x14db90: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DD44u;
            goto label_14dd44;
        }
    }
    ctx->pc = 0x14DB94u;
label_14db94:
    // 0x14db94: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x14db94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x14db98: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x14db98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x14db9c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14dba0: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x14dba4: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x14dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x14dba8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dbac: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x14dbacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14dbb0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBB0u;
    {
        const bool branch_taken_0x14dbb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBB0u;
        // 0x14dbb4: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb0) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14DBB8u;
    // 0x14dbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBB8u;
    {
        const bool branch_taken_0x14dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBB8u;
        // 0x14dbbc: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb8) {
            ctx->pc = 0x14DBC8u;
            goto label_14dbc8;
        }
    }
    ctx->pc = 0x14DBC0u;
label_14dbc0:
    // 0x14dbc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14dbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dbc4: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14dbc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14dbc8:
    // 0x14dbc8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x14DBC8u;
    {
        const bool branch_taken_0x14dbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBC8u;
        // 0x14dbcc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbc8) {
            ctx->pc = 0x14DC04u;
            goto label_14dc04;
        }
    }
    ctx->pc = 0x14DBD0u;
    // 0x14dbd0: 0x3c0107ff  lui         $at, 0x7FF
    ctx->pc = 0x14dbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
label_14dbd4:
    // 0x14dbd4: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x14dbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x14dbd8: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x14dbd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14dbdc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBDCu;
    {
        const bool branch_taken_0x14dbdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbdc) {
            ctx->pc = 0x14DBECu;
            goto label_14dbec;
        }
    }
    ctx->pc = 0x14DBE4u;
    // 0x14dbe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBE4u;
    {
        const bool branch_taken_0x14dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBE4u;
        // 0x14dbe8: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbe4) {
            ctx->pc = 0x14DBF4u;
            goto label_14dbf4;
        }
    }
    ctx->pc = 0x14DBECu;
label_14dbec:
    // 0x14dbec: 0x0  nop
    ctx->pc = 0x14dbecu;
    // NOP
    // 0x14dbf0: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x14dbf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14dbf4:
    // 0x14dbf4: 0x0  nop
    ctx->pc = 0x14dbf4u;
    // NOP
    // 0x14dbf8: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14dbf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14dbfc: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DBFCu;
    {
        const bool branch_taken_0x14dbfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBFCu;
        // 0x14dc00: 0x3c0107ff  lui         $at, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbfc) {
            ctx->pc = 0x14DBD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dbd4;
        }
    }
    ctx->pc = 0x14DC04u;
label_14dc04:
    // 0x14dc04: 0x0  nop
    ctx->pc = 0x14dc04u;
    // NOP
    // 0x14dc08: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14DC08u;
    SET_GPR_U32(ctx, 31, 0x14DC10u);
    ctx->pc = 0x14DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC08u;
    // 0x14dc0c: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14DC08u, 0x14DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC10u;
label_14dc10:
    // 0x14dc10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14dc10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc14: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DC14u;
    {
        const bool branch_taken_0x14dc14 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC14u;
        // 0x14dc18: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc14) {
            ctx->pc = 0x14DC38u;
            goto label_14dc38;
        }
    }
    ctx->pc = 0x14DC1Cu;
    // 0x14dc1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14dc20: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14dc24: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14dc28: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14DC28u;
    SET_GPR_U32(ctx, 31, 0x14DC30u);
    ctx->pc = 0x14DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC28u;
    // 0x14dc2c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14DC28u, 0x14DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC30u;
label_14dc30:
    // 0x14dc30: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14DC30u;
    SET_GPR_U32(ctx, 31, 0x14DC38u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14DC30u, 0x14DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC38u;
label_14dc38:
    // 0x14dc38: 0xaef60000  sw          $s6, 0x0($s7)
    ctx->pc = 0x14dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
    // 0x14dc3c: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x14dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x14dc40: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x14dc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14dc44: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dc48: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x14dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14dc4c: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x14dc4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14dc50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14dc54: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DC54u;
    {
        const bool branch_taken_0x14dc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC54u;
        // 0x14dc58: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc54) {
            ctx->pc = 0x14DC8Cu;
            goto label_14dc8c;
        }
    }
    ctx->pc = 0x14DC5Cu;
label_14dc5c:
    // 0x14dc5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DC5Cu;
    {
        const bool branch_taken_0x14dc5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc5c) {
            ctx->pc = 0x14DC6Cu;
            goto label_14dc6c;
        }
    }
    ctx->pc = 0x14DC64u;
    // 0x14dc64: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x14dc64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14dc68: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_14dc6c:
    // 0x14dc6c: 0x0  nop
    ctx->pc = 0x14dc6cu;
    // NOP
    // 0x14dc70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dc74: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14dc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14dc78: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14dc7c: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x14dc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14dc80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14dc84: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DC84u;
    {
        const bool branch_taken_0x14dc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC84u;
        // 0x14dc88: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc84) {
            ctx->pc = 0x14DC5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dc5c;
        }
    }
    ctx->pc = 0x14DC8Cu;
label_14dc8c:
    // 0x14dc8c: 0x0  nop
    ctx->pc = 0x14dc8cu;
    // NOP
    // 0x14dc90: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x14DC90u;
    {
        const bool branch_taken_0x14dc90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc90) {
            ctx->pc = 0x14DCC0u;
            goto label_14dcc0;
        }
    }
    ctx->pc = 0x14DC98u;
label_14dc98:
    // 0x14dc98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DC98u;
    {
        const bool branch_taken_0x14dc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc98) {
            ctx->pc = 0x14DCA8u;
            goto label_14dca8;
        }
    }
    ctx->pc = 0x14DCA0u;
    // 0x14dca0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x14dca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14dca4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_14dca8:
    // 0x14dca8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dcac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14dcacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14dcb0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14dcb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14dcb8: 0x1660fff7  bnez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14DCB8u;
    {
        const bool branch_taken_0x14dcb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCB8u;
        // 0x14dcbc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcb8) {
            ctx->pc = 0x14DC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dc98;
        }
    }
    ctx->pc = 0x14DCC0u;
label_14dcc0:
    // 0x14dcc0: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x14dcc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14dcc4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DCC4u;
    {
        const bool branch_taken_0x14dcc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dcc4) {
            ctx->pc = 0x14DCFCu;
            goto label_14dcfc;
        }
    }
    ctx->pc = 0x14DCCCu;
label_14dccc:
    // 0x14dccc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DCCCu;
    {
        const bool branch_taken_0x14dccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dccc) {
            ctx->pc = 0x14DCDCu;
            goto label_14dcdc;
        }
    }
    ctx->pc = 0x14DCD4u;
    // 0x14dcd4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x14dcd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14dcd8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_14dcdc:
    // 0x14dcdc: 0x0  nop
    ctx->pc = 0x14dcdcu;
    // NOP
    // 0x14dce0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dce4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14dce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14dce8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14dcec: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x14dcecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14dcf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14dcf4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DCF4u;
    {
        const bool branch_taken_0x14dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCF4u;
        // 0x14dcf8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcf4) {
            ctx->pc = 0x14DCCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dccc;
        }
    }
    ctx->pc = 0x14DCFCu;
label_14dcfc:
    // 0x14dcfc: 0x0  nop
    ctx->pc = 0x14dcfcu;
    // NOP
    // 0x14dd00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14dd04: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x14DD04u;
    {
        const bool branch_taken_0x14dd04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x14DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD04u;
        // 0x14dd08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd04) {
            ctx->pc = 0x14DD34u;
            goto label_14dd34;
        }
    }
    ctx->pc = 0x14DD0Cu;
    // 0x14dd0c: 0xc05375c  jal         func_14DD70
    ctx->pc = 0x14DD0Cu;
    SET_GPR_U32(ctx, 31, 0x14DD14u);
    ctx->pc = 0x14DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD70u, 0x14DD0Cu, 0x14DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD14u;
label_14dd14:
    // 0x14dd14: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14dd18: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x14dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14dd1c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x14dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x14dd20: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x14dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x14dd24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dd28: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dd2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14dd30: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x14dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_14dd34:
    // 0x14dd34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14dd38: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14DD38u;
    SET_GPR_U32(ctx, 31, 0x14DD40u);
    ctx->pc = 0x14DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DD38u;
    // 0x14dd3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14DD38u, 0x14DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD40u;
label_14dd40:
    // 0x14dd40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14dd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_14dd44:
    // 0x14dd44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14dd44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14dd48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14dd48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14dd4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14dd4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14dd50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14dd50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dd54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14dd54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dd58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dd5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dd60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dd64: 0x3e00008  jr          $ra
    ctx->pc = 0x14DD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD64u;
        // 0x14dd68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DD6Cu;
}
