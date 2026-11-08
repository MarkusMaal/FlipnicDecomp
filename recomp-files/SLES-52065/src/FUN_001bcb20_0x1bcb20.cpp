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

// Function: FUN_001bcb20
// Address: 0x1bcb20 - 0x1bce38
void FUN_001bcb20_0x1bcb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bcb20_0x1bcb20");
#endif

    switch (ctx->pc) {
        case 0x1bcb54u: goto label_1bcb54;
        case 0x1bcb78u: goto label_1bcb78;
        case 0x1bcbd4u: goto label_1bcbd4;
        case 0x1bcbf4u: goto label_1bcbf4;
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc34u: goto label_1bcc34;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcc80u: goto label_1bcc80;
        case 0x1bcc90u: goto label_1bcc90;
        case 0x1bcc98u: goto label_1bcc98;
        case 0x1bccb0u: goto label_1bccb0;
        case 0x1bccb8u: goto label_1bccb8;
        case 0x1bcd44u: goto label_1bcd44;
        case 0x1bcd4cu: goto label_1bcd4c;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcdc8u: goto label_1bcdc8;
        case 0x1bcdd8u: goto label_1bcdd8;
        case 0x1bcdf8u: goto label_1bcdf8;
        case 0x1bce08u: goto label_1bce08;
        default: break;
    }

    ctx->pc = 0x1bcb20u;

    // 0x1bcb20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bcb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bcb24: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bcb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcb28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bcb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bcb2c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bcb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bcb30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bcb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bcb34: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bcb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bcb38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bcb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bcb3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bcb3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bcb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bcb44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bcb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bcb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bcb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bcb4c: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1BCB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BCB54u);
    ctx->pc = 0x1BCB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB4Cu;
    // 0x1bcb50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1BCB4Cu, 0x1BCB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB54u;
label_1bcb54:
    // 0x1bcb54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCB54u;
    {
        const bool branch_taken_0x1bcb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB54u;
        // 0x1bcb58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb54) {
            ctx->pc = 0x1BCB68u;
            goto label_1bcb68;
        }
    }
    ctx->pc = 0x1BCB5Cu;
    // 0x1bcb5c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcb60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcb64: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
label_1bcb68:
    // 0x1bcb68: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bcb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcb6c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bcb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bcb70: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1BCB70u;
    SET_GPR_U32(ctx, 31, 0x1BCB78u);
    ctx->pc = 0x1BCB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB70u;
    // 0x1bcb74: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1BCB70u, 0x1BCB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB78u;
label_1bcb78:
    // 0x1bcb78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCB78u;
    {
        const bool branch_taken_0x1bcb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb78) {
            ctx->pc = 0x1BCB8Cu;
            goto label_1bcb8c;
        }
    }
    ctx->pc = 0x1BCB80u;
    // 0x1bcb80: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcb84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcb88: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
label_1bcb8c:
    // 0x1bcb8c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcb90: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BCB90u;
    {
        const bool branch_taken_0x1bcb90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bcb90) {
            ctx->pc = 0x1BCBB0u;
            goto label_1bcbb0;
        }
    }
    ctx->pc = 0x1BCB98u;
    // 0x1bcb98: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1bcb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1bcb9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcba0: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x1bcba0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    // 0x1bcba4: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcba8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcbac: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x1bcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
label_1bcbb0:
    // 0x1bcbb0: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x1bcbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1bcbb4: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1bcbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcbb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcbbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1bcbbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bcbc0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCBC0u;
    {
        const bool branch_taken_0x1bcbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBC0u;
        // 0x1bcbc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbc0) {
            ctx->pc = 0x1BCBCCu;
            goto label_1bcbcc;
        }
    }
    ctx->pc = 0x1BCBC8u;
    // 0x1bcbc8: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x1bcbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
label_1bcbcc:
    // 0x1bcbcc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCBCCu;
    SET_GPR_U32(ctx, 31, 0x1BCBD4u);
    ctx->pc = 0x1BCBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBCCu;
    // 0x1bcbd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCBCCu, 0x1BCBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBD4u;
label_1bcbd4:
    // 0x1bcbd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCBD4u;
    {
        const bool branch_taken_0x1bcbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBD4u;
        // 0x1bcbd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbd4) {
            ctx->pc = 0x1BCBF8u;
            goto label_1bcbf8;
        }
    }
    ctx->pc = 0x1BCBDCu;
    // 0x1bcbdc: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcbe0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bcbe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bcbe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCBE4u;
    {
        const bool branch_taken_0x1bcbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBE4u;
        // 0x1bcbe8: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbe4) {
            ctx->pc = 0x1BCBF4u;
            goto label_1bcbf4;
        }
    }
    ctx->pc = 0x1BCBECu;
    // 0x1bcbec: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCBECu;
    SET_GPR_U32(ctx, 31, 0x1BCBF4u);
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCBECu, 0x1BCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBF4u;
label_1bcbf4:
    // 0x1bcbf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bcbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbf8:
    // 0x1bcbf8: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCBF8u;
    SET_GPR_U32(ctx, 31, 0x1BCC00u);
    ctx->pc = 0x1BCBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBF8u;
    // 0x1bcbfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCBF8u, 0x1BCC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC00u;
label_1bcc00:
    // 0x1bcc00: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BCC00u;
    {
        const bool branch_taken_0x1bcc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC00u;
        // 0x1bcc04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc00) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCC08u;
    // 0x1bcc08: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x1bcc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x1bcc0c: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcc10: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcc14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bcc18: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bcc1c: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1bcc1cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bcc20: 0x0  nop
    ctx->pc = 0x1bcc20u;
    // NOP
    // 0x1bcc24: 0x0  nop
    ctx->pc = 0x1bcc24u;
    // NOP
    // 0x1bcc28: 0x2812  mflo        $a1
    ctx->pc = 0x1bcc28u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bcc2c: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1BCC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC34u);
    ctx->pc = 0x1BCC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC2Cu;
    // 0x1bcc30: 0x26a40064  addiu       $a0, $s5, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1BCC2Cu, 0x1BCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC34u;
label_1bcc34:
    // 0x1bcc34: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1bcc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1bcc38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bcc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcc3c: 0x204001b  divu        $zero, $s0, $a0
    ctx->pc = 0x1bcc3cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bcc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcc44: 0x0  nop
    ctx->pc = 0x1bcc44u;
    // NOP
    // 0x1bcc48: 0x2010  mfhi        $a0
    ctx->pc = 0x1bcc48u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bcc4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bcc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bcc50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcc54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bcc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bcc58: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCC58u;
    {
        const bool branch_taken_0x1bcc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcc58) {
            ctx->pc = 0x1BCC74u;
            goto label_1bcc74;
        }
    }
    ctx->pc = 0x1BCC60u;
    // 0x1bcc60: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1bcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bcc64: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x1bcc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1bcc68: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1bcc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1bcc6c: 0xc06f55c  jal         func_1BD570
    ctx->pc = 0x1BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC74u);
    ctx->pc = 0x1BCC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC6Cu;
    // 0x1bcc70: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD570u, 0x1BCC6Cu, 0x1BCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC74u;
label_1bcc74:
    // 0x1bcc74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bcc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc78:
    // 0x1bcc78: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCC78u;
    SET_GPR_U32(ctx, 31, 0x1BCC80u);
    ctx->pc = 0x1BCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC78u;
    // 0x1bcc7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCC78u, 0x1BCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC80u;
label_1bcc80:
    // 0x1bcc80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCC80u;
    {
        const bool branch_taken_0x1bcc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc80) {
            ctx->pc = 0x1BCCB0u;
            goto label_1bccb0;
        }
    }
    ctx->pc = 0x1BCC88u;
    // 0x1bcc88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCC88u;
    {
        const bool branch_taken_0x1bcc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc88) {
            ctx->pc = 0x1BCC98u;
            goto label_1bcc98;
        }
    }
    ctx->pc = 0x1BCC90u;
label_1bcc90:
    // 0x1bcc90: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCC90u;
    SET_GPR_U32(ctx, 31, 0x1BCC98u);
    ctx->pc = 0x1BCC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC90u;
    // 0x1bcc94: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCC90u, 0x1BCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC98u;
label_1bcc98:
    // 0x1bcc98: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcc9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcca0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BCCA0u;
    {
        const bool branch_taken_0x1bcca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcca0) {
            ctx->pc = 0x1BCC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcc90;
        }
    }
    ctx->pc = 0x1BCCA8u;
    // 0x1bcca8: 0xc06f490  jal         func_1BD240
    ctx->pc = 0x1BCCA8u;
    SET_GPR_U32(ctx, 31, 0x1BCCB0u);
    ctx->pc = 0x1BCCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCA8u;
    // 0x1bccac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD240u, 0x1BCCA8u, 0x1BCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCB0u;
label_1bccb0:
    // 0x1bccb0: 0xc04b220  jal         func_12C880
    ctx->pc = 0x1BCCB0u;
    SET_GPR_U32(ctx, 31, 0x1BCCB8u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x1BCCB0u, 0x1BCCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCB8u;
label_1bccb8:
    // 0x1bccb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bccb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccbc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1bccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bccc0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bccc4: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x1bccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1bccc8: 0x24423058  addiu       $v0, $v0, 0x3058
    ctx->pc = 0x1bccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12376));
    // 0x1bcccc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1bccccu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x213058u));
    // 0x1bccd0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bccd4: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x1bccd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bccd8: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x1bccdc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x213060u));
    // 0x1bcce0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1bcce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bcce4: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1bcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1bcce8: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x1bcce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bccec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bccf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCCF0u;
    {
        const bool branch_taken_0x1bccf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCF0u;
        // 0x1bccf4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccf0) {
            ctx->pc = 0x1BCD00u;
            goto label_1bcd00;
        }
    }
    ctx->pc = 0x1BCCF8u;
    // 0x1bccf8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1bccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1bccfc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bccfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1bcd00:
    // 0x1bcd00: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1bcd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcd04: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1bcd08: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCD08u;
    {
        const bool branch_taken_0x1bcd08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD08u;
        // 0x1bcd0c: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd08) {
            ctx->pc = 0x1BCD18u;
            goto label_1bcd18;
        }
    }
    ctx->pc = 0x1BCD10u;
    // 0x1bcd10: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bcd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bcd14: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1bcd14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1bcd18:
    // 0x1bcd18: 0x3393c  dsll32      $a3, $v1, 4
    ctx->pc = 0x1bcd18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1bcd1c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bcd20: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCD20u;
    {
        const bool branch_taken_0x1bcd20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD20u;
        // 0x1bcd24: 0x7393f  dsra32      $a3, $a3, 4 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd20) {
            ctx->pc = 0x1BCD30u;
            goto label_1bcd30;
        }
    }
    ctx->pc = 0x1BCD28u;
    // 0x1bcd28: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bcd2c: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x1bcd2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
label_1bcd30:
    // 0x1bcd30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bcd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bcd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd38: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x1bcd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x1bcd3c: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD44u);
    ctx->pc = 0x1BCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD3Cu;
    // 0x1bcd40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BCD3Cu, 0x1BCD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD44u;
label_1bcd44:
    // 0x1bcd44: 0xc06e0fc  jal         func_1B83F0
    ctx->pc = 0x1BCD44u;
    SET_GPR_U32(ctx, 31, 0x1BCD4Cu);
    ctx->pc = 0x1BCD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD44u;
    // 0x1bcd48: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83F0u, 0x1BCD44u, 0x1BCD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD4Cu;
label_1bcd4c:
    // 0x1bcd4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcd50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bcd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd54: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1BCD54u;
    {
        const bool branch_taken_0x1bcd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD54u;
        // 0x1bcd58: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd54) {
            ctx->pc = 0x1BCDFCu;
            goto label_1bcdfc;
        }
    }
    ctx->pc = 0x1BCD5Cu;
label_1bcd5c:
    // 0x1bcd5c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1bcd60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bcd64: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1bcd64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bcd68: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCD68u;
    {
        const bool branch_taken_0x1bcd68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD68u;
        // 0x1bcd6c: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd68) {
            ctx->pc = 0x1BCD7Cu;
            goto label_1bcd7c;
        }
    }
    ctx->pc = 0x1BCD70u;
    // 0x1bcd70: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1bcd70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bcd74: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BCD74u;
    {
        const bool branch_taken_0x1bcd74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd74) {
            ctx->pc = 0x1BCDF0u;
            goto label_1bcdf0;
        }
    }
    ctx->pc = 0x1BCD7Cu;
label_1bcd7c:
    // 0x1bcd7c: 0x0  nop
    ctx->pc = 0x1bcd7cu;
    // NOP
    // 0x1bcd80: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1bcd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bcd84: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x1bcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcd88: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x1bcd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bcd8c: 0x2439826  xor         $s3, $s2, $v1
    ctx->pc = 0x1bcd8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 3));
    // 0x1bcd90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BCD90u;
    {
        const bool branch_taken_0x1bcd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD90u;
        // 0x1bcd94: 0x2e730001  sltiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd90) {
            ctx->pc = 0x1BCDF0u;
            goto label_1bcdf0;
        }
    }
    ctx->pc = 0x1BCD98u;
    // 0x1bcd98: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x1bcd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1bcd9c: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x1bcd9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bcda0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bcda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bcda4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bcda8: 0x90460070  lbu         $a2, 0x70($v0)
    ctx->pc = 0x1bcda8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1bcdac: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x1bcdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdb4: 0x92820020  lbu         $v0, 0x20($s4)
    ctx->pc = 0x1bcdb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1bcdb8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bcdbc: 0x90470074  lbu         $a3, 0x74($v0)
    ctx->pc = 0x1bcdbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1bcdc0: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BCDC0u;
    SET_GPR_U32(ctx, 31, 0x1BCDC8u);
    ctx->pc = 0x1BCDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDC0u;
    // 0x1bcdc4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BCDC0u, 0x1BCDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDC8u;
label_1bcdc8:
    // 0x1bcdc8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCDC8u;
    {
        const bool branch_taken_0x1bcdc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDC8u;
        // 0x1bcdcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdc8) {
            ctx->pc = 0x1BCDF0u;
            goto label_1bcdf0;
        }
    }
    ctx->pc = 0x1BCDD0u;
    // 0x1bcdd0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCDD0u;
    SET_GPR_U32(ctx, 31, 0x1BCDD8u);
    ctx->pc = 0x1BCDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDD0u;
    // 0x1bcdd4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCDD0u, 0x1BCDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDD8u;
label_1bcdd8:
    // 0x1bcdd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCDD8u;
    {
        const bool branch_taken_0x1bcdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcdd8) {
            ctx->pc = 0x1BCDF0u;
            goto label_1bcdf0;
        }
    }
    ctx->pc = 0x1BCDE0u;
    // 0x1bcde0: 0x92820020  lbu         $v0, 0x20($s4)
    ctx->pc = 0x1bcde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1bcde4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bcde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bcde8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bcdec: 0xa2820020  sb          $v0, 0x20($s4)
    ctx->pc = 0x1bcdecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 2));
label_1bcdf0:
    // 0x1bcdf0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BCDF0u;
    SET_GPR_U32(ctx, 31, 0x1BCDF8u);
    ctx->pc = 0x1BCDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDF0u;
    // 0x1bcdf4: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BCDF0u, 0x1BCDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDF8u;
label_1bcdf8:
    // 0x1bcdf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bcdf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bcdfc:
    // 0x1bcdfc: 0x0  nop
    ctx->pc = 0x1bcdfcu;
    // NOP
    // 0x1bce00: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1BCE00u;
    SET_GPR_U32(ctx, 31, 0x1BCE08u);
    ctx->pc = 0x1BCE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE00u;
    // 0x1bce04: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1BCE00u, 0x1BCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE08u;
label_1bce08:
    // 0x1bce08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1bce0c: 0x1462ffd3  bne         $v1, $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1BCE0Cu;
    {
        const bool branch_taken_0x1bce0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bce0c) {
            ctx->pc = 0x1BCD5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcd5c;
        }
    }
    ctx->pc = 0x1BCE14u;
    // 0x1bce14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bce14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bce18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bce18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bce1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bce1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bce20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bce20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bce24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bce24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bce28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bce28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bce2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bce30: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE30u;
        // 0x1bce34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCE38u;
}
