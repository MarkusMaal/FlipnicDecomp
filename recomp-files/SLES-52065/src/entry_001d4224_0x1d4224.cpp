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

// Function: entry_001d4224
// Address: 0x1d4224 - 0x1d4238
void entry_001d4224_0x1d4224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4224_0x1d4224");
#endif

    switch (ctx->pc) {
        case 0x1d422cu: goto label_1d422c;
        default: break;
    }

    ctx->pc = 0x1d4224u;

    // 0x1d4224: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1D4224u;
    SET_GPR_U32(ctx, 31, 0x1D422Cu);
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1D4224u, 0x1D422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D422Cu;
label_1d422c:
    // 0x1d422c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D422Cu;
    {
        const bool branch_taken_0x1d422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D422Cu;
        // 0x1d4230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d422c) {
            ctx->pc = 0x1D427Cu;
            return;
        }
    }
    ctx->pc = 0x1D4234u;
    // 0x1d4234: 0x0  nop
    ctx->pc = 0x1d4234u;
    // NOP
    ctx->pc = 0x1d4238u;
}
