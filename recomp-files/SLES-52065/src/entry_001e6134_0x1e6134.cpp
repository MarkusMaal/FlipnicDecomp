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

// Function: entry_001e6134
// Address: 0x1e6134 - 0x1e613c
void entry_001e6134_0x1e6134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6134_0x1e6134");
#endif

    ctx->pc = 0x1e6134u;

    // 0x1e6134: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E6134u;
    SET_GPR_U32(ctx, 31, 0x1E613Cu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E6134u, 0x1E613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E613Cu;
}
