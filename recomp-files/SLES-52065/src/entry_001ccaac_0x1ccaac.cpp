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

// Function: entry_001ccaac
// Address: 0x1ccaac - 0x1ccb24
void entry_001ccaac_0x1ccaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccaac_0x1ccaac");
#endif

    switch (ctx->pc) {
        case 0x1ccabcu: goto label_1ccabc;
        case 0x1ccac4u: goto label_1ccac4;
        case 0x1ccad0u: goto label_1ccad0;
        case 0x1ccae4u: goto label_1ccae4;
        case 0x1ccaf8u: goto label_1ccaf8;
        case 0x1ccb0cu: goto label_1ccb0c;
        default: break;
    }

    ctx->pc = 0x1ccaacu;

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
