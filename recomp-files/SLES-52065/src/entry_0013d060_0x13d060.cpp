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

// Function: entry_0013d060
// Address: 0x13d060 - 0x13d084
void entry_0013d060_0x13d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d060_0x13d060");
#endif

    switch (ctx->pc) {
        case 0x13d07cu: goto label_13d07c;
        default: break;
    }

    ctx->pc = 0x13d060u;

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
            return;
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
        goto label_fallthrough_0x13d07c;
    }
    ctx->pc = 0x13D07Cu;
    {
        const bool branch_taken_0x13d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d07c) {
            ctx->pc = 0x13D084u;
            return;
        }
    }
label_fallthrough_0x13d07c:
    ctx->pc = 0x13D084u;
}
