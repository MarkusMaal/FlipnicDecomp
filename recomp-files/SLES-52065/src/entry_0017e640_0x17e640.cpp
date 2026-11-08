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

// Function: entry_0017e640
// Address: 0x17e640 - 0x17e648
void entry_0017e640_0x17e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e640_0x17e640");
#endif

    ctx->pc = 0x17e640u;

    // 0x17e640: 0xc05f540  jal         func_17D500
    ctx->pc = 0x17E640u;
    SET_GPR_U32(ctx, 31, 0x17E648u);
    ctx->pc = 0x17D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D500u, 0x17E640u, 0x17E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E648u;
}
