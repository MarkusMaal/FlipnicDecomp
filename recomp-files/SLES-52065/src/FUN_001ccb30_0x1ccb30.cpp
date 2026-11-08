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

// Function: FUN_001ccb30
// Address: 0x1ccb30 - 0x1ccc48
void FUN_001ccb30_0x1ccb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ccb30_0x1ccb30");
#endif

    switch (ctx->pc) {
        case 0x1ccb68u: goto label_1ccb68;
        case 0x1ccb84u: goto label_1ccb84;
        case 0x1ccb8cu: goto label_1ccb8c;
        case 0x1ccb9cu: goto label_1ccb9c;
        case 0x1ccba4u: goto label_1ccba4;
        case 0x1ccbb0u: goto label_1ccbb0;
        case 0x1ccbd0u: goto label_1ccbd0;
        case 0x1ccbdcu: goto label_1ccbdc;
        case 0x1ccbf0u: goto label_1ccbf0;
        case 0x1ccbfcu: goto label_1ccbfc;
        case 0x1ccc08u: goto label_1ccc08;
        case 0x1ccc1cu: goto label_1ccc1c;
        case 0x1ccc28u: goto label_1ccc28;
        case 0x1ccc38u: goto label_1ccc38;
        default: break;
    }

    ctx->pc = 0x1ccb30u;

    // 0x1ccb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccb34: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ccb38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccb3c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1ccb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ccb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ccb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ccb44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccb44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb48: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1ccb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1ccb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb50: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1ccb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccb54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccb54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccb58: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ccb5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ccb5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb60: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CCB60u;
    SET_GPR_U32(ctx, 31, 0x1CCB68u);
    ctx->pc = 0x1CCB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB60u;
    // 0x1ccb64: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CCB60u, 0x1CCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB68u;
label_1ccb68:
    // 0x1ccb68: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ccb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ccb6c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ccb70: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCB70u;
    {
        const bool branch_taken_0x1ccb70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB70u;
        // 0x1ccb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb70) {
            ctx->pc = 0x1CCBA8u;
            goto label_1ccba8;
        }
    }
    ctx->pc = 0x1CCB78u;
    // 0x1ccb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb7c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCB7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCB84u);
    ctx->pc = 0x1CCB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB7Cu;
    // 0x1ccb80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCB7Cu, 0x1CCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB84u;
label_1ccb84:
    // 0x1ccb84: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CCB84u;
    SET_GPR_U32(ctx, 31, 0x1CCB8Cu);
    ctx->pc = 0x1CCB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB84u;
    // 0x1ccb88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CCB84u, 0x1CCB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB8Cu;
label_1ccb8c:
    // 0x1ccb8c: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ccb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ccb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb94: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCB94u;
    SET_GPR_U32(ctx, 31, 0x1CCB9Cu);
    ctx->pc = 0x1CCB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB94u;
    // 0x1ccb98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCB94u, 0x1CCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB9Cu;
label_1ccb9c:
    // 0x1ccb9c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CCBA4u);
    ctx->pc = 0x1CCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB9Cu;
    // 0x1ccba0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CCB9Cu, 0x1CCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBA4u;
label_1ccba4:
    // 0x1ccba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccba8:
    // 0x1ccba8: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CCBA8u;
    SET_GPR_U32(ctx, 31, 0x1CCBB0u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CCBA8u, 0x1CCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBB0u;
label_1ccbb0:
    // 0x1ccbb0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1ccbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ccbb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ccbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccbb8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCBB8u;
    {
        const bool branch_taken_0x1ccbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB8u;
        // 0x1ccbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbb8) {
            ctx->pc = 0x1CCBE4u;
            goto label_1ccbe4;
        }
    }
    ctx->pc = 0x1CCBC0u;
    // 0x1ccbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccbc8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCBC8u;
    SET_GPR_U32(ctx, 31, 0x1CCBD0u);
    ctx->pc = 0x1CCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBC8u;
    // 0x1ccbcc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCBC8u, 0x1CCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBD0u;
label_1ccbd0:
    // 0x1ccbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbd4: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CCBD4u;
    SET_GPR_U32(ctx, 31, 0x1CCBDCu);
    ctx->pc = 0x1CCBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBD4u;
    // 0x1ccbd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CCBD4u, 0x1CCBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBDCu;
label_1ccbdc:
    // 0x1ccbdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCBDCu;
    {
        const bool branch_taken_0x1ccbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBDCu;
        // 0x1ccbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbdc) {
            ctx->pc = 0x1CCC00u;
            goto label_1ccc00;
        }
    }
    ctx->pc = 0x1CCBE4u;
label_1ccbe4:
    // 0x1ccbe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ccbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccbe8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCBE8u;
    SET_GPR_U32(ctx, 31, 0x1CCBF0u);
    ctx->pc = 0x1CCBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBE8u;
    // 0x1ccbec: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCBE8u, 0x1CCBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBF0u;
label_1ccbf0:
    // 0x1ccbf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbf4: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CCBF4u;
    SET_GPR_U32(ctx, 31, 0x1CCBFCu);
    ctx->pc = 0x1CCBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBF4u;
    // 0x1ccbf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CCBF4u, 0x1CCBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBFCu;
label_1ccbfc:
    // 0x1ccbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc00:
    // 0x1ccc00: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CCC00u;
    SET_GPR_U32(ctx, 31, 0x1CCC08u);
    ctx->pc = 0x1CCC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC00u;
    // 0x1ccc04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CCC00u, 0x1CCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC08u;
label_1ccc08:
    // 0x1ccc08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCC08u;
    {
        const bool branch_taken_0x1ccc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC08u;
        // 0x1ccc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc08) {
            ctx->pc = 0x1CCC20u;
            goto label_1ccc20;
        }
    }
    ctx->pc = 0x1CCC10u;
    // 0x1ccc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc14: 0xc073314  jal         func_1CCC50
    ctx->pc = 0x1CCC14u;
    SET_GPR_U32(ctx, 31, 0x1CCC1Cu);
    ctx->pc = 0x1CCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC14u;
    // 0x1ccc18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCC50u, 0x1CCC14u, 0x1CCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC1Cu;
label_1ccc1c:
    // 0x1ccc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc20:
    // 0x1ccc20: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CCC20u;
    SET_GPR_U32(ctx, 31, 0x1CCC28u);
    ctx->pc = 0x1CCC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC20u;
    // 0x1ccc24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CCC20u, 0x1CCC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC28u;
label_1ccc28:
    // 0x1ccc28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC28u;
    {
        const bool branch_taken_0x1ccc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC28u;
        // 0x1ccc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc28) {
            ctx->pc = 0x1CCC38u;
            goto label_1ccc38;
        }
    }
    ctx->pc = 0x1CCC30u;
    // 0x1ccc30: 0xc073314  jal         func_1CCC50
    ctx->pc = 0x1CCC30u;
    SET_GPR_U32(ctx, 31, 0x1CCC38u);
    ctx->pc = 0x1CCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC30u;
    // 0x1ccc34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCC50u, 0x1CCC30u, 0x1CCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC38u;
label_1ccc38:
    // 0x1ccc38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccc3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ccc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccc40: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC40u;
        // 0x1ccc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCC48u;
}
