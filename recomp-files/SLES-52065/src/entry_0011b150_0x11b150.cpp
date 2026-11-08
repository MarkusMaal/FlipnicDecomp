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

// Function: entry_0011b150
// Address: 0x11b150 - 0x11b16c
void entry_0011b150_0x11b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b150_0x11b150");
#endif

    switch (ctx->pc) {
        case 0x11b158u: goto label_11b158;
        default: break;
    }

    ctx->pc = 0x11b150u;

    // 0x11b150: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B150u;
    SET_GPR_U32(ctx, 31, 0x11B158u);
    ctx->pc = 0x11B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B150u;
    // 0x11b154: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B150u, 0x11B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B158u;
label_11b158:
    // 0x11b158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B158u;
    {
        const bool branch_taken_0x11b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b158) {
            ctx->pc = 0x11B16Cu;
            return;
        }
    }
    ctx->pc = 0x11B160u;
    // 0x11b160: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11b160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b164: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11B164u;
    {
        const bool branch_taken_0x11b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B164u;
        // 0x11b168: 0x8e10003c  lw          $s0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b164) {
            ctx->pc = 0x11B140u;
            return;
        }
    }
    ctx->pc = 0x11B16Cu;
}
