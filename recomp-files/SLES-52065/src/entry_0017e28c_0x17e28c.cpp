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

// Function: entry_0017e28c
// Address: 0x17e28c - 0x17e294
void entry_0017e28c_0x17e28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e28c_0x17e28c");
#endif

    ctx->pc = 0x17e28cu;

    // 0x17e28c: 0xc05f528  jal         func_17D4A0
    ctx->pc = 0x17E28Cu;
    SET_GPR_U32(ctx, 31, 0x17E294u);
    ctx->pc = 0x17D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4A0u, 0x17E28Cu, 0x17E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E294u;
}
