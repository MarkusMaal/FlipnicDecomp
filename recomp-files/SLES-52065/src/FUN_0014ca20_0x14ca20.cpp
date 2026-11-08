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

// Function: FUN_0014ca20
// Address: 0x14ca20 - 0x14ca80
void FUN_0014ca20_0x14ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ca20_0x14ca20");
#endif

    switch (ctx->pc) {
        case 0x14ca20u: goto label_14ca20;
        case 0x14ca24u: goto label_14ca24;
        case 0x14ca28u: goto label_14ca28;
        case 0x14ca2cu: goto label_14ca2c;
        case 0x14ca30u: goto label_14ca30;
        case 0x14ca34u: goto label_14ca34;
        case 0x14ca38u: goto label_14ca38;
        case 0x14ca3cu: goto label_14ca3c;
        case 0x14ca40u: goto label_14ca40;
        case 0x14ca44u: goto label_14ca44;
        case 0x14ca48u: goto label_14ca48;
        case 0x14ca4cu: goto label_14ca4c;
        case 0x14ca50u: goto label_14ca50;
        case 0x14ca54u: goto label_14ca54;
        case 0x14ca58u: goto label_14ca58;
        case 0x14ca5cu: goto label_14ca5c;
        case 0x14ca60u: goto label_14ca60;
        case 0x14ca64u: goto label_14ca64;
        case 0x14ca68u: goto label_14ca68;
        case 0x14ca6cu: goto label_14ca6c;
        case 0x14ca70u: goto label_14ca70;
        case 0x14ca74u: goto label_14ca74;
        case 0x14ca78u: goto label_14ca78;
        case 0x14ca7cu: goto label_14ca7c;
        default: break;
    }

    ctx->pc = 0x14ca20u;

label_14ca20:
    // 0x14ca20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14ca24:
    // 0x14ca24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ca28:
    // 0x14ca28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14ca2c:
    // 0x14ca2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14ca30:
    // 0x14ca30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14ca34:
    // 0x14ca34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ca34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14ca38:
    // 0x14ca38: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_14ca3c:
    // 0x14ca3c: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x14ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_14ca40:
    // 0x14ca40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14ca40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14ca44:
    // 0x14ca44: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x14ca44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_14ca48:
    // 0x14ca48: 0x320f809  jalr        $t9
label_14ca4c:
    if (ctx->pc == 0x14CA4Cu) {
        ctx->pc = 0x14CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA48u;
        // 0x14ca4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CA50u;
        goto label_14ca50;
    }
    ctx->pc = 0x14CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CA50u);
        ctx->pc = 0x14CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA48u;
        // 0x14ca4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA48u, 0x14CA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CA50u;
label_14ca50:
    // 0x14ca50: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14ca54:
    // 0x14ca54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ca54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14ca58:
    // 0x14ca58: 0x8c4402b8  lw          $a0, 0x2B8($v0)
    ctx->pc = 0x14ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
label_14ca5c:
    // 0x14ca5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14ca5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14ca60:
    // 0x14ca60: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x14ca60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_14ca64:
    // 0x14ca64: 0x320f809  jalr        $t9
label_14ca68:
    if (ctx->pc == 0x14CA68u) {
        ctx->pc = 0x14CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA64u;
        // 0x14ca68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CA6Cu;
        goto label_14ca6c;
    }
    ctx->pc = 0x14CA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CA6Cu);
        ctx->pc = 0x14CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA64u;
        // 0x14ca68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA64u, 0x14CA6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CA6Cu;
label_14ca6c:
    // 0x14ca6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ca6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14ca70:
    // 0x14ca70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ca70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14ca74:
    // 0x14ca74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ca74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14ca78:
    // 0x14ca78: 0x3e00008  jr          $ra
label_14ca7c:
    if (ctx->pc == 0x14CA7Cu) {
        ctx->pc = 0x14CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA78u;
        // 0x14ca7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CA80u;
        goto label_fallthrough_0x14ca78;
    }
    ctx->pc = 0x14CA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA78u;
        // 0x14ca7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14ca78:
    ctx->pc = 0x14CA80u;
}
