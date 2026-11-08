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

// Function: entry_0017e268
// Address: 0x17e268 - 0x17e270
void entry_0017e268_0x17e268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e268_0x17e268");
#endif

    ctx->pc = 0x17e268u;

    // 0x17e268: 0xc05f52c  jal         func_17D4B0
    ctx->pc = 0x17E268u;
    SET_GPR_U32(ctx, 31, 0x17E270u);
    ctx->pc = 0x17D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4B0u, 0x17E268u, 0x17E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E270u;
}
