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

// Function: entry_0017e414
// Address: 0x17e414 - 0x17e41c
void entry_0017e414_0x17e414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e414_0x17e414");
#endif

    ctx->pc = 0x17e414u;

    // 0x17e414: 0xc05f548  jal         func_17D520
    ctx->pc = 0x17E414u;
    SET_GPR_U32(ctx, 31, 0x17E41Cu);
    ctx->pc = 0x17D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D520u, 0x17E414u, 0x17E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E41Cu;
}
