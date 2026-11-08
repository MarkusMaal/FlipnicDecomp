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

// Function: entry_001ee430
// Address: 0x1ee430 - 0x1ee448
void entry_001ee430_0x1ee430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee430_0x1ee430");
#endif

    switch (ctx->pc) {
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee440u: goto label_1ee440;
        default: break;
    }

    ctx->pc = 0x1ee430u;

    // 0x1ee430: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EE430u;
    SET_GPR_U32(ctx, 31, 0x1EE438u);
    ctx->pc = 0x1EE434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE430u;
    // 0x1ee434: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EE430u, 0x1EE438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE438u;
label_1ee438:
    // 0x1ee438: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE438u;
    SET_GPR_U32(ctx, 31, 0x1EE440u);
    ctx->pc = 0x1EE43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE438u;
    // 0x1ee43c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE438u, 0x1EE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE440u;
label_1ee440:
    // 0x1ee440: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE440u;
    {
        const bool branch_taken_0x1ee440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE440u;
        // 0x1ee444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee440) {
            ctx->pc = 0x1EE484u;
            return;
        }
    }
    ctx->pc = 0x1EE448u;
}
