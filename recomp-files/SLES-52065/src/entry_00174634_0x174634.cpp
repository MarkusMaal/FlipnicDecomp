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

// Function: entry_00174634
// Address: 0x174634 - 0x174640
void entry_00174634_0x174634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174634_0x174634");
#endif

    ctx->pc = 0x174634u;

    // 0x174634: 0x0  nop
    ctx->pc = 0x174634u;
    // NOP
    // 0x174638: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174638u;
    SET_GPR_U32(ctx, 31, 0x174640u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174638u, 0x174640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174640u;
}
