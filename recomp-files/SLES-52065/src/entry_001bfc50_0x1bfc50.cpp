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

// Function: entry_001bfc50
// Address: 0x1bfc50 - 0x1bfd9c
void entry_001bfc50_0x1bfc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfc50_0x1bfc50");
#endif

    switch (ctx->pc) {
        case 0x1bfc64u: goto label_1bfc64;
        case 0x1bfc78u: goto label_1bfc78;
        case 0x1bfc94u: goto label_1bfc94;
        case 0x1bfca4u: goto label_1bfca4;
        case 0x1bfcacu: goto label_1bfcac;
        case 0x1bfcb4u: goto label_1bfcb4;
        case 0x1bfcc8u: goto label_1bfcc8;
        case 0x1bfcd4u: goto label_1bfcd4;
        case 0x1bfcecu: goto label_1bfcec;
        case 0x1bfd10u: goto label_1bfd10;
        case 0x1bfd20u: goto label_1bfd20;
        case 0x1bfd30u: goto label_1bfd30;
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd44u: goto label_1bfd44;
        case 0x1bfd50u: goto label_1bfd50;
        case 0x1bfd68u: goto label_1bfd68;
        case 0x1bfd98u: goto label_1bfd98;
        default: break;
    }

    ctx->pc = 0x1bfc50u;

label_1bfc50:
    // 0x1bfc50: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1bfc54: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x1bfc58: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1bfc58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bfc5c: 0xc072e58  jal         func_1CB960
    ctx->pc = 0x1BFC5Cu;
    SET_GPR_U32(ctx, 31, 0x1BFC64u);
    ctx->pc = 0x1BFC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC5Cu;
    // 0x1bfc60: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB960u, 0x1BFC5Cu, 0x1BFC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC64u;
label_1bfc64:
    // 0x1bfc64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bfc64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bfc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bfc70: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFC70u;
    SET_GPR_U32(ctx, 31, 0x1BFC78u);
    ctx->pc = 0x1BFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC70u;
    // 0x1bfc74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFC70u, 0x1BFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC78u;
label_1bfc78:
    // 0x1bfc78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bfc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc7c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1bfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1bfc80: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1bfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1bfc84: 0x24421410  addiu       $v0, $v0, 0x1410
    ctx->pc = 0x1bfc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5136));
    // 0x1bfc88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfc8c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1BFC8Cu;
    SET_GPR_U32(ctx, 31, 0x1BFC94u);
    ctx->pc = 0x1BFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC8Cu;
    // 0x1bfc90: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1BFC8Cu, 0x1BFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC94u;
label_1bfc94:
    // 0x1bfc94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bfc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bfc9c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1BFCA4u);
    ctx->pc = 0x1BFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC9Cu;
    // 0x1bfca0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFC9Cu, 0x1BFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCA4u;
label_1bfca4:
    // 0x1bfca4: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1BFCA4u;
    SET_GPR_U32(ctx, 31, 0x1BFCACu);
    ctx->pc = 0x1BFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCA4u;
    // 0x1bfca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1BFCA4u, 0x1BFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCACu;
label_1bfcac:
    // 0x1bfcac: 0xc072ebc  jal         func_1CBAF0
    ctx->pc = 0x1BFCACu;
    SET_GPR_U32(ctx, 31, 0x1BFCB4u);
    ctx->pc = 0x1BFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCACu;
    // 0x1bfcb0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAF0u, 0x1BFCACu, 0x1BFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCB4u;
label_1bfcb4:
    // 0x1bfcb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bfcb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfcb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfcbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bfcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfcc0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFCC0u;
    SET_GPR_U32(ctx, 31, 0x1BFCC8u);
    ctx->pc = 0x1BFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCC0u;
    // 0x1bfcc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFCC0u, 0x1BFCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCC8u;
label_1bfcc8:
    // 0x1bfcc8: 0xa0540008  sb          $s4, 0x8($v0)
    ctx->pc = 0x1bfcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 20));
    // 0x1bfccc: 0xc072ebc  jal         func_1CBAF0
    ctx->pc = 0x1BFCCCu;
    SET_GPR_U32(ctx, 31, 0x1BFCD4u);
    ctx->pc = 0x1BFCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCCCu;
    // 0x1bfcd0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAF0u, 0x1BFCCCu, 0x1BFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCD4u;
label_1bfcd4:
    // 0x1bfcd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bfcd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bfcd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfcdc: 0x38520001  xori        $s2, $v0, 0x1
    ctx->pc = 0x1bfcdcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bfce0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bfce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfce4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFCE4u;
    SET_GPR_U32(ctx, 31, 0x1BFCECu);
    ctx->pc = 0x1BFCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCE4u;
    // 0x1bfce8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFCE4u, 0x1BFCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCECu;
label_1bfcec:
    // 0x1bfcec: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x1bfcecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x1bfcf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bfcf4: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x1bfcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1bfcf8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1BFCF8u;
    {
        const bool branch_taken_0x1bfcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCF8u;
        // 0x1bfcfc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcf8) {
            ctx->pc = 0x1BFC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfc50;
        }
    }
    ctx->pc = 0x1BFD00u;
    // 0x1bfd00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bfd08: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFD08u;
    SET_GPR_U32(ctx, 31, 0x1BFD10u);
    ctx->pc = 0x1BFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD08u;
    // 0x1bfd0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFD08u, 0x1BFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD10u;
label_1bfd10:
    // 0x1bfd10: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bfd10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bfd14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bfd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd18: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1BFD18u;
    SET_GPR_U32(ctx, 31, 0x1BFD20u);
    ctx->pc = 0x1BFD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD18u;
    // 0x1bfd1c: 0x24a536c0  addiu       $a1, $a1, 0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1BFD18u, 0x1BFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD20u;
label_1bfd20:
    // 0x1bfd20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bfd28: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BFD28u;
    SET_GPR_U32(ctx, 31, 0x1BFD30u);
    ctx->pc = 0x1BFD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD28u;
    // 0x1bfd2c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BFD28u, 0x1BFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD30u;
label_1bfd30:
    // 0x1bfd30: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1BFD30u;
    SET_GPR_U32(ctx, 31, 0x1BFD38u);
    ctx->pc = 0x1BFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD30u;
    // 0x1bfd34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1BFD30u, 0x1BFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD38u;
label_1bfd38:
    // 0x1bfd38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd3c: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1BFD3Cu;
    SET_GPR_U32(ctx, 31, 0x1BFD44u);
    ctx->pc = 0x1BFD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD3Cu;
    // 0x1bfd40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1BFD3Cu, 0x1BFD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD44u;
label_1bfd44:
    // 0x1bfd44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd48: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1BFD48u;
    SET_GPR_U32(ctx, 31, 0x1BFD50u);
    ctx->pc = 0x1BFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD48u;
    // 0x1bfd4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1BFD48u, 0x1BFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD50u;
label_1bfd50:
    // 0x1bfd50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfd54: 0x8c25f4f0  lw          $a1, -0xB10($at)
    ctx->pc = 0x1bfd54u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1bfd58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfd5c: 0x8c26f4f8  lw          $a2, -0xB08($at)
    ctx->pc = 0x1bfd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bfd60: 0xc06ffb0  jal         func_1BFEC0
    ctx->pc = 0x1BFD60u;
    SET_GPR_U32(ctx, 31, 0x1BFD68u);
    ctx->pc = 0x1BFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD60u;
    // 0x1bfd64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEC0u, 0x1BFD60u, 0x1BFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD68u;
label_1bfd68:
    // 0x1bfd68: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x1bfd68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
    // 0x1bfd6c: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x1bfd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1bfd70: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bfd74: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFD74u;
    {
        const bool branch_taken_0x1bfd74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD74u;
        // 0x1bfd78: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd74) {
            ctx->pc = 0x1BFD9Cu;
            return;
        }
    }
    ctx->pc = 0x1BFD7Cu;
    // 0x1bfd7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bfd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd80: 0xac20f4f0  sw          $zero, -0xB10($at)
    ctx->pc = 0x1bfd80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964464), GPR_U32(ctx, 0));
    // 0x1bfd84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfd8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd90: 0xc06ffb0  jal         func_1BFEC0
    ctx->pc = 0x1BFD90u;
    SET_GPR_U32(ctx, 31, 0x1BFD98u);
    ctx->pc = 0x1BFD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD90u;
    // 0x1bfd94: 0xac20f4f8  sw          $zero, -0xB08($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEC0u, 0x1BFD90u, 0x1BFD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD98u;
label_1bfd98:
    // 0x1bfd98: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x1bfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
    ctx->pc = 0x1bfd9cu;
}
