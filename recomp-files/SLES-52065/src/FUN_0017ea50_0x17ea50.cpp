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

// Function: FUN_0017ea50
// Address: 0x17ea50 - 0x17ebbc
void FUN_0017ea50_0x17ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ea50_0x17ea50");
#endif

    switch (ctx->pc) {
        case 0x17ea50u: goto label_17ea50;
        case 0x17ea54u: goto label_17ea54;
        case 0x17ea58u: goto label_17ea58;
        case 0x17ea5cu: goto label_17ea5c;
        case 0x17ea60u: goto label_17ea60;
        case 0x17ea64u: goto label_17ea64;
        case 0x17ea68u: goto label_17ea68;
        case 0x17ea6cu: goto label_17ea6c;
        case 0x17ea70u: goto label_17ea70;
        case 0x17ea74u: goto label_17ea74;
        case 0x17ea78u: goto label_17ea78;
        case 0x17ea7cu: goto label_17ea7c;
        case 0x17ea80u: goto label_17ea80;
        case 0x17ea84u: goto label_17ea84;
        case 0x17ea88u: goto label_17ea88;
        case 0x17ea8cu: goto label_17ea8c;
        case 0x17ea90u: goto label_17ea90;
        case 0x17ea94u: goto label_17ea94;
        case 0x17ea98u: goto label_17ea98;
        case 0x17ea9cu: goto label_17ea9c;
        case 0x17eaa0u: goto label_17eaa0;
        case 0x17eaa4u: goto label_17eaa4;
        case 0x17eaa8u: goto label_17eaa8;
        case 0x17eaacu: goto label_17eaac;
        case 0x17eab0u: goto label_17eab0;
        case 0x17eab4u: goto label_17eab4;
        case 0x17eab8u: goto label_17eab8;
        case 0x17eabcu: goto label_17eabc;
        case 0x17eac0u: goto label_17eac0;
        case 0x17eac4u: goto label_17eac4;
        case 0x17eac8u: goto label_17eac8;
        case 0x17eaccu: goto label_17eacc;
        case 0x17ead0u: goto label_17ead0;
        case 0x17ead4u: goto label_17ead4;
        case 0x17ead8u: goto label_17ead8;
        case 0x17eadcu: goto label_17eadc;
        case 0x17eae0u: goto label_17eae0;
        case 0x17eae4u: goto label_17eae4;
        case 0x17eae8u: goto label_17eae8;
        case 0x17eaecu: goto label_17eaec;
        case 0x17eaf0u: goto label_17eaf0;
        case 0x17eaf4u: goto label_17eaf4;
        case 0x17eaf8u: goto label_17eaf8;
        case 0x17eafcu: goto label_17eafc;
        case 0x17eb00u: goto label_17eb00;
        case 0x17eb04u: goto label_17eb04;
        case 0x17eb08u: goto label_17eb08;
        case 0x17eb0cu: goto label_17eb0c;
        case 0x17eb10u: goto label_17eb10;
        case 0x17eb14u: goto label_17eb14;
        case 0x17eb18u: goto label_17eb18;
        case 0x17eb1cu: goto label_17eb1c;
        case 0x17eb20u: goto label_17eb20;
        case 0x17eb24u: goto label_17eb24;
        case 0x17eb28u: goto label_17eb28;
        case 0x17eb2cu: goto label_17eb2c;
        case 0x17eb30u: goto label_17eb30;
        case 0x17eb34u: goto label_17eb34;
        case 0x17eb38u: goto label_17eb38;
        case 0x17eb3cu: goto label_17eb3c;
        case 0x17eb40u: goto label_17eb40;
        case 0x17eb44u: goto label_17eb44;
        case 0x17eb48u: goto label_17eb48;
        case 0x17eb4cu: goto label_17eb4c;
        case 0x17eb50u: goto label_17eb50;
        case 0x17eb54u: goto label_17eb54;
        case 0x17eb58u: goto label_17eb58;
        case 0x17eb5cu: goto label_17eb5c;
        case 0x17eb60u: goto label_17eb60;
        case 0x17eb64u: goto label_17eb64;
        case 0x17eb68u: goto label_17eb68;
        case 0x17eb6cu: goto label_17eb6c;
        case 0x17eb70u: goto label_17eb70;
        case 0x17eb74u: goto label_17eb74;
        case 0x17eb78u: goto label_17eb78;
        case 0x17eb7cu: goto label_17eb7c;
        case 0x17eb80u: goto label_17eb80;
        case 0x17eb84u: goto label_17eb84;
        case 0x17eb88u: goto label_17eb88;
        case 0x17eb8cu: goto label_17eb8c;
        case 0x17eb90u: goto label_17eb90;
        case 0x17eb94u: goto label_17eb94;
        case 0x17eb98u: goto label_17eb98;
        case 0x17eb9cu: goto label_17eb9c;
        case 0x17eba0u: goto label_17eba0;
        case 0x17eba4u: goto label_17eba4;
        case 0x17eba8u: goto label_17eba8;
        case 0x17ebacu: goto label_17ebac;
        case 0x17ebb0u: goto label_17ebb0;
        case 0x17ebb4u: goto label_17ebb4;
        case 0x17ebb8u: goto label_17ebb8;
        default: break;
    }

    ctx->pc = 0x17ea50u;

label_17ea50:
    // 0x17ea50: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17ea54:
    // 0x17ea54: 0x805fa98  j           func_17EA60
label_17ea58:
    if (ctx->pc == 0x17EA58u) {
        ctx->pc = 0x17EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA54u;
        // 0x17ea58: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EA5Cu;
        goto label_17ea5c;
    }
    ctx->pc = 0x17EA54u;
    ctx->pc = 0x17EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA54u;
    // 0x17ea58: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA60u;
    goto label_17ea60;
    ctx->pc = 0x17EA5Cu;
label_17ea5c:
    // 0x17ea5c: 0x0  nop
    ctx->pc = 0x17ea5cu;
    // NOP
label_17ea60:
    // 0x17ea60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17ea64:
    // 0x17ea64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17ea68:
    // 0x17ea68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17ea6c:
    // 0x17ea6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17ea70:
    // 0x17ea70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ea74:
    // 0x17ea74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ea74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17ea78:
    // 0x17ea78: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x17ea78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_17ea7c:
    // 0x17ea7c: 0xc05faf4  jal         func_17EBD0
label_17ea80:
    if (ctx->pc == 0x17EA80u) {
        ctx->pc = 0x17EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA7Cu;
        // 0x17ea80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EA84u;
        goto label_17ea84;
    }
    ctx->pc = 0x17EA7Cu;
    SET_GPR_U32(ctx, 31, 0x17EA84u);
    ctx->pc = 0x17EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA7Cu;
    // 0x17ea80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBD0u, 0x17EA7Cu, 0x17EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA84u;
label_17ea84:
    // 0x17ea84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17ea88:
    // 0x17ea88: 0xc05faf0  jal         func_17EBC0
label_17ea8c:
    if (ctx->pc == 0x17EA8Cu) {
        ctx->pc = 0x17EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA88u;
        // 0x17ea8c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EA90u;
        goto label_17ea90;
    }
    ctx->pc = 0x17EA88u;
    SET_GPR_U32(ctx, 31, 0x17EA90u);
    ctx->pc = 0x17EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA88u;
    // 0x17ea8c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBC0u, 0x17EA88u, 0x17EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA90u;
label_17ea90:
    // 0x17ea90: 0xafb1004c  sw          $s1, 0x4C($sp)
    ctx->pc = 0x17ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 17));
label_17ea94:
    // 0x17ea94: 0x10000026  b           . + 4 + (0x26 << 2)
label_17ea98:
    if (ctx->pc == 0x17EA98u) {
        ctx->pc = 0x17EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA94u;
        // 0x17ea98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EA9Cu;
        goto label_17ea9c;
    }
    ctx->pc = 0x17EA94u;
    {
        const bool branch_taken_0x17ea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA94u;
        // 0x17ea98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea94) {
            ctx->pc = 0x17EB30u;
            goto label_17eb30;
        }
    }
    ctx->pc = 0x17EA9Cu;
label_17ea9c:
    // 0x17ea9c: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x17ea9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_17eaa0:
    // 0x17eaa0: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_17eaa4:
    if (ctx->pc == 0x17EAA4u) {
        ctx->pc = 0x17EAA8u;
        goto label_17eaa8;
    }
    ctx->pc = 0x17EAA0u;
    {
        const bool branch_taken_0x17eaa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eaa0) {
            ctx->pc = 0x17EB28u;
            goto label_17eb28;
        }
    }
    ctx->pc = 0x17EAA8u;
label_17eaa8:
    // 0x17eaa8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17eaac:
    // 0x17eaac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_17eab0:
    if (ctx->pc == 0x17EAB0u) {
        ctx->pc = 0x17EAB4u;
        goto label_17eab4;
    }
    ctx->pc = 0x17EAACu;
    {
        const bool branch_taken_0x17eaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eaac) {
            ctx->pc = 0x17EABCu;
            goto label_17eabc;
        }
    }
    ctx->pc = 0x17EAB4u;
label_17eab4:
    // 0x17eab4: 0xc04c178  jal         func_1305E0
label_17eab8:
    if (ctx->pc == 0x17EAB8u) {
        ctx->pc = 0x17EABCu;
        goto label_17eabc;
    }
    ctx->pc = 0x17EAB4u;
    SET_GPR_U32(ctx, 31, 0x17EABCu);
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x17EAB4u, 0x17EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EABCu;
label_17eabc:
    // 0x17eabc: 0x0  nop
    ctx->pc = 0x17eabcu;
    // NOP
label_17eac0:
    // 0x17eac0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17eac4:
    // 0x17eac4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_17eac8:
    if (ctx->pc == 0x17EAC8u) {
        ctx->pc = 0x17EACCu;
        goto label_17eacc;
    }
    ctx->pc = 0x17EAC4u;
    {
        const bool branch_taken_0x17eac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eac4) {
            ctx->pc = 0x17EAD4u;
            goto label_17ead4;
        }
    }
    ctx->pc = 0x17EACCu;
label_17eacc:
    // 0x17eacc: 0xc04cea4  jal         func_133A90
label_17ead0:
    if (ctx->pc == 0x17EAD0u) {
        ctx->pc = 0x17EAD4u;
        goto label_17ead4;
    }
    ctx->pc = 0x17EACCu;
    SET_GPR_U32(ctx, 31, 0x17EAD4u);
    ctx->pc = 0x133A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133A90u, 0x17EACCu, 0x17EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAD4u;
label_17ead4:
    // 0x17ead4: 0x0  nop
    ctx->pc = 0x17ead4u;
    // NOP
label_17ead8:
    // 0x17ead8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17eadc:
    // 0x17eadc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17eae0:
    if (ctx->pc == 0x17EAE0u) {
        ctx->pc = 0x17EAE4u;
        goto label_17eae4;
    }
    ctx->pc = 0x17EADCu;
    {
        const bool branch_taken_0x17eadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eadc) {
            ctx->pc = 0x17EAF4u;
            goto label_17eaf4;
        }
    }
    ctx->pc = 0x17EAE4u;
label_17eae4:
    // 0x17eae4: 0x8c990038  lw          $t9, 0x38($a0)
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_17eae8:
    // 0x17eae8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_17eaec:
    // 0x17eaec: 0x320f809  jalr        $t9
label_17eaf0:
    if (ctx->pc == 0x17EAF0u) {
        ctx->pc = 0x17EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAECu;
        // 0x17eaf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EAF4u;
        goto label_17eaf4;
    }
    ctx->pc = 0x17EAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EAF4u);
        ctx->pc = 0x17EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAECu;
        // 0x17eaf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EAECu, 0x17EAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EAF4u;
label_17eaf4:
    // 0x17eaf4: 0x0  nop
    ctx->pc = 0x17eaf4u;
    // NOP
label_17eaf8:
    // 0x17eaf8: 0x8f828654  lw          $v0, -0x79AC($gp)
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
label_17eafc:
    // 0x17eafc: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x17eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_17eb00:
    // 0x17eb00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17eb04:
    // 0x17eb04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17eb08:
    if (ctx->pc == 0x17EB08u) {
        ctx->pc = 0x17EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB04u;
        // 0x17eb08: 0xaf828654  sw          $v0, -0x79AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB0Cu;
        goto label_17eb0c;
    }
    ctx->pc = 0x17EB04u;
    {
        const bool branch_taken_0x17eb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB04u;
        // 0x17eb08: 0xaf828654  sw          $v0, -0x79AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb04) {
            ctx->pc = 0x17EB1Cu;
            goto label_17eb1c;
        }
    }
    ctx->pc = 0x17EB0Cu;
label_17eb0c:
    // 0x17eb0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_17eb10:
    if (ctx->pc == 0x17EB10u) {
        ctx->pc = 0x17EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB0Cu;
        // 0x17eb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB14u;
        goto label_17eb14;
    }
    ctx->pc = 0x17EB0Cu;
    {
        const bool branch_taken_0x17eb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB0Cu;
        // 0x17eb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb0c) {
            ctx->pc = 0x17EB1Cu;
            goto label_17eb1c;
        }
    }
    ctx->pc = 0x17EB14u;
label_17eb14:
    // 0x17eb14: 0xc048414  jal         func_121050
label_17eb18:
    if (ctx->pc == 0x17EB18u) {
        ctx->pc = 0x17EB1Cu;
        goto label_17eb1c;
    }
    ctx->pc = 0x17EB14u;
    SET_GPR_U32(ctx, 31, 0x17EB1Cu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x17EB14u, 0x17EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB1Cu;
label_17eb1c:
    // 0x17eb1c: 0x0  nop
    ctx->pc = 0x17eb1cu;
    // NOP
label_17eb20:
    // 0x17eb20: 0xc0401a4  jal         func_100690
label_17eb24:
    if (ctx->pc == 0x17EB24u) {
        ctx->pc = 0x17EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB20u;
        // 0x17eb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB28u;
        goto label_17eb28;
    }
    ctx->pc = 0x17EB20u;
    SET_GPR_U32(ctx, 31, 0x17EB28u);
    ctx->pc = 0x17EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB20u;
    // 0x17eb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17EB20u, 0x17EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB28u;
label_17eb28:
    // 0x17eb28: 0xc048974  jal         func_1225D0
label_17eb2c:
    if (ctx->pc == 0x17EB2Cu) {
        ctx->pc = 0x17EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB28u;
        // 0x17eb2c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB30u;
        goto label_17eb30;
    }
    ctx->pc = 0x17EB28u;
    SET_GPR_U32(ctx, 31, 0x17EB30u);
    ctx->pc = 0x17EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB28u;
    // 0x17eb2c: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x17EB28u, 0x17EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB30u;
label_17eb30:
    // 0x17eb30: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x17eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_17eb34:
    // 0x17eb34: 0x1452ffd9  bne         $v0, $s2, . + 4 + (-0x27 << 2)
label_17eb38:
    if (ctx->pc == 0x17EB38u) {
        ctx->pc = 0x17EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB34u;
        // 0x17eb38: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB3Cu;
        goto label_17eb3c;
    }
    ctx->pc = 0x17EB34u;
    {
        const bool branch_taken_0x17eb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x17EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB34u;
        // 0x17eb38: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb34) {
            ctx->pc = 0x17EA9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ea9c;
        }
    }
    ctx->pc = 0x17EB3Cu;
label_17eb3c:
    // 0x17eb3c: 0xc05fd60  jal         func_17F580
label_17eb40:
    if (ctx->pc == 0x17EB40u) {
        ctx->pc = 0x17EB44u;
        goto label_17eb44;
    }
    ctx->pc = 0x17EB3Cu;
    SET_GPR_U32(ctx, 31, 0x17EB44u);
    ctx->pc = 0x17F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F580u, 0x17EB3Cu, 0x17EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB44u;
label_17eb44:
    // 0x17eb44: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_17eb48:
    // 0x17eb48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17eb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17eb4c:
    // 0x17eb4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17eb4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17eb50:
    // 0x17eb50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17eb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17eb54:
    // 0x17eb54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17eb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17eb58:
    // 0x17eb58: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x17eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_17eb5c:
    // 0x17eb5c: 0x0  nop
    ctx->pc = 0x17eb5cu;
    // NOP
label_17eb60:
    // 0x17eb60: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x17eb60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_17eb64:
    // 0x17eb64: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x17eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
label_17eb68:
    // 0x17eb68: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_17eb6c:
    // 0x17eb6c: 0xad200020  sw          $zero, 0x20($t1)
    ctx->pc = 0x17eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 0));
label_17eb70:
    // 0x17eb70: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x17eb70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_17eb74:
    // 0x17eb74: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x17eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
label_17eb78:
    // 0x17eb78: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17eb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_17eb7c:
    // 0x17eb7c: 0xad200028  sw          $zero, 0x28($t1)
    ctx->pc = 0x17eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 0));
label_17eb80:
    // 0x17eb80: 0xad20002c  sw          $zero, 0x2C($t1)
    ctx->pc = 0x17eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 0));
label_17eb84:
    // 0x17eb84: 0xad200030  sw          $zero, 0x30($t1)
    ctx->pc = 0x17eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 0));
label_17eb88:
    // 0x17eb88: 0xad200034  sw          $zero, 0x34($t1)
    ctx->pc = 0x17eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 0));
label_17eb8c:
    // 0x17eb8c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_17eb90:
    if (ctx->pc == 0x17EB90u) {
        ctx->pc = 0x17EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB8Cu;
        // 0x17eb90: 0xad200038  sw          $zero, 0x38($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB94u;
        goto label_17eb94;
    }
    ctx->pc = 0x17EB8Cu;
    {
        const bool branch_taken_0x17eb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB8Cu;
        // 0x17eb90: 0xad200038  sw          $zero, 0x38($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb8c) {
            ctx->pc = 0x17EB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eb5c;
        }
    }
    ctx->pc = 0x17EB94u;
label_17eb94:
    // 0x17eb94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17eb98:
    // 0x17eb98: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x17eb98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_17eb9c:
    // 0x17eb9c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_17eba0:
    if (ctx->pc == 0x17EBA0u) {
        ctx->pc = 0x17EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB9Cu;
        // 0x17eba0: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EBA4u;
        goto label_17eba4;
    }
    ctx->pc = 0x17EB9Cu;
    {
        const bool branch_taken_0x17eb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB9Cu;
        // 0x17eba0: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb9c) {
            ctx->pc = 0x17EB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eb50;
        }
    }
    ctx->pc = 0x17EBA4u;
label_17eba4:
    // 0x17eba4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17eba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17eba8:
    // 0x17eba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17eba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ebac:
    // 0x17ebac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ebacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ebb0:
    // 0x17ebb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ebb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17ebb4:
    // 0x17ebb4: 0x3e00008  jr          $ra
label_17ebb8:
    if (ctx->pc == 0x17EBB8u) {
        ctx->pc = 0x17EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBB4u;
        // 0x17ebb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EBBCu;
        goto label_fallthrough_0x17ebb4;
    }
    ctx->pc = 0x17EBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBB4u;
        // 0x17ebb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17ebb4:
    ctx->pc = 0x17EBBCu;
}
