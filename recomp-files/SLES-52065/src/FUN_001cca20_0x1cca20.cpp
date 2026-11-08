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

// Function: FUN_001cca20
// Address: 0x1cca20 - 0x1ccb24
void FUN_001cca20_0x1cca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cca20_0x1cca20");
#endif

    switch (ctx->pc) {
        case 0x1cca44u: goto label_1cca44;
        case 0x1cca50u: goto label_1cca50;
        case 0x1cca64u: goto label_1cca64;
        case 0x1cca74u: goto label_1cca74;
        case 0x1cca7cu: goto label_1cca7c;
        case 0x1ccabcu: goto label_1ccabc;
        case 0x1ccac4u: goto label_1ccac4;
        case 0x1ccad0u: goto label_1ccad0;
        case 0x1ccae4u: goto label_1ccae4;
        case 0x1ccaf8u: goto label_1ccaf8;
        case 0x1ccb0cu: goto label_1ccb0c;
        default: break;
    }

    ctx->pc = 0x1cca20u;

    // 0x1cca20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cca24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cca28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cca2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cca30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cca30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cca38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cca38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CCA3Cu;
    {
        const bool branch_taken_0x1cca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA3Cu;
        // 0x1cca40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca3c) {
            ctx->pc = 0x1CCA84u;
            goto label_1cca84;
        }
    }
    ctx->pc = 0x1CCA44u;
label_1cca44:
    // 0x1cca44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cca44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cca48: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCA48u;
    SET_GPR_U32(ctx, 31, 0x1CCA50u);
    ctx->pc = 0x1CCA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA48u;
    // 0x1cca4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCA48u, 0x1CCA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA50u;
label_1cca50:
    // 0x1cca50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca54: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cca58: 0x24428460  addiu       $v0, $v0, -0x7BA0
    ctx->pc = 0x1cca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x1cca5c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CCA5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCA64u);
    ctx->pc = 0x1CCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA5Cu;
    // 0x1cca60: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CCA5Cu, 0x1CCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA64u;
label_1cca64:
    // 0x1cca64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cca64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cca6c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCA6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCA74u);
    ctx->pc = 0x1CCA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA6Cu;
    // 0x1cca70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCA6Cu, 0x1CCA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA74u;
label_1cca74:
    // 0x1cca74: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CCA74u;
    SET_GPR_U32(ctx, 31, 0x1CCA7Cu);
    ctx->pc = 0x1CCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA74u;
    // 0x1cca78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CCA74u, 0x1CCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA7Cu;
label_1cca7c:
    // 0x1cca7c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1cca7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cca80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cca80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cca84:
    // 0x1cca84: 0x0  nop
    ctx->pc = 0x1cca84u;
    // NOP
    // 0x1cca88: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x1cca88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cca8c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CCA8Cu;
    {
        const bool branch_taken_0x1cca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA8Cu;
        // 0x1cca90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca8c) {
            ctx->pc = 0x1CCA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cca44;
        }
    }
    ctx->pc = 0x1CCA94u;
    // 0x1cca94: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1cca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1cca98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cca9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCA9Cu;
    {
        const bool branch_taken_0x1cca9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cca9c) {
            ctx->pc = 0x1CCAACu;
            goto label_1ccaac;
        }
    }
    ctx->pc = 0x1CCAA4u;
    // 0x1ccaa4: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1ccaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x1ccaa8: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x1ccaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_1ccaac:
    // 0x1ccaac: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x1ccaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ccab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccab4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCAB4u;
    SET_GPR_U32(ctx, 31, 0x1CCABCu);
    ctx->pc = 0x1CCAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAB4u;
    // 0x1ccab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCAB4u, 0x1CCABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCABCu;
label_1ccabc:
    // 0x1ccabc: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CCABCu;
    SET_GPR_U32(ctx, 31, 0x1CCAC4u);
    ctx->pc = 0x1CCAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCABCu;
    // 0x1ccac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CCABCu, 0x1CCAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAC4u;
label_1ccac4:
    // 0x1ccac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccac8: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CCAC8u;
    SET_GPR_U32(ctx, 31, 0x1CCAD0u);
    ctx->pc = 0x1CCACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAC8u;
    // 0x1ccacc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CCAC8u, 0x1CCAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAD0u;
label_1ccad0:
    // 0x1ccad0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccad8: 0x24a58110  addiu       $a1, $a1, -0x7EF0
    ctx->pc = 0x1ccad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934800));
    // 0x1ccadc: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CCADCu;
    SET_GPR_U32(ctx, 31, 0x1CCAE4u);
    ctx->pc = 0x1CCAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCADCu;
    // 0x1ccae0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CCADCu, 0x1CCAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAE4u;
label_1ccae4:
    // 0x1ccae4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccaec: 0x24a58230  addiu       $a1, $a1, -0x7DD0
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935088));
    // 0x1ccaf0: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CCAF0u;
    SET_GPR_U32(ctx, 31, 0x1CCAF8u);
    ctx->pc = 0x1CCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAF0u;
    // 0x1ccaf4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CCAF0u, 0x1CCAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAF8u;
label_1ccaf8:
    // 0x1ccaf8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccafc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb00: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x1ccb04: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CCB04u;
    SET_GPR_U32(ctx, 31, 0x1CCB0Cu);
    ctx->pc = 0x1CCB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB04u;
    // 0x1ccb08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CCB04u, 0x1CCB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB0Cu;
label_1ccb0c:
    // 0x1ccb0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ccb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ccb10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ccb10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccb14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ccb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccb18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ccb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB1Cu;
        // 0x1ccb20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCB24u;
}
