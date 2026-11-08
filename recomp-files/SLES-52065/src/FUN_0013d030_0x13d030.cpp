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

// Function: FUN_0013d030
// Address: 0x13d030 - 0x13d098
void FUN_0013d030_0x13d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d030_0x13d030");
#endif

    switch (ctx->pc) {
        case 0x13d030u: goto label_13d030;
        case 0x13d034u: goto label_13d034;
        case 0x13d038u: goto label_13d038;
        case 0x13d03cu: goto label_13d03c;
        case 0x13d040u: goto label_13d040;
        case 0x13d044u: goto label_13d044;
        case 0x13d048u: goto label_13d048;
        case 0x13d04cu: goto label_13d04c;
        case 0x13d050u: goto label_13d050;
        case 0x13d054u: goto label_13d054;
        case 0x13d058u: goto label_13d058;
        case 0x13d05cu: goto label_13d05c;
        case 0x13d060u: goto label_13d060;
        case 0x13d064u: goto label_13d064;
        case 0x13d068u: goto label_13d068;
        case 0x13d06cu: goto label_13d06c;
        case 0x13d070u: goto label_13d070;
        case 0x13d074u: goto label_13d074;
        case 0x13d078u: goto label_13d078;
        case 0x13d07cu: goto label_13d07c;
        case 0x13d080u: goto label_13d080;
        case 0x13d084u: goto label_13d084;
        case 0x13d088u: goto label_13d088;
        case 0x13d08cu: goto label_13d08c;
        case 0x13d090u: goto label_13d090;
        case 0x13d094u: goto label_13d094;
        default: break;
    }

    ctx->pc = 0x13d030u;

label_13d030:
    // 0x13d030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13d034:
    // 0x13d034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13d038:
    // 0x13d038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13d03c:
    // 0x13d03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d040:
    // 0x13d040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d044:
    // 0x13d044: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13d044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13d048:
    // 0x13d048: 0xc0806b0  jal         func_201AC0
label_13d04c:
    if (ctx->pc == 0x13D04Cu) {
        ctx->pc = 0x13D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D048u;
        // 0x13d04c: 0x26240128  addiu       $a0, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D050u;
        goto label_13d050;
    }
    ctx->pc = 0x13D048u;
    SET_GPR_U32(ctx, 31, 0x13D050u);
    ctx->pc = 0x13D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D048u;
    // 0x13d04c: 0x26240128  addiu       $a0, $s1, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x13D048u, 0x13D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D050u;
label_13d050:
    // 0x13d050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13d054:
    if (ctx->pc == 0x13D054u) {
        ctx->pc = 0x13D058u;
        goto label_13d058;
    }
    ctx->pc = 0x13D050u;
    {
        const bool branch_taken_0x13d050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d050) {
            ctx->pc = 0x13D060u;
            goto label_13d060;
        }
    }
    ctx->pc = 0x13D058u;
label_13d058:
    // 0x13d058: 0x1000000a  b           . + 4 + (0xA << 2)
label_13d05c:
    if (ctx->pc == 0x13D05Cu) {
        ctx->pc = 0x13D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D058u;
        // 0x13d05c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D060u;
        goto label_13d060;
    }
    ctx->pc = 0x13D058u;
    {
        const bool branch_taken_0x13d058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D058u;
        // 0x13d05c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d058) {
            ctx->pc = 0x13D084u;
            goto label_13d084;
        }
    }
    ctx->pc = 0x13D060u;
label_13d060:
    // 0x13d060: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x13d060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13d064:
    // 0x13d064: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_13d068:
    if (ctx->pc == 0x13D068u) {
        ctx->pc = 0x13D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D064u;
        // 0x13d068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D06Cu;
        goto label_13d06c;
    }
    ctx->pc = 0x13D064u;
    {
        const bool branch_taken_0x13d064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D064u;
        // 0x13d068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d064) {
            ctx->pc = 0x13D084u;
            goto label_13d084;
        }
    }
    ctx->pc = 0x13D06Cu;
label_13d06c:
    // 0x13d06c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d070:
    // 0x13d070: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x13d070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_13d074:
    // 0x13d074: 0x320f809  jalr        $t9
label_13d078:
    if (ctx->pc == 0x13D078u) {
        ctx->pc = 0x13D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D074u;
        // 0x13d078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D07Cu;
        goto label_13d07c;
    }
    ctx->pc = 0x13D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D07Cu);
        ctx->pc = 0x13D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D074u;
        // 0x13d078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D074u, 0x13D07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D07Cu;
label_13d07c:
    // 0x13d07c: 0x10000001  b           . + 4 + (0x1 << 2)
label_13d080:
    if (ctx->pc == 0x13D080u) {
        ctx->pc = 0x13D084u;
        goto label_13d084;
    }
    ctx->pc = 0x13D07Cu;
    {
        const bool branch_taken_0x13d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d07c) {
            ctx->pc = 0x13D084u;
            goto label_13d084;
        }
    }
    ctx->pc = 0x13D084u;
label_13d084:
    // 0x13d084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13d088:
    // 0x13d088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d08c:
    // 0x13d08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d090:
    // 0x13d090: 0x3e00008  jr          $ra
label_13d094:
    if (ctx->pc == 0x13D094u) {
        ctx->pc = 0x13D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D090u;
        // 0x13d094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D098u;
        goto label_fallthrough_0x13d090;
    }
    ctx->pc = 0x13D090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D090u;
        // 0x13d094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d090:
    ctx->pc = 0x13D098u;
}
