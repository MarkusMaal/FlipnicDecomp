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

// Function: FUN_0012da00
// Address: 0x12da00 - 0x12daf4
void FUN_0012da00_0x12da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012da00_0x12da00");
#endif

    switch (ctx->pc) {
        case 0x12da1cu: goto label_12da1c;
        case 0x12da34u: goto label_12da34;
        case 0x12da64u: goto label_12da64;
        case 0x12da70u: goto label_12da70;
        case 0x12da80u: goto label_12da80;
        case 0x12da90u: goto label_12da90;
        case 0x12daa4u: goto label_12daa4;
        case 0x12dab0u: goto label_12dab0;
        case 0x12dab8u: goto label_12dab8;
        case 0x12dac4u: goto label_12dac4;
        default: break;
    }

    ctx->pc = 0x12da00u;

    // 0x12da00: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x12da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x12da04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12da08: 0x838284a0  lb          $v0, -0x7B60($gp)
    ctx->pc = 0x12da08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935712)));
    // 0x12da0c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12DA0Cu;
    {
        const bool branch_taken_0x12da0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA0Cu;
        // 0x12da10: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da0c) {
            ctx->pc = 0x12DA3Cu;
            goto label_12da3c;
        }
    }
    ctx->pc = 0x12DA14u;
    // 0x12da14: 0xc04698c  jal         func_11A630
    ctx->pc = 0x12DA14u;
    SET_GPR_U32(ctx, 31, 0x12DA1Cu);
    ctx->pc = 0x12DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA14u;
    // 0x12da18: 0x248430b0  addiu       $a0, $a0, 0x30B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A630u, 0x12DA14u, 0x12DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA1Cu;
label_12da1c:
    // 0x12da1c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x12da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x12da20: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x12da20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x12da24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12da24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da28: 0x24a5a8a0  addiu       $a1, $a1, -0x5760
    ctx->pc = 0x12da28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944928));
    // 0x12da2c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x12DA2Cu;
    SET_GPR_U32(ctx, 31, 0x12DA34u);
    ctx->pc = 0x12DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA2Cu;
    // 0x12da30: 0x24c630a0  addiu       $a2, $a2, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x12DA2Cu, 0x12DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA34u;
label_12da34:
    // 0x12da34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da38: 0xa38284a0  sb          $v0, -0x7B60($gp)
    ctx->pc = 0x12da38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935712), (uint8_t)GPR_U32(ctx, 2));
label_12da3c:
    // 0x12da3c: 0x838284a8  lb          $v0, -0x7B58($gp)
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x12da40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DA40u;
    {
        const bool branch_taken_0x12da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA40u;
        // 0x12da44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da40) {
            ctx->pc = 0x12DA50u;
            goto label_12da50;
        }
    }
    ctx->pc = 0x12DA48u;
    // 0x12da48: 0xa38084a4  sb          $zero, -0x7B5C($gp)
    ctx->pc = 0x12da48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935716), (uint8_t)GPR_U32(ctx, 0));
    // 0x12da4c: 0xa38284a8  sb          $v0, -0x7B58($gp)
    ctx->pc = 0x12da4cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935720), (uint8_t)GPR_U32(ctx, 2));
label_12da50:
    // 0x12da50: 0x938284a4  lbu         $v0, -0x7B5C($gp)
    ctx->pc = 0x12da50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935716)));
    // 0x12da54: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12DA54u;
    {
        const bool branch_taken_0x12da54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12da54) {
            ctx->pc = 0x12DAE0u;
            goto label_12dae0;
        }
    }
    ctx->pc = 0x12DA5Cu;
    // 0x12da5c: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x12DA5Cu;
    SET_GPR_U32(ctx, 31, 0x12DA64u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x12DA5Cu, 0x12DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA64u;
label_12da64:
    // 0x12da64: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x12da68: 0xc080702  jal         func_201C08
    ctx->pc = 0x12DA68u;
    SET_GPR_U32(ctx, 31, 0x12DA70u);
    ctx->pc = 0x12DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA68u;
    // 0x12da6c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12DA68u, 0x12DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA70u;
label_12da70:
    // 0x12da70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12da74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12da78: 0xc080664  jal         func_201990
    ctx->pc = 0x12DA78u;
    SET_GPR_U32(ctx, 31, 0x12DA80u);
    ctx->pc = 0x12DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA78u;
    // 0x12da7c: 0x24a5ec88  addiu       $a1, $a1, -0x1378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x12DA78u, 0x12DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA80u;
label_12da80:
    // 0x12da80: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12da80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12da84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12da88: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x12DA88u;
    SET_GPR_U32(ctx, 31, 0x12DA90u);
    ctx->pc = 0x12DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA88u;
    // 0x12da8c: 0x248430b0  addiu       $a0, $a0, 0x30B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x12DA88u, 0x12DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA90u;
label_12da90:
    // 0x12da90: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12da94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12da98: 0x248430b0  addiu       $a0, $a0, 0x30B0
    ctx->pc = 0x12da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    // 0x12da9c: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x12DA9Cu;
    SET_GPR_U32(ctx, 31, 0x12DAA4u);
    ctx->pc = 0x12DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA9Cu;
    // 0x12daa0: 0x24a5ec98  addiu       $a1, $a1, -0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x12DA9Cu, 0x12DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAA4u;
label_12daa4:
    // 0x12daa4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12daa8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x12DAA8u;
    SET_GPR_U32(ctx, 31, 0x12DAB0u);
    ctx->pc = 0x12DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAA8u;
    // 0x12daac: 0x248430b0  addiu       $a0, $a0, 0x30B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x12DAA8u, 0x12DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAB0u;
label_12dab0:
    // 0x12dab0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DAB0u;
    {
        const bool branch_taken_0x12dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dab0) {
            ctx->pc = 0x12DAD4u;
            goto label_12dad4;
        }
    }
    ctx->pc = 0x12DAB8u;
label_12dab8:
    // 0x12dab8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12dabc: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x12DABCu;
    SET_GPR_U32(ctx, 31, 0x12DAC4u);
    ctx->pc = 0x12DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DABCu;
    // 0x12dac0: 0x248430b0  addiu       $a0, $a0, 0x30B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x12DABCu, 0x12DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAC4u;
label_12dac4:
    // 0x12dac4: 0x0  nop
    ctx->pc = 0x12dac4u;
    // NOP
    // 0x12dac8: 0x0  nop
    ctx->pc = 0x12dac8u;
    // NOP
    // 0x12dacc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DACCu;
    {
        const bool branch_taken_0x12dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dacc) {
            ctx->pc = 0x12DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dab8;
        }
    }
    ctx->pc = 0x12DAD4u;
label_12dad4:
    // 0x12dad4: 0x0  nop
    ctx->pc = 0x12dad4u;
    // NOP
    // 0x12dad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dadc: 0xa38284a4  sb          $v0, -0x7B5C($gp)
    ctx->pc = 0x12dadcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935716), (uint8_t)GPR_U32(ctx, 2));
label_12dae0:
    // 0x12dae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12dae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dae4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12dae8: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x12daec: 0x3e00008  jr          $ra
    ctx->pc = 0x12DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAECu;
        // 0x12daf0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DAF4u;
}
