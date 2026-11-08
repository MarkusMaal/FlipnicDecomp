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

// Function: entry_001ee2b8
// Address: 0x1ee2b8 - 0x1ee2c4
void entry_001ee2b8_0x1ee2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee2b8_0x1ee2b8");
#endif

    switch (ctx->pc) {
        case 0x1ee2c0u: goto label_1ee2c0;
        default: break;
    }

    ctx->pc = 0x1ee2b8u;

    // 0x1ee2b8: 0xc07b83e  jal         func_1EE0F8
    ctx->pc = 0x1EE2B8u;
    SET_GPR_U32(ctx, 31, 0x1EE2C0u);
    ctx->pc = 0x1EE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0F8u, 0x1EE2B8u, 0x1EE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2C0u;
label_1ee2c0:
    // 0x1ee2c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ee2c4u;
}
