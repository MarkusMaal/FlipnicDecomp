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

// Function: FUN_00121d10
// Address: 0x121d10 - 0x121dc8
void FUN_00121d10_0x121d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121d10_0x121d10");
#endif

    switch (ctx->pc) {
        case 0x121d10u: goto label_121d10;
        case 0x121d14u: goto label_121d14;
        case 0x121d18u: goto label_121d18;
        case 0x121d1cu: goto label_121d1c;
        case 0x121d20u: goto label_121d20;
        case 0x121d24u: goto label_121d24;
        case 0x121d28u: goto label_121d28;
        case 0x121d2cu: goto label_121d2c;
        case 0x121d30u: goto label_121d30;
        case 0x121d34u: goto label_121d34;
        case 0x121d38u: goto label_121d38;
        case 0x121d3cu: goto label_121d3c;
        case 0x121d40u: goto label_121d40;
        case 0x121d44u: goto label_121d44;
        case 0x121d48u: goto label_121d48;
        case 0x121d4cu: goto label_121d4c;
        case 0x121d50u: goto label_121d50;
        case 0x121d54u: goto label_121d54;
        case 0x121d58u: goto label_121d58;
        case 0x121d5cu: goto label_121d5c;
        case 0x121d60u: goto label_121d60;
        case 0x121d64u: goto label_121d64;
        case 0x121d68u: goto label_121d68;
        case 0x121d6cu: goto label_121d6c;
        case 0x121d70u: goto label_121d70;
        case 0x121d74u: goto label_121d74;
        case 0x121d78u: goto label_121d78;
        case 0x121d7cu: goto label_121d7c;
        case 0x121d80u: goto label_121d80;
        case 0x121d84u: goto label_121d84;
        case 0x121d88u: goto label_121d88;
        case 0x121d8cu: goto label_121d8c;
        case 0x121d90u: goto label_121d90;
        case 0x121d94u: goto label_121d94;
        case 0x121d98u: goto label_121d98;
        case 0x121d9cu: goto label_121d9c;
        case 0x121da0u: goto label_121da0;
        case 0x121da4u: goto label_121da4;
        case 0x121da8u: goto label_121da8;
        case 0x121dacu: goto label_121dac;
        case 0x121db0u: goto label_121db0;
        case 0x121db4u: goto label_121db4;
        case 0x121db8u: goto label_121db8;
        case 0x121dbcu: goto label_121dbc;
        case 0x121dc0u: goto label_121dc0;
        case 0x121dc4u: goto label_121dc4;
        default: break;
    }

    ctx->pc = 0x121d10u;

label_121d10:
    // 0x121d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x121d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_121d14:
    // 0x121d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_121d18:
    // 0x121d18: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x121d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_121d1c:
    // 0x121d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_121d20:
    // 0x121d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_121d24:
    // 0x121d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121d28:
    // 0x121d28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121d2c:
    // 0x121d2c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x121d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_121d30:
    // 0x121d30: 0xc04889c  jal         func_122270
label_121d34:
    if (ctx->pc == 0x121D34u) {
        ctx->pc = 0x121D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D30u;
        // 0x121d34: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D38u;
        goto label_121d38;
    }
    ctx->pc = 0x121D30u;
    SET_GPR_U32(ctx, 31, 0x121D38u);
    ctx->pc = 0x121D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D30u;
    // 0x121d34: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x121D30u, 0x121D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D38u;
label_121d38:
    // 0x121d38: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x121d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_121d3c:
    // 0x121d3c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x121d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_121d40:
    // 0x121d40: 0xc048834  jal         func_1220D0
label_121d44:
    if (ctx->pc == 0x121D44u) {
        ctx->pc = 0x121D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D40u;
        // 0x121d44: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D48u;
        goto label_121d48;
    }
    ctx->pc = 0x121D40u;
    SET_GPR_U32(ctx, 31, 0x121D48u);
    ctx->pc = 0x121D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D40u;
    // 0x121d44: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1220D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1220D0u, 0x121D40u, 0x121D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D48u;
label_121d48:
    // 0x121d48: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x121d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_121d4c:
    // 0x121d4c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x121d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_121d50:
    // 0x121d50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x121d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121d54:
    // 0x121d54: 0xc04619c  jal         func_118670
label_121d58:
    if (ctx->pc == 0x121D58u) {
        ctx->pc = 0x121D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D54u;
        // 0x121d58: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D5Cu;
        goto label_121d5c;
    }
    ctx->pc = 0x121D54u;
    SET_GPR_U32(ctx, 31, 0x121D5Cu);
    ctx->pc = 0x121D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D54u;
    // 0x121d58: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121D54u, 0x121D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D5Cu;
label_121d5c:
    // 0x121d5c: 0xc048604  jal         func_121810
label_121d60:
    if (ctx->pc == 0x121D60u) {
        ctx->pc = 0x121D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D5Cu;
        // 0x121d60: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D64u;
        goto label_121d64;
    }
    ctx->pc = 0x121D5Cu;
    SET_GPR_U32(ctx, 31, 0x121D64u);
    ctx->pc = 0x121D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D5Cu;
    // 0x121d60: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121810u, 0x121D5Cu, 0x121D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D64u;
label_121d64:
    // 0x121d64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x121d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_121d68:
    // 0x121d68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_121d6c:
    if (ctx->pc == 0x121D6Cu) {
        ctx->pc = 0x121D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D68u;
        // 0x121d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D70u;
        goto label_121d70;
    }
    ctx->pc = 0x121D68u;
    {
        const bool branch_taken_0x121d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x121D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D68u;
        // 0x121d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d68) {
            ctx->pc = 0x121D78u;
            goto label_121d78;
        }
    }
    ctx->pc = 0x121D70u;
label_121d70:
    // 0x121d70: 0x10000010  b           . + 4 + (0x10 << 2)
label_121d74:
    if (ctx->pc == 0x121D74u) {
        ctx->pc = 0x121D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D70u;
        // 0x121d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D78u;
        goto label_121d78;
    }
    ctx->pc = 0x121D70u;
    {
        const bool branch_taken_0x121d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D70u;
        // 0x121d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d70) {
            ctx->pc = 0x121DB4u;
            goto label_121db4;
        }
    }
    ctx->pc = 0x121D78u;
label_121d78:
    // 0x121d78: 0xc049274  jal         func_1249D0
label_121d7c:
    if (ctx->pc == 0x121D7Cu) {
        ctx->pc = 0x121D80u;
        goto label_121d80;
    }
    ctx->pc = 0x121D78u;
    SET_GPR_U32(ctx, 31, 0x121D80u);
    ctx->pc = 0x1249D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249D0u, 0x121D78u, 0x121D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D80u;
label_121d80:
    // 0x121d80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_121d84:
    if (ctx->pc == 0x121D84u) {
        ctx->pc = 0x121D88u;
        goto label_121d88;
    }
    ctx->pc = 0x121D80u;
    {
        const bool branch_taken_0x121d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121d80) {
            ctx->pc = 0x121DB0u;
            goto label_121db0;
        }
    }
    ctx->pc = 0x121D88u;
label_121d88:
    // 0x121d88: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_121d8c:
    if (ctx->pc == 0x121D8Cu) {
        ctx->pc = 0x121D90u;
        goto label_121d90;
    }
    ctx->pc = 0x121D88u;
    {
        const bool branch_taken_0x121d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d88) {
            ctx->pc = 0x121DA4u;
            goto label_121da4;
        }
    }
    ctx->pc = 0x121D90u;
label_121d90:
    // 0x121d90: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121d94:
    // 0x121d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121d98:
    // 0x121d98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x121d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_121d9c:
    // 0x121d9c: 0x320f809  jalr        $t9
label_121da0:
    if (ctx->pc == 0x121DA0u) {
        ctx->pc = 0x121DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D9Cu;
        // 0x121da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DA4u;
        goto label_121da4;
    }
    ctx->pc = 0x121D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121DA4u);
        ctx->pc = 0x121DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D9Cu;
        // 0x121da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D9Cu, 0x121DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121DA4u;
label_121da4:
    // 0x121da4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x121da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_121da8:
    // 0x121da8: 0xc048a20  jal         func_122880
label_121dac:
    if (ctx->pc == 0x121DACu) {
        ctx->pc = 0x121DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DA8u;
        // 0x121dac: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DB0u;
        goto label_121db0;
    }
    ctx->pc = 0x121DA8u;
    SET_GPR_U32(ctx, 31, 0x121DB0u);
    ctx->pc = 0x121DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DA8u;
    // 0x121dac: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122880u, 0x121DA8u, 0x121DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DB0u;
label_121db0:
    // 0x121db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121db4:
    // 0x121db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_121db8:
    // 0x121db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_121dbc:
    // 0x121dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_121dc0:
    // 0x121dc0: 0x3e00008  jr          $ra
label_121dc4:
    if (ctx->pc == 0x121DC4u) {
        ctx->pc = 0x121DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DC0u;
        // 0x121dc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121DC8u;
        goto label_fallthrough_0x121dc0;
    }
    ctx->pc = 0x121DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DC0u;
        // 0x121dc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x121dc0:
    ctx->pc = 0x121DC8u;
}
