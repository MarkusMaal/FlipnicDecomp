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

// Function: FUN_0011bd40
// Address: 0x11bd40 - 0x11be44
void FUN_0011bd40_0x11bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011bd40_0x11bd40");
#endif

    switch (ctx->pc) {
        case 0x11bd40u: goto label_11bd40;
        case 0x11bd44u: goto label_11bd44;
        case 0x11bd48u: goto label_11bd48;
        case 0x11bd4cu: goto label_11bd4c;
        case 0x11bd50u: goto label_11bd50;
        case 0x11bd54u: goto label_11bd54;
        case 0x11bd58u: goto label_11bd58;
        case 0x11bd5cu: goto label_11bd5c;
        case 0x11bd60u: goto label_11bd60;
        case 0x11bd64u: goto label_11bd64;
        case 0x11bd68u: goto label_11bd68;
        case 0x11bd6cu: goto label_11bd6c;
        case 0x11bd70u: goto label_11bd70;
        case 0x11bd74u: goto label_11bd74;
        case 0x11bd78u: goto label_11bd78;
        case 0x11bd7cu: goto label_11bd7c;
        case 0x11bd80u: goto label_11bd80;
        case 0x11bd84u: goto label_11bd84;
        case 0x11bd88u: goto label_11bd88;
        case 0x11bd8cu: goto label_11bd8c;
        case 0x11bd90u: goto label_11bd90;
        case 0x11bd94u: goto label_11bd94;
        case 0x11bd98u: goto label_11bd98;
        case 0x11bd9cu: goto label_11bd9c;
        case 0x11bda0u: goto label_11bda0;
        case 0x11bda4u: goto label_11bda4;
        case 0x11bda8u: goto label_11bda8;
        case 0x11bdacu: goto label_11bdac;
        case 0x11bdb0u: goto label_11bdb0;
        case 0x11bdb4u: goto label_11bdb4;
        case 0x11bdb8u: goto label_11bdb8;
        case 0x11bdbcu: goto label_11bdbc;
        case 0x11bdc0u: goto label_11bdc0;
        case 0x11bdc4u: goto label_11bdc4;
        case 0x11bdc8u: goto label_11bdc8;
        case 0x11bdccu: goto label_11bdcc;
        case 0x11bdd0u: goto label_11bdd0;
        case 0x11bdd4u: goto label_11bdd4;
        case 0x11bdd8u: goto label_11bdd8;
        case 0x11bddcu: goto label_11bddc;
        case 0x11bde0u: goto label_11bde0;
        case 0x11bde4u: goto label_11bde4;
        case 0x11bde8u: goto label_11bde8;
        case 0x11bdecu: goto label_11bdec;
        case 0x11bdf0u: goto label_11bdf0;
        case 0x11bdf4u: goto label_11bdf4;
        case 0x11bdf8u: goto label_11bdf8;
        case 0x11bdfcu: goto label_11bdfc;
        case 0x11be00u: goto label_11be00;
        case 0x11be04u: goto label_11be04;
        case 0x11be08u: goto label_11be08;
        case 0x11be0cu: goto label_11be0c;
        case 0x11be10u: goto label_11be10;
        case 0x11be14u: goto label_11be14;
        case 0x11be18u: goto label_11be18;
        case 0x11be1cu: goto label_11be1c;
        case 0x11be20u: goto label_11be20;
        case 0x11be24u: goto label_11be24;
        case 0x11be28u: goto label_11be28;
        case 0x11be2cu: goto label_11be2c;
        case 0x11be30u: goto label_11be30;
        case 0x11be34u: goto label_11be34;
        case 0x11be38u: goto label_11be38;
        case 0x11be3cu: goto label_11be3c;
        case 0x11be40u: goto label_11be40;
        default: break;
    }

    ctx->pc = 0x11bd40u;

label_11bd40:
    // 0x11bd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11bd44:
    // 0x11bd44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_11bd48:
    // 0x11bd48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11bd4c:
    // 0x11bd4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11bd50:
    // 0x11bd50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11bd54:
    // 0x11bd54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11bd58:
    // 0x11bd58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bd5c:
    // 0x11bd5c: 0x8e3000fc  lw          $s0, 0xFC($s1)
    ctx->pc = 0x11bd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_11bd60:
    // 0x11bd60: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_11bd64:
    if (ctx->pc == 0x11BD64u) {
        ctx->pc = 0x11BD68u;
        goto label_11bd68;
    }
    ctx->pc = 0x11BD60u;
    {
        const bool branch_taken_0x11bd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd60) {
            ctx->pc = 0x11BE28u;
            goto label_11be28;
        }
    }
    ctx->pc = 0x11BD68u;
label_11bd68:
    // 0x11bd68: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x11bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_11bd6c:
    // 0x11bd6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_11bd70:
    if (ctx->pc == 0x11BD70u) {
        ctx->pc = 0x11BD74u;
        goto label_11bd74;
    }
    ctx->pc = 0x11BD6Cu;
    {
        const bool branch_taken_0x11bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd6c) {
            ctx->pc = 0x11BD7Cu;
            goto label_11bd7c;
        }
    }
    ctx->pc = 0x11BD74u;
label_11bd74:
    // 0x11bd74: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_11bd78:
    if (ctx->pc == 0x11BD78u) {
        ctx->pc = 0x11BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD74u;
        // 0x11bd78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BD7Cu;
        goto label_11bd7c;
    }
    ctx->pc = 0x11BD74u;
    {
        const bool branch_taken_0x11bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD74u;
        // 0x11bd78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd74) {
            ctx->pc = 0x11BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bd68;
        }
    }
    ctx->pc = 0x11BD7Cu;
label_11bd7c:
    // 0x11bd7c: 0x0  nop
    ctx->pc = 0x11bd7cu;
    // NOP
label_11bd80:
    // 0x11bd80: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x11bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_11bd84:
    // 0x11bd84: 0x8e220524  lw          $v0, 0x524($s1)
    ctx->pc = 0x11bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1316)));
label_11bd88:
    // 0x11bd88: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_11bd8c:
    // 0x11bd8c: 0x2484dae0  addiu       $a0, $a0, -0x2520
    ctx->pc = 0x11bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
label_11bd90:
    // 0x11bd90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bd94:
    // 0x11bd94: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x11bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_11bd98:
    // 0x11bd98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11bd9c:
    // 0x11bd9c: 0x8c53003c  lw          $s3, 0x3C($v0)
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_11bda0:
    // 0x11bda0: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x11bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_11bda4:
    // 0x11bda4: 0x539023  subu        $s2, $v0, $s3
    ctx->pc = 0x11bda4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_11bda8:
    // 0x11bda8: 0xc080702  jal         func_201C08
label_11bdac:
    if (ctx->pc == 0x11BDACu) {
        ctx->pc = 0x11BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDA8u;
        // 0x11bdac: 0xaf9183c4  sw          $s1, -0x7C3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935492), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BDB0u;
        goto label_11bdb0;
    }
    ctx->pc = 0x11BDA8u;
    SET_GPR_U32(ctx, 31, 0x11BDB0u);
    ctx->pc = 0x11BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDA8u;
    // 0x11bdac: 0xaf9183c4  sw          $s1, -0x7C3C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935492), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BDA8u, 0x11BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDB0u;
label_11bdb0:
    // 0x11bdb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11bdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11bdb4:
    // 0x11bdb4: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x11bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_11bdb8:
    // 0x11bdb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11bdb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bdbc:
    // 0x11bdbc: 0xc047948  jal         func_11E520
label_11bdc0:
    if (ctx->pc == 0x11BDC0u) {
        ctx->pc = 0x11BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDBCu;
        // 0x11bdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BDC4u;
        goto label_11bdc4;
    }
    ctx->pc = 0x11BDBCu;
    SET_GPR_U32(ctx, 31, 0x11BDC4u);
    ctx->pc = 0x11BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDBCu;
    // 0x11bdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E520u, 0x11BDBCu, 0x11BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDC4u;
label_11bdc4:
    // 0x11bdc4: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x11bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_11bdc8:
    // 0x11bdc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11bdc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bdcc:
    // 0x11bdcc: 0x0  nop
    ctx->pc = 0x11bdccu;
    // NOP
label_11bdd0:
    // 0x11bdd0: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_11bdd4:
    // 0x11bdd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_11bdd8:
    if (ctx->pc == 0x11BDD8u) {
        ctx->pc = 0x11BDDCu;
        goto label_11bddc;
    }
    ctx->pc = 0x11BDD4u;
    {
        const bool branch_taken_0x11bdd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bdd4) {
            ctx->pc = 0x11BDE8u;
            goto label_11bde8;
        }
    }
    ctx->pc = 0x11BDDCu;
label_11bddc:
    // 0x11bddc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x11bddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11bde0:
    // 0x11bde0: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_11bde4:
    if (ctx->pc == 0x11BDE4u) {
        ctx->pc = 0x11BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDE0u;
        // 0x11bde4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BDE8u;
        goto label_11bde8;
    }
    ctx->pc = 0x11BDE0u;
    {
        const bool branch_taken_0x11bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDE0u;
        // 0x11bde4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bde0) {
            ctx->pc = 0x11BDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bdcc;
        }
    }
    ctx->pc = 0x11BDE8u;
label_11bde8:
    // 0x11bde8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_11bdec:
    if (ctx->pc == 0x11BDECu) {
        ctx->pc = 0x11BDF0u;
        goto label_11bdf0;
    }
    ctx->pc = 0x11BDE8u;
    {
        const bool branch_taken_0x11bde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bde8) {
            ctx->pc = 0x11BDF8u;
            goto label_11bdf8;
        }
    }
    ctx->pc = 0x11BDF0u;
label_11bdf0:
    // 0x11bdf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_11bdf4:
    if (ctx->pc == 0x11BDF4u) {
        ctx->pc = 0x11BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDF0u;
        // 0x11bdf4: 0xae2400fc  sw          $a0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BDF8u;
        goto label_11bdf8;
    }
    ctx->pc = 0x11BDF0u;
    {
        const bool branch_taken_0x11bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDF0u;
        // 0x11bdf4: 0xae2400fc  sw          $a0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf0) {
            ctx->pc = 0x11BDFCu;
            goto label_11bdfc;
        }
    }
    ctx->pc = 0x11BDF8u;
label_11bdf8:
    // 0x11bdf8: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x11bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_11bdfc:
    // 0x11bdfc: 0x0  nop
    ctx->pc = 0x11bdfcu;
    // NOP
label_11be00:
    // 0x11be00: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x11be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_11be04:
    // 0x11be04: 0xaf8083c4  sw          $zero, -0x7C3C($gp)
    ctx->pc = 0x11be04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935492), GPR_U32(ctx, 0));
label_11be08:
    // 0x11be08: 0xa020dae0  sb          $zero, -0x2520($at)
    ctx->pc = 0x11be08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957792), (uint8_t)GPR_U32(ctx, 0));
label_11be0c:
    // 0x11be0c: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x11be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_11be10:
    // 0x11be10: 0x1060ffd2  beqz        $v1, . + 4 + (-0x2E << 2)
label_11be14:
    if (ctx->pc == 0x11BE14u) {
        ctx->pc = 0x11BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE10u;
        // 0x11be14: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE18u;
        goto label_11be18;
    }
    ctx->pc = 0x11BE10u;
    {
        const bool branch_taken_0x11be10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE10u;
        // 0x11be14: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be10) {
            ctx->pc = 0x11BD5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bd5c;
        }
    }
    ctx->pc = 0x11BE18u;
label_11be18:
    // 0x11be18: 0x60f809  jalr        $v1
label_11be1c:
    if (ctx->pc == 0x11BE1Cu) {
        ctx->pc = 0x11BE20u;
        goto label_11be20;
    }
    ctx->pc = 0x11BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BE20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE18u, 0x11BE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BE20u;
label_11be20:
    // 0x11be20: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_11be24:
    if (ctx->pc == 0x11BE24u) {
        ctx->pc = 0x11BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE20u;
        // 0x11be24: 0x8e3000fc  lw          $s0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE28u;
        goto label_11be28;
    }
    ctx->pc = 0x11BE20u;
    {
        const bool branch_taken_0x11be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE20u;
        // 0x11be24: 0x8e3000fc  lw          $s0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be20) {
            ctx->pc = 0x11BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bd60;
        }
    }
    ctx->pc = 0x11BE28u;
label_11be28:
    // 0x11be28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11be28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11be2c:
    // 0x11be2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11be2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11be30:
    // 0x11be30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11be30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11be34:
    // 0x11be34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11be34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11be38:
    // 0x11be38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11be38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11be3c:
    // 0x11be3c: 0x3e00008  jr          $ra
label_11be40:
    if (ctx->pc == 0x11BE40u) {
        ctx->pc = 0x11BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE3Cu;
        // 0x11be40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BE44u;
        goto label_fallthrough_0x11be3c;
    }
    ctx->pc = 0x11BE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE3Cu;
        // 0x11be40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11be3c:
    ctx->pc = 0x11BE44u;
}
