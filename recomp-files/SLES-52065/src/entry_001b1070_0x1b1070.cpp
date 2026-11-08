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

// Function: entry_001b1070
// Address: 0x1b1070 - 0x1b109c
void entry_001b1070_0x1b1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1070_0x1b1070");
#endif

    switch (ctx->pc) {
        case 0x1b1084u: goto label_1b1084;
        case 0x1b1098u: goto label_1b1098;
        default: break;
    }

    ctx->pc = 0x1b1070u;

label_1b1070:
    // 0x1b1070: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x1b1070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_1b1074:
    // 0x1b1074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1078:
    // 0x1b1078: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b107c:
    // 0x1b107c: 0x320f809  jalr        $t9
label_1b1080:
    if (ctx->pc == 0x1B1080u) {
        ctx->pc = 0x1B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B107Cu;
        // 0x1b1080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1084u;
        goto label_1b1084;
    }
    ctx->pc = 0x1B107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1084u);
        ctx->pc = 0x1B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B107Cu;
        // 0x1b1080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B107Cu, 0x1B1084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1084u;
label_1b1084:
    // 0x1b1084: 0x8e84010c  lw          $a0, 0x10C($s4)
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_1b1088:
    // 0x1b1088: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b108c:
    // 0x1b108c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1090:
    // 0x1b1090: 0x320f809  jalr        $t9
label_1b1094:
    if (ctx->pc == 0x1B1094u) {
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1098u;
        goto label_1b1098;
    }
    ctx->pc = 0x1B1090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1098u);
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1090u, 0x1B1098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1098u;
label_1b1098:
    // 0x1b1098: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    ctx->pc = 0x1b109cu;
}
