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

// Function: caseD_6
// Address: 0x18ec60 - 0x18ec7c
void caseD_6_0x18ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x18ec60");
#endif

    switch (ctx->pc) {
        case 0x18ec68u: goto label_18ec68;
        default: break;
    }

    ctx->pc = 0x18ec60u;

    // 0x18ec60: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x18EC60u;
    SET_GPR_U32(ctx, 31, 0x18EC68u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18EC60u, 0x18EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC68u;
label_18ec68:
    // 0x18ec68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EC6Cu;
    {
        const bool branch_taken_0x18ec6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec6c) {
            ctx->pc = 0x18EC7Cu;
            return;
        }
    }
    ctx->pc = 0x18EC74u;
    // 0x18ec74: 0xc064ba0  jal         func_192E80
    ctx->pc = 0x18EC74u;
    SET_GPR_U32(ctx, 31, 0x18EC7Cu);
    ctx->pc = 0x192E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192E80u, 0x18EC74u, 0x18EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC7Cu;
}
