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

// Function: entry_001e4c64
// Address: 0x1e4c64 - 0x1e4c6c
void entry_001e4c64_0x1e4c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4c64_0x1e4c64");
#endif

    ctx->pc = 0x1e4c64u;

    // 0x1e4c64: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E4C64u;
    SET_GPR_U32(ctx, 31, 0x1E4C6Cu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E4C64u, 0x1E4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C6Cu;
}
