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

// Function: entry_001a1b64
// Address: 0x1a1b64 - 0x1a1b84
void entry_001a1b64_0x1a1b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b64_0x1a1b64");
#endif

    switch (ctx->pc) {
        case 0x1a1b6cu: goto label_1a1b6c;
        case 0x1a1b7cu: goto label_1a1b7c;
        default: break;
    }

    ctx->pc = 0x1a1b64u;

    // 0x1a1b64: 0xc06977c  jal         func_1A5DF0
    ctx->pc = 0x1A1B64u;
    SET_GPR_U32(ctx, 31, 0x1A1B6Cu);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1A1B64u, 0x1A1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B6Cu;
label_1a1b6c:
    // 0x1a1b6c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A1B6Cu;
    {
        const bool branch_taken_0x1a1b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b6c) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1B74u;
    // 0x1a1b74: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A1B74u;
    SET_GPR_U32(ctx, 31, 0x1A1B7Cu);
    ctx->pc = 0x1A1B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B74u;
    // 0x1a1b78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1B74u, 0x1A1B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B7Cu;
label_1a1b7c:
    // 0x1a1b7c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A1B7Cu;
    {
        const bool branch_taken_0x1a1b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b7c) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1B84u;
}
