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

// Function: entry_001a5258
// Address: 0x1a5258 - 0x1a527c
void entry_001a5258_0x1a5258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5258_0x1a5258");
#endif

    switch (ctx->pc) {
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5270u: goto label_1a5270;
        default: break;
    }

    ctx->pc = 0x1a5258u;

    // 0x1a5258: 0xc06977c  jal         func_1A5DF0
    ctx->pc = 0x1A5258u;
    SET_GPR_U32(ctx, 31, 0x1A5260u);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1A5258u, 0x1A5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5260u;
label_1a5260:
    // 0x1a5260: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A5260u;
    {
        const bool branch_taken_0x1a5260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5260) {
            ctx->pc = 0x1A5328u;
            return;
        }
    }
    ctx->pc = 0x1A5268u;
    // 0x1a5268: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A5268u;
    SET_GPR_U32(ctx, 31, 0x1A5270u);
    ctx->pc = 0x1A526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5268u;
    // 0x1a526c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A5268u, 0x1A5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5270u;
label_1a5270:
    // 0x1a5270: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A5270u;
    {
        const bool branch_taken_0x1a5270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5270) {
            ctx->pc = 0x1A5328u;
            return;
        }
    }
    ctx->pc = 0x1A5278u;
    // 0x1a5278: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a527cu;
}
