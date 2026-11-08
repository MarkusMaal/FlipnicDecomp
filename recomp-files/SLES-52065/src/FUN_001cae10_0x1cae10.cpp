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

// Function: FUN_001cae10
// Address: 0x1cae10 - 0x1cb2d8
void FUN_001cae10_0x1cae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cae10_0x1cae10");
#endif

    switch (ctx->pc) {
        case 0x1cae30u: goto label_1cae30;
        case 0x1cae5cu: goto label_1cae5c;
        case 0x1cae74u: goto label_1cae74;
        case 0x1cae7cu: goto label_1cae7c;
        case 0x1cae8cu: goto label_1cae8c;
        case 0x1cae94u: goto label_1cae94;
        case 0x1caeb4u: goto label_1caeb4;
        case 0x1caec0u: goto label_1caec0;
        case 0x1caed4u: goto label_1caed4;
        case 0x1caee0u: goto label_1caee0;
        case 0x1caf50u: goto label_1caf50;
        case 0x1caf78u: goto label_1caf78;
        case 0x1cafa4u: goto label_1cafa4;
        case 0x1cafccu: goto label_1cafcc;
        case 0x1cafdcu: goto label_1cafdc;
        case 0x1cafecu: goto label_1cafec;
        case 0x1caff8u: goto label_1caff8;
        case 0x1cb008u: goto label_1cb008;
        case 0x1cb034u: goto label_1cb034;
        case 0x1cb03cu: goto label_1cb03c;
        case 0x1cb050u: goto label_1cb050;
        case 0x1cb058u: goto label_1cb058;
        case 0x1cb084u: goto label_1cb084;
        case 0x1cb08cu: goto label_1cb08c;
        case 0x1cb0a0u: goto label_1cb0a0;
        case 0x1cb0a8u: goto label_1cb0a8;
        case 0x1cb0b8u: goto label_1cb0b8;
        case 0x1cb0c4u: goto label_1cb0c4;
        case 0x1cb114u: goto label_1cb114;
        case 0x1cb120u: goto label_1cb120;
        case 0x1cb170u: goto label_1cb170;
        case 0x1cb198u: goto label_1cb198;
        case 0x1cb1a8u: goto label_1cb1a8;
        case 0x1cb1c4u: goto label_1cb1c4;
        case 0x1cb1d4u: goto label_1cb1d4;
        case 0x1cb1f0u: goto label_1cb1f0;
        case 0x1cb200u: goto label_1cb200;
        case 0x1cb228u: goto label_1cb228;
        case 0x1cb288u: goto label_1cb288;
        case 0x1cb298u: goto label_1cb298;
        case 0x1cb2a4u: goto label_1cb2a4;
        case 0x1cb2b0u: goto label_1cb2b0;
        default: break;
    }

    ctx->pc = 0x1cae10u;

    // 0x1cae10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cae14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cae18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cae1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cae20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cae24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cae28: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CAE28u;
    SET_GPR_U32(ctx, 31, 0x1CAE30u);
    ctx->pc = 0x1CAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE28u;
    // 0x1cae2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CAE28u, 0x1CAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE30u;
label_1cae30:
    // 0x1cae30: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cae34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae38: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cae3c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1cae3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cae40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae44: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cae48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae4c: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1cae4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cae50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cae50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae54: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAE54u;
    SET_GPR_U32(ctx, 31, 0x1CAE5Cu);
    ctx->pc = 0x1CAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE54u;
    // 0x1cae58: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAE54u, 0x1CAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE5Cu;
label_1cae5c:
    // 0x1cae5c: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cae60: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1cae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cae64: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAE64u;
    {
        const bool branch_taken_0x1cae64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE64u;
        // 0x1cae68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae64) {
            ctx->pc = 0x1CAE94u;
            goto label_1cae94;
        }
    }
    ctx->pc = 0x1CAE6Cu;
    // 0x1cae6c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE74u);
    ctx->pc = 0x1CAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE6Cu;
    // 0x1cae70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAE6Cu, 0x1CAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE74u;
label_1cae74:
    // 0x1cae74: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CAE74u;
    SET_GPR_U32(ctx, 31, 0x1CAE7Cu);
    ctx->pc = 0x1CAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE74u;
    // 0x1cae78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CAE74u, 0x1CAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE7Cu;
label_1cae7c:
    // 0x1cae7c: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1cae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cae80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae84: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAE84u;
    SET_GPR_U32(ctx, 31, 0x1CAE8Cu);
    ctx->pc = 0x1CAE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE84u;
    // 0x1cae88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAE84u, 0x1CAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE8Cu;
label_1cae8c:
    // 0x1cae8c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CAE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE94u);
    ctx->pc = 0x1CAE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE8Cu;
    // 0x1cae90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CAE8Cu, 0x1CAE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE94u;
label_1cae94:
    // 0x1cae94: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1cae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cae98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cae9c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CAE9Cu;
    {
        const bool branch_taken_0x1cae9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE9Cu;
        // 0x1caea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae9c) {
            ctx->pc = 0x1CAEC8u;
            goto label_1caec8;
        }
    }
    ctx->pc = 0x1CAEA4u;
    // 0x1caea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caea8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1caea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caeac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAEACu;
    SET_GPR_U32(ctx, 31, 0x1CAEB4u);
    ctx->pc = 0x1CAEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEACu;
    // 0x1caeb0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAEACu, 0x1CAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB4u;
label_1caeb4:
    // 0x1caeb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb8: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CAEB8u;
    SET_GPR_U32(ctx, 31, 0x1CAEC0u);
    ctx->pc = 0x1CAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB8u;
    // 0x1caebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CAEB8u, 0x1CAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC0u;
label_1caec0:
    // 0x1caec0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAEC0u;
    {
        const bool branch_taken_0x1caec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEC0u;
        // 0x1caec4: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caec0) {
            ctx->pc = 0x1CAEE4u;
            goto label_1caee4;
        }
    }
    ctx->pc = 0x1CAEC8u;
label_1caec8:
    // 0x1caec8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1caec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caecc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAECCu;
    SET_GPR_U32(ctx, 31, 0x1CAED4u);
    ctx->pc = 0x1CAED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAECCu;
    // 0x1caed0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAECCu, 0x1CAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAED4u;
label_1caed4:
    // 0x1caed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caed8: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CAED8u;
    SET_GPR_U32(ctx, 31, 0x1CAEE0u);
    ctx->pc = 0x1CAEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAED8u;
    // 0x1caedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CAED8u, 0x1CAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEE0u;
label_1caee0:
    // 0x1caee0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1caee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1caee4:
    // 0x1caee4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1caee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1caee8: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1caee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x1caeec: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1caeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1caef0: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x1caef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x1caef4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caef8: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CAEF8u;
    {
        const bool branch_taken_0x1caef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEF8u;
        // 0x1caefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caef8) {
            ctx->pc = 0x1CAFD4u;
            goto label_1cafd4;
        }
    }
    ctx->pc = 0x1CAF00u;
    // 0x1caf00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1caf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1caf04: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAF04u;
    {
        const bool branch_taken_0x1caf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF04u;
        // 0x1caf08: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf04) {
            ctx->pc = 0x1CAFACu;
            goto label_1cafac;
        }
    }
    ctx->pc = 0x1CAF0Cu;
    // 0x1caf0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1caf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caf10: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CAF10u;
    {
        const bool branch_taken_0x1caf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF10u;
        // 0x1caf14: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf10) {
            ctx->pc = 0x1CAF80u;
            goto label_1caf80;
        }
    }
    ctx->pc = 0x1CAF18u;
    // 0x1caf18: 0x106b000f  beq         $v1, $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAF18u;
    {
        const bool branch_taken_0x1caf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x1caf18) {
            ctx->pc = 0x1CAF58u;
            goto label_1caf58;
        }
    }
    ctx->pc = 0x1CAF20u;
    // 0x1caf20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF20u;
    {
        const bool branch_taken_0x1caf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF20u;
        // 0x1caf24: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf20) {
            ctx->pc = 0x1CAF30u;
            goto label_1caf30;
        }
    }
    ctx->pc = 0x1CAF28u;
    // 0x1caf28: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1CAF28u;
    {
        const bool branch_taken_0x1caf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF28u;
        // 0x1caf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf28) {
            ctx->pc = 0x1CAFF0u;
            goto label_1caff0;
        }
    }
    ctx->pc = 0x1CAF30u;
label_1caf30:
    // 0x1caf30: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1caf30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf38: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1caf3c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1caf40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf44: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1caf48: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAF48u;
    SET_GPR_U32(ctx, 31, 0x1CAF50u);
    ctx->pc = 0x1CAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF48u;
    // 0x1caf4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAF48u, 0x1CAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF50u;
label_1caf50:
    // 0x1caf50: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CAF50u;
    {
        const bool branch_taken_0x1caf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf50) {
            ctx->pc = 0x1CAFECu;
            goto label_1cafec;
        }
    }
    ctx->pc = 0x1CAF58u;
label_1caf58:
    // 0x1caf58: 0x8e080094  lw          $t0, 0x94($s0)
    ctx->pc = 0x1caf58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1caf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf60: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1caf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1caf64: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1caf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1caf68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caf68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1caf6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf70: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAF70u;
    SET_GPR_U32(ctx, 31, 0x1CAF78u);
    ctx->pc = 0x1CAF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF70u;
    // 0x1caf74: 0x260a006c  addiu       $t2, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAF70u, 0x1CAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF78u;
label_1caf78:
    // 0x1caf78: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1CAF78u;
    {
        const bool branch_taken_0x1caf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf78) {
            ctx->pc = 0x1CAFECu;
            goto label_1cafec;
        }
    }
    ctx->pc = 0x1CAF80u;
label_1caf80:
    // 0x1caf80: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x1caf80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1caf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf88: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1caf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1caf8c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1caf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1caf90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1caf94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf98: 0x260a0070  addiu       $t2, $s0, 0x70
    ctx->pc = 0x1caf98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1caf9c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CAFA4u);
    ctx->pc = 0x1CAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF9Cu;
    // 0x1cafa0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAF9Cu, 0x1CAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFA4u;
label_1cafa4:
    // 0x1cafa4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CAFA4u;
    {
        const bool branch_taken_0x1cafa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cafa4) {
            ctx->pc = 0x1CAFECu;
            goto label_1cafec;
        }
    }
    ctx->pc = 0x1CAFACu;
label_1cafac:
    // 0x1cafac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cafacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafb0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cafb4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1cafb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cafb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cafb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafbc: 0x260a007c  addiu       $t2, $s0, 0x7C
    ctx->pc = 0x1cafbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1cafc0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1cafc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafc4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAFC4u;
    SET_GPR_U32(ctx, 31, 0x1CAFCCu);
    ctx->pc = 0x1CAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFC4u;
    // 0x1cafc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAFC4u, 0x1CAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFCCu;
label_1cafcc:
    // 0x1cafcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAFCCu;
    {
        const bool branch_taken_0x1cafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cafcc) {
            ctx->pc = 0x1CAFECu;
            goto label_1cafec;
        }
    }
    ctx->pc = 0x1CAFD4u;
label_1cafd4:
    // 0x1cafd4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CAFD4u;
    SET_GPR_U32(ctx, 31, 0x1CAFDCu);
    ctx->pc = 0x1CAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFD4u;
    // 0x1cafd8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CAFD4u, 0x1CAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFDCu;
label_1cafdc:
    // 0x1cafdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAFDCu;
    {
        const bool branch_taken_0x1cafdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFDCu;
        // 0x1cafe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafdc) {
            ctx->pc = 0x1CAFECu;
            goto label_1cafec;
        }
    }
    ctx->pc = 0x1CAFE4u;
    // 0x1cafe4: 0xc072d90  jal         func_1CB640
    ctx->pc = 0x1CAFE4u;
    SET_GPR_U32(ctx, 31, 0x1CAFECu);
    ctx->pc = 0x1CAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFE4u;
    // 0x1cafe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB640u, 0x1CAFE4u, 0x1CAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFECu;
label_1cafec:
    // 0x1cafec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cafecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1caff0:
    // 0x1caff0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CAFF0u;
    SET_GPR_U32(ctx, 31, 0x1CAFF8u);
    ctx->pc = 0x1CAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFF0u;
    // 0x1caff4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CAFF0u, 0x1CAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFF8u;
label_1caff8:
    // 0x1caff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAFF8u;
    {
        const bool branch_taken_0x1caff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFF8u;
        // 0x1caffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caff8) {
            ctx->pc = 0x1CB008u;
            goto label_1cb008;
        }
    }
    ctx->pc = 0x1CB000u;
    // 0x1cb000: 0xc072d90  jal         func_1CB640
    ctx->pc = 0x1CB000u;
    SET_GPR_U32(ctx, 31, 0x1CB008u);
    ctx->pc = 0x1CB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB000u;
    // 0x1cb004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB640u, 0x1CB000u, 0x1CB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB008u;
label_1cb008:
    // 0x1cb008: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1cb00c: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cb010: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB010u;
    {
        const bool branch_taken_0x1cb010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb010) {
            ctx->pc = 0x1CB058u;
            goto label_1cb058;
        }
    }
    ctx->pc = 0x1CB018u;
    // 0x1cb018: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1cb018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cb01c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB01Cu;
    {
        const bool branch_taken_0x1cb01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB01Cu;
        // 0x1cb020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb01c) {
            ctx->pc = 0x1CB044u;
            goto label_1cb044;
        }
    }
    ctx->pc = 0x1CB024u;
    // 0x1cb024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb028: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb02c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB02Cu;
    SET_GPR_U32(ctx, 31, 0x1CB034u);
    ctx->pc = 0x1CB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB02Cu;
    // 0x1cb030: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB02Cu, 0x1CB034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB034u;
label_1cb034:
    // 0x1cb034: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB034u;
    SET_GPR_U32(ctx, 31, 0x1CB03Cu);
    ctx->pc = 0x1CB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB034u;
    // 0x1cb038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB034u, 0x1CB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB03Cu;
label_1cb03c:
    // 0x1cb03c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB03Cu;
    {
        const bool branch_taken_0x1cb03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB03Cu;
        // 0x1cb040: 0x8e030078  lw          $v1, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb03c) {
            ctx->pc = 0x1CB05Cu;
            goto label_1cb05c;
        }
    }
    ctx->pc = 0x1CB044u;
label_1cb044:
    // 0x1cb044: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb048: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB048u;
    SET_GPR_U32(ctx, 31, 0x1CB050u);
    ctx->pc = 0x1CB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB048u;
    // 0x1cb04c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB048u, 0x1CB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB050u;
label_1cb050:
    // 0x1cb050: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB050u;
    SET_GPR_U32(ctx, 31, 0x1CB058u);
    ctx->pc = 0x1CB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB050u;
    // 0x1cb054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB050u, 0x1CB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB058u;
label_1cb058:
    // 0x1cb058: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1cb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1cb05c:
    // 0x1cb05c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1cb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1cb060: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB060u;
    {
        const bool branch_taken_0x1cb060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB060u;
        // 0x1cb064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb060) {
            ctx->pc = 0x1CB0ACu;
            goto label_1cb0ac;
        }
    }
    ctx->pc = 0x1CB068u;
    // 0x1cb068: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1cb068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cb06c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB06Cu;
    {
        const bool branch_taken_0x1cb06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB06Cu;
        // 0x1cb070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb06c) {
            ctx->pc = 0x1CB094u;
            goto label_1cb094;
        }
    }
    ctx->pc = 0x1CB074u;
    // 0x1cb074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb078: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb07c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB07Cu;
    SET_GPR_U32(ctx, 31, 0x1CB084u);
    ctx->pc = 0x1CB080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB07Cu;
    // 0x1cb080: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB07Cu, 0x1CB084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB084u;
label_1cb084:
    // 0x1cb084: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB084u;
    SET_GPR_U32(ctx, 31, 0x1CB08Cu);
    ctx->pc = 0x1CB088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB084u;
    // 0x1cb088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB084u, 0x1CB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB08Cu;
label_1cb08c:
    // 0x1cb08c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB08Cu;
    {
        const bool branch_taken_0x1cb08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb08c) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CB094u;
label_1cb094:
    // 0x1cb094: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb098: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB098u;
    SET_GPR_U32(ctx, 31, 0x1CB0A0u);
    ctx->pc = 0x1CB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB098u;
    // 0x1cb09c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB098u, 0x1CB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0A0u;
label_1cb0a0:
    // 0x1cb0a0: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB0A0u;
    SET_GPR_U32(ctx, 31, 0x1CB0A8u);
    ctx->pc = 0x1CB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0A0u;
    // 0x1cb0a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB0A0u, 0x1CB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0A8u;
label_1cb0a8:
    // 0x1cb0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb0ac:
    // 0x1cb0ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb0b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB0B0u;
    SET_GPR_U32(ctx, 31, 0x1CB0B8u);
    ctx->pc = 0x1CB0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0B0u;
    // 0x1cb0b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB0B0u, 0x1CB0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0B8u;
label_1cb0b8:
    // 0x1cb0b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0bc: 0xc06eb30  jal         func_1BACC0
    ctx->pc = 0x1CB0BCu;
    SET_GPR_U32(ctx, 31, 0x1CB0C4u);
    ctx->pc = 0x1CB0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0BCu;
    // 0x1cb0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BACC0u, 0x1CB0BCu, 0x1CB0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0C4u;
label_1cb0c4:
    // 0x1cb0c4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cb0c8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb0d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb0d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb0e0: 0x0  nop
    ctx->pc = 0x1cb0e0u;
    // NOP
    // 0x1cb0e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb0e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb0ec: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1cb0f0: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cb0f4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1cb0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb0fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb100: 0x0  nop
    ctx->pc = 0x1cb100u;
    // NOP
    // 0x1cb104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb10c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB10Cu;
    SET_GPR_U32(ctx, 31, 0x1CB114u);
    ctx->pc = 0x1CB110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB10Cu;
    // 0x1cb110: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB10Cu, 0x1CB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB114u;
label_1cb114:
    // 0x1cb114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb118: 0xc06eb30  jal         func_1BACC0
    ctx->pc = 0x1CB118u;
    SET_GPR_U32(ctx, 31, 0x1CB120u);
    ctx->pc = 0x1CB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB118u;
    // 0x1cb11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BACC0u, 0x1CB118u, 0x1CB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB120u;
label_1cb120:
    // 0x1cb120: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1cb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1cb124: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb12c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb130: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1cb130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cb134: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb13c: 0x0  nop
    ctx->pc = 0x1cb13cu;
    // NOP
    // 0x1cb140: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb148: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1cb14c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1cb150: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1cb150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb154: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb158: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb15c: 0x0  nop
    ctx->pc = 0x1cb15cu;
    // NOP
    // 0x1cb160: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb164: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb168: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB168u;
    SET_GPR_U32(ctx, 31, 0x1CB170u);
    ctx->pc = 0x1CB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB168u;
    // 0x1cb16c: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB168u, 0x1CB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB170u;
label_1cb170:
    // 0x1cb170: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cb174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb178: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cb17c: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1cb17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1cb180: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1cb180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb184: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1cb184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1cb188: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cb188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cb18c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb190: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB190u;
    SET_GPR_U32(ctx, 31, 0x1CB198u);
    ctx->pc = 0x1CB194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB190u;
    // 0x1cb194: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB190u, 0x1CB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB198u;
label_1cb198:
    // 0x1cb198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb19c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb1a0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB1A0u;
    SET_GPR_U32(ctx, 31, 0x1CB1A8u);
    ctx->pc = 0x1CB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1A0u;
    // 0x1cb1a4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB1A0u, 0x1CB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1A8u;
label_1cb1a8:
    // 0x1cb1a8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1cb1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cb1ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cb1b4: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1cb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1cb1b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb1bc: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB1BCu;
    SET_GPR_U32(ctx, 31, 0x1CB1C4u);
    ctx->pc = 0x1CB1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1BCu;
    // 0x1cb1c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB1BCu, 0x1CB1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1C4u;
label_1cb1c4:
    // 0x1cb1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb1cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB1CCu;
    SET_GPR_U32(ctx, 31, 0x1CB1D4u);
    ctx->pc = 0x1CB1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1CCu;
    // 0x1cb1d0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB1CCu, 0x1CB1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1D4u;
label_1cb1d4:
    // 0x1cb1d4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1cb1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cb1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cb1e0: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1cb1e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb1e8: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB1E8u;
    SET_GPR_U32(ctx, 31, 0x1CB1F0u);
    ctx->pc = 0x1CB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1E8u;
    // 0x1cb1ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB1E8u, 0x1CB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1F0u;
label_1cb1f0:
    // 0x1cb1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb1f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB1F8u;
    SET_GPR_U32(ctx, 31, 0x1CB200u);
    ctx->pc = 0x1CB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1F8u;
    // 0x1cb1fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB1F8u, 0x1CB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB200u;
label_1cb200:
    // 0x1cb200: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cb204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb208: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cb208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cb20c: 0x24638020  addiu       $v1, $v1, -0x7FE0
    ctx->pc = 0x1cb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934560));
    // 0x1cb210: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1cb210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1cb214: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cb214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cb218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cb218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cb21c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cb220: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB220u;
    SET_GPR_U32(ctx, 31, 0x1CB228u);
    ctx->pc = 0x1CB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB220u;
    // 0x1cb224: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB220u, 0x1CB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB228u;
label_1cb228:
    // 0x1cb228: 0xc603006c  lwc1        $f3, 0x6C($s0)
    ctx->pc = 0x1cb228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb22c: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x1cb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
    // 0x1cb230: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x1cb230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb234: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x1cb234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb238: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1cb238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cb23c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x1cb23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb240: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1cb244: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1cb244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1cb248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb24c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cb24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cb250: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1cb250u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1cb254: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1cb254u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1cb258: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1cb25c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb260: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1cb260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cb264: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cb264u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1cb268: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x1cb268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1cb26c: 0x0  nop
    ctx->pc = 0x1cb26cu;
    // NOP
    // 0x1cb270: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb274: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1cb274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1cb278: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB278u;
    {
        const bool branch_taken_0x1cb278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb278) {
            ctx->pc = 0x1CB2BCu;
            goto label_1cb2bc;
        }
    }
    ctx->pc = 0x1CB280u;
    // 0x1cb280: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1CB280u;
    SET_GPR_U32(ctx, 31, 0x1CB288u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1CB280u, 0x1CB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB288u;
label_1cb288:
    // 0x1cb288: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x1cb288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cb28c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cb28cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb290: 0xc062930  jal         func_18A4C0
    ctx->pc = 0x1CB290u;
    SET_GPR_U32(ctx, 31, 0x1CB298u);
    ctx->pc = 0x1CB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB290u;
    // 0x1cb294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A4C0u, 0x1CB290u, 0x1CB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB298u;
label_1cb298:
    // 0x1cb298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb29c: 0xc062948  jal         func_18A520
    ctx->pc = 0x1CB29Cu;
    SET_GPR_U32(ctx, 31, 0x1CB2A4u);
    ctx->pc = 0x1CB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB29Cu;
    // 0x1cb2a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1CB29Cu, 0x1CB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2A4u;
label_1cb2a4:
    // 0x1cb2a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2a8: 0xc062994  jal         func_18A650
    ctx->pc = 0x1CB2A8u;
    SET_GPR_U32(ctx, 31, 0x1CB2B0u);
    ctx->pc = 0x1CB2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2A8u;
    // 0x1cb2ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1CB2A8u, 0x1CB2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2B0u;
label_1cb2b0:
    // 0x1cb2b0: 0x8203007c  lb          $v1, 0x7C($s0)
    ctx->pc = 0x1cb2b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cb2b4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cb2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cb2b8: 0xa023c7f4  sb          $v1, -0x380C($at)
    ctx->pc = 0x1cb2b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x22C7F4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F4u, _value); } while (0);
label_1cb2bc:
    // 0x1cb2bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cb2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cb2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2D0u;
        // 0x1cb2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB2D8u;
}
