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

// Function: entry_001f3430
// Address: 0x1f3430 - 0x1f3448
void entry_001f3430_0x1f3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3430_0x1f3430");
#endif

    switch (ctx->pc) {
        case 0x1f3440u: goto label_1f3440;
        default: break;
    }

    ctx->pc = 0x1f3430u;

    // 0x1f3430: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1f3434: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f3434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3438: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F3438u;
    SET_GPR_U32(ctx, 31, 0x1F3440u);
    ctx->pc = 0x1F343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3438u;
    // 0x1f343c: 0x3c150039  lui         $s5, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F3438u, 0x1F3440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3440u;
label_1f3440:
    // 0x1f3440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3440u;
    {
        const bool branch_taken_0x1f3440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3440u;
        // 0x1f3444: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3440) {
            ctx->pc = 0x1F3454u;
            return;
        }
    }
    ctx->pc = 0x1F3448u;
}
