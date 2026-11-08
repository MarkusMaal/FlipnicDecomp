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

// Function: FUN_00135df0
// Address: 0x135df0 - 0x135eac
void FUN_00135df0_0x135df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135df0_0x135df0");
#endif

    switch (ctx->pc) {
        case 0x135df0u: goto label_135df0;
        case 0x135df4u: goto label_135df4;
        case 0x135df8u: goto label_135df8;
        case 0x135dfcu: goto label_135dfc;
        case 0x135e00u: goto label_135e00;
        case 0x135e04u: goto label_135e04;
        case 0x135e08u: goto label_135e08;
        case 0x135e0cu: goto label_135e0c;
        case 0x135e10u: goto label_135e10;
        case 0x135e14u: goto label_135e14;
        case 0x135e18u: goto label_135e18;
        case 0x135e1cu: goto label_135e1c;
        case 0x135e20u: goto label_135e20;
        case 0x135e24u: goto label_135e24;
        case 0x135e28u: goto label_135e28;
        case 0x135e2cu: goto label_135e2c;
        case 0x135e30u: goto label_135e30;
        case 0x135e34u: goto label_135e34;
        case 0x135e38u: goto label_135e38;
        case 0x135e3cu: goto label_135e3c;
        case 0x135e40u: goto label_135e40;
        case 0x135e44u: goto label_135e44;
        case 0x135e48u: goto label_135e48;
        case 0x135e4cu: goto label_135e4c;
        case 0x135e50u: goto label_135e50;
        case 0x135e54u: goto label_135e54;
        case 0x135e58u: goto label_135e58;
        case 0x135e5cu: goto label_135e5c;
        case 0x135e60u: goto label_135e60;
        case 0x135e64u: goto label_135e64;
        case 0x135e68u: goto label_135e68;
        case 0x135e6cu: goto label_135e6c;
        case 0x135e70u: goto label_135e70;
        case 0x135e74u: goto label_135e74;
        case 0x135e78u: goto label_135e78;
        case 0x135e7cu: goto label_135e7c;
        case 0x135e80u: goto label_135e80;
        case 0x135e84u: goto label_135e84;
        case 0x135e88u: goto label_135e88;
        case 0x135e8cu: goto label_135e8c;
        case 0x135e90u: goto label_135e90;
        case 0x135e94u: goto label_135e94;
        case 0x135e98u: goto label_135e98;
        case 0x135e9cu: goto label_135e9c;
        case 0x135ea0u: goto label_135ea0;
        case 0x135ea4u: goto label_135ea4;
        case 0x135ea8u: goto label_135ea8;
        default: break;
    }

    ctx->pc = 0x135df0u;

label_135df0:
    // 0x135df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_135df4:
    // 0x135df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_135df8:
    // 0x135df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_135dfc:
    // 0x135dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_135e00:
    // 0x135e00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x135e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135e04:
    // 0x135e04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135e08:
    // 0x135e08: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x135e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_135e0c:
    // 0x135e0c: 0x320f809  jalr        $t9
label_135e10:
    if (ctx->pc == 0x135E10u) {
        ctx->pc = 0x135E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E0Cu;
        // 0x135e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E14u;
        goto label_135e14;
    }
    ctx->pc = 0x135E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135E14u);
        ctx->pc = 0x135E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E0Cu;
        // 0x135e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E0Cu, 0x135E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135E14u;
label_135e14:
    // 0x135e14: 0xc04c554  jal         func_131550
label_135e18:
    if (ctx->pc == 0x135E18u) {
        ctx->pc = 0x135E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E14u;
        // 0x135e18: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E1Cu;
        goto label_135e1c;
    }
    ctx->pc = 0x135E14u;
    SET_GPR_U32(ctx, 31, 0x135E1Cu);
    ctx->pc = 0x135E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E14u;
    // 0x135e18: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135E14u, 0x135E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E1Cu;
label_135e1c:
    // 0x135e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135e20:
    // 0x135e20: 0xc04c550  jal         func_131540
label_135e24:
    if (ctx->pc == 0x135E24u) {
        ctx->pc = 0x135E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E20u;
        // 0x135e24: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E28u;
        goto label_135e28;
    }
    ctx->pc = 0x135E20u;
    SET_GPR_U32(ctx, 31, 0x135E28u);
    ctx->pc = 0x135E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E20u;
    // 0x135e24: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135E20u, 0x135E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E28u;
label_135e28:
    // 0x135e28: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x135e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_135e2c:
    // 0x135e2c: 0xc04c554  jal         func_131550
label_135e30:
    if (ctx->pc == 0x135E30u) {
        ctx->pc = 0x135E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E2Cu;
        // 0x135e30: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E34u;
        goto label_135e34;
    }
    ctx->pc = 0x135E2Cu;
    SET_GPR_U32(ctx, 31, 0x135E34u);
    ctx->pc = 0x135E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E2Cu;
    // 0x135e30: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135E2Cu, 0x135E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E34u;
label_135e34:
    // 0x135e34: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135e38:
    // 0x135e38: 0xc04c54c  jal         func_131530
label_135e3c:
    if (ctx->pc == 0x135E3Cu) {
        ctx->pc = 0x135E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E38u;
        // 0x135e3c: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E40u;
        goto label_135e40;
    }
    ctx->pc = 0x135E38u;
    SET_GPR_U32(ctx, 31, 0x135E40u);
    ctx->pc = 0x135E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E38u;
    // 0x135e3c: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135E38u, 0x135E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E40u;
label_135e40:
    // 0x135e40: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x135e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_135e44:
    // 0x135e44: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x135e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_135e48:
    // 0x135e48: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x135e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_135e4c:
    // 0x135e4c: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x135e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_135e50:
    // 0x135e50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135e54:
    // 0x135e54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x135e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_135e58:
    // 0x135e58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135e5c:
    // 0x135e5c: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_135e60:
    if (ctx->pc == 0x135E60u) {
        ctx->pc = 0x135E64u;
        goto label_135e64;
    }
    ctx->pc = 0x135E5Cu;
    {
        const bool branch_taken_0x135e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x135e5c) {
            ctx->pc = 0x135E94u;
            goto label_135e94;
        }
    }
    ctx->pc = 0x135E64u;
label_135e64:
    // 0x135e64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135e68:
    // 0x135e68: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135e6c:
    // 0x135e6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135e70:
    // 0x135e70: 0x8f3900fc  lw          $t9, 0xFC($t9)
    ctx->pc = 0x135e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 252)));
label_135e74:
    // 0x135e74: 0x320f809  jalr        $t9
label_135e78:
    if (ctx->pc == 0x135E78u) {
        ctx->pc = 0x135E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E74u;
        // 0x135e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E7Cu;
        goto label_135e7c;
    }
    ctx->pc = 0x135E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135E7Cu);
        ctx->pc = 0x135E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E74u;
        // 0x135e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E74u, 0x135E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135E7Cu;
label_135e7c:
    // 0x135e7c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135e80:
    // 0x135e80: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135e84:
    // 0x135e84: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135e88:
    // 0x135e88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135e8c:
    // 0x135e8c: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135e90:
    if (ctx->pc == 0x135E90u) {
        ctx->pc = 0x135E94u;
        goto label_135e94;
    }
    ctx->pc = 0x135E8Cu;
    {
        const bool branch_taken_0x135e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135e8c) {
            ctx->pc = 0x135E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135e64;
        }
    }
    ctx->pc = 0x135E94u;
label_135e94:
    // 0x135e94: 0x0  nop
    ctx->pc = 0x135e94u;
    // NOP
label_135e98:
    // 0x135e98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_135e9c:
    // 0x135e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_135ea0:
    // 0x135ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135ea4:
    // 0x135ea4: 0x3e00008  jr          $ra
label_135ea8:
    if (ctx->pc == 0x135EA8u) {
        ctx->pc = 0x135EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA4u;
        // 0x135ea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EACu;
        goto label_fallthrough_0x135ea4;
    }
    ctx->pc = 0x135EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA4u;
        // 0x135ea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135ea4:
    ctx->pc = 0x135EACu;
}
