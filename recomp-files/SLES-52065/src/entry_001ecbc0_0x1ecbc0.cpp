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

// Function: entry_001ecbc0
// Address: 0x1ecbc0 - 0x1ecbcc
void entry_001ecbc0_0x1ecbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecbc0_0x1ecbc0");
#endif

    switch (ctx->pc) {
        case 0x1ecbc8u: goto label_1ecbc8;
        default: break;
    }

    ctx->pc = 0x1ecbc0u;

    // 0x1ecbc0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1ECBC0u;
    SET_GPR_U32(ctx, 31, 0x1ECBC8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ECBC0u, 0x1ECBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBC8u;
label_1ecbc8:
    // 0x1ecbc8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ecbccu;
}
