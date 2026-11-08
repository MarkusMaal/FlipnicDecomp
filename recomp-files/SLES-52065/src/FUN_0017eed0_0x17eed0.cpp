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

// Function: FUN_0017eed0
// Address: 0x17eed0 - 0x17ef88
void FUN_0017eed0_0x17eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017eed0_0x17eed0");
#endif

    switch (ctx->pc) {
        case 0x17eed0u: goto label_17eed0;
        case 0x17eed4u: goto label_17eed4;
        case 0x17eed8u: goto label_17eed8;
        case 0x17eedcu: goto label_17eedc;
        case 0x17eee0u: goto label_17eee0;
        case 0x17eee4u: goto label_17eee4;
        case 0x17eee8u: goto label_17eee8;
        case 0x17eeecu: goto label_17eeec;
        case 0x17eef0u: goto label_17eef0;
        case 0x17eef4u: goto label_17eef4;
        case 0x17eef8u: goto label_17eef8;
        case 0x17eefcu: goto label_17eefc;
        case 0x17ef00u: goto label_17ef00;
        case 0x17ef04u: goto label_17ef04;
        case 0x17ef08u: goto label_17ef08;
        case 0x17ef0cu: goto label_17ef0c;
        case 0x17ef10u: goto label_17ef10;
        case 0x17ef14u: goto label_17ef14;
        case 0x17ef18u: goto label_17ef18;
        case 0x17ef1cu: goto label_17ef1c;
        case 0x17ef20u: goto label_17ef20;
        case 0x17ef24u: goto label_17ef24;
        case 0x17ef28u: goto label_17ef28;
        case 0x17ef2cu: goto label_17ef2c;
        case 0x17ef30u: goto label_17ef30;
        case 0x17ef34u: goto label_17ef34;
        case 0x17ef38u: goto label_17ef38;
        case 0x17ef3cu: goto label_17ef3c;
        case 0x17ef40u: goto label_17ef40;
        case 0x17ef44u: goto label_17ef44;
        case 0x17ef48u: goto label_17ef48;
        case 0x17ef4cu: goto label_17ef4c;
        case 0x17ef50u: goto label_17ef50;
        case 0x17ef54u: goto label_17ef54;
        case 0x17ef58u: goto label_17ef58;
        case 0x17ef5cu: goto label_17ef5c;
        case 0x17ef60u: goto label_17ef60;
        case 0x17ef64u: goto label_17ef64;
        case 0x17ef68u: goto label_17ef68;
        case 0x17ef6cu: goto label_17ef6c;
        case 0x17ef70u: goto label_17ef70;
        case 0x17ef74u: goto label_17ef74;
        case 0x17ef78u: goto label_17ef78;
        case 0x17ef7cu: goto label_17ef7c;
        case 0x17ef80u: goto label_17ef80;
        case 0x17ef84u: goto label_17ef84;
        default: break;
    }

    ctx->pc = 0x17eed0u;

label_17eed0:
    // 0x17eed0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17eed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17eed4:
    // 0x17eed4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17eed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17eed8:
    // 0x17eed8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17eedc:
    // 0x17eedc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17eedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17eee0:
    // 0x17eee0: 0x805fbbc  j           func_17EEF0
label_17eee4:
    if (ctx->pc == 0x17EEE4u) {
        ctx->pc = 0x17EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEE0u;
        // 0x17eee4: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EEE8u;
        goto label_17eee8;
    }
    ctx->pc = 0x17EEE0u;
    ctx->pc = 0x17EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEE0u;
    // 0x17eee4: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EEF0u;
    goto label_17eef0;
    ctx->pc = 0x17EEE8u;
label_17eee8:
    // 0x17eee8: 0x0  nop
    ctx->pc = 0x17eee8u;
    // NOP
label_17eeec:
    // 0x17eeec: 0x0  nop
    ctx->pc = 0x17eeecu;
    // NOP
label_17eef0:
    // 0x17eef0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17eef4:
    // 0x17eef4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_17eef8:
    // 0x17eef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17eefc:
    // 0x17eefc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ef00:
    // 0x17ef00: 0x805fbc4  j           func_17EF10
label_17ef04:
    if (ctx->pc == 0x17EF04u) {
        ctx->pc = 0x17EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF00u;
        // 0x17ef04: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF08u;
        goto label_17ef08;
    }
    ctx->pc = 0x17EF00u;
    ctx->pc = 0x17EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF00u;
    // 0x17ef04: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF10u;
    goto label_17ef10;
    ctx->pc = 0x17EF08u;
label_17ef08:
    // 0x17ef08: 0x0  nop
    ctx->pc = 0x17ef08u;
    // NOP
label_17ef0c:
    // 0x17ef0c: 0x0  nop
    ctx->pc = 0x17ef0cu;
    // NOP
label_17ef10:
    // 0x17ef10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ef14:
    // 0x17ef14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17ef18:
    // 0x17ef18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17ef1c:
    // 0x17ef1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ef20:
    // 0x17ef20: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x17ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
label_17ef24:
    // 0x17ef24: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x17ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_17ef28:
    // 0x17ef28: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17ef28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17ef2c:
    // 0x17ef2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17ef30:
    if (ctx->pc == 0x17EF30u) {
        ctx->pc = 0x17EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF2Cu;
        // 0x17ef30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF34u;
        goto label_17ef34;
    }
    ctx->pc = 0x17EF2Cu;
    {
        const bool branch_taken_0x17ef2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF2Cu;
        // 0x17ef30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef2c) {
            ctx->pc = 0x17EF3Cu;
            goto label_17ef3c;
        }
    }
    ctx->pc = 0x17EF34u;
label_17ef34:
    // 0x17ef34: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x17ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_17ef38:
    // 0x17ef38: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17ef38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17ef3c:
    // 0x17ef3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17ef40:
    // 0x17ef40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17ef44:
    if (ctx->pc == 0x17EF44u) {
        ctx->pc = 0x17EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF40u;
        // 0x17ef44: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF48u;
        goto label_17ef48;
    }
    ctx->pc = 0x17EF40u;
    {
        const bool branch_taken_0x17ef40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF40u;
        // 0x17ef44: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef40) {
            ctx->pc = 0x17EF58u;
            goto label_17ef58;
        }
    }
    ctx->pc = 0x17EF48u;
label_17ef48:
    // 0x17ef48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17ef48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ef4c:
    // 0x17ef4c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17ef4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17ef50:
    // 0x17ef50: 0x320f809  jalr        $t9
label_17ef54:
    if (ctx->pc == 0x17EF54u) {
        ctx->pc = 0x17EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF50u;
        // 0x17ef54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF58u;
        goto label_17ef58;
    }
    ctx->pc = 0x17EF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EF58u);
        ctx->pc = 0x17EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF50u;
        // 0x17ef54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF50u, 0x17EF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EF58u;
label_17ef58:
    // 0x17ef58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17ef5c:
    // 0x17ef5c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17ef60:
    if (ctx->pc == 0x17EF60u) {
        ctx->pc = 0x17EF64u;
        goto label_17ef64;
    }
    ctx->pc = 0x17EF5Cu;
    {
        const bool branch_taken_0x17ef5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef5c) {
            ctx->pc = 0x17EF74u;
            goto label_17ef74;
        }
    }
    ctx->pc = 0x17EF64u;
label_17ef64:
    // 0x17ef64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17ef64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ef68:
    // 0x17ef68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17ef68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17ef6c:
    // 0x17ef6c: 0x320f809  jalr        $t9
label_17ef70:
    if (ctx->pc == 0x17EF70u) {
        ctx->pc = 0x17EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF6Cu;
        // 0x17ef70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF74u;
        goto label_17ef74;
    }
    ctx->pc = 0x17EF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EF74u);
        ctx->pc = 0x17EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF6Cu;
        // 0x17ef70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF6Cu, 0x17EF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EF74u;
label_17ef74:
    // 0x17ef74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ef74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17ef78:
    // 0x17ef78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ef78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ef7c:
    // 0x17ef7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ef7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17ef80:
    // 0x17ef80: 0x3e00008  jr          $ra
label_17ef84:
    if (ctx->pc == 0x17EF84u) {
        ctx->pc = 0x17EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF80u;
        // 0x17ef84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF88u;
        goto label_fallthrough_0x17ef80;
    }
    ctx->pc = 0x17EF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF80u;
        // 0x17ef84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17ef80:
    ctx->pc = 0x17EF88u;
}
