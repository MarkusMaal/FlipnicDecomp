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

// Function: FUN_0013ee10
// Address: 0x13ee10 - 0x13ee90
void FUN_0013ee10_0x13ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ee10_0x13ee10");
#endif

    switch (ctx->pc) {
        case 0x13ee10u: goto label_13ee10;
        case 0x13ee14u: goto label_13ee14;
        case 0x13ee18u: goto label_13ee18;
        case 0x13ee1cu: goto label_13ee1c;
        case 0x13ee20u: goto label_13ee20;
        case 0x13ee24u: goto label_13ee24;
        case 0x13ee28u: goto label_13ee28;
        case 0x13ee2cu: goto label_13ee2c;
        case 0x13ee30u: goto label_13ee30;
        case 0x13ee34u: goto label_13ee34;
        case 0x13ee38u: goto label_13ee38;
        case 0x13ee3cu: goto label_13ee3c;
        case 0x13ee40u: goto label_13ee40;
        case 0x13ee44u: goto label_13ee44;
        case 0x13ee48u: goto label_13ee48;
        case 0x13ee4cu: goto label_13ee4c;
        case 0x13ee50u: goto label_13ee50;
        case 0x13ee54u: goto label_13ee54;
        case 0x13ee58u: goto label_13ee58;
        case 0x13ee5cu: goto label_13ee5c;
        case 0x13ee60u: goto label_13ee60;
        case 0x13ee64u: goto label_13ee64;
        case 0x13ee68u: goto label_13ee68;
        case 0x13ee6cu: goto label_13ee6c;
        case 0x13ee70u: goto label_13ee70;
        case 0x13ee74u: goto label_13ee74;
        case 0x13ee78u: goto label_13ee78;
        case 0x13ee7cu: goto label_13ee7c;
        case 0x13ee80u: goto label_13ee80;
        case 0x13ee84u: goto label_13ee84;
        case 0x13ee88u: goto label_13ee88;
        case 0x13ee8cu: goto label_13ee8c;
        default: break;
    }

    ctx->pc = 0x13ee10u;

label_13ee10:
    // 0x13ee10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_13ee14:
    // 0x13ee14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13ee18:
    // 0x13ee18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13ee1c:
    // 0x13ee1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13ee20:
    // 0x13ee20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13ee24:
    // 0x13ee24: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13ee24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13ee28:
    // 0x13ee28: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_13ee2c:
    if (ctx->pc == 0x13EE2Cu) {
        ctx->pc = 0x13EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE28u;
        // 0x13ee2c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE30u;
        goto label_13ee30;
    }
    ctx->pc = 0x13EE28u;
    {
        const bool branch_taken_0x13ee28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE28u;
        // 0x13ee2c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee28) {
            ctx->pc = 0x13EE70u;
            goto label_13ee70;
        }
    }
    ctx->pc = 0x13EE30u;
label_13ee30:
    // 0x13ee30: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x13ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_13ee34:
    // 0x13ee34: 0x8c910118  lw          $s1, 0x118($a0)
    ctx->pc = 0x13ee34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_13ee38:
    // 0x13ee38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13ee3c:
    // 0x13ee3c: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x13ee3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_13ee40:
    // 0x13ee40: 0x12300009  beq         $s1, $s0, . + 4 + (0x9 << 2)
label_13ee44:
    if (ctx->pc == 0x13EE44u) {
        ctx->pc = 0x13EE48u;
        goto label_13ee48;
    }
    ctx->pc = 0x13EE40u;
    {
        const bool branch_taken_0x13ee40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x13ee40) {
            ctx->pc = 0x13EE68u;
            goto label_13ee68;
        }
    }
    ctx->pc = 0x13EE48u;
label_13ee48:
    // 0x13ee48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13ee4c:
    // 0x13ee4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ee4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ee50:
    // 0x13ee50: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x13ee50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_13ee54:
    // 0x13ee54: 0x320f809  jalr        $t9
label_13ee58:
    if (ctx->pc == 0x13EE58u) {
        ctx->pc = 0x13EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE54u;
        // 0x13ee58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE5Cu;
        goto label_13ee5c;
    }
    ctx->pc = 0x13EE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13EE5Cu);
        ctx->pc = 0x13EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE54u;
        // 0x13ee58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE54u, 0x13EE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EE5Cu;
label_13ee5c:
    // 0x13ee5c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_13ee60:
    // 0x13ee60: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_13ee64:
    if (ctx->pc == 0x13EE64u) {
        ctx->pc = 0x13EE68u;
        goto label_13ee68;
    }
    ctx->pc = 0x13EE60u;
    {
        const bool branch_taken_0x13ee60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ee60) {
            ctx->pc = 0x13EE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ee48;
        }
    }
    ctx->pc = 0x13EE68u;
label_13ee68:
    // 0x13ee68: 0x10000004  b           . + 4 + (0x4 << 2)
label_13ee6c:
    if (ctx->pc == 0x13EE6Cu) {
        ctx->pc = 0x13EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE68u;
        // 0x13ee6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE70u;
        goto label_13ee70;
    }
    ctx->pc = 0x13EE68u;
    {
        const bool branch_taken_0x13ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE68u;
        // 0x13ee6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee68) {
            ctx->pc = 0x13EE7Cu;
            goto label_13ee7c;
        }
    }
    ctx->pc = 0x13EE70u;
label_13ee70:
    // 0x13ee70: 0xc050c88  jal         func_143220
label_13ee74:
    if (ctx->pc == 0x13EE74u) {
        ctx->pc = 0x13EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE70u;
        // 0x13ee74: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE78u;
        goto label_13ee78;
    }
    ctx->pc = 0x13EE70u;
    SET_GPR_U32(ctx, 31, 0x13EE78u);
    ctx->pc = 0x13EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE70u;
    // 0x13ee74: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143220u, 0x13EE70u, 0x13EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE78u;
label_13ee78:
    // 0x13ee78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13ee7c:
    // 0x13ee7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ee7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ee80:
    // 0x13ee80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ee80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ee84:
    // 0x13ee84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ee84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ee88:
    // 0x13ee88: 0x3e00008  jr          $ra
label_13ee8c:
    if (ctx->pc == 0x13EE8Cu) {
        ctx->pc = 0x13EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE88u;
        // 0x13ee8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE90u;
        goto label_fallthrough_0x13ee88;
    }
    ctx->pc = 0x13EE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE88u;
        // 0x13ee8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ee88:
    ctx->pc = 0x13EE90u;
}
