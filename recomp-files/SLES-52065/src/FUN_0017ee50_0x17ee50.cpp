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

// Function: FUN_0017ee50
// Address: 0x17ee50 - 0x17eec8
void FUN_0017ee50_0x17ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ee50_0x17ee50");
#endif

    switch (ctx->pc) {
        case 0x17ee50u: goto label_17ee50;
        case 0x17ee54u: goto label_17ee54;
        case 0x17ee58u: goto label_17ee58;
        case 0x17ee5cu: goto label_17ee5c;
        case 0x17ee60u: goto label_17ee60;
        case 0x17ee64u: goto label_17ee64;
        case 0x17ee68u: goto label_17ee68;
        case 0x17ee6cu: goto label_17ee6c;
        case 0x17ee70u: goto label_17ee70;
        case 0x17ee74u: goto label_17ee74;
        case 0x17ee78u: goto label_17ee78;
        case 0x17ee7cu: goto label_17ee7c;
        case 0x17ee80u: goto label_17ee80;
        case 0x17ee84u: goto label_17ee84;
        case 0x17ee88u: goto label_17ee88;
        case 0x17ee8cu: goto label_17ee8c;
        case 0x17ee90u: goto label_17ee90;
        case 0x17ee94u: goto label_17ee94;
        case 0x17ee98u: goto label_17ee98;
        case 0x17ee9cu: goto label_17ee9c;
        case 0x17eea0u: goto label_17eea0;
        case 0x17eea4u: goto label_17eea4;
        case 0x17eea8u: goto label_17eea8;
        case 0x17eeacu: goto label_17eeac;
        case 0x17eeb0u: goto label_17eeb0;
        case 0x17eeb4u: goto label_17eeb4;
        case 0x17eeb8u: goto label_17eeb8;
        case 0x17eebcu: goto label_17eebc;
        case 0x17eec0u: goto label_17eec0;
        case 0x17eec4u: goto label_17eec4;
        default: break;
    }

    ctx->pc = 0x17ee50u;

label_17ee50:
    // 0x17ee50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ee54:
    // 0x17ee54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17ee58:
    // 0x17ee58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17ee5c:
    // 0x17ee5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ee60:
    // 0x17ee60: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x17ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
label_17ee64:
    // 0x17ee64: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x17ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_17ee68:
    // 0x17ee68: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17ee68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17ee6c:
    // 0x17ee6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17ee70:
    if (ctx->pc == 0x17EE70u) {
        ctx->pc = 0x17EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE6Cu;
        // 0x17ee70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EE74u;
        goto label_17ee74;
    }
    ctx->pc = 0x17EE6Cu;
    {
        const bool branch_taken_0x17ee6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE6Cu;
        // 0x17ee70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee6c) {
            ctx->pc = 0x17EE7Cu;
            goto label_17ee7c;
        }
    }
    ctx->pc = 0x17EE74u;
label_17ee74:
    // 0x17ee74: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x17ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_17ee78:
    // 0x17ee78: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17ee78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17ee7c:
    // 0x17ee7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17ee80:
    // 0x17ee80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17ee84:
    if (ctx->pc == 0x17EE84u) {
        ctx->pc = 0x17EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE80u;
        // 0x17ee84: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EE88u;
        goto label_17ee88;
    }
    ctx->pc = 0x17EE80u;
    {
        const bool branch_taken_0x17ee80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE80u;
        // 0x17ee84: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee80) {
            ctx->pc = 0x17EE98u;
            goto label_17ee98;
        }
    }
    ctx->pc = 0x17EE88u;
label_17ee88:
    // 0x17ee88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ee8c:
    // 0x17ee8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17ee8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17ee90:
    // 0x17ee90: 0x320f809  jalr        $t9
label_17ee94:
    if (ctx->pc == 0x17EE94u) {
        ctx->pc = 0x17EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE90u;
        // 0x17ee94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EE98u;
        goto label_17ee98;
    }
    ctx->pc = 0x17EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EE98u);
        ctx->pc = 0x17EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE90u;
        // 0x17ee94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE90u, 0x17EE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EE98u;
label_17ee98:
    // 0x17ee98: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17ee9c:
    // 0x17ee9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17eea0:
    if (ctx->pc == 0x17EEA0u) {
        ctx->pc = 0x17EEA4u;
        goto label_17eea4;
    }
    ctx->pc = 0x17EE9Cu;
    {
        const bool branch_taken_0x17ee9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee9c) {
            ctx->pc = 0x17EEB4u;
            goto label_17eeb4;
        }
    }
    ctx->pc = 0x17EEA4u;
label_17eea4:
    // 0x17eea4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17eea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17eea8:
    // 0x17eea8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17eeac:
    // 0x17eeac: 0x320f809  jalr        $t9
label_17eeb0:
    if (ctx->pc == 0x17EEB0u) {
        ctx->pc = 0x17EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEACu;
        // 0x17eeb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EEB4u;
        goto label_17eeb4;
    }
    ctx->pc = 0x17EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EEB4u);
        ctx->pc = 0x17EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEACu;
        // 0x17eeb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EEACu, 0x17EEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EEB4u;
label_17eeb4:
    // 0x17eeb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17eeb8:
    // 0x17eeb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17eeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17eebc:
    // 0x17eebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17eebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17eec0:
    // 0x17eec0: 0x3e00008  jr          $ra
label_17eec4:
    if (ctx->pc == 0x17EEC4u) {
        ctx->pc = 0x17EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEC0u;
        // 0x17eec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EEC8u;
        goto label_fallthrough_0x17eec0;
    }
    ctx->pc = 0x17EEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEC0u;
        // 0x17eec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17eec0:
    ctx->pc = 0x17EEC8u;
}
