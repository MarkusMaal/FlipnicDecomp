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

// Function: entry_0017e3f0
// Address: 0x17e3f0 - 0x17e3f8
void entry_0017e3f0_0x17e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e3f0_0x17e3f0");
#endif

    ctx->pc = 0x17e3f0u;

    // 0x17e3f0: 0xc05f530  jal         func_17D4C0
    ctx->pc = 0x17E3F0u;
    SET_GPR_U32(ctx, 31, 0x17E3F8u);
    ctx->pc = 0x17D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4C0u, 0x17E3F0u, 0x17E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3F8u;
}
