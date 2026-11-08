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

// Function: entry_001c3430
// Address: 0x1c3430 - 0x1c344c
void entry_001c3430_0x1c3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3430_0x1c3430");
#endif

    switch (ctx->pc) {
        case 0x1c3438u: goto label_1c3438;
        case 0x1c3444u: goto label_1c3444;
        default: break;
    }

    ctx->pc = 0x1c3430u;

    // 0x1c3430: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3430u;
    SET_GPR_U32(ctx, 31, 0x1C3438u);
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3430u, 0x1C3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3438u;
label_1c3438:
    // 0x1c3438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c343c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C343Cu;
    SET_GPR_U32(ctx, 31, 0x1C3444u);
    ctx->pc = 0x1C3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C343Cu;
    // 0x1c3440: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C343Cu, 0x1C3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3444u;
label_1c3444:
    // 0x1c3444: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C3444u;
    {
        const bool branch_taken_0x1c3444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3444) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C344Cu;
}
