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

// Function: entry_00189a74
// Address: 0x189a74 - 0x189a84
void entry_00189a74_0x189a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a74_0x189a74");
#endif

    switch (ctx->pc) {
        case 0x189a7cu: goto label_189a7c;
        default: break;
    }

    ctx->pc = 0x189a74u;

    // 0x189a74: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x189A74u;
    SET_GPR_U32(ctx, 31, 0x189A7Cu);
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x189A74u, 0x189A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A7Cu;
label_189a7c:
    // 0x189a7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x189A7Cu;
    {
        const bool branch_taken_0x189a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A7Cu;
        // 0x189a80: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a7c) {
            ctx->pc = 0x189AB4u;
            return;
        }
    }
    ctx->pc = 0x189A84u;
}
